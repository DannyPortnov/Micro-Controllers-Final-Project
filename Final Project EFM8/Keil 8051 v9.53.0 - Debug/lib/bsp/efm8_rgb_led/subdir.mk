################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_rgb_led/rgb_led.c 

OBJS += \
./lib/bsp/efm8_rgb_led/rgb_led.OBJ 


# Each subdirectory must supply rules for building sources it contributes
lib/bsp/efm8_rgb_led/rgb_led.OBJ: C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_rgb_led/rgb_led.c
	@echo 'Building file: $<'
	@echo 'Invoking: Keil 8051 Compiler'
	C51 "@$(patsubst %.OBJ,%.__i,$@)" || $(RC)
	@echo 'Finished building: $<'
	@echo ' '

lib/bsp/efm8_rgb_led/rgb_led.OBJ: C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/bsp/bsp.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/common/drivers/efm8_rgb_led/rgb_led.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/kits/EFM8UB2_SLSTK2001A/config/bsp_config.h C:/Users/danih/OneDrive\ -\ ort\ braude\ college\ of\ engineering/Desktop/מיקרו\ בקרים/v5_workspace/Middle\ Project/inc/config/rgb_led_config.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Register_Enums.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Defs.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/si_toolchain.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdint.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdbool.h


