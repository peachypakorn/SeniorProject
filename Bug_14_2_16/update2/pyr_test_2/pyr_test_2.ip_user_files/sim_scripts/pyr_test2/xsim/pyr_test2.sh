#!/bin/bash -f
# Vivado (TM) v2015.4 (64-bit)
#
# Filename    : pyr_test2.sh
# Simulator   : Xilinx Vivado Simulator
# Description : Simulation script for compiling, elaborating and verifying the project source files.
#               The script will automatically create the design libraries sub-directories in the run
#               directory, add the library logical mappings in the simulator setup file, create default
#               'do/prj' file, execute compilation, elaboration and simulation steps.
#
# Generated by Vivado on Sun Feb 14 09:25:45 +0700 2016
# IP Build 1412160 on Tue Nov 17 13:47:24 MST 2015 
#
# usage: pyr_test2.sh [-help]
# usage: pyr_test2.sh [-lib_map_path]
# usage: pyr_test2.sh [-noclean_files]
# usage: pyr_test2.sh [-reset_run]
#
# ********************************************************************************************************

# Script info
echo -e "pyr_test2.sh - Script generated by export_simulation (Vivado v2015.4 (64-bit)-id)\n"

# Script usage
usage()
{
  msg="Usage: pyr_test2.sh [-help]\n\
Usage: pyr_test2.sh [-lib_map_path]\n\
Usage: pyr_test2.sh [-reset_run]\n\
Usage: pyr_test2.sh [-noclean_files]\n\n\
[-help] -- Print help information for this script\n\n\
[-lib_map_path <path>] -- Compiled simulation library directory path. The simulation library is compiled\n\
using the compile_simlib tcl command. Please see 'compile_simlib -help' for more information.\n\n\
[-reset_run] -- Recreate simulator setup files and library mappings for a clean run. The generated files\n\
from the previous run will be removed. If you don't want to remove the simulator generated files, use the\n\
-noclean_files switch.\n\n\
[-noclean_files] -- Reset previous run, but do not remove simulator generated files from the previous run.\n\n"
  echo -e $msg
  exit 1
}

if [[ ($# == 1 ) && ($1 != "-lib_map_path" && $1 != "-noclean_files" && $1 != "-reset_run" && $1 != "-help" && $1 != "-h") ]]; then
  echo -e "ERROR: Unknown option specified '$1' (type \"./pyr_test2.sh -help\" for more information)\n"
  exit 1
fi

if [[ ($1 == "-help" || $1 == "-h") ]]; then
  usage
fi

# STEP: setup
setup()
{
  case $1 in
    "-lib_map_path" )
      if [[ ($2 == "") ]]; then
        echo -e "ERROR: Simulation library directory path not specified (type \"./pyr_test2.sh -help\" for more information)\n"
        exit 1
      fi
      # precompiled simulation library directory path
    ;;
    "-reset_run" )
      reset_run
      echo -e "INFO: Simulation run files deleted.\n"
      exit 0
    ;;
    "-noclean_files" )
      # do not remove previous data
    ;;
    * )
  esac

  # Add any setup/initialization commands here:-

  # <user specific commands>

}

# Remove generated data from the previous run and re-create setup files/library mappings
reset_run()
{
  files_to_remove=(xelab.pb xsim.jou xvhdl.log xvlog.log compile.log elaborate.log simulate.log xelab.log xsim.log run.log xvhdl.pb xvlog.pb pyr_test2.wdb xsim.dir)
  for (( i=0; i<${#files_to_remove[*]}; i++ )); do
    file="${files_to_remove[i]}"
    if [[ -e $file ]]; then
      rm -rf $file
    fi
  done
}

# Main steps
run()
{
  setup $1 $2
  compile
  elaborate
  simulate
}


# RUN_STEP: <compile>
compile()
{
  # Command line options
  opts_ver="-m64 --relax"
  opts_vhd="-m64 --relax"

  # Compile design files
  xvlog $opts_ver -prj vlog.prj 2>&1 | tee compile.log
  xvhdl $opts_vhd -prj vhdl.prj 2>&1 | tee compile.log

}

# RUN_STEP: <elaborate>
elaborate()
{
  xelab --relax --debug typical --mt auto -wto 45750b0cb75d4d8d817eefb7742be92b -m64 -L xil_defaultlib -L lib_pkg_v1_0_2 -L fifo_generator_v13_0_1 -L lib_fifo_v1_0_4 -L lib_srl_fifo_v1_0_2 -L lib_cdc_v1_0_2 -L axi_datamover_v5_1_9 -L axi_sg_v4_1_2 -L axi_dma_v7_1_8 -L proc_sys_reset_v5_0_8 -L generic_baseblocks_v2_1_0 -L axi_infrastructure_v1_1_0 -L axi_register_slice_v2_1_7 -L axi_data_fifo_v2_1_6 -L axi_crossbar_v2_1_8 -L axis_infrastructure_v1_1_0 -L axis_register_slice_v1_1_7 -L axis_subset_converter_v1_1_7 -L xbip_utils_v3_0_5 -L axi_utils_v2_0_1 -L c_reg_fd_v12_0_1 -L xbip_dsp48_wrapper_v3_0_4 -L xbip_pipe_v3_0_1 -L xbip_dsp48_addsub_v3_0_1 -L xbip_addsub_v3_0_1 -L c_addsub_v12_0_8 -L c_mux_bit_v12_0_1 -L c_shift_ram_v12_0_8 -L xbip_bram18k_v3_0_1 -L mult_gen_v12_0_10 -L cmpy_v6_0_10 -L floating_point_v7_0_11 -L xfft_v9_0_9 -L axi_protocol_converter_v2_1_7 -L axi_clock_converter_v2_1_6 -L blk_mem_gen_v8_3_1 -L axi_dwidth_converter_v2_1_7 -L unisims_ver -L unimacro_ver -L secureip --snapshot pyr_test2 xil_defaultlib.pyr_test2 xil_defaultlib.glbl -log elaborate.log
}

# RUN_STEP: <simulate>
simulate()
{
  xsim pyr_test2 -key {Behavioral:sim_1:Functional:pyr_test2} -tclbatch cmd.tcl -log simulate.log
}
# Script usage
usage()
{
  msg="Usage: pyr_test2.sh [-help]\n\
Usage: pyr_test2.sh [-lib_map_path]\n\
Usage: pyr_test2.sh [-reset_run]\n\
Usage: pyr_test2.sh [-noclean_files]\n\n\
[-help] -- Print help information for this script\n\n\
[-lib_map_path <path>] -- Compiled simulation library directory path. The simulation library is compiled\n\
using the compile_simlib tcl command. Please see 'compile_simlib -help' for more information.\n\n\
[-reset_run] -- Recreate simulator setup files and library mappings for a clean run. The generated files\n\
from the previous run will be removed. If you don't want to remove the simulator generated files, use the\n\
-noclean_files switch.\n\n\
[-noclean_files] -- Reset previous run, but do not remove simulator generated files from the previous run.\n\n"
  echo -e $msg
  exit 1
}


# Launch script
run $1 $2