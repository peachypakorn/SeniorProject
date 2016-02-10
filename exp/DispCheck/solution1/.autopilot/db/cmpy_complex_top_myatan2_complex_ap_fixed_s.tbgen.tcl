set moduleName cmpy_complex_top_myatan2_complex_ap_fixed_s
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set pipeII 1
set pipeLatency 10
set C_modelName {cmpy_complex_top_myatan2<complex,ap_fixed >}
set C_modelType { int 20 }
set C_modelArgList { 
	{ xin int 24 regular {axi_s 0 volatile  { xin data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "xin", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 20} ]}
# RTL Port declarations: 
set portNum 12
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ xin_TVALID sc_in sc_logic 1 invld 0 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
	{ xin_TDATA sc_in sc_lv 24 signal 0 } 
	{ xin_TREADY sc_out sc_logic 1 inacc 0 } 
	{ xin_TDATA_blk_n sc_out sc_logic 1 signal -1 } 
	{ ap_return sc_out sc_lv 20 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "xin_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "xin", "role": "TVALID" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }} , 
 	{ "name": "xin_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "xin", "role": "TDATA" }} , 
 	{ "name": "xin_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "xin", "role": "TREADY" }} , 
 	{ "name": "xin_TDATA_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "xin_TDATA_blk_n", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}
set Spec2ImplPortList { 
	xin { axis {  { xin_TVALID in_vld 0 1 }  { xin_TDATA in_data 0 24 }  { xin_TREADY in_acc 1 1 } } }
}
