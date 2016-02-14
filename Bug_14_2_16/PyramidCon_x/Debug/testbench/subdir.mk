################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../pyramid_build_test.cpp 

OBJS += \
./testbench/pyramid_build_test.o 

CPP_DEPS += \
./testbench/pyramid_build_test.d 


# Each subdirectory must supply rules for building sources it contributes
testbench/pyramid_build_test.o: H:/m/3DTV/Hardware/FPGA/PyramidCon/pyramid_build_test.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DAESL_TB -D__llvm__ -D__llvm__ -ID:/Xilinx/Vivado_HLS/2015.4/include -ID:/Xilinx/Vivado_HLS/2015.4/win64/tools/systemc/include -IH:/m/3DTV/Hardware/FPGA -ID:/Xilinx/Vivado_HLS/2015.4/include/etc -ID:/Xilinx/Vivado_HLS/2015.4/include/ap_sysc -ID:/Xilinx/Vivado_HLS/2015.4/win64/tools/auto_cc/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


