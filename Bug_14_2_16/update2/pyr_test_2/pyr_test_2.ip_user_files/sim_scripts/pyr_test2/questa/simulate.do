onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -pli "C:/Xilinx2016/Vivado/2015.4/lib/win64.o/libxil_vsim.dll" -lib xil_defaultlib pyr_test2_opt

do {wave.do}

view wave
view structure
view signals

do {pyr_test2.udo}

run -all

quit -force
