set C_TypeInfoList {{ 
"pyrconstuct_top" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"imgIn": [[], {"array": ["0", [512]]}] }, {"pyrFilOut": [[], {"reference": "1"}] }, {"nL": [["const"], {"scalar": "int"}] }],[],""], 
"0": [ "cmpxDataIn", {"typedef": [[[],"2"],""]}], 
"1": [ "stream<std::complex<ap_fixed<17, 6, 0, 3, 0> > >", {"hls_type": {"stream": [[[[],"3"]],"4"]}}], 
"3": [ "complex<ap_fixed<17, 6, 0, 3, 0> >", {"struct": [[],[{"_Tp":[[],"5"]}],[],""]}], 
"5": [ "ap_fixed<17, 6, 0, 3, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 17}}],[[], {"scalar": { "int": 6}}],[[], {"scalar": { "6": 0}}],[[], {"scalar": { "7": 3}}],[[], {"scalar": { "int": 0}}]],""]}}], 
"6": [ "ap_q_mode", {"enum": [[],[],[{"SC_RND":  {"scalar": "__integer__"}},{"SC_RND_ZERO":  {"scalar": "__integer__"}},{"SC_RND_MIN_INF":  {"scalar": "__integer__"}},{"SC_RND_INF":  {"scalar": "__integer__"}},{"SC_RND_CONV":  {"scalar": "__integer__"}},{"SC_TRN":  {"scalar": "__integer__"}},{"SC_TRN_ZERO":  {"scalar": "__integer__"}}],""]}], 
"7": [ "ap_o_mode", {"enum": [[],[],[{"SC_SAT":  {"scalar": "__integer__"}},{"SC_SAT_ZERO":  {"scalar": "__integer__"}},{"SC_SAT_SYM":  {"scalar": "__integer__"}},{"SC_WRAP":  {"scalar": "__integer__"}},{"SC_WRAP_SM":  {"scalar": "__integer__"}}],""]}], 
"2": [ "complex<ap_fixed<16, 1, 5, 3, 0> >", {"struct": [[],[{"_Tp":[[],"8"]}],[],""]}], 
"8": [ "ap_fixed<16, 1, 5, 3, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 16}}],[[], {"scalar": { "int": 1}}],[[], {"scalar": { "6": 5}}],[[], {"scalar": { "7": 3}}],[[], {"scalar": { "int": 0}}]],""]}}],
"4": ["hls", ""]
}}
set moduleName pyrconstuct_top
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {pyrconstuct_top}
set C_modelType { void 0 }
set C_modelArgList { 
	{ imgIn int 32 regular {axi_s 0 volatile  { imgIn data } }  }
	{ pyrFilOut_V int 40 regular {axi_s 1 volatile  { pyrFilOut_V data } }  }
	{ nL int 32 unused  }
}
set C_modelArgMapList {[ 
	{ "Name" : "imgIn", "interface" : "axis", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "imgIn._M_real.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 511,"step" : 1}]}]},{"low":16,"up":31,"cElement": [{"cName": "imgIn._M_imag.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 511,"step" : 1}]}]}]} , 
 	{ "Name" : "pyrFilOut_V", "interface" : "axis", "bitwidth" : 40, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":16,"cElement": [{"cName": "pyrFilOut.V._M_real.V","cData": "int17","bit_use": { "low": 0,"up": 16},"cArray": [{"low" : 0,"up" : 1519,"step" : 1}]}]},{"low":17,"up":33,"cElement": [{"cName": "pyrFilOut.V._M_imag.V","cData": "int17","bit_use": { "low": 0,"up": 16},"cArray": [{"low" : 0,"up" : 1519,"step" : 1}]}]}]} , 
 	{ "Name" : "nL", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "nL","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ imgIn_TDATA sc_in sc_lv 32 signal 0 } 
	{ pyrFilOut_V_TDATA sc_out sc_lv 40 signal 1 } 
	{ nL sc_in sc_lv 32 signal 2 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ imgIn_TVALID sc_in sc_logic 1 invld 0 } 
	{ imgIn_TREADY sc_out sc_logic 1 inacc 0 } 
	{ pyrFilOut_V_TVALID sc_out sc_logic 1 outvld 1 } 
	{ pyrFilOut_V_TREADY sc_in sc_logic 1 outacc 1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "imgIn_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "imgIn", "role": "TDATA" }} , 
 	{ "name": "pyrFilOut_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "pyrFilOut_V", "role": "TDATA" }} , 
 	{ "name": "nL", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "nL", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "imgIn_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "imgIn", "role": "TVALID" }} , 
 	{ "name": "imgIn_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "imgIn", "role": "TREADY" }} , 
 	{ "name": "pyrFilOut_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "pyrFilOut_V", "role": "TVALID" }} , 
 	{ "name": "pyrFilOut_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "pyrFilOut_V", "role": "TREADY" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }}  ]}
set Spec2ImplPortList { 
	imgIn { axis {  { imgIn_TDATA in_data 0 32 }  { imgIn_TVALID in_vld 0 1 }  { imgIn_TREADY in_acc 1 1 } } }
	pyrFilOut_V { axis {  { pyrFilOut_V_TDATA out_data 1 40 }  { pyrFilOut_V_TVALID out_vld 1 1 }  { pyrFilOut_V_TREADY out_acc 0 1 } } }
	nL { ap_none {  { nL in_data 0 32 } } }
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
