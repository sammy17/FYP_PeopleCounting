#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("s_axi_CRTL_BUS_AWVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_AWREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_AWADDR", 6, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_WVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_WREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_WDATA", 32, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_WSTRB", 4, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_ARVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_ARREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_ARADDR", 6, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_RVALID", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_RREADY", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_RDATA", 32, hls_out, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_RRESP", 2, hls_out, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_BVALID", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_BREADY", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CRTL_BUS_BRESP", 2, hls_out, -1, "", "", 1),
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst_n", 1, hls_in, -1, "", "", 1),
	Port_Property("inStream_TDATA", 8, hls_in, 0, "axis", "in_data", 1),
	Port_Property("inStream_TVALID", 1, hls_in, 0, "axis", "in_vld", 1),
	Port_Property("inStream_TREADY", 1, hls_out, 6, "axis", "in_acc", 1),
	Port_Property("inStream_TKEEP", 1, hls_in, 1, "axis", "in_data", 1),
	Port_Property("inStream_TSTRB", 1, hls_in, 2, "axis", "in_data", 1),
	Port_Property("inStream_TUSER", 2, hls_in, 3, "axis", "in_data", 1),
	Port_Property("inStream_TLAST", 1, hls_in, 4, "axis", "in_data", 1),
	Port_Property("inStream_TID", 5, hls_in, 5, "axis", "in_data", 1),
	Port_Property("inStream_TDEST", 6, hls_in, 6, "axis", "in_data", 1),
	Port_Property("outStream_TDATA", 8, hls_out, 7, "axis", "out_data", 1),
	Port_Property("outStream_TVALID", 1, hls_out, 13, "axis", "out_vld", 1),
	Port_Property("outStream_TREADY", 1, hls_in, 7, "axis", "out_acc", 1),
	Port_Property("outStream_TKEEP", 1, hls_out, 8, "axis", "out_data", 1),
	Port_Property("outStream_TSTRB", 1, hls_out, 9, "axis", "out_data", 1),
	Port_Property("outStream_TUSER", 2, hls_out, 10, "axis", "out_data", 1),
	Port_Property("outStream_TLAST", 1, hls_out, 11, "axis", "out_data", 1),
	Port_Property("outStream_TID", 5, hls_out, 12, "axis", "out_data", 1),
	Port_Property("outStream_TDEST", 6, hls_out, 13, "axis", "out_data", 1),
	Port_Property("interrupt", 1, hls_out, -1, "", "", 1),
};
const char* HLS_Design_Meta::dut_name = "doHistStretch";
