// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.2
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ==============================================================

/***************************** Include Files *********************************/
#include "xdohiststretch.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XDohiststretch_CfgInitialize(XDohiststretch *InstancePtr, XDohiststretch_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Crtl_bus_BaseAddress = ConfigPtr->Crtl_bus_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XDohiststretch_Start(XDohiststretch *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDohiststretch_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_AP_CTRL) & 0x80;
    XDohiststretch_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_AP_CTRL, Data | 0x01);
}

u32 XDohiststretch_IsDone(XDohiststretch *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDohiststretch_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XDohiststretch_IsIdle(XDohiststretch *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDohiststretch_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XDohiststretch_IsReady(XDohiststretch *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDohiststretch_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XDohiststretch_EnableAutoRestart(XDohiststretch *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDohiststretch_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_AP_CTRL, 0x80);
}

void XDohiststretch_DisableAutoRestart(XDohiststretch *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDohiststretch_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_AP_CTRL, 0);
}

void XDohiststretch_Set_xMin(XDohiststretch *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDohiststretch_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_XMIN_DATA, Data);
}

u32 XDohiststretch_Get_xMin(XDohiststretch *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDohiststretch_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_XMIN_DATA);
    return Data;
}

void XDohiststretch_Set_xMax(XDohiststretch *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDohiststretch_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_XMAX_DATA, Data);
}

u32 XDohiststretch_Get_xMax(XDohiststretch *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDohiststretch_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_XMAX_DATA);
    return Data;
}

void XDohiststretch_InterruptGlobalEnable(XDohiststretch *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDohiststretch_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_GIE, 1);
}

void XDohiststretch_InterruptGlobalDisable(XDohiststretch *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDohiststretch_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_GIE, 0);
}

void XDohiststretch_InterruptEnable(XDohiststretch *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XDohiststretch_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_IER);
    XDohiststretch_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_IER, Register | Mask);
}

void XDohiststretch_InterruptDisable(XDohiststretch *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XDohiststretch_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_IER);
    XDohiststretch_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_IER, Register & (~Mask));
}

void XDohiststretch_InterruptClear(XDohiststretch *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDohiststretch_WriteReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_ISR, Mask);
}

u32 XDohiststretch_InterruptGetEnabled(XDohiststretch *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDohiststretch_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_IER);
}

u32 XDohiststretch_InterruptGetStatus(XDohiststretch *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDohiststretch_ReadReg(InstancePtr->Crtl_bus_BaseAddress, XDOHISTSTRETCH_CRTL_BUS_ADDR_ISR);
}

