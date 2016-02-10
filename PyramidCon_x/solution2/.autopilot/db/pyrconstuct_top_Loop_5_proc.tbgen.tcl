set moduleName pyrconstuct_top_Loop_5_proc
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {pyrconstuct_top_Loop_5_proc}
set C_modelType { void 0 }
set C_modelArgList { 
	{ ifftPyrOut int 48 regular {fifo 0 volatile }  }
	{ pyrFilOut_V int 40 regular {axi_s 1 volatile  { pyrFilOut_V data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "ifftPyrOut", "interface" : "fifo", "bitwidth" : 48, "direction" : "READONLY"} , 
 	{ "Name" : "pyrFilOut_V", "interface" : "axis", "bitwidth" : 40, "direction" : "WRITEONLY"} ]}
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
	{ ifftPyrOut_dout sc_in sc_lv 48 signal 0 } 
	{ ifftPyrOut_empty_n sc_in sc_logic 1 signal 0 } 
	{ ifftPyrOut_read sc_out sc_logic 1 signal 0 } 
	{ pyrFilOut_V_TDATA sc_out sc_lv 40 signal 1 } 
	{ pyrFilOut_V_TVALID sc_out sc_logic 1 outvld 1 } 
	{ pyrFilOut_V_TREADY sc_in sc_logic 1 outacc 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ifftPyrOut_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":48, "type": "signal", "bundle":{"name": "ifftPyrOut", "role": "dout" }} , 
 	{ "name": "ifftPyrOut_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ifftPyrOut", "role": "empty_n" }} , 
 	{ "name": "ifftPyrOut_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ifftPyrOut", "role": "read" }} , 
 	{ "name": "pyrFilOut_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "pyrFilOut_V", "role": "TDATA" }} , 
 	{ "name": "pyrFilOut_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "pyrFilOut_V", "role": "TVALID" }} , 
 	{ "name": "pyrFilOut_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "pyrFilOut_V", "role": "TREADY" }}  ]}
set Spec2ImplPortList { 
	ifftPyrOut { ap_fifo {  { ifftPyrOut_dout fifo_data 0 48 }  { ifftPyrOut_empty_n fifo_status 0 1 }  { ifftPyrOut_read fifo_update 1 1 } } }
	pyrFilOut_V { axis {  { pyrFilOut_V_TDATA out_data 1 40 }  { pyrFilOut_V_TVALID out_vld 1 1 }  { pyrFilOut_V_TREADY out_acc 0 1 } } }
}
