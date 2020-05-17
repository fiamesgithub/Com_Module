################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Core/Startup/startup_stm32f407ighx.s 

OBJS += \
./Core/Startup/startup_stm32f407ighx.o 


# Each subdirectory must supply rules for building sources it contributes
Core/Startup/%.o: ../Core/Startup/%.s
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DCPPUTEST_STD_CPP_LIB_DISABLED -c -I"E:/GitRepo/Com_Module/DevBoard/CPPUTEST/inc/CppUTestExt" -I"E:/GitRepo/Com_Module/DevBoard/CPPUTEST/inc/CppUTest" -I"E:/GitRepo/Com_Module/DevBoard/CPPUTEST/inc" -I"E:/GitRepo/Com_Module/DevBoard/APP/AMR/Inc" -x assembler-with-cpp --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

