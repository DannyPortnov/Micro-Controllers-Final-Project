/***************************************************************************//**
 * Simple LED Blink  for EFM32WG_STK3800
 *******************************************************************************
 * Copyright (C) 2021 BRAUDE COLLEGE
 * Electronics & Electrical Engineering Department
 * All rights reserved.
 *******************************************************************************
 * Owner    :  Dr. Fadil Tareef
 * FILE NAME    :  EX6_2.c
 * DATE         :  20 NOV 2021
 * TARGET MCU   :  EFM32WG_STK3800
 * DESCRIPTION  :  Simple SIGNAL GENERATING example  for EFM32WG_STK3800 using
 *                TIMER0 with CMPARE mode (without interrupt) using
 *                 emlib API functions.
 *                This example generates a 1KHz signal at PD1 pin.
 * NOTES        :  This program created by simplicity studio 5 from imported
 *                  example.
 ******************************************************************************/
#include "em_device.h"
#include "em_chip.h"
#include "em_cmu.h"
#include "em_gpio.h"
#include "em_timer.h"

// Default prescale value
#define TIMER0_PRESCALE timerPrescale1

#define BSP_GPIO_SIGNAL_PORT       gpioPortD
#define BSP_GPIO_SIGNAL_PIN    1
void Device_Init(void);

/**************************************************************************//**
 * @brief  Main function
 *****************************************************************************/
int main(void) 
{
  /* This function addresses some chip errata and
  should be called at the start of every EFM32 application
  (need em_system.c) */
  CHIP_Init();
  // Device Initionalization
  Device_Init();

  while(1) {
      if (TIMER0->IF==1){ //if Timer0 overflew
          GPIO->P[BSP_GPIO_SIGNAL_PORT].DOUTTGL = (1 << BSP_GPIO_SIGNAL_PIN);
          TIMER0->IFC=1;
      }
     }
}

void Device_Init(void) {
  //System clock is default 14Mhz
  // Enable GPIO,TIMER0  peripheral clock
  CMU->HFPERCLKEN0 = (1 << 13) | (1 << 5);
  // Configure PD1 pin as digital output (push-pull)
  GPIO->P[BSP_GPIO_SIGNAL_PORT].MODEL = 4 << 4;
  //Set prescale
  TIMER0->CTRL=10 << 24;
  //Initialize timer0 value, default is 0 already
  //TIMER0->CNT=0;
  //Use two ticks for ~3.42khz (top starts at 0!)
  //14MHz/1024 (hz), then -1 (s) then *2 (num of ticks) then -1 (hz) for total wave then :2 (hz) rise and fall
  TIMER0->TOP=1;
  //start timer0
  TIMER0->CMD=1;
}

