################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/src/disp.c \
C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/src/render.c 

OBJS += \
./lib/bsp/efm8_memory_lcd/src/disp.OBJ \
./lib/bsp/efm8_memory_lcd/src/render.OBJ 


# Each subdirectory must supply rules for building sources it contributes
lib/bsp/efm8_memory_lcd/src/disp.OBJ: C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/src/disp.c
	@echo 'Building file: $<'
	@echo 'Invoking: Keil 8051 Compiler'
	C51 "@$(patsubst %.OBJ,%.__i,$@)" || $(RC)
	@echo 'Finished building: $<'
	@echo ' '

lib/bsp/efm8_memory_lcd/src/disp.OBJ: C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/bsp/bsp.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/utils.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/spi.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/tick.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/disp.h C:/SimplicityStudio/developer/toolchains/keil_8051/9.60/INC/STRING.H C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/EFM8UB2_SLSTK2001A/config/bsp_config.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/config/spi_config.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Register_Enums.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Defs.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/si_toolchain.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdint.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdbool.h

lib/bsp/efm8_memory_lcd/src/render.OBJ: C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/src/render.c
	@echo 'Building file: $<'
	@echo 'Invoking: Keil 8051 Compiler'
	C51 "@$(patsubst %.OBJ,%.__i,$@)" || $(RC)
	@echo 'Finished building: $<'
	@echo ' '

lib/bsp/efm8_memory_lcd/src/render.OBJ: C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/bsp/bsp.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/disp.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/render.h C:/SimplicityStudio/developer/toolchains/keil_8051/9.60/INC/STRING.H C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/graphics/thinfont.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/EFM8UB2_SLSTK2001A/config/bsp_config.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_memory_lcd/inc/config/render_config.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Register_Enums.h C:/Users/danih/OneDrive\ -\ ort\ braude\ college\ of\ engineering/Desktop/מיקרו\ בקרים/v5_workspace/Middle\ Project/inc/config/memory_lcd_config.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Defs.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/si_toolchain.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdint.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdbool.h


