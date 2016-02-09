################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/opencv_hello_world.c 

OBJS += \
./src/opencv_hello_world.o 

C_DEPS += \
./src/opencv_hello_world.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Linux gcc compiler'
	arm-xilinx-linux-gnueabi-gcc -Wall -O0 -g3 -I"C:\Xilinx2016\SDK\2015.4\data\embeddedsw\ThirdParty\opencv\include" -I"C:\Xilinx2016\SDK\2015.4\data\embeddedsw\ThirdParty\opencv\include\opencv" -c -fmessage-length=0 -MT"$@" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


