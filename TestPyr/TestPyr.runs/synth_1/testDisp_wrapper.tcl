# 
# Synthesis run script generated by Vivado
# 

set_msg_config -id {HDL 9-1061} -limit 100000
set_msg_config -id {HDL 9-1654} -limit 100000
create_project -in_memory -part xc7z020clg484-1

set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -source 4 -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir F:/SeniorProj/TestPyr/TestPyr.cache/wt [current_project]
set_property parent.project_path F:/SeniorProj/TestPyr/TestPyr.xpr [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property board_part em.avnet.com:zed:part0:1.3 [current_project]
set_property ip_repo_paths {
  f:/FPGA/exp/DispCheck/solution1/impl/ip
  f:/FPGA/PyramidCon_x/solution2/impl/ip
} [current_project]
set_property vhdl_version vhdl_2k [current_fileset]
add_files F:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/testDisp.bd
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_axi_dma_0_0/testDisp_axi_dma_0_0_ooc.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_axi_dma_0_0/testDisp_axi_dma_0_0.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_axi_dma_0_0/testDisp_axi_dma_0_0_clocks.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_xbar_0/testDisp_xbar_0_ooc.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_processing_system7_0_0_1/testDisp_processing_system7_0_0.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_rst_processing_system7_0_100M_0/testDisp_rst_processing_system7_0_100M_0_board.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_rst_processing_system7_0_100M_0/testDisp_rst_processing_system7_0_100M_0.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_rst_processing_system7_0_100M_0/testDisp_rst_processing_system7_0_100M_0_ooc.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_pyrconstuct_top_0_0/constraints/pyrconstuct_top_ooc.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_axis_subset_converter_0_0/testDisp_axis_subset_converter_0_0_ooc.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_xbar_1/testDisp_xbar_1_ooc.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_auto_pc_0/testDisp_auto_pc_0_ooc.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_auto_pc_1/testDisp_auto_pc_1_ooc.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_auto_us_0/testDisp_auto_us_0_ooc.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_auto_us_0/testDisp_auto_us_0_clocks.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_auto_us_1/testDisp_auto_us_1_ooc.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_auto_us_1/testDisp_auto_us_1_clocks.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_auto_us_2/testDisp_auto_us_2_ooc.xdc]
set_property used_in_implementation false [get_files -all f:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/ip/testDisp_auto_us_2/testDisp_auto_us_2_clocks.xdc]
set_property used_in_implementation false [get_files -all F:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/testDisp_ooc.xdc]
set_property is_locked true [get_files F:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/testDisp.bd]

read_verilog -library xil_defaultlib F:/SeniorProj/TestPyr/TestPyr.srcs/sources_1/bd/testDisp/hdl/testDisp_wrapper.v
read_xdc dont_touch.xdc
set_property used_in_implementation false [get_files dont_touch.xdc]
synth_design -top testDisp_wrapper -part xc7z020clg484-1
write_checkpoint -noxdef testDisp_wrapper.dcp
catch { report_utilization -file testDisp_wrapper_utilization_synth.rpt -pb testDisp_wrapper_utilization_synth.pb }