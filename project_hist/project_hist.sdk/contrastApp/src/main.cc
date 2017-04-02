/*
 * Empty C++ Application
 */

#include <stdio.h>
#include <xaxidma.h>
#include "xdohist.h"
#include "xdohiststretch.h"
#include "imageOnCode.h"
#include "xparameters.h"
#include "xdebug.h"

#define SIZE_ARR (320*240)

#define DMA_DEV_ID		XPAR_AXIDMA_0_DEVICE_ID

#ifdef XPAR_V6DDR_0_S_AXI_BASEADDR
#define DDR_BASE_ADDR		XPAR_V6DDR_0_S_AXI_BASEADDR
#elif XPAR_S6DDR_0_S0_AXI_BASEADDR
#define DDR_BASE_ADDR		XPAR_S6DDR_0_S0_AXI_BASEADDR
#elif XPAR_AXI_7SDDR_0_S_AXI_BASEADDR
#define DDR_BASE_ADDR		XPAR_AXI_7SDDR_0_S_AXI_BASEADDR
#elif XPAR_MIG7SERIES_0_BASEADDR
#define DDR_BASE_ADDR		XPAR_MIG7SERIES_0_BASEADDR
#endif

#ifndef DDR_BASE_ADDR
#warning CHECK FOR THE VALID DDR ADDRESS IN XPARAMETERS.H, \
		 DEFAULT SET TO 0x01000000
#define MEM_BASE_ADDR		0x01000000
#else
#define MEM_BASE_ADDR		(DDR_BASE_ADDR + 0x1000000)
#endif

#define TX_BUFFER_BASE		(MEM_BASE_ADDR + 0x00100000)
#define RX_BUFFER_BASE		(MEM_BASE_ADDR + 0x00300000)
#define RX_BUFFER_HIGH		(MEM_BASE_ADDR + 0x004FFFFF)

#define MAX_PKT_LEN		0x20

#define TEST_START_VALUE	0xC

#define NUMBER_OF_TRANSFERS	10

unsigned char *m_dma_buffer_TX = (unsigned char*)TX_BUFFER_BASE;
unsigned char *m_dma_buffer_RX = (unsigned char*)RX_BUFFER_BASE;

unsigned int hist_sw[256];
unsigned char imgOut[SIZE_ARR];
unsigned char imgIn_HW[SIZE_ARR];

unsigned int *hist_hw = (unsigned int *) 0x40000000;

XAxiDma axiDma;
int initDMA(){
	XAxiDma_Config *CfgPtr;
	CfgPtr =  XAxiDma_LookupConfig(XPAR_AXIDMA_0_DEVICE_ID);
	int Status;

	if (!CfgPtr) {
			xil_printf("No config found for %d\r\n", XPAR_AXIDMA_0_DEVICE_ID);
			return XST_FAILURE;
		}

		Status = XAxiDma_CfgInitialize(&axiDma, CfgPtr);
		if (Status != XST_SUCCESS) {
			xil_printf("Initialization failed %d\r\n", Status);
			return XST_FAILURE;
		}

		if(XAxiDma_HasSg(&axiDma)){
			xil_printf("Device configured as SG mode \r\n");
			return XST_FAILURE;
		}

	XAxiDma_IntrDisable(&axiDma,XAXIDMA_IRQ_ALL_MASK,XAXIDMA_DEVICE_TO_DMA);
	XAxiDma_IntrDisable(&axiDma,XAXIDMA_IRQ_ALL_MASK,XAXIDMA_DMA_TO_DEVICE);

	return XST_SUCCESS;
}

XDohist doHist;
XDohiststretch doHistStretch;
int initDoHist(){
	int status;

	XDohist_Config *doHist_cfg;
	doHist_cfg = XDohist_LookupConfig(XPAR_DOHIST_0_DEVICE_ID);
	if (!doHist_cfg){
		printf("Error loading config for doHist_cfg\n");
	}
	status = XDohist_CfgInitialize(&doHist,doHist_cfg);
	if (status != XST_SUCCESS){
		printf("Error Initializing for doHist\n");
	}

	return status;
}

int initDoHistStretch(){

	int status;

		XDohiststretch_Config *doHistStretch_cfg;
		doHistStretch_cfg = XDohiststretch_LookupConfig(XPAR_DOHISTSTRETCH_0_DEVICE_ID);
		if (!doHistStretch_cfg){
			printf("Error loading config for doHistStretch_cfg\n");
		}
		status = XDohiststretch_CfgInitialize(&doHistStretch,doHistStretch_cfg);
		if (status != XST_SUCCESS){
			printf("Error Initializing for doHistStretch\n");
		}

		return status;
}

void doHistSW(unsigned char *img, unsigned int *hist){

	for (int idx = 0; idx < 256; idx++){
		hist[idx] = 0;
	}

	for (int idxImg = 0; idxImg < (320*240); idxImg++){
		hist[img[idxImg]] = hist[img[idxImg]] + 1;
	}
}

