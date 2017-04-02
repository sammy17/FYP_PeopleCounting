// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.2
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ==============================================================


`timescale 1 ns / 1 ps

module AESL_axi_s_inStream (
    clk,
    reset,
    TRAN_inStream_TDATA,
    TRAN_inStream_TKEEP,
    TRAN_inStream_TSTRB,
    TRAN_inStream_TUSER,
    TRAN_inStream_TLAST,
    TRAN_inStream_TID,
    TRAN_inStream_TDEST,
    TRAN_inStream_TVALID,
    TRAN_inStream_TREADY,
    ready,
    done
    );

//------------------------Parameter----------------------
`define TV_IN_inStream_TDATA "./c.doGain.autotvin_inStream_V_data_V.dat"
`define TV_IN_inStream_TKEEP "./c.doGain.autotvin_inStream_V_keep_V.dat"
`define TV_IN_inStream_TSTRB "./c.doGain.autotvin_inStream_V_strb_V.dat"
`define TV_IN_inStream_TUSER "./c.doGain.autotvin_inStream_V_user_V.dat"
`define TV_IN_inStream_TLAST "./c.doGain.autotvin_inStream_V_last_V.dat"
`define TV_IN_inStream_TID "./c.doGain.autotvin_inStream_V_id_V.dat"
`define TV_IN_inStream_TDEST "./c.doGain.autotvin_inStream_V_dest_V.dat"
// Input and Output
input clk;
input reset;
output [31 : 0] TRAN_inStream_TDATA;
output [3 : 0] TRAN_inStream_TKEEP;
output [3 : 0] TRAN_inStream_TSTRB;
output [1 : 0] TRAN_inStream_TUSER;
output  TRAN_inStream_TLAST;
output [4 : 0] TRAN_inStream_TID;
output [5 : 0] TRAN_inStream_TDEST;
output  TRAN_inStream_TVALID;
input  TRAN_inStream_TREADY;
input ready;
input done;

//------------------------Local signal-------------------
reg [31 : 0] mem_inStream_TDATA [999 : 0];
initial begin : initialize_mem_inStream_TDATA
  integer i;
  for (i = 0; i < 1000; i = i + 1) begin
      mem_inStream_TDATA[i] = 0;
  end
end
wire inStream_TDATA_empty_n;
wire inStream_TDATA_full_n;
reg [11 : 0]  inStream_TDATA_mInPtr  =   0;
reg [11 : 0]  inStream_TDATA_mOutPtr =   0;
reg  inStream_TDATA_mFlag_nEF_hint;  // 0: empty hint, 1: full hint

reg [3 : 0] mem_inStream_TKEEP [999 : 0];
initial begin : initialize_mem_inStream_TKEEP
  integer i;
  for (i = 0; i < 1000; i = i + 1) begin
      mem_inStream_TKEEP[i] = 0;
  end
end
wire inStream_TKEEP_empty_n;
wire inStream_TKEEP_full_n;
reg [11 : 0]  inStream_TKEEP_mInPtr  =   0;
reg [11 : 0]  inStream_TKEEP_mOutPtr =   0;
reg  inStream_TKEEP_mFlag_nEF_hint;  // 0: empty hint, 1: full hint

reg [3 : 0] mem_inStream_TSTRB [999 : 0];
initial begin : initialize_mem_inStream_TSTRB
  integer i;
  for (i = 0; i < 1000; i = i + 1) begin
      mem_inStream_TSTRB[i] = 0;
  end
end
wire inStream_TSTRB_empty_n;
wire inStream_TSTRB_full_n;
reg [11 : 0]  inStream_TSTRB_mInPtr  =   0;
reg [11 : 0]  inStream_TSTRB_mOutPtr =   0;
reg  inStream_TSTRB_mFlag_nEF_hint;  // 0: empty hint, 1: full hint

reg [1 : 0] mem_inStream_TUSER [999 : 0];
initial begin : initialize_mem_inStream_TUSER
  integer i;
  for (i = 0; i < 1000; i = i + 1) begin
      mem_inStream_TUSER[i] = 0;
  end
