set C_TypeInfoList {{ 
"triangle" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"out": [[], {"reference": "0"}] }],[],""], 
"0": [ "stream<padded_sample>", {"hls_type": {"stream": [[[[],"1"]],"2"]}}], 
"1": [ "padded_sample", {"struct": [[],[],[{ "padding": [[8],  {"scalar": "unsigned int"}]},{ "data": [[24],  {"scalar": "int"}]}],""]}],
"2": ["hls", ""]
}}
set moduleName triangle
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_none
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {triangle}
set C_modelType { void 0 }
set C_modelArgList {
	{ out_V int 32 regular {axi_s 1 volatile  { out_V Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "out_V", "interface" : "axis", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "out.V.padding","cData": "unsigned int","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]},{"low":8,"up":15,"cElement": [{"cName": "out.V.data","cData": "int","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]},{"low":16,"up":23,"cElement": [{"cName": "out.V.data","cData": "int","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]},{"low":24,"up":31,"cElement": [{"cName": "out.V.data","cData": "int","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} ]}
# RTL Port declarations: 
set portNum 5
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ out_V_TDATA sc_out sc_lv 32 signal 0 } 
	{ out_V_TVALID sc_out sc_logic 1 outvld 0 } 
	{ out_V_TREADY sc_in sc_logic 1 outacc 0 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "out_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_V", "role": "TDATA" }} , 
 	{ "name": "out_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_V", "role": "TVALID" }} , 
 	{ "name": "out_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "out_V", "role": "TREADY" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "triangle",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "out_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "out_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "val_V", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "err", "Type" : "OVld", "Direction" : "IO"}]}]}


set ArgLastReadFirstWriteLatency {
	triangle {
		out_V {Type O LastRead -1 FirstWrite 0}
		val_V {Type IO LastRead -1 FirstWrite -1}
		err {Type IO LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "1"}
	, {"Name" : "Interval", "Min" : "2", "Max" : "2"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	out_V { axis {  { out_V_TDATA out_data 1 32 }  { out_V_TVALID out_vld 1 1 }  { out_V_TREADY out_acc 0 1 } } }
}

set busDeadlockParameterList { 
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
