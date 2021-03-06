// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.2
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ==============================================================


#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#define AP_INT_MAX_W 32678

#include "ap_int.h"

#include "hls_stream.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;

template< int D ,int U ,int TI ,int TD > struct ap_axiu  {
ap_uint<D> data;
ap_uint<D/8> keep;
ap_uint<D/8> strb;
ap_uint<U> user;
ap_uint<1> last;
ap_uint<TI> id;
ap_uint<TD> dest;
}; 



   #define AUTOTB_TVIN_inStream_V_data_V  "../tv/cdatafile/c.doHist.autotvin_inStream_V_data_V.dat"
   #define WRAPC_STREAM_SIZE_IN_inStream_V_data_V  "../tv/stream_size/stream_size_in_inStream_V_data_V.dat"
   #define AUTOTB_TVIN_inStream_V_keep_V  "../tv/cdatafile/c.doHist.autotvin_inStream_V_keep_V.dat"
   #define WRAPC_STREAM_SIZE_IN_inStream_V_keep_V  "../tv/stream_size/stream_size_in_inStream_V_keep_V.dat"
   #define AUTOTB_TVIN_inStream_V_strb_V  "../tv/cdatafile/c.doHist.autotvin_inStream_V_strb_V.dat"
   #define WRAPC_STREAM_SIZE_IN_inStream_V_strb_V  "../tv/stream_size/stream_size_in_inStream_V_strb_V.dat"
   #define AUTOTB_TVIN_inStream_V_user_V  "../tv/cdatafile/c.doHist.autotvin_inStream_V_user_V.dat"
   #define WRAPC_STREAM_SIZE_IN_inStream_V_user_V  "../tv/stream_size/stream_size_in_inStream_V_user_V.dat"
   #define AUTOTB_TVIN_inStream_V_last_V  "../tv/cdatafile/c.doHist.autotvin_inStream_V_last_V.dat"
   #define WRAPC_STREAM_SIZE_IN_inStream_V_last_V  "../tv/stream_size/stream_size_in_inStream_V_last_V.dat"
   #define AUTOTB_TVIN_inStream_V_id_V  "../tv/cdatafile/c.doHist.autotvin_inStream_V_id_V.dat"
   #define WRAPC_STREAM_SIZE_IN_inStream_V_id_V  "../tv/stream_size/stream_size_in_inStream_V_id_V.dat"
   #define AUTOTB_TVIN_inStream_V_dest_V  "../tv/cdatafile/c.doHist.autotvin_inStream_V_dest_V.dat"
   #define WRAPC_STREAM_SIZE_IN_inStream_V_dest_V  "../tv/stream_size/stream_size_in_inStream_V_dest_V.dat"
   #define AUTOTB_TVIN_histo  "../tv/cdatafile/c.doHist.autotvin_histo.dat"
   #define AUTOTB_TVOUT_histo  "../tv/cdatafile/c.doHist.autotvout_histo.dat"
   #define INTER_TCL  "../tv/cdatafile/ref.tcl"

   #define AUTOTB_TVOUT_PC_histo  "../tv/rtldatafile/rtl.doHist.autotvout_histo.dat"

class INTER_TCL_FILE {
    public:
//functions
        INTER_TCL_FILE(const char* name) {
            mName = name;
            inStream_V_data_V_depth = 0;
            inStream_V_keep_V_depth = 0;
            inStream_V_strb_V_depth = 0;
            inStream_V_user_V_depth = 0;
            inStream_V_last_V_depth = 0;
            inStream_V_id_V_depth = 0;
            inStream_V_dest_V_depth = 0;
            histo_depth = 0;
            trans_num =0;
        }
        ~INTER_TCL_FILE() {
            mFile.open(mName);
            if (!mFile.good() ) {
                cout<<"Failed to open file ref.tcl."<<endl;
                exit (1);
            }
            string total_list = get_depth_list();
            mFile<<"set depth_list {\n";
            mFile<<total_list; 
            mFile<<"}\n";
            mFile<<"set trans_num "<<trans_num<<endl;
            mFile.close();
        }
        string get_depth_list () {
            stringstream total_list;
            total_list<<"   {inStream_V_data_V "<< inStream_V_data_V_depth << "}\n";
            total_list<<"   {inStream_V_keep_V "<< inStream_V_keep_V_depth << "}\n";
            total_list<<"   {inStream_V_strb_V "<< inStream_V_strb_V_depth << "}\n";
            total_list<<"   {inStream_V_user_V "<< inStream_V_user_V_depth << "}\n";
            total_list<<"   {inStream_V_last_V "<< inStream_V_last_V_depth << "}\n";
            total_list<<"   {inStream_V_id_V "<< inStream_V_id_V_depth << "}\n";
            total_list<<"   {inStream_V_dest_V "<< inStream_V_dest_V_depth << "}\n";
            total_list<<"   {histo "<< histo_depth << "}\n";
            return total_list.str();
        }
        void set_num (int num , int* class_num) {
            (*class_num) = (*class_num) > num ? (*class_num) : num;
        }
    public:
//variables
        int inStream_V_data_V_depth;
        int inStream_V_keep_V_depth;
        int inStream_V_strb_V_depth;
        int inStream_V_user_V_depth;
        int inStream_V_last_V_depth;
        int inStream_V_id_V_depth;
        int inStream_V_dest_V_depth;
        int histo_depth;
        int trans_num;
    private:
        ofstream mFile;
        const char* mName;
};

