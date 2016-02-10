set C_TypeInfoList {{ 
"cmpy_complex_top" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"sig": [[], {"array": ["0", [1024]]}] }, {"sigRef": [[], {"array": ["0", [2048]]}] }, {"prealign": [[], {"array": ["1", [1024]]}] }, {"cmp": [[], {"array": ["2", [1024]]}] }, {"nL": [["const"], {"scalar": "int"}] }, {"nLExp": [["const"], {"scalar": "int"}] }, {"nLen": [["const"], {"scalar": "int"}] }, {"factor": [["const"],"3"] }],[],""], 
"3": [ "t_input_scalar", {"typedef": [[[],"4"],""]}], 
"1": [ "t_disp_scalar", {"typedef": [[[],"5"],""]}], 
"5": [ "ap_fixed<18, 12, 5, 3, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 18}}],[[], {"scalar": { "int": 12}}],[[], {"scalar": { "6": 5}}],[[], {"scalar": { "7": 3}}],[[], {"scalar": { "int": 0}}]],""]}}], 
"0": [ "t_input_complex", {"typedef": [[[],"8"],""]}], 
"8": [ "complex<ap_fixed<10, 1, 5, 3, 0> >", {"struct": [[],[{"_Tp":[[],"4"]}],[],""]}], 
"6": [ "ap_q_mode", {"enum": [[],[],[{"SC_RND":  {"scalar": "__integer__"}},{"SC_RND_ZERO":  {"scalar": "__integer__"}},{"SC_RND_MIN_INF":  {"scalar": "__integer__"}},{"SC_RND_INF":  {"scalar": "__integer__"}},{"SC_RND_CONV":  {"scalar": "__integer__"}},{"SC_TRN":  {"scalar": "__integer__"}},{"SC_TRN_ZERO":  {"scalar": "__integer__"}}],""]}], 
"2": [ "t_output_complex", {"typedef": [[[],"9"],""]}], 
"9": [ "complex<ap_fixed<20, 2, 0, 3, 0> >", {"struct": [[],[{"_Tp":[[],"10"]}],[],""]}], 
"10": [ "ap_fixed<20, 2, 0, 3, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 20}}],[[], {"scalar": { "int": 2}}],[[], {"scalar": { "6": 0}}],[[], {"scalar": { "7": 3}}],[[], {"scalar": { "int": 0}}]],""]}}], 
"4": [ "ap_fixed<10, 1, 5, 3, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 10}}],[[], {"scalar": { "int": 1}}],[[], {"scalar": { "6": 5}}],[[], {"scalar": { "7": 3}}],[[], {"scalar": { "int": 0}}]],""]}}], 
"7": [ "ap_o_mode", {"enum": [[],[],[{"SC_SAT":  {"scalar": "__integer__"}},{"SC_SAT_ZERO":  {"scalar": "__integer__"}},{"SC_SAT_SYM":  {"scalar": "__integer__"}},{"SC_WRAP":  {"scalar": "__integer__"}},{"SC_WRAP_SM":  {"scalar": "__integer__"}}],""]}]
}}
set moduleName cmpy_complex_top
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {cmpy_complex_top}
set C_modelType { void 0 }
set C_modelArgList { 
	{ sig int 24 regular {axi_s 0 volatile  { sig data } }  }
	{ sigRef int 24 regular {axi_s 0 volatile  { sigRef data } }  }
	{ prealign_V int 24 regular {axi_s 0 volatile  { prealign_V data } }  }
	{ cmp int 40 regular {axi_s 1 volatile  { cmp data } }  }
	{ nL int 32 regular  }
	{ nLExp int 32 unused  }
	{ nLen int 32 unused  }
	{ factor_V int 10 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "sig", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY", "bitSlice":[{"low":0,"up":9,"cElement": [{"cName": "sig._M_real.V","cData": "int10","bit_use": { "low": 0,"up": 9},"cArray": [{"low" : 0,"up" : 1023,"step" : 1}]}]},{"low":10,"up":19,"cElement": [{"cName": "sig._M_imag.V","cData": "int10","bit_use": { "low": 0,"up": 9},"cArray": [{"low" : 0,"up" : 1023,"step" : 1}]}]}]} , 
 	{ "Name" : "sigRef", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY", "bitSlice":[{"low":0,"up":9,"cElement": [{"cName": "sigRef._M_real.V","cData": "int10","bit_use": { "low": 0,"up": 9},"cArray": [{"low" : 0,"up" : 2047,"step" : 1}]}]},{"low":10,"up":19,"cElement": [{"cName": "sigRef._M_imag.V","cData": "int10","bit_use": { "low": 0,"up": 9},"cArray": [{"low" : 0,"up" : 2047,"step" : 1}]}]}]} , 
 	{ "Name" : "prealign_V", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY", "bitSlice":[{"low":0,"up":17,"cElement": [{"cName": "prealign.V","cData": "int18","bit_use": { "low": 0,"up": 17},"cArray": [{"low" : 0,"up" : 1023,"step" : 1}]}]}]} , 
 	{ "Name" : "cmp", "interface" : "axis", "bitwidth" : 40, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":19,"cElement": [{"cName": "cmp._M_real.V","cData": "int20","bit_use": { "low": 0,"up": 19},"cArray": [{"low" : 0,"up" : 1023,"step" : 1}]}]},{"low":20,"up":39,"cElement": [{"cName": "cmp._M_imag.V","cData": "int20","bit_use": { "low": 0,"up": 19},"cArray": [{"low" : 0,"up" : 1023,"step" : 1}]}]}]} , 
 	{ "Name" : "nL", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "nL","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "nLExp", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "nLExp","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "nLen", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "nLen","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "factor_V", "interface" : "wire", "bitwidth" : 10, "direction" : "READONLY", "bitSlice":[{"low":0,"up":9,"cElement": [{"cName": "factor.V","cData": "int10","bit_use": { "low": 0,"up": 9},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 22
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ sig_TDATA sc_in sc_lv 24 signal 0 } 
	{ sigRef_TDATA sc_in sc_lv 24 signal 1 } 
	{ prealign_V_TDATA sc_in sc_lv 24 signal 2 } 
	{ cmp_TDATA sc_out sc_lv 40 signal 3 } 
	{ nL sc_in sc_lv 32 signal 4 } 
	{ nLExp sc_in sc_lv 32 signal 5 } 
	{ nLen sc_in sc_lv 32 signal 6 } 
	{ factor_V sc_in sc_lv 10 signal 7 } 
	{ sigRef_TVALID sc_in sc_logic 1 invld 1 } 
	{ sigRef_TREADY sc_out sc_logic 1 inacc 1 } 
	{ prealign_V_TVALID sc_in sc_logic 1 invld 2 } 
	{ prealign_V_TREADY sc_out sc_logic 1 inacc 2 } 
	{ sig_TVALID sc_in sc_logic 1 invld 0 } 
	{ sig_TREADY sc_out sc_logic 1 inacc 0 } 
	{ cmp_TVALID sc_out sc_logic 1 outvld 3 } 
	{ cmp_TREADY sc_in sc_logic 1 outacc 3 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "sig_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "sig", "role": "TDATA" }} , 
 	{ "name": "sigRef_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "sigRef", "role": "TDATA" }} , 
 	{ "name": "prealign_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "prealign_V", "role": "TDATA" }} , 
 	{ "name": "cmp_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "cmp", "role": "TDATA" }} , 
 	{ "name": "nL", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "nL", "role": "default" }} , 
 	{ "name": "nLExp", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "nLExp", "role": "default" }} , 
 	{ "name": "nLen", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "nLen", "role": "default" }} , 
 	{ "name": "factor_V", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "factor_V", "role": "default" }} , 
 	{ "name": "sigRef_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "sigRef", "role": "TVALID" }} , 
 	{ "name": "sigRef_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "sigRef", "role": "TREADY" }} , 
 	{ "name": "prealign_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "prealign_V", "role": "TVALID" }} , 
 	{ "name": "prealign_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "prealign_V", "role": "TREADY" }} , 
 	{ "name": "sig_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "sig", "role": "TVALID" }} , 
 	{ "name": "sig_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "sig", "role": "TREADY" }} , 
 	{ "name": "cmp_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "cmp", "role": "TVALID" }} , 
 	{ "name": "cmp_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "cmp", "role": "TREADY" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }}  ]}
set Spec2ImplPortList { 
	sig { axis {  { sig_TDATA in_data 0 24 }  { sig_TVALID in_vld 0 1 }  { sig_TREADY in_acc 1 1 } } }
	sigRef { axis {  { sigRef_TDATA in_data 0 24 }  { sigRef_TVALID in_vld 0 1 }  { sigRef_TREADY in_acc 1 1 } } }
	prealign_V { axis {  { prealign_V_TDATA in_data 0 24 }  { prealign_V_TVALID in_vld 0 1 }  { prealign_V_TREADY in_acc 1 1 } } }
	cmp { axis {  { cmp_TDATA out_data 1 40 }  { cmp_TVALID out_vld 1 1 }  { cmp_TREADY out_acc 0 1 } } }
	nL { ap_none {  { nL in_data 0 32 } } }
	nLExp { ap_none {  { nLExp in_data 0 32 } } }
	nLen { ap_none {  { nLen in_data 0 32 } } }
	factor_V { ap_none {  { factor_V in_data 0 10 } } }
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
