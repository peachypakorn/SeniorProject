
call xelab xil_defaultlib.apatb_cmpy_complex_top_top -prj cmpy_complex_top.prj --lib "ieee_proposed=./ieee_proposed" -s cmpy_complex_top 
call xsim --noieeewarnings cmpy_complex_top -tclbatch cmpy_complex_top.tcl

