# 
# Synthesis run script generated by Vivado
# 

debug::add_scope template.lib 1
set_msg_config -id {HDL 9-1061} -limit 100000
set_msg_config -id {HDL 9-1654} -limit 100000
create_project -in_memory -part xa7z020clg484-1I

set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir C:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.cache/wt [current_project]
set_property parent.project_path C:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.xpr [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
add_files C:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/FFTDMADesign.bd
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_processing_system7_0_0/FFTDMADesign_processing_system7_0_0.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_axi_dma_0_0/FFTDMADesign_axi_dma_0_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_axi_dma_0_0/FFTDMADesign_axi_dma_0_0.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_axi_dma_0_0/FFTDMADesign_axi_dma_0_0_clocks.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_rst_processing_system7_0_50M_0/FFTDMADesign_rst_processing_system7_0_50M_0_board.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_rst_processing_system7_0_50M_0/FFTDMADesign_rst_processing_system7_0_50M_0.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_rst_processing_system7_0_50M_0/FFTDMADesign_rst_processing_system7_0_50M_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_xbar_0/FFTDMADesign_xbar_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_xfft_0_0/FFTDMADesign_xfft_0_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_auto_pc_0/FFTDMADesign_auto_pc_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_auto_pc_1/FFTDMADesign_auto_pc_1_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_auto_us_0/FFTDMADesign_auto_us_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_auto_us_0/FFTDMADesign_auto_us_0_clocks.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_auto_us_1/FFTDMADesign_auto_us_1_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_auto_us_1/FFTDMADesign_auto_us_1_clocks.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_auto_us_2/FFTDMADesign_auto_us_2_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/ip/FFTDMADesign_auto_us_2/FFTDMADesign_auto_us_2_clocks.xdc]
set_property used_in_implementation false [get_files -all C:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/FFTDMADesign_ooc.xdc]
set_property is_locked true [get_files C:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/FFTDMADesign.bd]

read_verilog -library xil_defaultlib C:/Speedway/ZynqHW/2015_2/FFT_DMA_24102015/FFT_DMA_24102015.srcs/sources_1/bd/FFTDMADesign/hdl/FFTDMADesign_wrapper.v
read_xdc dont_touch.xdc
set_property used_in_implementation false [get_files dont_touch.xdc]
synth_design -top FFTDMADesign_wrapper -part xa7z020clg484-1I
write_checkpoint -noxdef FFTDMADesign_wrapper.dcp
catch { report_utilization -file FFTDMADesign_wrapper_utilization_synth.rpt -pb FFTDMADesign_wrapper_utilization_synth.pb }