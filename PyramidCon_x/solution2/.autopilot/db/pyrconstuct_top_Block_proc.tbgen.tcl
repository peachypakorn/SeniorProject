set moduleName pyrconstuct_top_Block_proc
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 1
set C_modelName {pyrconstuct_top_Block__proc}
set C_modelType { void 0 }
set C_modelArgList { 
	{ fft_config2_data_V int 16 regular {fifo 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "fft_config2_data_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 10
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ fft_config2_data_V_din sc_out sc_lv 16 signal 0 } 
	{ fft_config2_data_V_full_n sc_in sc_logic 1 signal 0 } 
	{ fft_config2_data_V_write sc_out sc_logic 1 signal 0 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "fft_config2_data_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fft_config2_data_V", "role": "din" }} , 
 	{ "name": "fft_config2_data_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fft_config2_data_V", "role": "full_n" }} , 
 	{ "name": "fft_config2_data_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fft_config2_data_V", "role": "write" }}  ]}
set Spec2ImplPortList { 
	fft_config2_data_V { ap_fifo {  { fft_config2_data_V_din fifo_data 1 16 }  { fft_config2_data_V_full_n fifo_status 0 1 }  { fft_config2_data_V_write fifo_update 1 1 } } }
}
