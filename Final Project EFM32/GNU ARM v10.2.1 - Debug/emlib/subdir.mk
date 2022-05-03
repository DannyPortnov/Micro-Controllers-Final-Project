################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../emlib/em_timer.c 

OBJS += \
./emlib/em_timer.o 

C_DEPS += \
./emlib/em_timer.d 


# Each subdirectory must supply rules for building sources it contributes
emlib/em_timer.o: ../emlib/em_timer.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m4 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32WG990F256=1' '-DSL_BOARD_NAME="BRD2400A"' '-DSL_BOARD_REV="C01"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:\Users\danih\OneDrive - ort braude college of engineering\Desktop\מיקרו בקרים\v5_workspace\Lab7\config" -I"C:\Users\danih\OneDrive - ort braude college of engineering\Desktop\מיקרו בקרים\v5_workspace\Lab7\autogen" -I"C:\Users\danih\OneDrive - ort braude college of engineering\Desktop\מיקרו בקרים\v5_workspace\Lab7" -I"C:/Users/danih/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32WG/Include" -I"C:/Users/danih/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/danih/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Include" -I"C:/Users/danih/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/danih/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/danih/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/host/inc" -I"C:/Users/danih/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/danih/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/danih/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -Os -Wall -Wextra -fno-builtin -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h -mfpu=fpv4-sp-d16 -mfloat-abi=softfp -c -fmessage-length=0 -MMD -MP -MF"emlib/em_timer.d" -MT"emlib/em_timer.o" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


