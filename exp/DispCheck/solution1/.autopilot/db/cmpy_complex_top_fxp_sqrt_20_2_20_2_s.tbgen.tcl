set moduleName cmpy_complex_top_fxp_sqrt_20_2_20_2_s
set isCombinational 0
set isDatapathOnly 1
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set pipeII 1
set pipeLatency 10
set C_modelName {cmpy_complex_top_fxp_sqrt<20, 2, 20, 2>}
set C_modelType { int 19 }
set C_modelArgList { 
	{ in_val_V_read int 20 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_val_V_read", "interface" : "wire", "bitwidth" : 20, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 19} ]}
# RTL Port declarations: 
set portNum 5
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ in_val_V_read sc_in sc_lv 20 signal 0 } 
	{ ap_return sc_out sc_lv 19 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "in_val_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "in_val_V_read", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}
set Spec2ImplPortList { 
	in_val_V_read { ap_none {  { in_val_V_read in_data 0 20 } } }
}
