set moduleName cmpy_complex_top_Loop_2_proc
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {cmpy_complex_top_Loop_2_proc}
set C_modelType { void 0 }
set C_modelArgList { 
	{ factor_V int 10 regular {fifo 0}  }
	{ nL int 32 regular {fifo 0}  }
	{ refAtans_V int 20 regular {array 2048 { 1 3 } 1 1 }  }
	{ prealign_V int 24 regular {axi_s 0 volatile  { prealign_V data } }  }
	{ sig int 24 regular {axi_s 0 volatile  { sig data } }  }
	{ cmp int 40 regular {axi_s 1 volatile  { cmp data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "factor_V", "interface" : "fifo", "bitwidth" : 10, "direction" : "READONLY"} , 
 	{ "Name" : "nL", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "refAtans_V", "interface" : "memory", "bitwidth" : 20, "direction" : "READONLY"} , 
 	{ "Name" : "prealign_V", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "sig", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "cmp", "interface" : "axis", "bitwidth" : 40, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 25
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ factor_V_dout sc_in sc_lv 10 signal 0 } 
	{ factor_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ factor_V_read sc_out sc_logic 1 signal 0 } 
	{ nL_dout sc_in sc_lv 32 signal 1 } 
	{ nL_empty_n sc_in sc_logic 1 signal 1 } 
	{ nL_read sc_out sc_logic 1 signal 1 } 
	{ refAtans_V_address0 sc_out sc_lv 11 signal 2 } 
	{ refAtans_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ refAtans_V_q0 sc_in sc_lv 20 signal 2 } 
	{ prealign_V_TDATA sc_in sc_lv 24 signal 3 } 
	{ prealign_V_TVALID sc_in sc_logic 1 invld 3 } 
	{ prealign_V_TREADY sc_out sc_logic 1 inacc 3 } 
	{ sig_TDATA sc_in sc_lv 24 signal 4 } 
	{ sig_TVALID sc_in sc_logic 1 invld 4 } 
	{ sig_TREADY sc_out sc_logic 1 inacc 4 } 
	{ cmp_TDATA sc_out sc_lv 40 signal 5 } 
	{ cmp_TVALID sc_out sc_logic 1 outvld 5 } 
	{ cmp_TREADY sc_in sc_logic 1 outacc 5 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "factor_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "factor_V", "role": "dout" }} , 
 	{ "name": "factor_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "factor_V", "role": "empty_n" }} , 
 	{ "name": "factor_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "factor_V", "role": "read" }} , 
 	{ "name": "nL_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "nL", "role": "dout" }} , 
 	{ "name": "nL_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "nL", "role": "empty_n" }} , 
 	{ "name": "nL_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "nL", "role": "read" }} , 
 	{ "name": "refAtans_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "refAtans_V", "role": "address0" }} , 
 	{ "name": "refAtans_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "refAtans_V", "role": "ce0" }} , 
 	{ "name": "refAtans_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "refAtans_V", "role": "q0" }} , 
 	{ "name": "prealign_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "prealign_V", "role": "TDATA" }} , 
 	{ "name": "prealign_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "prealign_V", "role": "TVALID" }} , 
 	{ "name": "prealign_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "prealign_V", "role": "TREADY" }} , 
 	{ "name": "sig_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "sig", "role": "TDATA" }} , 
 	{ "name": "sig_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "sig", "role": "TVALID" }} , 
 	{ "name": "sig_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "sig", "role": "TREADY" }} , 
 	{ "name": "cmp_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "cmp", "role": "TDATA" }} , 
 	{ "name": "cmp_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "cmp", "role": "TVALID" }} , 
 	{ "name": "cmp_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "cmp", "role": "TREADY" }}  ]}
set Spec2ImplPortList { 
	factor_V { ap_fifo {  { factor_V_dout fifo_data 0 10 }  { factor_V_empty_n fifo_status 0 1 }  { factor_V_read fifo_update 1 1 } } }
	nL { ap_fifo {  { nL_dout fifo_data 0 32 }  { nL_empty_n fifo_status 0 1 }  { nL_read fifo_update 1 1 } } }
	refAtans_V { ap_memory {  { refAtans_V_address0 mem_address 1 11 }  { refAtans_V_ce0 mem_ce 1 1 }  { refAtans_V_q0 mem_dout 0 20 } } }
	prealign_V { axis {  { prealign_V_TDATA in_data 0 24 }  { prealign_V_TVALID in_vld 0 1 }  { prealign_V_TREADY in_acc 1 1 } } }
	sig { axis {  { sig_TDATA in_data 0 24 }  { sig_TVALID in_vld 0 1 }  { sig_TREADY in_acc 1 1 } } }
	cmp { axis {  { cmp_TDATA out_data 1 40 }  { cmp_TVALID out_vld 1 1 }  { cmp_TREADY out_acc 0 1 } } }
}