end
wire inStream_TUSER_empty_n;
wire inStream_TUSER_full_n;
reg [11 : 0]  inStream_TUSER_mInPtr  =   0;
reg [11 : 0]  inStream_TUSER_mOutPtr =   0;
reg  inStream_TUSER_mFlag_nEF_hint;  // 0: empty hint, 1: full hint

reg [0 : 0] mem_inStream_TLAST [999 : 0];
initial begin : initialize_mem_inStream_TLAST
  integer i;
  for (i = 0; i < 1000; i = i + 1) begin
      mem_inStream_TLAST[i] = 0;
  end
end
wire inStream_TLAST_empty_n;
wire inStream_TLAST_full_n;
reg [11 : 0]  inStream_TLAST_mInPtr  =   0;
reg [11 : 0]  inStream_TLAST_mOutPtr =   0;
reg  inStream_TLAST_mFlag_nEF_hint;  // 0: empty hint, 1: full hint

reg [4 : 0] mem_inStream_TID [999 : 0];
initial begin : initialize_mem_inStream_TID
  integer i;
  for (i = 0; i < 1000; i = i + 1) begin
      mem_inStream_TID[i] = 0;
  end
end
wire inStream_TID_empty_n;
wire inStream_TID_full_n;
reg [11 : 0]  inStream_TID_mInPtr  =   0;
reg [11 : 0]  inStream_TID_mOutPtr =   0;
reg  inStream_TID_mFlag_nEF_hint;  // 0: empty hint, 1: full hint

reg [5 : 0] mem_inStream_TDEST [999 : 0];
initial begin : initialize_mem_inStream_TDEST
  integer i;
  for (i = 0; i < 1000; i = i + 1) begin
      mem_inStream_TDEST[i] = 0;
  end
end
wire inStream_TDEST_empty_n;
wire inStream_TDEST_full_n;
reg [11 : 0]  inStream_TDEST_mInPtr  =   0;
reg [11 : 0]  inStream_TDEST_mOutPtr =   0;
reg  inStream_TDEST_mFlag_nEF_hint;  // 0: empty hint, 1: full hint

