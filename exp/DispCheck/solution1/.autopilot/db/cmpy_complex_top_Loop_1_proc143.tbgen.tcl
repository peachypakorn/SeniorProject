set moduleName cmpy_complex_top_Loop_1_proc143
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {cmpy_complex_top_Loop_1_proc143}
set C_modelType { void 0 }
set C_modelArgList { 
	{ nL int 32 regular  }
	{ refAtans_V int 20 regular {array 2048 { 0 3 } 0 1 }  }
	{ sigRef int 24 regular {axi_s 0 volatile  { sigRef data } }  }
	{ factor_V int 10 regular  }
	{ nL_out int 32 regular {fifo 1}  }
	{ factor_V_out int 10 regular {fifo 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "nL", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "refAtans_V", "interface" : "memory", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "sigRef", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "factor_V", "interface" : "wire", "bitwidth" : 10, "direction" : "READONLY"} , 
 	{ "Name" : "nL_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "factor_V_out", "interface" : "fifo", "bitwidth" : 10, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 22
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ nL sc_in sc_lv 32 signal 0 } 
	{ refAtans_V_address0 sc_out sc_lv 11 signal 1 } 
	{ refAtans_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ refAtans_V_we0 sc_out sc_logic 1 signal 1 } 
	{ refAtans_V_d0 sc_out sc_lv 20 signal 1 } 
	{ sigRef_TDATA sc_in sc_lv 24 signal 2 } 
	{ sigRef_TVALID sc_in sc_logic 1 invld 2 } 
	{ sigRef_TREADY sc_out sc_logic 1 inacc 2 } 
	{ factor_V sc_in sc_lv 10 signal 3 } 
	{ nL_out_din sc_out sc_lv 32 signal 4 } 
	{ nL_out_full_n sc_in sc_logic 1 signal 4 } 
	{ nL_out_write sc_out sc_logic 1 signal 4 } 
	{ factor_V_out_din sc_out sc_lv 10 signal 5 } 
	{ factor_V_out_full_n sc_in sc_logic 1 signal 5 } 
	{ factor_V_out_write sc_out sc_logic 1 signal 5 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "nL", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "nL", "role": "default" }} , 
 	{ "name": "refAtans_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "refAtans_V", "role": "address0" }} , 
 	{ "name": "refAtans_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "refAtans_V", "role": "ce0" }} , 
 	{ "name": "refAtans_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "refAtans_V", "role": "we0" }} , 
 	{ "name": "refAtans_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "refAtans_V", "role": "d0" }} , 
 	{ "name": "sigRef_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "sigRef", "role": "TDATA" }} , 
 	{ "name": "sigRef_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "sigRef", "role": "TVALID" }} , 
 	{ "name": "sigRef_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "sigRef", "role": "TREADY" }} , 
 	{ "name": "factor_V", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "factor_V", "role": "default" }} , 
 	{ "name": "nL_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "nL_out", "role": "din" }} , 
 	{ "name": "nL_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "nL_out", "role": "full_n" }} , 
 	{ "name": "nL_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "nL_out", "role": "write" }} , 
 	{ "name": "factor_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "factor_V_out", "role": "din" }} , 
 	{ "name": "factor_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "factor_V_out", "role": "full_n" }} , 
 	{ "name": "factor_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "factor_V_out", "role": "write" }}  ]}
set Spec2ImplPortList { 
	nL { ap_none {  { nL in_data 0 32 } } }
	refAtans_V { ap_memory {  { refAtans_V_address0 mem_address 1 11 }  { refAtans_V_ce0 mem_ce 1 1 }  { refAtans_V_we0 mem_we 1 1 }  { refAtans_V_d0 mem_din 1 20 } } }
	sigRef { axis {  { sigRef_TDATA in_data 0 24 }  { sigRef_TVALID in_vld 0 1 }  { sigRef_TREADY in_acc 1 1 } } }
	factor_V { ap_none {  { factor_V in_data 0 10 } } }
	nL_out { ap_fifo {  { nL_out_din fifo_data 1 32 }  { nL_out_full_n fifo_status 0 1 }  { nL_out_write fifo_update 1 1 } } }
	factor_V_out { ap_fifo {  { factor_V_out_din fifo_data 1 10 }  { factor_V_out_full_n fifo_status 0 1 }  { factor_V_out_write fifo_update 1 1 } } }
}
