################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP/AMR/Src/amr_poller.c \
../APP/AMR/Src/amr_serial.c \
../APP/AMR/Src/amr_serial_port.c \
../APP/AMR/Src/amr_timer.c 

OBJS += \
./APP/AMR/Src/amr_poller.o \
./APP/AMR/Src/amr_serial.o \
./APP/AMR/Src/amr_serial_port.o \
./APP/AMR/Src/amr_timer.o 

C_DEPS += \
./APP/AMR/Src/amr_poller.d \
./APP/AMR/Src/amr_serial.d \
./APP/AMR/Src/amr_serial_port.d \
./APP/AMR/Src/amr_timer.d 


# Each subdirectory must supply rules for building sources it contributes
APP/AMR/Src/amr_poller.o: ../APP/AMR/Src/amr_poller.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DCPPUTEST_STD_CPP_LIB_DISABLED -DDEBUG -DSTM32F407xx -c -I../Middlewares/Third_Party/LwIP/src/include/netif/ppp -I"E:/GitRepo/Com_Module/DevBoard/CPPUTEST/inc/CppUTestExt" -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Middlewares/Third_Party/LwIP/src/include/compat/stdc -I"E:/GitRepo/Com_Module/DevBoard/CPPUTEST/inc/CppUTest" -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/Third_Party/LwIP/system/arch -I../Middlewares/Third_Party/LwIP/src/include -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Middlewares/Third_Party/LwIP/src/include/compat/posix -I../LWIP/App -I../Core/Inc -I../Middlewares/Third_Party/LwIP/src/include/lwip -I"E:/GitRepo/Com_Module/DevBoard/CPPUTEST/inc" -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/arpa -I../Middlewares/Third_Party/LwIP/system -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/LwIP/src/include/lwip/priv -I../USB_DEVICE/Target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Middlewares/Third_Party/LwIP/src/include/lwip/prot -I"E:/GitRepo/Com_Module/DevBoard/APP/AMR/Inc" -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/sys -I../Middlewares/Third_Party/LwIP/src/include/lwip/apps -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Include -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../LWIP/Target -I../FATFS/Target -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/net -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/LwIP/src/include/netif -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"APP/AMR/Src/amr_poller.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
APP/AMR/Src/amr_serial.o: ../APP/AMR/Src/amr_serial.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DCPPUTEST_STD_CPP_LIB_DISABLED -DDEBUG -DSTM32F407xx -c -I../Middlewares/Third_Party/LwIP/src/include/netif/ppp -I"E:/GitRepo/Com_Module/DevBoard/CPPUTEST/inc/CppUTestExt" -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Middlewares/Third_Party/LwIP/src/include/compat/stdc -I"E:/GitRepo/Com_Module/DevBoard/CPPUTEST/inc/CppUTest" -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/Third_Party/LwIP/system/arch -I../Middlewares/Third_Party/LwIP/src/include -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Middlewares/Third_Party/LwIP/src/include/compat/posix -I../LWIP/App -I../Core/Inc -I../Middlewares/Third_Party/LwIP/src/include/lwip -I"E:/GitRepo/Com_Module/DevBoard/CPPUTEST/inc" -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/arpa -I../Middlewares/Third_Party/LwIP/system -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/LwIP/src/include/lwip/priv -I../USB_DEVICE/Target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Middlewares/Third_Party/LwIP/src/include/lwip/prot -I"E:/GitRepo/Com_Module/DevBoard/APP/AMR/Inc" -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/sys -I../Middlewares/Third_Party/LwIP/src/include/lwip/apps -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Include -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../LWIP/Target -I../FATFS/Target -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/net -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/LwIP/src/include/netif -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"APP/AMR/Src/amr_serial.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
APP/AMR/Src/amr_serial_port.o: ../APP/AMR/Src/amr_serial_port.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DCPPUTEST_STD_CPP_LIB_DISABLED -DDEBUG -DSTM32F407xx -c -I../Middlewares/Third_Party/LwIP/src/include/netif/ppp -I"E:/GitRepo/Com_Module/DevBoard/CPPUTEST/inc/CppUTestExt" -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Middlewares/Third_Party/LwIP/src/include/compat/stdc -I"E:/GitRepo/Com_Module/DevBoard/CPPUTEST/inc/CppUTest" -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/Third_Party/LwIP/system/arch -I../Middlewares/Third_Party/LwIP/src/include -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Middlewares/Third_Party/LwIP/src/include/compat/posix -I../LWIP/App -I../Core/Inc -I../Middlewares/Third_Party/LwIP/src/include/lwip -I"E:/GitRepo/Com_Module/DevBoard/CPPUTEST/inc" -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/arpa -I../Middlewares/Third_Party/LwIP/system -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/LwIP/src/include/lwip/priv -I../USB_DEVICE/Target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Middlewares/Third_Party/LwIP/src/include/lwip/prot -I"E:/GitRepo/Com_Module/DevBoard/APP/AMR/Inc" -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/sys -I../Middlewares/Third_Party/LwIP/src/include/lwip/apps -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Include -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../LWIP/Target -I../FATFS/Target -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/net -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/LwIP/src/include/netif -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"APP/AMR/Src/amr_serial_port.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
APP/AMR/Src/amr_timer.o: ../APP/AMR/Src/amr_timer.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DCPPUTEST_STD_CPP_LIB_DISABLED -DDEBUG -DSTM32F407xx -c -I../Middlewares/Third_Party/LwIP/src/include/netif/ppp -I"E:/GitRepo/Com_Module/DevBoard/CPPUTEST/inc/CppUTestExt" -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Middlewares/Third_Party/LwIP/src/include/compat/stdc -I"E:/GitRepo/Com_Module/DevBoard/CPPUTEST/inc/CppUTest" -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/Third_Party/LwIP/system/arch -I../Middlewares/Third_Party/LwIP/src/include -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Middlewares/Third_Party/LwIP/src/include/compat/posix -I../LWIP/App -I../Core/Inc -I../Middlewares/Third_Party/LwIP/src/include/lwip -I"E:/GitRepo/Com_Module/DevBoard/CPPUTEST/inc" -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/arpa -I../Middlewares/Third_Party/LwIP/system -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/LwIP/src/include/lwip/priv -I../USB_DEVICE/Target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Middlewares/Third_Party/LwIP/src/include/lwip/prot -I"E:/GitRepo/Com_Module/DevBoard/APP/AMR/Inc" -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/sys -I../Middlewares/Third_Party/LwIP/src/include/lwip/apps -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Include -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../LWIP/Target -I../FATFS/Target -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/net -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/LwIP/src/include/netif -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"APP/AMR/Src/amr_timer.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