assign TRAN_inStream_TDATA = mem_inStream_TDATA[inStream_TDATA_mOutPtr];
assign inStream_TDATA_empty_n	=	((inStream_TDATA_mInPtr == inStream_TDATA_mOutPtr) && inStream_TDATA_mFlag_nEF_hint == 1'b0)? 1'b 0: 1'b 1;
assign inStream_TDATA_full_n	=	((inStream_TDATA_mInPtr == inStream_TDATA_mOutPtr) && inStream_TDATA_mFlag_nEF_hint == 1'b1)? 1'b 0: 1'b 1;
assign TRAN_inStream_TKEEP = mem_inStream_TKEEP[inStream_TKEEP_mOutPtr];
assign inStream_TKEEP_empty_n	=	((inStream_TKEEP_mInPtr == inStream_TKEEP_mOutPtr) && inStream_TKEEP_mFlag_nEF_hint == 1'b0)? 1'b 0: 1'b 1;
assign inStream_TKEEP_full_n	=	((inStream_TKEEP_mInPtr == inStream_TKEEP_mOutPtr) && inStream_TKEEP_mFlag_nEF_hint == 1'b1)? 1'b 0: 1'b 1;
assign TRAN_inStream_TSTRB = mem_inStream_TSTRB[inStream_TSTRB_mOutPtr];
assign inStream_TSTRB_empty_n	=	((inStream_TSTRB_mInPtr == inStream_TSTRB_mOutPtr) && inStream_TSTRB_mFlag_nEF_hint == 1'b0)? 1'b 0: 1'b 1;
assign inStream_TSTRB_full_n	=	((inStream_TSTRB_mInPtr == inStream_TSTRB_mOutPtr) && inStream_TSTRB_mFlag_nEF_hint == 1'b1)? 1'b 0: 1'b 1;
assign TRAN_inStream_TUSER = mem_inStream_TUSER[inStream_TUSER_mOutPtr];
assign inStream_TUSER_empty_n	=	((inStream_TUSER_mInPtr == inStream_TUSER_mOutPtr) && inStream_TUSER_mFlag_nEF_hint == 1'b0)? 1'b 0: 1'b 1;
assign inStream_TUSER_full_n	=	((inStream_TUSER_mInPtr == inStream_TUSER_mOutPtr) && inStream_TUSER_mFlag_nEF_hint == 1'b1)? 1'b 0: 1'b 1;
assign TRAN_inStream_TLAST = mem_inStream_TLAST[inStream_TLAST_mOutPtr];
assign inStream_TLAST_empty_n	=	((inStream_TLAST_mInPtr == inStream_TLAST_mOutPtr) && inStream_TLAST_mFlag_nEF_hint == 1'b0)? 1'b 0: 1'b 1;
assign inStream_TLAST_full_n	=	((inStream_TLAST_mInPtr == inStream_TLAST_mOutPtr) && inStream_TLAST_mFlag_nEF_hint == 1'b1)? 1'b 0: 1'b 1;
assign TRAN_inStream_TID = mem_inStream_TID[inStream_TID_mOutPtr];
assign inStream_TID_empty_n	=	((inStream_TID_mInPtr == inStream_TID_mOutPtr) && inStream_TID_mFlag_nEF_hint == 1'b0)? 1'b 0: 1'b 1;
assign inStream_TID_full_n	=	((inStream_TID_mInPtr == inStream_TID_mOutPtr) && inStream_TID_mFlag_nEF_hint == 1'b1)? 1'b 0: 1'b 1;
assign TRAN_inStream_TDEST = mem_inStream_TDEST[inStream_TDEST_mOutPtr];
assign inStream_TDEST_empty_n	=	((inStream_TDEST_mInPtr == inStream_TDEST_mOutPtr) && inStream_TDEST_mFlag_nEF_hint == 1'b0)? 1'b 0: 1'b 1;
assign inStream_TDEST_full_n	=	((inStream_TDEST_mInPtr == inStream_TDEST_mOutPtr) && inStream_TDEST_mFlag_nEF_hint == 1'b1)? 1'b 0: 1'b 1;
// Inner signals
assign TRAN_inStream_TVALID = 1 & 
    inStream_TDATA_empty_n &
    inStream_TKEEP_empty_n &
    inStream_TSTRB_empty_n &
    inStream_TUSER_empty_n &
    inStream_TLAST_empty_n &
    inStream_TID_empty_n &
    inStream_TDEST_empty_n &
      1;
//------------------------Task and function--------------
task read_token;
	input integer fp;
  output reg [199 : 0] token;
	reg [7:0] c;
	reg intoken;
	reg done;
	begin
	    token = "";
	    intoken = 0;
	    done = 0;
	    while (!done) begin
		c = $fgetc(fp);
		if (c == 8'hff) begin	// EOF
		    done = 1;
		end
		else if (c == " " || c == "\011" || c == "\012" || c == "\015") begin   // blank
		    if (intoken) begin
			done = 1;
		    end
		end
		else begin			// valid character
		    intoken = 1;
		    token = (token << 8) | c;
		end
	    end
	end
endtask

//------------------------Read-only axi_s-------------------

// Write operation for read_only axi_s port
initial begin : inStream_TDATA_read_file_process
  integer fp;
  integer err;
  integer ret;
  integer transaction_idx;
  reg [199 : 0] token;
  reg [ 8*5 : 1] str;
  inStream_TDATA_mInPtr = 0;
  inStream_TDATA_mFlag_nEF_hint = 0;
  transaction_idx = 0;
  fp = $fopen(`TV_IN_inStream_TDATA,"r");
  if(fp == 0) begin       // Failed to open file
	    $display("Failed to open file \"%s\"!", `TV_IN_inStream_TDATA);
	    $finish;
  end
  read_token(fp, token);
  if (token != "[[[runtime]]]") begin             // Illegal format
      $display("ERROR: Simulation using HLS TB failed.");
	    $finish;
  end
  read_token(fp, token);
  while (token != "[[[/runtime]]]") begin
      if (token != "[[transaction]]") begin
          $display("ERROR: Simulation using HLS TB failed.");
          $finish;
      end
      read_token(fp, token);              // skip transaction number

      @(posedge clk);
      # 0.2;
      while(ready !== 1) begin
          @(posedge clk);
          # 0.2;
      end
      read_token(fp,token);
      inStream_TDATA_mInPtr = 0;
      while(token != "[[/transaction]]") begin
          if (inStream_TDATA_mInPtr >= 1000 ) begin
              $display("Fifo overflow!");
  	        $finish;
          end
          ret = $sscanf(token, "0x%x", mem_inStream_TDATA[inStream_TDATA_mInPtr]);
          if (ret != 1) begin
              $display("Failed to parse token!");
              $finish;
          end
          inStream_TDATA_mInPtr = inStream_TDATA_mInPtr + 1;
          read_token(fp, token);
      end
      inStream_TDATA_mFlag_nEF_hint = 0;
      read_token(fp, token);
      transaction_idx = transaction_idx + 1;
  end
  $fclose(fp);
  @(posedge clk);
  # 0.2;
  while(ready !== 1) begin
  # 0.2;
      @(posedge clk);
  end
  inStream_TDATA_mFlag_nEF_hint = 1;
end

// Read operation for read_only axi_s signal inStream_TDATA
always @ (posedge clk) begin
    if (reset === 0) begin
      inStream_TDATA_mOutPtr = 0;
  end
  else if(TRAN_inStream_TVALID && TRAN_inStream_TREADY) begin
	    if(inStream_TDATA_mOutPtr < inStream_TDATA_mInPtr)
	        inStream_TDATA_mOutPtr <= inStream_TDATA_mOutPtr + 1;
  end
end

// Reset mOutPtr when done is pulled up
initial begin : done_reset_inStream_TDATA_mOutPtr_process
  while(1) begin
      @(posedge clk);
      # 0.1;
      while(ready !== 1) begin
          @(posedge clk);
          # 0.1;
      end
      inStream_TDATA_mOutPtr = 0;
  end
end

initial begin : inStream_TKEEP_read_file_process
  integer fp;
  integer err;
  integer ret;
  integer transaction_idx;
  reg [199 : 0] token;
  reg [ 8*5 : 1] str;
  inStream_TKEEP_mInPtr = 0;
  inStream_TKEEP_mFlag_nEF_hint = 0;
  transaction_idx = 0;
  fp = $fopen(`TV_IN_inStream_TKEEP,"r");
  if(fp == 0) begin       // Failed to open file
	    $display("Failed to open file \"%s\"!", `TV_IN_inStream_TKEEP);
	    $finish;
  end
  read_token(fp, token);
  if (token != "[[[runtime]]]") begin             // Illegal format
      $display("ERROR: Simulation using HLS TB failed.");
	    $finish;
  end
  read_token(fp, token);
  while (token != "[[[/runtime]]]") begin
      if (token != "[[transaction]]") begin
          $display("ERROR: Simulation using HLS TB failed.");
          $finish;
      end
      read_token(fp, token);              // skip transaction number

      @(posedge clk);
      # 0.2;
      while(ready !== 1) begin
          @(posedge clk);
          # 0.2;
      end
      read_token(fp,token);
      inStream_TKEEP_mInPtr = 0;
      while(token != "[[/transaction]]") begin
          if (inStream_TKEEP_mInPtr >= 1000 ) begin
              $display("Fifo overflow!");
  	        $finish;
          end
          ret = $sscanf(token, "0x%x", mem_inStream_TKEEP[inStream_TKEEP_mInPtr]);
          if (ret != 1) begin
              $display("Failed to parse token!");
              $finish;
          end
          inStream_TKEEP_mInPtr = inStream_TKEEP_mInPtr + 1;
          read_token(fp, token);
      end
      inStream_TKEEP_mFlag_nEF_hint = 0;
      read_token(fp, token);
      transaction_idx = transaction_idx + 1;
  end
  $fclose(fp);
  @(posedge clk);
  # 0.2;
  while(ready !== 1) begin
  # 0.2;
      @(posedge clk);
  end
  inStream_TKEEP_mFlag_nEF_hint = 1;
end

// Read operation for read_only axi_s signal inStream_TKEEP
always @ (posedge clk) begin
    if (reset === 0) begin
      inStream_TKEEP_mOutPtr = 0;
  end
  else if(TRAN_inStream_TVALID && TRAN_inStream_TREADY) begin
	    if(inStream_TKEEP_mOutPtr < inStream_TKEEP_mInPtr)
	        inStream_TKEEP_mOutPtr <= inStream_TKEEP_mOutPtr + 1;
  end
end

// Reset mOutPtr when done is pulled up
initial begin : done_reset_inStream_TKEEP_mOutPtr_process
  while(1) begin
      @(posedge clk);
      # 0.1;
      while(ready !== 1) begin
          @(posedge clk);
          # 0.1;
      end
      inStream_TKEEP_mOutPtr = 0;
  end
end

initial begin : inStream_TSTRB_read_file_process
  integer fp;
  integer err;
  integer ret;
  integer transaction_idx;
  reg [199 : 0] token;
  reg [ 8*5 : 1] str;
  inStream_TSTRB_mInPtr = 0;
  inStream_TSTRB_mFlag_nEF_hint = 0;
  transaction_idx = 0;
  fp = $fopen(`TV_IN_inStream_TSTRB,"r");
  if(fp == 0) begin       // Failed to open file
	    $display("Failed to open file \"%s\"!", `TV_IN_inStream_TSTRB);
	    $finish;
  end
  read_token(fp, token);
  if (token != "[[[runtime]]]") begin             // Illegal format
      $display("ERROR: Simulation using HLS TB failed.");
	    $finish;
  end
  read_token(fp, token);
  while (token != "[[[/runtime]]]") begin
      if (token != "[[transaction]]") begin
          $display("ERROR: Simulation using HLS TB failed.");
          $finish;
      end
      read_token(fp, token);              // skip transaction number

      @(posedge clk);
      # 0.2;
      while(ready !== 1) begin
          @(posedge clk);
          # 0.2;
      end
      read_token(fp,token);
      inStream_TSTRB_mInPtr = 0;
      while(token != "[[/transaction]]") begin
          if (inStream_TSTRB_mInPtr >= 1000 ) begin
              $display("Fifo overflow!");
  	        $finish;
          end
          ret = $sscanf(token, "0x%x", mem_inStream_TSTRB[inStream_TSTRB_mInPtr]);
          if (ret != 1) begin
              $display("Failed to parse token!");
              $finish;
          end
          inStream_TSTRB_mInPtr = inStream_TSTRB_mInPtr + 1;
          read_token(fp, token);
      end
      inStream_TSTRB_mFlag_nEF_hint = 0;
      read_token(fp, token);
      transaction_idx = transaction_idx + 1;
  end
  $fclose(fp);
  @(posedge clk);
  # 0.2;
  while(ready !== 1) begin
  # 0.2;
      @(posedge clk);
  end
  inStream_TSTRB_mFlag_nEF_hint = 1;
end

// Read operation for read_only axi_s signal inStream_TSTRB
always @ (posedge clk) begin
    if (reset === 0) begin
      inStream_TSTRB_mOutPtr = 0;
  end
  else if(TRAN_inStream_TVALID && TRAN_inStream_TREADY) begin
	    if(inStream_TSTRB_mOutPtr < inStream_TSTRB_mInPtr)
	        inStream_TSTRB_mOutPtr <= inStream_TSTRB_mOutPtr + 1;
  end
end

// Reset mOutPtr when done is pulled up
initial begin : done_reset_inStream_TSTRB_mOutPtr_process
  while(1) begin
      @(posedge clk);
      # 0.1;
      while(ready !== 1) begin
          @(posedge clk);
          # 0.1;
      end
      inStream_TSTRB_mOutPtr = 0;
  end
end

initial begin : inStream_TUSER_read_file_process
  integer fp;
  integer err;
  integer ret;
  integer transaction_idx;
  reg [199 : 0] token;
  reg [ 8*5 : 1] str;
  inStream_TUSER_mInPtr = 0;
  inStream_TUSER_mFlag_nEF_hint = 0;
  transaction_idx = 0;
  fp = $fopen(`TV_IN_inStream_TUSER,"r");
  if(fp == 0) begin       // Failed to open file
	    $display("Failed to open file \"%s\"!", `TV_IN_inStream_TUSER);
	    $finish;
  end
  read_token(fp, token);
  if (token != "[[[runtime]]]") begin             // Illegal format
      $display("ERROR: Simulation using HLS TB failed.");
	    $finish;
  end
  read_token(fp, token);
  while (token != "[[[/runtime]]]") begin
      if (token != "[[transaction]]") begin
          $display("ERROR: Simulation using HLS TB failed.");
          $finish;
      end
      read_token(fp, token);              // skip transaction number

      @(posedge clk);
      # 0.2;
      while(ready !== 1) begin
          @(posedge clk);
          # 0.2;
      end
      read_token(fp,token);
      inStream_TUSER_mInPtr = 0;
      while(token != "[[/transaction]]") begin
          if (inStream_TUSER_mInPtr >= 1000 ) begin
              $display("Fifo overflow!");
  	        $finish;
          end
          ret = $sscanf(token, "0x%x", mem_inStream_TUSER[inStream_TUSER_mInPtr]);
          if (ret != 1) begin
              $display("Failed to parse token!");
              $finish;
          end
          inStream_TUSER_mInPtr = inStream_TUSER_mInPtr + 1;
          read_token(fp, token);
      end
      inStream_TUSER_mFlag_nEF_hint = 0;
      read_token(fp, token);
      transaction_idx = transaction_idx + 1;
  end
  $fclose(fp);
  @(posedge clk);
  # 0.2;
  while(ready !== 1) begin
  # 0.2;
      @(posedge clk);
  end
  inStream_TUSER_mFlag_nEF_hint = 1;
end

// Read operation for read_only axi_s signal inStream_TUSER
always @ (posedge clk) begin
    if (reset === 0) begin
      inStream_TUSER_mOutPtr = 0;
  end
  else if(TRAN_inStream_TVALID && TRAN_inStream_TREADY) begin
	    if(inStream_TUSER_mOutPtr < inStream_TUSER_mInPtr)
	        inStream_TUSER_mOutPtr <= inStream_TUSER_mOutPtr + 1;
  end
end

// Reset mOutPtr when done is pulled up
initial begin : done_reset_inStream_TUSER_mOutPtr_process
  while(1) begin
      @(posedge clk);
      # 0.1;
      while(ready !== 1) begin
          @(posedge clk);
          # 0.1;
      end
      inStream_TUSER_mOutPtr = 0;
  end
end

initial begin : inStream_TLAST_read_file_process
  integer fp;
  integer err;
  integer ret;
  integer transaction_idx;
  reg [199 : 0] token;
  reg [ 8*5 : 1] str;
  inStream_TLAST_mInPtr = 0;
  inStream_TLAST_mFlag_nEF_hint = 0;
  transaction_idx = 0;
  fp = $fopen(`TV_IN_inStream_TLAST,"r");
  if(fp == 0) begin       // Failed to open file
	    $display("Failed to open file \"%s\"!", `TV_IN_inStream_TLAST);
	    $finish;
  end
  read_token(fp, token);
  if (token != "[[[runtime]]]") begin             // Illegal format
      $display("ERROR: Simulation using HLS TB failed.");
	    $finish;
  end
  read_token(fp, token);
  while (token != "[[[/runtime]]]") begin
      if (token != "[[transaction]]") begin
          $display("ERROR: Simulation using HLS TB failed.");
          $finish;
      end
      read_token(fp, token);              // skip transaction number

      @(posedge clk);
      # 0.2;
      while(ready !== 1) begin
          @(posedge clk);
          # 0.2;
      end
      read_token(fp,token);
      inStream_TLAST_mInPtr = 0;
      while(token != "[[/transaction]]") begin
          if (inStream_TLAST_mInPtr >= 1000 ) begin
              $display("Fifo overflow!");
  	        $finish;
          end
          ret = $sscanf(token, "0x%x", mem_inStream_TLAST[inStream_TLAST_mInPtr]);
          if (ret != 1) begin
              $display("Failed to parse token!");
              $finish;
          end
          inStream_TLAST_mInPtr = inStream_TLAST_mInPtr + 1;
          read_token(fp, token);
      end
      inStream_TLAST_mFlag_nEF_hint = 0;
      read_token(fp, token);
      transaction_idx = transaction_idx + 1;
  end
  $fclose(fp);
  @(posedge clk);
  # 0.2;
  while(ready !== 1) begin
  # 0.2;
      @(posedge clk);
  end
  inStream_TLAST_mFlag_nEF_hint = 1;
end

// Read operation for read_only axi_s signal inStream_TLAST
always @ (posedge clk) begin
    if (reset === 0) begin
      inStream_TLAST_mOutPtr = 0;
  end
  else if(TRAN_inStream_TVALID && TRAN_inStream_TREADY) begin
	    if(inStream_TLAST_mOutPtr < inStream_TLAST_mInPtr)
	        inStream_TLAST_mOutPtr <= inStream_TLAST_mOutPtr + 1;
  end
end

// Reset mOutPtr when done is pulled up
initial begin : done_reset_inStream_TLAST_mOutPtr_process
  while(1) begin
      @(posedge clk);
      # 0.1;
      while(ready !== 1) begin
          @(posedge clk);
          # 0.1;
      end
      inStream_TLAST_mOutPtr = 0;
  end
end

initial begin : inStream_TID_read_file_process
  integer fp;
  integer err;
  integer ret;
  integer transaction_idx;
  reg [199 : 0] token;
  reg [ 8*5 : 1] str;
  inStream_TID_mInPtr = 0;
  inStream_TID_mFlag_nEF_hint = 0;
  transaction_idx = 0;
  fp = $fopen(`TV_IN_inStream_TID,"r");
  if(fp == 0) begin       // Failed to open file
	    $display("Failed to open file \"%s\"!", `TV_IN_inStream_TID);
	    $finish;
  end
  read_token(fp, token);
  if (token != "[[[runtime]]]") begin             // Illegal format
      $display("ERROR: Simulation using HLS TB failed.");
	    $finish;
  end
  read_token(fp, token);
  while (token != "[[[/runtime]]]") begin
      if (token != "[[transaction]]") begin
          $display("ERROR: Simulation using HLS TB failed.");
          $finish;
      end
      read_token(fp, token);              // skip transaction number

      @(posedge clk);
      # 0.2;
      while(ready !== 1) begin
          @(posedge clk);
          # 0.2;
      end
      read_token(fp,token);
      inStream_TID_mInPtr = 0;
      while(token != "[[/transaction]]") begin
          if (inStream_TID_mInPtr >= 1000 ) begin
              $display("Fifo overflow!");
  	        $finish;
          end
          ret = $sscanf(token, "0x%x", mem_inStream_TID[inStream_TID_mInPtr]);
          if (ret != 1) begin
              $display("Failed to parse token!");
              $finish;
          end
          inStream_TID_mInPtr = inStream_TID_mInPtr + 1;
          read_token(fp, token);
      end
      inStream_TID_mFlag_nEF_hint = 0;
      read_token(fp, token);
      transaction_idx = transaction_idx + 1;
  end
  $fclose(fp);
  @(posedge clk);
  # 0.2;
  while(ready !== 1) begin
  # 0.2;
      @(posedge clk);
  end
  inStream_TID_mFlag_nEF_hint = 1;
end

// Read operation for read_only axi_s signal inStream_TID
always @ (posedge clk) begin
    if (reset === 0) begin
      inStream_TID_mOutPtr = 0;
  end
  else if(TRAN_inStream_TVALID && TRAN_inStream_TREADY) begin
	    if(inStream_TID_mOutPtr < inStream_TID_mInPtr)
	        inStream_TID_mOutPtr <= inStream_TID_mOutPtr + 1;
  end
end

// Reset mOutPtr when done is pulled up
initial begin : done_reset_inStream_TID_mOutPtr_process
  while(1) begin
      @(posedge clk);
      # 0.1;
      while(ready !== 1) begin
          @(posedge clk);
          # 0.1;
      end
      inStream_TID_mOutPtr = 0;
  end
end

initial begin : inStream_TDEST_read_file_process
  integer fp;
  integer err;
  integer ret;
  integer transaction_idx;
  reg [199 : 0] token;
  reg [ 8*5 : 1] str;
  inStream_TDEST_mInPtr = 0;
  inStream_TDEST_mFlag_nEF_hint = 0;
  transaction_idx = 0;
  fp = $fopen(`TV_IN_inStream_TDEST,"r");
  if(fp == 0) begin       // Failed to open file
	    $display("Failed to open file \"%s\"!", `TV_IN_inStream_TDEST);
	    $finish;
  end
  read_token(fp, token);
  if (token != "[[[runtime]]]") begin             // Illegal format
      $display("ERROR: Simulation using HLS TB failed.");
	    $finish;
  end
  read_token(fp, token);
  while (token != "[[[/runtime]]]") begin
      if (token != "[[transaction]]") begin
          $display("ERROR: Simulation using HLS TB failed.");
          $finish;
      end
      read_token(fp, token);              // skip transaction number

      @(posedge clk);
      # 0.2;
      while(ready !== 1) begin
          @(posedge clk);
          # 0.2;
      end
      read_token(fp,token);
      inStream_TDEST_mInPtr = 0;
      while(token != "[[/transaction]]") begin
          if (inStream_TDEST_mInPtr >= 1000 ) begin
              $display("Fifo overflow!");
  	        $finish;
          end
          ret = $sscanf(token, "0x%x", mem_inStream_TDEST[inStream_TDEST_mInPtr]);
          if (ret != 1) begin
              $display("Failed to parse token!");
              $finish;
          end
          inStream_TDEST_mInPtr = inStream_TDEST_mInPtr + 1;
          read_token(fp, token);
      end
      inStream_TDEST_mFlag_nEF_hint = 0;
      read_token(fp, token);
      transaction_idx = transaction_idx + 1;
  end
  $fclose(fp);
  @(posedge clk);
  # 0.2;
  while(ready !== 1) begin
  # 0.2;
      @(posedge clk);
  end
  inStream_TDEST_mFlag_nEF_hint = 1;
end

// Read operation for read_only axi_s signal inStream_TDEST
always @ (posedge clk) begin
    if (reset === 0) begin
      inStream_TDEST_mOutPtr = 0;
  end
  else if(TRAN_inStream_TVALID && TRAN_inStream_TREADY) begin
	    if(inStream_TDEST_mOutPtr < inStream_TDEST_mInPtr)
	        inStream_TDEST_mOutPtr <= inStream_TDEST_mOutPtr + 1;
  end
end

// Reset mOutPtr when done is pulled up
initial begin : done_reset_inStream_TDEST_mOutPtr_process
  while(1) begin
      @(posedge clk);
      # 0.1;
      while(ready !== 1) begin
          @(posedge clk);
          # 0.1;
      end
      inStream_TDEST_mOutPtr = 0;
  end
end

endmodule
