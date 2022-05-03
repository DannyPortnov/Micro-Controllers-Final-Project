################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
A51_UPPER_SRCS += \
C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/SILABS_STARTUP.A51 

C_SRCS += \
../src/InitDevice.c \
../src/Middle\ Project_main.c 

OBJS += \
./src/InitDevice.OBJ \
./src/Middle\ Project_main.OBJ \
./src/SILABS_STARTUP.OBJ 


# Each subdirectory must supply rules for building sources it contributes
src/%.OBJ: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Keil 8051 Compiler'
	C51 "@$(patsubst %.OBJ,%.__i,$@)" || $(RC)
	@echo 'Finished building: $<'
	@echo ' '

src/InitDevice.OBJ: C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Register_Enums.h C:/Users/danih/OneDrive\ -\ ort\ braude\ college\ of\ engineering/Desktop/מיקרו\ בקרים/v5_workspace/Middle\ Project/inc/InitDevice.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Defs.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/si_toolchain.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdint.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdbool.h

src/Middle\ Project_main.OBJ: ../src/Middle\ Project_main.c
	@echo 'Building file: $<'
	@echo 'Invoking: Keil 8051 Compiler'
	C51 "@$(patsubst %.OBJ,%.__i,$@)" || $(RC)
	@echo 'Finished building: $<'
	@echo ' '

src/Middle\ Project_main.OBJ: C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/bsp/bsp.h C:/Users/danih/OneDrive\ -\ ort\ braude\ college\ of\ engineering/Desktop/מיקרו\ בקרים/v5_workspace/Middle\ Project/inc/InitDevice.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/disp.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/tick.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/render.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/EFM8UB2_SLSTK2001A/config/bsp_config.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/config/render_config.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Register_Enums.h C:/Users/danih/OneDrive\ -\ ort\ braude\ college\ of\ engineering/Desktop/מיקרו\ בקרים/v5_workspace/Middle\ Project/inc/config/memory_lcd_config.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Defs.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/si_toolchain.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdint.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdbool.h

src/SILABS_STARTUP.OBJ: C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/SILABS_STARTUP.A51
	@echo 'Building file: $<'
	@echo 'Invoking: Keil 8051 Assembler'
	AX51 "@$(patsubst %.OBJ,%.__ia,$@)" || $(RC)
	@echo 'Finished building: $<'
	@echo ' '


