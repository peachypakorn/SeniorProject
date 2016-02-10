set moduleName pyrconstuct_top_Loop_3_proc
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {pyrconstuct_top_Loop_3_proc}
set C_modelType { void 0 }
set C_modelArgList { 
	{ imgOutTmpBlockRam_M_real_V int 24 regular {array 512 { 1 3 } 1 1 }  }
	{ imgOutTmpBlockRam_M_imag_V int 24 regular {array 512 { 1 3 } 1 1 }  }
	{ fftPyrOut_M_real_V int 24 regular {fifo 1 volatile }  }
	{ fftPyrOut_M_imag_V int 24 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "imgOutTmpBlockRam_M_real_V", "interface" : "memory", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "imgOutTmpBlockRam_M_imag_V", "interface" : "memory", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "fftPyrOut_M_real_V", "interface" : "fifo", "bitwidth" : 24, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fftPyrOut_M_imag_V", "interface" : "fifo", "bitwidth" : 24, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ imgOutTmpBlockRam_M_real_V_address0 sc_out sc_lv 9 signal 0 } 
	{ imgOutTmpBlockRam_M_real_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ imgOutTmpBlockRam_M_real_V_q0 sc_in sc_lv 24 signal 0 } 
	{ imgOutTmpBlockRam_M_imag_V_address0 sc_out sc_lv 9 signal 1 } 
	{ imgOutTmpBlockRam_M_imag_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ imgOutTmpBlockRam_M_imag_V_q0 sc_in sc_lv 24 signal 1 } 
	{ fftPyrOut_M_real_V_din sc_out sc_lv 24 signal 2 } 
	{ fftPyrOut_M_real_V_full_n sc_in sc_logic 1 signal 2 } 
	{ fftPyrOut_M_real_V_write sc_out sc_logic 1 signal 2 } 
	{ fftPyrOut_M_imag_V_din sc_out sc_lv 24 signal 3 } 
	{ fftPyrOut_M_imag_V_full_n sc_in sc_logic 1 signal 3 } 
	{ fftPyrOut_M_imag_V_write sc_out sc_logic 1 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "imgOutTmpBlockRam_M_real_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "imgOutTmpBlockRam_M_real_V", "role": "address0" }} , 
 	{ "name": "imgOutTmpBlockRam_M_real_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "imgOutTmpBlockRam_M_real_V", "role": "ce0" }} , 
 	{ "name": "imgOutTmpBlockRam_M_real_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "imgOutTmpBlockRam_M_real_V", "role": "q0" }} , 
 	{ "name": "imgOutTmpBlockRam_M_imag_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "imgOutTmpBlockRam_M_imag_V", "role": "address0" }} , 
 	{ "name": "imgOutTmpBlockRam_M_imag_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "imgOutTmpBlockRam_M_imag_V", "role": "ce0" }} , 
 	{ "name": "imgOutTmpBlockRam_M_imag_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "imgOutTmpBlockRam_M_imag_V", "role": "q0" }} , 
 	{ "name": "fftPyrOut_M_real_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "fftPyrOut_M_real_V", "role": "din" }} , 
 	{ "name": "fftPyrOut_M_real_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fftPyrOut_M_real_V", "role": "full_n" }} , 
 	{ "name": "fftPyrOut_M_real_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fftPyrOut_M_real_V", "role": "write" }} , 
 	{ "name": "fftPyrOut_M_imag_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "fftPyrOut_M_imag_V", "role": "din" }} , 
 	{ "name": "fftPyrOut_M_imag_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fftPyrOut_M_imag_V", "role": "full_n" }} , 
 	{ "name": "fftPyrOut_M_imag_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fftPyrOut_M_imag_V", "role": "write" }}  ]}
set Spec2ImplPortList { 
	imgOutTmpBlockRam_M_real_V { ap_memory {  { imgOutTmpBlockRam_M_real_V_address0 mem_address 1 9 }  { imgOutTmpBlockRam_M_real_V_ce0 mem_ce 1 1 }  { imgOutTmpBlockRam_M_real_V_q0 mem_dout 0 24 } } }
	imgOutTmpBlockRam_M_imag_V { ap_memory {  { imgOutTmpBlockRam_M_imag_V_address0 mem_address 1 9 }  { imgOutTmpBlockRam_M_imag_V_ce0 mem_ce 1 1 }  { imgOutTmpBlockRam_M_imag_V_q0 mem_dout 0 24 } } }
	fftPyrOut_M_real_V { ap_fifo {  { fftPyrOut_M_real_V_din fifo_data 1 24 }  { fftPyrOut_M_real_V_full_n fifo_status 0 1 }  { fftPyrOut_M_real_V_write fifo_update 1 1 } } }
	fftPyrOut_M_imag_V { ap_fifo {  { fftPyrOut_M_imag_V_din fifo_data 1 24 }  { fftPyrOut_M_imag_V_full_n fifo_status 0 1 }  { fftPyrOut_M_imag_V_write fifo_update 1 1 } } }
}
