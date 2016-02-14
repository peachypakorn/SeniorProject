
call xelab xil_defaultlib.apatb_pyrconstuct_top_top -prj pyrconstuct_top.prj --lib "ieee_proposed=./ieee_proposed" -s pyrconstuct_top -debug wave
call xsim --noieeewarnings pyrconstuct_top -tclbatch pyrconstuct_top.tcl

