set moduleName cmpy_complex_top_cordic_base
set isCombinational 0
set isDatapathOnly 1
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set pipeII 1
set pipeLatency 10
set C_modelName {cmpy_complex_top_cordic_base}
set C_modelType { int 16 }
set C_modelArgList { 
	{ inputData_cartesian_M_real_V_read int 15 regular  }
	{ inputData_cartesian_M_imag_V_read int 15 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "inputData_cartesian_M_real_V_read", "interface" : "wire", "bitwidth" : 15, "direction" : "READONLY"} , 
 	{ "Name" : "inputData_cartesian_M_imag_V_read", "interface" : "wire", "bitwidth" : 15, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 16} ]}
# RTL Port declarations: 
set portNum 6
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ inputData_cartesian_M_real_V_read sc_in sc_lv 15 signal 0 } 
	{ inputData_cartesian_M_imag_V_read sc_in sc_lv 15 signal 1 } 
	{ ap_return sc_out sc_lv 16 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "inputData_cartesian_M_real_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "inputData_cartesian_M_real_V_read", "role": "default" }} , 
 	{ "name": "inputData_cartesian_M_imag_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "inputData_cartesian_M_imag_V_read", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}
set Spec2ImplPortList { 
	inputData_cartesian_M_real_V_read { ap_none {  { inputData_cartesian_M_real_V_read in_data 0 15 } } }
	inputData_cartesian_M_imag_V_read { ap_none {  { inputData_cartesian_M_imag_V_read in_data 0 15 } } }
}
