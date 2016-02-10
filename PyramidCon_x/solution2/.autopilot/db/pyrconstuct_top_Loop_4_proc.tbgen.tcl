set moduleName pyrconstuct_top_Loop_4_proc
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {pyrconstuct_top_Loop_4_proc}
set C_modelType { void 0 }
set C_modelArgList { 
	{ fftPyrOut_M_real_V int 24 regular {fifo 0 volatile }  }
	{ fftPyrOut_M_imag_V int 24 regular {fifo 0 volatile }  }
	{ imgInTmp2 int 32 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "fftPyrOut_M_real_V", "interface" : "fifo", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "fftPyrOut_M_imag_V", "interface" : "fifo", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "imgInTmp2", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ fftPyrOut_M_real_V_dout sc_in sc_lv 24 signal 0 } 
	{ fftPyrOut_M_real_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ fftPyrOut_M_real_V_read sc_out sc_logic 1 signal 0 } 
	{ fftPyrOut_M_imag_V_dout sc_in sc_lv 24 signal 1 } 
	{ fftPyrOut_M_imag_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ fftPyrOut_M_imag_V_read sc_out sc_logic 1 signal 1 } 
	{ imgInTmp2_din sc_out sc_lv 32 signal 2 } 
	{ imgInTmp2_full_n sc_in sc_logic 1 signal 2 } 
	{ imgInTmp2_write sc_out sc_logic 1 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "fftPyrOut_M_real_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "fftPyrOut_M_real_V", "role": "dout" }} , 
 	{ "name": "fftPyrOut_M_real_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fftPyrOut_M_real_V", "role": "empty_n" }} , 
 	{ "name": "fftPyrOut_M_real_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fftPyrOut_M_real_V", "role": "read" }} , 
 	{ "name": "fftPyrOut_M_imag_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "fftPyrOut_M_imag_V", "role": "dout" }} , 
 	{ "name": "fftPyrOut_M_imag_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fftPyrOut_M_imag_V", "role": "empty_n" }} , 
 	{ "name": "fftPyrOut_M_imag_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fftPyrOut_M_imag_V", "role": "read" }} , 
 	{ "name": "imgInTmp2_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "imgInTmp2", "role": "din" }} , 
 	{ "name": "imgInTmp2_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "imgInTmp2", "role": "full_n" }} , 
 	{ "name": "imgInTmp2_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "imgInTmp2", "role": "write" }}  ]}
set Spec2ImplPortList { 
	fftPyrOut_M_real_V { ap_fifo {  { fftPyrOut_M_real_V_dout fifo_data 0 24 }  { fftPyrOut_M_real_V_empty_n fifo_status 0 1 }  { fftPyrOut_M_real_V_read fifo_update 1 1 } } }
	fftPyrOut_M_imag_V { ap_fifo {  { fftPyrOut_M_imag_V_dout fifo_data 0 24 }  { fftPyrOut_M_imag_V_empty_n fifo_status 0 1 }  { fftPyrOut_M_imag_V_read fifo_update 1 1 } } }
	imgInTmp2 { ap_fifo {  { imgInTmp2_din fifo_data 1 32 }  { imgInTmp2_full_n fifo_status 0 1 }  { imgInTmp2_write fifo_update 1 1 } } }
}