void doHistStretchSW(unsigned char *imgIn, unsigned char *imgOut,unsigned char xMin, unsigned char xMax){
	float xMax_minus_xMin = xMax-xMin;
	for (int idxImg = 0;idxImg < (320*240);idxImg++){
		float y_t_float = ((imgIn[idxImg] - xMin)/(xMax_minus_xMin))*255;
		imgOut[idxImg] = y_t_float;
	}
}
int main()
{
	initDMA();
	initDoHist();
	initDoHistStretch();
	//AxiTimerHelper axiTimer;

	printf("Doing histogram on SW\n");
	//axiTimer.startTimer();
	//printf("sds: %d\n",(int)img[10]);
	doHistSW(img,hist_sw);
	//axiTimer.stopTimer();
	//double hist_SW_elapsed =  axiTimer.getElapsedTimerInSeconds();
	//printf("Histogram SW execution time: %f sec\n",hist_SW_elapsed);

	//Get min value
	unsigned char xMin;
	for (int idxMin = 0; idxMin <  256; idxMin++){
		xMin = idxMin;
		//printf("sd: %d\n",hist_sw[idxMin]);
		if (hist_sw[idxMin])
			break;
	}

	//Get max value
	unsigned char xMax;
		for (int idxMax = 255; idxMax >=  0; idxMax--){
			xMax = idxMax;
			if (hist_sw[idxMax])
				break;
		}
		printf("(SW)xMin=%d xMax=%d\n",xMin,xMax);

		printf("Doing histogram stretch SW\n");
		//axiTimer.startTimer();
		doHistStretchSW(img,imgOut,xMin,xMax);
		//axiTimer.stopTimer();

		//double histStretch_SW_elapsed =  axiTimer.getElapsedTimerInSeconds();
		//printf("Histogram Stretch SW execution time: %f sec\n",histStretch_SW_elapsed);

		//Now doing on Hardware
		//Populate Data
		for (int idx = 0;idx < SIZE_ARR;idx++){
			imgIn_HW[idx] = img[idx];
		}
		printf("%d\n",img[2]);

		XDohist_Start(&doHist);
		XDohiststretch_Set_xMax(&doHistStretch,255);
		XDohiststretch_Set_xMin(&doHistStretch,0);
		XDohiststretch_Start(&doHistStretch);

		//axiTimer.startTimer();
		Xil_DCacheFlushRange((u32)imgIn_HW,SIZE_ARR*sizeof(unsigned char));
		Xil_DCacheFlushRange((u32)m_dma_buffer_RX,SIZE_ARR*sizeof(unsigned char));

		XAxiDma_SimpleTransfer(&axiDma,(u32)imgIn_HW,SIZE_ARR*sizeof(unsigned char),XAXIDMA_DMA_TO_DEVICE);
		XAxiDma_SimpleTransfer(&axiDma,(u32)m_dma_buffer_RX,SIZE_ARR*sizeof(unsigned char),XAXIDMA_DEVICE_TO_DMA);

		//Wait transfers to finish
		while(XAxiDma_Busy(&axiDma,XAXIDMA_DMA_TO_DEVICE));
		while(XAxiDma_Busy(&axiDma,XAXIDMA_DEVICE_TO_DMA));

		//Invalidate the cache to avoid reading garbage
		Xil_DCacheInvalidateRange((u32)m_dma_buffer_RX,SIZE_ARR*sizeof(unsigned char));
		//axiTimer.stopTimer();
		//double hist_HW_elapsed = axiTimer.getElapsedTimerInSeconds();
		//printf("Histogram HW execution time: %f sec\n",hist_HW_elapsed);

		//Get min value

		for (int idxMin = 0; idxMin <  256; idxMin++){
			xMin = idxMin;
			if (hist_hw[idxMin])
				break;
		}

		//Get max value

		for (int idxMax = 255; idxMax >=  0; idxMax--){
			xMax = idxMax;
			if (hist_hw[idxMax])
				break;
		}
		printf("(HW)xMin=%d xMax=%d\n",xMin,xMax);

		XDohist_Start(&doHist);
		XDohiststretch_Set_xMax(&doHistStretch,xMax);
		XDohiststretch_Set_xMin(&doHistStretch,xMin);
		XDohiststretch_Start(&doHistStretch);

		//axiTimer.startTimer();
		Xil_DCacheFlushRange((u32)imgIn_HW,SIZE_ARR*sizeof(unsigned char));
		Xil_DCacheFlushRange((u32)m_dma_buffer_RX,SIZE_ARR*sizeof(unsigned char));

		XAxiDma_SimpleTransfer(&axiDma,(u32)imgIn_HW,SIZE_ARR*sizeof(unsigned char),XAXIDMA_DMA_TO_DEVICE);
		XAxiDma_SimpleTransfer(&axiDma,(u32)m_dma_buffer_RX,SIZE_ARR*sizeof(unsigned char),XAXIDMA_DEVICE_TO_DMA);

		//Wait transfers to finish
		while(XAxiDma_Busy(&axiDma,XAXIDMA_DMA_TO_DEVICE));
		while(XAxiDma_Busy(&axiDma,XAXIDMA_DEVICE_TO_DMA));

		//Invalidate the cache to avoid reading garbage
		Xil_DCacheInvalidateRange((u32)m_dma_buffer_RX,SIZE_ARR*sizeof(unsigned char));
		//axiTimer.stopTimer();
		//double histStretch_HW_elapsed = axiTimer.getElapsedTimerInSeconds();
		//printf("Histogram Stretch HW execution time: %f sec\n",histStretch_HW_elapsed);

		//double TotalSW = (hist_SW_elapsed+histStretch_SW_elapsed);
		//double TotalHW = (hist_HW_elapsed+histStretch_HW_elapsed);
		//printf("Time summary SW:%f HW:%f ratio:%f\n",TotalSW,TotalHW,TotalHW/TotalSW);

		//printf("DMA out address: 0x%X\n",m_dma_buffer_RX);
		int imgMistmatch = 0;
		for (int idxComp = 0;idxComp < SIZE_ARR; idxComp++){
			if (imgOut[idxComp] != m_dma_buffer_RX[idxComp]){
				printf("Ivalid Response\n");
				imgMistmatch = 1;
			}
		}
		if (!imgMistmatch)
			printf("SW and HW images are the same\n");


	return 0;
}