#define doHist AESL_ORIG_DUT_doHist
extern void doHist ( hls::stream< ap_axiu< 8 ,2 ,5 ,6 > > & inStream,  int histo[256]);
#undef doHist
void doHist ( hls::stream< ap_axiu< 8 ,2 ,5 ,6 > > & inStream,  int histo[256]) {

    fstream wrapc_switch_file_token;

    wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");

    int AESL_i;

    if (wrapc_switch_file_token.good()) {

        static unsigned AESL_transaction_pc;

        string AESL_token;

        string AESL_num;

        static AESL_FILE_HANDLER aesl_fh;

        aesl_fh.read(WRAPC_STREAM_SIZE_IN_inStream_V_data_V, AESL_token); //[[transaction]]

        aesl_fh.read(WRAPC_STREAM_SIZE_IN_inStream_V_data_V, AESL_num); //transaction number

        if (atoi(AESL_num.c_str()) == AESL_transaction_pc ) {

            aesl_fh.read(WRAPC_STREAM_SIZE_IN_inStream_V_data_V, AESL_token); //pop_size

            int aesl_tmp_1 = atoi(AESL_token.c_str());

            for (int i = 0 ; i < aesl_tmp_1  ; i++) {

                inStream.read();

            }

            aesl_fh.read(WRAPC_STREAM_SIZE_IN_inStream_V_data_V, AESL_token); //[[/transaction]]

        }

        aesl_fh.read(AUTOTB_TVOUT_PC_histo, AESL_token); //[[transaction]]

        if ( AESL_token != "[[transaction]]") {

           exit(1);

        }

        aesl_fh.read(AUTOTB_TVOUT_PC_histo, AESL_num); //transaction number

        if (atoi(AESL_num.c_str()) == AESL_transaction_pc ) {

            aesl_fh.read(AUTOTB_TVOUT_PC_histo, AESL_token); //data

            sc_bv<32> *histo_pc_buffer = new sc_bv<32>[256];

            int i = 0;

            while (AESL_token != "[[/transaction]]") {

                bool no_x = false;

                bool err = false;

                while (!no_x) {

                size_t x_found = AESL_token.find('X');

                if (x_found != string::npos) {

                    if (!err) {

                        cerr << "@W [SIM-201] RTL produces unknown value 'X' on port 'histo', possible cause: There are uninitialized variables in the C design." << endl; 

                        err = true;

                    }

                    AESL_token.replace(x_found, 1, "0");

                } else {

                    no_x = true;

                }

                }

                no_x = false;

                while (!no_x) {

                size_t x_found = AESL_token.find('x', 2);

                if (x_found != string::npos) {

                    if (!err) {

                        cerr << "@W [SIM-201] RTL produces unknown value 'X' on port 'histo', possible cause: There are uninitialized variables in the C design." << endl; 

                        err = true;

                    }

                    AESL_token.replace(x_found, 1, "0");

                } else {

                    no_x = true;

                }

                }

                if (AESL_token != "") {

                    histo_pc_buffer[i] = AESL_token.c_str();

                    i++;

                }

                aesl_fh.read(AUTOTB_TVOUT_PC_histo, AESL_token); //data or [[/transaction]]

                if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_histo)) {

                   exit(1);

                }

            }

            if (i > 0) {

                AESL_i = 0; //subscript for rtl array

                for (int i_0 = 0; i_0 <= 255 ; i_0+= 1) {

                    if(&(histo[0]) != 0) {

                       histo[i_0] = (sc_bv<32>(histo_pc_buffer[0 + AESL_i].range(31, 0))).to_uint64();

                    }

                    AESL_i++;

                }

                }

            delete [] histo_pc_buffer;

        }

        AESL_transaction_pc ++ ;

    } else {

        static unsigned AESL_transaction;

        static AESL_FILE_HANDLER aesl_fh;

        char* tvin_inStream_V_data_V = new char[50];

        char* wrapc_stream_size_in_inStream_V_data_V = new char[50];

        char* tvin_inStream_V_keep_V = new char[50];

        char* wrapc_stream_size_in_inStream_V_keep_V = new char[50];

        char* tvin_inStream_V_strb_V = new char[50];

        char* wrapc_stream_size_in_inStream_V_strb_V = new char[50];

        char* tvin_inStream_V_user_V = new char[50];

        char* wrapc_stream_size_in_inStream_V_user_V = new char[50];

        char* tvin_inStream_V_last_V = new char[50];

        char* wrapc_stream_size_in_inStream_V_last_V = new char[50];

        char* tvin_inStream_V_id_V = new char[50];

        char* wrapc_stream_size_in_inStream_V_id_V = new char[50];

        char* tvin_inStream_V_dest_V = new char[50];

        char* wrapc_stream_size_in_inStream_V_dest_V = new char[50];

        char* tvin_histo = new char[50];

        char* tvout_histo = new char[50];

        static INTER_TCL_FILE tcl_file(INTER_TCL);


        int leading_zero;

        std::vector<ap_axiu< 8 ,2 ,5 ,6 > > aesl_tmp_0;

        int aesl_tmp_1 = 0;

        while (!inStream.empty()) {

            aesl_tmp_0.push_back(inStream.read());

            aesl_tmp_1 ++;

        }

        sprintf(tvin_histo, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(AUTOTB_TVIN_histo, tvin_histo);

        sc_bv<32> *histo_tvin_wrapc_buffer = new sc_bv<32>[256];

        AESL_i = 0; //subscript for rtl array

        for (int i_0 = 0; i_0 <= 255 ; i_0+= 1) {

            if(&(histo[0]) != 0) {

               histo_tvin_wrapc_buffer[0 + AESL_i].range(31, 0) = histo[i_0];

            }

            AESL_i++;

        }

        for (int i = 0; i < 256 ; i++) {

            sprintf(tvin_histo, "%s\n", (histo_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());

            aesl_fh.write(AUTOTB_TVIN_histo, tvin_histo);

        }

        tcl_file.set_num(256,&tcl_file.histo_depth);

        sprintf(tvin_histo, "[[/transaction]] \n");

        aesl_fh.write(AUTOTB_TVIN_histo, tvin_histo);

        delete [] histo_tvin_wrapc_buffer;

        for (int i = 0; i < aesl_tmp_1; i++) {

            inStream.write(aesl_tmp_0[i]);

        }

        AESL_ORIG_DUT_doHist(inStream,histo);

        int aesl_tmp_2 = inStream.size();

        sprintf(tvin_inStream_V_data_V, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(AUTOTB_TVIN_inStream_V_data_V, tvin_inStream_V_data_V);

        sc_bv<8> *inStream_V_data_V_tvin_wrapc_buffer = new sc_bv<8>[aesl_tmp_1 - aesl_tmp_2];

        AESL_i = 0; //subscript for rtl array

        for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1 ; i_0+= 1) {

            for (int i_1 = 0; i_1 <= 0 ; i_1+= 1) {

                if(&(aesl_tmp_0[0]) != 0) {

                   inStream_V_data_V_tvin_wrapc_buffer[0 + AESL_i].range(7, 0) = (aesl_tmp_0[i_0].data).to_string(2).c_str();

                }

                AESL_i++;

            }

        }

        for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2 ; i++) {

            sprintf(tvin_inStream_V_data_V, "%s\n", (inStream_V_data_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());

            aesl_fh.write(AUTOTB_TVIN_inStream_V_data_V, tvin_inStream_V_data_V);

        }

        tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2,&tcl_file.inStream_V_data_V_depth);

        sprintf(tvin_inStream_V_data_V, "[[/transaction]] \n");

        aesl_fh.write(AUTOTB_TVIN_inStream_V_data_V, tvin_inStream_V_data_V);

        delete [] inStream_V_data_V_tvin_wrapc_buffer;

        sprintf(wrapc_stream_size_in_inStream_V_data_V, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_data_V, wrapc_stream_size_in_inStream_V_data_V);

        sprintf(wrapc_stream_size_in_inStream_V_data_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_data_V, wrapc_stream_size_in_inStream_V_data_V);

        sprintf(wrapc_stream_size_in_inStream_V_data_V, "[[/transaction]] \n");

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_data_V, wrapc_stream_size_in_inStream_V_data_V);

        sprintf(tvin_inStream_V_keep_V, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(AUTOTB_TVIN_inStream_V_keep_V, tvin_inStream_V_keep_V);

        sc_bv<1> *inStream_V_keep_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_1 - aesl_tmp_2];

        AESL_i = 0; //subscript for rtl array

        for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1 ; i_0+= 1) {

            for (int i_1 = 0; i_1 <= 0 ; i_1+= 1) {

                if(&(aesl_tmp_0[0]) != 0) {

                   inStream_V_keep_V_tvin_wrapc_buffer[0 + AESL_i].range(0, 0) = (aesl_tmp_0[i_0].keep).to_string(2).c_str();

                }

                AESL_i++;

            }

        }

        for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2 ; i++) {

            sprintf(tvin_inStream_V_keep_V, "%s\n", (inStream_V_keep_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());

            aesl_fh.write(AUTOTB_TVIN_inStream_V_keep_V, tvin_inStream_V_keep_V);

        }

        tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2,&tcl_file.inStream_V_keep_V_depth);

        sprintf(tvin_inStream_V_keep_V, "[[/transaction]] \n");

        aesl_fh.write(AUTOTB_TVIN_inStream_V_keep_V, tvin_inStream_V_keep_V);

        delete [] inStream_V_keep_V_tvin_wrapc_buffer;

        sprintf(wrapc_stream_size_in_inStream_V_keep_V, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_keep_V, wrapc_stream_size_in_inStream_V_keep_V);

        sprintf(wrapc_stream_size_in_inStream_V_keep_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_keep_V, wrapc_stream_size_in_inStream_V_keep_V);

        sprintf(wrapc_stream_size_in_inStream_V_keep_V, "[[/transaction]] \n");

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_keep_V, wrapc_stream_size_in_inStream_V_keep_V);

        sprintf(tvin_inStream_V_strb_V, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(AUTOTB_TVIN_inStream_V_strb_V, tvin_inStream_V_strb_V);

        sc_bv<1> *inStream_V_strb_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_1 - aesl_tmp_2];

        AESL_i = 0; //subscript for rtl array

        for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1 ; i_0+= 1) {

            for (int i_1 = 0; i_1 <= 0 ; i_1+= 1) {

                if(&(aesl_tmp_0[0]) != 0) {

                   inStream_V_strb_V_tvin_wrapc_buffer[0 + AESL_i].range(0, 0) = (aesl_tmp_0[i_0].strb).to_string(2).c_str();

                }

                AESL_i++;

            }

        }

        for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2 ; i++) {

            sprintf(tvin_inStream_V_strb_V, "%s\n", (inStream_V_strb_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());

            aesl_fh.write(AUTOTB_TVIN_inStream_V_strb_V, tvin_inStream_V_strb_V);

        }

        tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2,&tcl_file.inStream_V_strb_V_depth);

        sprintf(tvin_inStream_V_strb_V, "[[/transaction]] \n");

        aesl_fh.write(AUTOTB_TVIN_inStream_V_strb_V, tvin_inStream_V_strb_V);

        delete [] inStream_V_strb_V_tvin_wrapc_buffer;

        sprintf(wrapc_stream_size_in_inStream_V_strb_V, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_strb_V, wrapc_stream_size_in_inStream_V_strb_V);

        sprintf(wrapc_stream_size_in_inStream_V_strb_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_strb_V, wrapc_stream_size_in_inStream_V_strb_V);

        sprintf(wrapc_stream_size_in_inStream_V_strb_V, "[[/transaction]] \n");

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_strb_V, wrapc_stream_size_in_inStream_V_strb_V);

        sprintf(tvin_inStream_V_user_V, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(AUTOTB_TVIN_inStream_V_user_V, tvin_inStream_V_user_V);

        sc_bv<2> *inStream_V_user_V_tvin_wrapc_buffer = new sc_bv<2>[aesl_tmp_1 - aesl_tmp_2];

        AESL_i = 0; //subscript for rtl array

        for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1 ; i_0+= 1) {

            for (int i_1 = 0; i_1 <= 0 ; i_1+= 1) {

                if(&(aesl_tmp_0[0]) != 0) {

                   inStream_V_user_V_tvin_wrapc_buffer[0 + AESL_i].range(1, 0) = (aesl_tmp_0[i_0].user).to_string(2).c_str();

                }

                AESL_i++;

            }

        }

        for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2 ; i++) {

            sprintf(tvin_inStream_V_user_V, "%s\n", (inStream_V_user_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());

            aesl_fh.write(AUTOTB_TVIN_inStream_V_user_V, tvin_inStream_V_user_V);

        }

        tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2,&tcl_file.inStream_V_user_V_depth);

        sprintf(tvin_inStream_V_user_V, "[[/transaction]] \n");

        aesl_fh.write(AUTOTB_TVIN_inStream_V_user_V, tvin_inStream_V_user_V);

        delete [] inStream_V_user_V_tvin_wrapc_buffer;

        sprintf(wrapc_stream_size_in_inStream_V_user_V, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_user_V, wrapc_stream_size_in_inStream_V_user_V);

        sprintf(wrapc_stream_size_in_inStream_V_user_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_user_V, wrapc_stream_size_in_inStream_V_user_V);

        sprintf(wrapc_stream_size_in_inStream_V_user_V, "[[/transaction]] \n");

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_user_V, wrapc_stream_size_in_inStream_V_user_V);

        sprintf(tvin_inStream_V_last_V, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(AUTOTB_TVIN_inStream_V_last_V, tvin_inStream_V_last_V);

        sc_bv<1> *inStream_V_last_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_1 - aesl_tmp_2];

        AESL_i = 0; //subscript for rtl array

        for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1 ; i_0+= 1) {

            for (int i_1 = 0; i_1 <= 0 ; i_1+= 1) {

                if(&(aesl_tmp_0[0]) != 0) {

                   inStream_V_last_V_tvin_wrapc_buffer[0 + AESL_i].range(0, 0) = (aesl_tmp_0[i_0].last).to_string(2).c_str();

                }

                AESL_i++;

            }

        }

        for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2 ; i++) {

            sprintf(tvin_inStream_V_last_V, "%s\n", (inStream_V_last_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());

            aesl_fh.write(AUTOTB_TVIN_inStream_V_last_V, tvin_inStream_V_last_V);

        }

        tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2,&tcl_file.inStream_V_last_V_depth);

        sprintf(tvin_inStream_V_last_V, "[[/transaction]] \n");

        aesl_fh.write(AUTOTB_TVIN_inStream_V_last_V, tvin_inStream_V_last_V);

        delete [] inStream_V_last_V_tvin_wrapc_buffer;

        sprintf(wrapc_stream_size_in_inStream_V_last_V, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_last_V, wrapc_stream_size_in_inStream_V_last_V);

        sprintf(wrapc_stream_size_in_inStream_V_last_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_last_V, wrapc_stream_size_in_inStream_V_last_V);

        sprintf(wrapc_stream_size_in_inStream_V_last_V, "[[/transaction]] \n");

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_last_V, wrapc_stream_size_in_inStream_V_last_V);

        sprintf(tvin_inStream_V_id_V, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(AUTOTB_TVIN_inStream_V_id_V, tvin_inStream_V_id_V);

        sc_bv<5> *inStream_V_id_V_tvin_wrapc_buffer = new sc_bv<5>[aesl_tmp_1 - aesl_tmp_2];

        AESL_i = 0; //subscript for rtl array

        for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1 ; i_0+= 1) {

            for (int i_1 = 0; i_1 <= 0 ; i_1+= 1) {

                if(&(aesl_tmp_0[0]) != 0) {

                   inStream_V_id_V_tvin_wrapc_buffer[0 + AESL_i].range(4, 0) = (aesl_tmp_0[i_0].id).to_string(2).c_str();

                }

                AESL_i++;

            }

        }

        for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2 ; i++) {

            sprintf(tvin_inStream_V_id_V, "%s\n", (inStream_V_id_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());

            aesl_fh.write(AUTOTB_TVIN_inStream_V_id_V, tvin_inStream_V_id_V);

        }

        tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2,&tcl_file.inStream_V_id_V_depth);

        sprintf(tvin_inStream_V_id_V, "[[/transaction]] \n");

        aesl_fh.write(AUTOTB_TVIN_inStream_V_id_V, tvin_inStream_V_id_V);

        delete [] inStream_V_id_V_tvin_wrapc_buffer;

        sprintf(wrapc_stream_size_in_inStream_V_id_V, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_id_V, wrapc_stream_size_in_inStream_V_id_V);

        sprintf(wrapc_stream_size_in_inStream_V_id_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_id_V, wrapc_stream_size_in_inStream_V_id_V);

        sprintf(wrapc_stream_size_in_inStream_V_id_V, "[[/transaction]] \n");

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_id_V, wrapc_stream_size_in_inStream_V_id_V);

        sprintf(tvin_inStream_V_dest_V, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(AUTOTB_TVIN_inStream_V_dest_V, tvin_inStream_V_dest_V);

        sc_bv<6> *inStream_V_dest_V_tvin_wrapc_buffer = new sc_bv<6>[aesl_tmp_1 - aesl_tmp_2];

        AESL_i = 0; //subscript for rtl array

        for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1 ; i_0+= 1) {

            for (int i_1 = 0; i_1 <= 0 ; i_1+= 1) {

                if(&(aesl_tmp_0[0]) != 0) {

                   inStream_V_dest_V_tvin_wrapc_buffer[0 + AESL_i].range(5, 0) = (aesl_tmp_0[i_0].dest).to_string(2).c_str();

                }

                AESL_i++;

            }

        }

        for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2 ; i++) {

            sprintf(tvin_inStream_V_dest_V, "%s\n", (inStream_V_dest_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());

            aesl_fh.write(AUTOTB_TVIN_inStream_V_dest_V, tvin_inStream_V_dest_V);

        }

        tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2,&tcl_file.inStream_V_dest_V_depth);

        sprintf(tvin_inStream_V_dest_V, "[[/transaction]] \n");

        aesl_fh.write(AUTOTB_TVIN_inStream_V_dest_V, tvin_inStream_V_dest_V);

        delete [] inStream_V_dest_V_tvin_wrapc_buffer;

        sprintf(wrapc_stream_size_in_inStream_V_dest_V, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_dest_V, wrapc_stream_size_in_inStream_V_dest_V);

        sprintf(wrapc_stream_size_in_inStream_V_dest_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_dest_V, wrapc_stream_size_in_inStream_V_dest_V);

        sprintf(wrapc_stream_size_in_inStream_V_dest_V, "[[/transaction]] \n");

        aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_dest_V, wrapc_stream_size_in_inStream_V_dest_V);

        sprintf(tvout_histo, "[[transaction]] %d\n", AESL_transaction);

        aesl_fh.write(AUTOTB_TVOUT_histo, tvout_histo);

        sc_bv<32> *histo_tvout_wrapc_buffer = new sc_bv<32>[256];

        AESL_i = 0; //subscript for rtl array

        for (int i_0 = 0; i_0 <= 255 ; i_0+= 1) {

            if(&(histo[0]) != 0) {

               histo_tvout_wrapc_buffer[0 + AESL_i].range(31, 0) = histo[i_0];

            }

            AESL_i++;

        }

        for (int i = 0; i < 256 ; i++) {

            sprintf(tvout_histo, "%s\n", (histo_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());

            aesl_fh.write(AUTOTB_TVOUT_histo, tvout_histo);

        }

        tcl_file.set_num(256,&tcl_file.histo_depth);

        sprintf(tvout_histo, "[[/transaction]] \n");

        aesl_fh.write(AUTOTB_TVOUT_histo, tvout_histo);

        delete [] histo_tvout_wrapc_buffer;

        delete [] tvin_inStream_V_data_V;

        delete [] wrapc_stream_size_in_inStream_V_data_V;

        delete [] tvin_inStream_V_keep_V;

        delete [] wrapc_stream_size_in_inStream_V_keep_V;

        delete [] tvin_inStream_V_strb_V;

        delete [] wrapc_stream_size_in_inStream_V_strb_V;

        delete [] tvin_inStream_V_user_V;

        delete [] wrapc_stream_size_in_inStream_V_user_V;

        delete [] tvin_inStream_V_last_V;

        delete [] wrapc_stream_size_in_inStream_V_last_V;

        delete [] tvin_inStream_V_id_V;

        delete [] wrapc_stream_size_in_inStream_V_id_V;

        delete [] tvin_inStream_V_dest_V;

        delete [] wrapc_stream_size_in_inStream_V_dest_V;

        delete [] tvin_histo;

        delete [] tvout_histo;

        AESL_transaction++;

        tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);

    }
}


