################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/bsp/efm8_memory_lcd/spi.c \
C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/bsp/efm8_memory_lcd/tick.c 

OBJS += \
./lib/efm8ub2/bsp/efm8_memory_lcd/src/spi.OBJ \
./lib/efm8ub2/bsp/efm8_memory_lcd/src/tick.OBJ 


# Each subdirectory must supply rules for building sources it contributes
lib/efm8ub2/bsp/efm8_memory_lcd/src/spi.OBJ: C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/bsp/efm8_memory_lcd/spi.c
	@echo 'Building file: $<'
	@echo 'Invoking: Keil 8051 Compiler'
	C51 "@$(patsubst %.OBJ,%.__i,$@)" || $(RC)
	@echo 'Finished building: $<'
	@echo ' '

lib/efm8ub2/bsp/efm8_memory_lcd/src/spi.OBJ: C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/bsp/bsp.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/spi.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/peripheral_driver/inc/spi_0.h C:/SimplicityStudio/developer/toolchains/keil_8051/9.60/INC/STRING.H C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/EFM8UB2_SLSTK2001A/config/bsp_config.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/config/spi_config.h C:/Users/danih/OneDrive\ -\ ort\ braude\ college\ of\ engineering/Desktop/מיקרו\ בקרים/v5_workspace/Middle\ Project/inc/config/efm8_config.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Register_Enums.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/disp.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Defs.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/si_toolchain.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdint.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdbool.h

lib/efm8ub2/bsp/efm8_memory_lcd/src/tick.OBJ: C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/bsp/efm8_memory_lcd/tick.c
	@echo 'Building file: $<'
	@echo 'Invoking: Keil 8051 Compiler'
	C51 "@$(patsubst %.OBJ,%.__i,$@)" || $(RC)
	@echo 'Finished building: $<'
	@echo ' '

lib/efm8ub2/bsp/efm8_memory_lcd/src/tick.OBJ: C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/bsp/bsp.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/tick.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/EFM8UB2_SLSTK2001A/config/bsp_config.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Register_Enums.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Defs.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/si_toolchain.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdint.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdbool.h


