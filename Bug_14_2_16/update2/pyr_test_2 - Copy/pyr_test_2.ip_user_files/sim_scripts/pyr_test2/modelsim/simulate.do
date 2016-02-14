onbreak {quit -f}
onerror {quit -f}

vsim -voptargs="+acc" -t 1ps -pli "C:/Xilinx/Vivado/2015.4/lib/win64.o/libxil_vsim.dll" -L unisims_ver -L unimacro_ver -L secureip -L xil_defaultlib -L lib_pkg_v1_0_2 -L fifo_generator_v13_0_1 -L lib_fifo_v1_0_4 -L lib_srl_fifo_v1_0_2 -L lib_cdc_v1_0_2 -L axi_datamover_v5_1_9 -L axi_sg_v4_1_2 -L axi_dma_v7_1_8 -L proc_sys_reset_v5_0_8 -L generic_baseblocks_v2_1_0 -L axi_infrastructure_v1_1_0 -L axi_register_slice_v2_1_7 -L axi_data_fifo_v2_1_6 -L axi_crossbar_v2_1_8 -L axis_infrastructure_v1_1_0 -L axis_register_slice_v1_1_7 -L axis_subset_converter_v1_1_7 -L xbip_utils_v3_0_5 -L axi_utils_v2_0_1 -L c_reg_fd_v12_0_1 -L xbip_dsp48_wrapper_v3_0_4 -L xbip_pipe_v3_0_1 -L xbip_dsp48_addsub_v3_0_1 -L xbip_addsub_v3_0_1 -L c_addsub_v12_0_8 -L c_mux_bit_v12_0_1 -L c_shift_ram_v12_0_8 -L xbip_bram18k_v3_0_1 -L mult_gen_v12_0_10 -L cmpy_v6_0_10 -L floating_point_v7_0_11 -L xfft_v9_0_9 -L axi_protocol_converter_v2_1_7 -L axi_clock_converter_v2_1_6 -L blk_mem_gen_v8_3_1 -L axi_dwidth_converter_v2_1_7 -lib xil_defaultlib xil_defaultlib.pyr_test2 xil_defaultlib.glbl

do {wave.do}

view wave
view structure
view signals

do {pyr_test2.udo}

run -all

quit -force
