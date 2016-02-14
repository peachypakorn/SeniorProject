set moduleName pyrconstuct_top_Loop_2_proc
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {pyrconstuct_top_Loop_2_proc}
set C_modelType { void 0 }
set C_modelArgList { 
	{ imgOutTmpFFTStream int 48 regular {fifo 0 volatile }  }
	{ imgOutTmpBlockRam_M_real_V int 24 regular {array 512 { 0 3 } 0 1 }  }
	{ imgOutTmpBlockRam_M_imag_V int 24 regular {array 512 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "imgOutTmpFFTStream", "interface" : "fifo", "bitwidth" : 48, "direction" : "READONLY"} , 
 	{ "Name" : "imgOutTmpBlockRam_M_real_V", "interface" : "memory", "bitwidth" : 24, "direction" : "WRITEONLY"} , 
 	{ "Name" : "imgOutTmpBlockRam_M_imag_V", "interface" : "memory", "bitwidth" : 24, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 18
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ imgOutTmpFFTStream_dout sc_in sc_lv 48 signal 0 } 
	{ imgOutTmpFFTStream_empty_n sc_in sc_logic 1 signal 0 } 
	{ imgOutTmpFFTStream_read sc_out sc_logic 1 signal 0 } 
	{ imgOutTmpBlockRam_M_real_V_address0 sc_out sc_lv 9 signal 1 } 
	{ imgOutTmpBlockRam_M_real_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ imgOutTmpBlockRam_M_real_V_we0 sc_out sc_logic 1 signal 1 } 
	{ imgOutTmpBlockRam_M_real_V_d0 sc_out sc_lv 24 signal 1 } 
	{ imgOutTmpBlockRam_M_imag_V_address0 sc_out sc_lv 9 signal 2 } 
	{ imgOutTmpBlockRam_M_imag_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ imgOutTmpBlockRam_M_imag_V_we0 sc_out sc_logic 1 signal 2 } 
	{ imgOutTmpBlockRam_M_imag_V_d0 sc_out sc_lv 24 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "imgOutTmpFFTStream_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":48, "type": "signal", "bundle":{"name": "imgOutTmpFFTStream", "role": "dout" }} , 
 	{ "name": "imgOutTmpFFTStream_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "imgOutTmpFFTStream", "role": "empty_n" }} , 
 	{ "name": "imgOutTmpFFTStream_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "imgOutTmpFFTStream", "role": "read" }} , 
 	{ "name": "imgOutTmpBlockRam_M_real_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "imgOutTmpBlockRam_M_real_V", "role": "address0" }} , 
 	{ "name": "imgOutTmpBlockRam_M_real_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "imgOutTmpBlockRam_M_real_V", "role": "ce0" }} , 
 	{ "name": "imgOutTmpBlockRam_M_real_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "imgOutTmpBlockRam_M_real_V", "role": "we0" }} , 
 	{ "name": "imgOutTmpBlockRam_M_real_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "imgOutTmpBlockRam_M_real_V", "role": "d0" }} , 
 	{ "name": "imgOutTmpBlockRam_M_imag_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "imgOutTmpBlockRam_M_imag_V", "role": "address0" }} , 
 	{ "name": "imgOutTmpBlockRam_M_imag_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "imgOutTmpBlockRam_M_imag_V", "role": "ce0" }} , 
 	{ "name": "imgOutTmpBlockRam_M_imag_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "imgOutTmpBlockRam_M_imag_V", "role": "we0" }} , 
 	{ "name": "imgOutTmpBlockRam_M_imag_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "imgOutTmpBlockRam_M_imag_V", "role": "d0" }}  ]}
set Spec2ImplPortList { 
	imgOutTmpFFTStream { ap_fifo {  { imgOutTmpFFTStream_dout fifo_data 0 48 }  { imgOutTmpFFTStream_empty_n fifo_status 0 1 }  { imgOutTmpFFTStream_read fifo_update 1 1 } } }
	imgOutTmpBlockRam_M_real_V { ap_memory {  { imgOutTmpBlockRam_M_real_V_address0 mem_address 1 9 }  { imgOutTmpBlockRam_M_real_V_ce0 mem_ce 1 1 }  { imgOutTmpBlockRam_M_real_V_we0 mem_we 1 1 }  { imgOutTmpBlockRam_M_real_V_d0 mem_din 1 24 } } }
	imgOutTmpBlockRam_M_imag_V { ap_memory {  { imgOutTmpBlockRam_M_imag_V_address0 mem_address 1 9 }  { imgOutTmpBlockRam_M_imag_V_ce0 mem_ce 1 1 }  { imgOutTmpBlockRam_M_imag_V_we0 mem_we 1 1 }  { imgOutTmpBlockRam_M_imag_V_d0 mem_din 1 24 } } }
}
