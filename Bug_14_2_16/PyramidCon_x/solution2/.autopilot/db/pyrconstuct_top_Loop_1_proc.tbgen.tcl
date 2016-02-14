set moduleName pyrconstuct_top_Loop_1_proc
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {pyrconstuct_top_Loop_1_proc}
set C_modelType { void 0 }
set C_modelArgList { 
	{ imgIn int 32 regular {axi_s 0 volatile  { imgIn data } }  }
	{ imgInTmp int 32 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "imgIn", "interface" : "axis", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "imgInTmp", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ imgIn_TDATA sc_in sc_lv 32 signal 0 } 
	{ imgIn_TVALID sc_in sc_logic 1 invld 0 } 
	{ imgIn_TREADY sc_out sc_logic 1 inacc 0 } 
	{ imgInTmp_din sc_out sc_lv 32 signal 1 } 
	{ imgInTmp_full_n sc_in sc_logic 1 signal 1 } 
	{ imgInTmp_write sc_out sc_logic 1 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "imgIn_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "imgIn", "role": "TDATA" }} , 
 	{ "name": "imgIn_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "imgIn", "role": "TVALID" }} , 
 	{ "name": "imgIn_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "imgIn", "role": "TREADY" }} , 
 	{ "name": "imgInTmp_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "imgInTmp", "role": "din" }} , 
 	{ "name": "imgInTmp_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "imgInTmp", "role": "full_n" }} , 
 	{ "name": "imgInTmp_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "imgInTmp", "role": "write" }}  ]}
set Spec2ImplPortList { 
	imgIn { axis {  { imgIn_TDATA in_data 0 32 }  { imgIn_TVALID in_vld 0 1 }  { imgIn_TREADY in_acc 1 1 } } }
	imgInTmp { ap_fifo {  { imgInTmp_din fifo_data 1 32 }  { imgInTmp_full_n fifo_status 0 1 }  { imgInTmp_write fifo_update 1 1 } } }
}
