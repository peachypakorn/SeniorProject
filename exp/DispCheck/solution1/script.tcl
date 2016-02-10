############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
open_project DispCheck
set_top cmpy_complex_top
add_files DispCheck/disp.cpp
add_files DispCheck/fxp_sqtrt.h
add_files DispCheck/sincos.h
add_files -tb DispCheck/disp_test.cpp
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./DispCheck/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -evaluate verilog -format ip_catalog
