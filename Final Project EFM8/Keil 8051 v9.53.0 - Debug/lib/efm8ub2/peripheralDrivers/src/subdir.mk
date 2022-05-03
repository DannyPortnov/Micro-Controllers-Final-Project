################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/peripheral_driver/src/spi_0.c 

OBJS += \
./lib/efm8ub2/peripheralDrivers/src/spi_0.OBJ 


# Each subdirectory must supply rules for building sources it contributes
lib/efm8ub2/peripheralDrivers/src/spi_0.OBJ: C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/peripheral_driver/src/spi_0.c
	@echo 'Building file: $<'
	@echo 'Invoking: Keil 8051 Compiler'
	C51 "@$(patsubst %.OBJ,%.__i,$@)" || $(RC)
	@echo 'Finished building: $<'
	@echo ' '

lib/efm8ub2/peripheralDrivers/src/spi_0.OBJ: C:/Users/danih/OneDrive\ -\ ort\ braude\ college\ of\ engineering/Desktop/מיקרו\ בקרים/v5_workspace/Middle\ Project/inc/config/efm8_config.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Register_Enums.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/peripheral_driver/inc/spi_0.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/EFM8UB2/inc/SI_EFM8UB2_Defs.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/si_toolchain.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdint.h C:/SimplicityStudio/developer/sdks/8051/v4.2.3/Device/shared/si8051Base/stdbool.h


