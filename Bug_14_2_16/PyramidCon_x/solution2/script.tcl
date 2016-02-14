############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
open_project PyramidCon_x
set_top pyrconstuct_top
add_files PyramidCon_x/pyramidbuild.cpp
add_files pyr.h
add_files -tb PyramidCon_x/pyramid_build_test.cpp
add_files -tb PyramidCon_x/raw_img.dat
open_solution "solution2"
set_part {xc7z020clg484-1}
create_clock -period 5 -name default
#source "./PyramidCon_x/solution2/directives.tcl"
csim_design -O
csynth_design
cosim_design -O -trace_level port
export_design -evaluate verilog -format ip_catalog -vendor "pitchaya" -display_name "PyrConstruction"