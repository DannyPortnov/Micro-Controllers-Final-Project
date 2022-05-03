//-----------------------------------------------------------------------------
// Middle Project
//----------------------------------------------------------------------------
//  Copyright (C) ORT BRAUDE COLLEGE
//  Electronics & Electrical Engineering Department
//  All rights reserved.
//  Owner   :  Danny Portnov, Niv Kopolovich, Lior Pasikov
//  FILE NAME    :  Middle Project_main.c
//  DATE         :  08 MAY 2022
//  TARGET MCU   :  EFM8UB20F64G-A-QFP48,  EFM8UB2 SLSTK2001A
//  DESCRIPTION  :  A Temperature measurement system, which measures temperature in two analog channels,
//  and displays the measurement on the LCD screen.
//  The system produces an alert if there is a noticeable difference between the two measurements.
//  Besides the microcontroller itself, we're using an external LM35 temperature gauge,
//  Bluetooth transmitter and a buzzer.
//
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
// Resources UPDATE
//-----------------------------------------------------------------------------
// SYSCLK - 48MHz HFOSC / 8
// SPI0   - 1MHz
// Timer0 - 2Hz (500ms count)
// Timer1 - 440Hz (Buzzer)
// Timer2 - 500kHz (SPI CS delay)
// Timer3 - 1KHz (1ms tick)
// P0.1 - CS (Active High)
// P0.2 - PB0
// P0.3 - PB1
// P0.6 - SCK
// P1.0 - MOSI
// P1.4 - Display enable
// P1.6 - Green led
// P1.7 - TX
// P2.0 - Red LED
// P2.1 - RX
// P2.6 - LM35
// P3.7 - Buzzer
//
//-----------------------------------------------------------------------------
// Includes and Variables
//-----------------------------------------------------------------------------
#include "bsp.h"
#include "InitDevice.h"
#include "disp.h"
#include "tick.h"
#include "render.h"
#define LCD_height 128
#define Diff 15 //Maximum difference allowed between temperatures
SI_SEGMENT_VARIABLE(line[DISP_BUF_SIZE], uint8_t, RENDER_LINE_SEG); //line array definition
int runProgram=0;//Flag which enables (or stops) the program
uint32_t extTemp;
uint32_t intTemp; //Internal and external temperatures measured, 32 bit because ADC0 is 32 bit also
char s[3]; //Empty string to store temperature
sbit adcINT=ADC0CN0^5; //ADINT, ADC's interrupt flag, set by hardware upon completion of a conversion
sbit ADBZ=ADC0CN0^4; //ADBUSY bit, writing 1 to this bit initiates an ADC conversion
sbit buzz=P3^7; //Buzzer pin
sbit TF0=TCON^5; //overflow flag timer 0
sbit TF1=TCON^7;//overflow flag timer 1
sbit greenLed=P1^6; // set green led
sbit redLed=P2^0; // set red led
sbit PB1=P0^3; // PB1
sbit PB0=P0^2; //PB0
int alarm=0; //Flag for activating (or stopping) an alarm.
int delayFlag=0; //Flag for waiting 1 second
//-----------------------------------------------------------------------------
// SiLabs_Startup() Routine
// ----------------------------------------------------------------------------
// This function is called immediately after reset, before the initialization
// code is run in SILABS_STARTUP.A51 (which runs before main() )
//-----------------------------------------------------------------------------
void SiLabs_Startup (void) {}

// ----------------------------------------------------------------------------
// Converts the output from the ADC to the currect temperature in Celsius units,
// if the temperature was measured from the external gauge (LM35).
// Parameters: Hexadecimal value
// Return value: The temperature measured in Celsius units as an integer.
// ----------------------------------------------------------------------------
int ExternalTempConv(float adc_hex) //
{
  float v_in = (adc_hex / 1023) * 1.2;
  int temp = v_in / 0.01;
  return temp;
}
// ----------------------------------------------------------------------------
// Converts the output from the ADC to the currect temperature in Celsius units.
// if the temperature was measured from the internal gauge.
// Parameters: Hexadecimal value
// Return value: The temperature measured in Celsius units as an integer.
// ----------------------------------------------------------------------------
int InternalTempConv(float adc_hex) {
  float v_in = (adc_hex / 1023) * 1.2;
  int temp = (v_in-0.764) / 0.00287;
  return temp;
}
// ----------------------------------------------------------------------------
// Converts a number in an integer data type, representing a temperature, to a string data type.
// This conversation is necessary in order to print the temperature on the LCD screen.
// Parameters: A number as an integer, and an empty string with size of 3.
// Return value: String size of 3 which contains the number above.
// ----------------------------------------------------------------------------
char* intToString(int temp, char *str) { //
  str[2] = '\0';
  str[1] = temp % 10 + '0';
  str[0] = (temp / 10) % 10 +'0';
  return str;
}

// ----------------------------------------------------------------------------
// Prints on the screen a number and text, in the given position on the LCD screen.
// It's used for printing the temperatures, their difference and the signature by a different function.
// Parameters: A number, string, and the position of the line printed on the screen.
// Return value: None.
// ----------------------------------------------------------------------------
void print(int temp,char* text,int ypos) {
  int y;
  for (y=0; y< FONT_HEIGHT; y++) {
        RENDER_StrLine(line, 3, y, text);
        if (temp!=-1)
          RENDER_StrLine(line, 110, y, intToString(temp, s));
        DISP_WriteLine(ypos+y, line); //1st line
   }
}
// ----------------------------------------------------------------------------
// Calculates the absolute value of the difference between the temperatures
// Parameters: Two integers
// Return value: Absolute value of the difference.
// ----------------------------------------------------------------------------
int abs(int a, int b) {
  if (a>b)
    return a-b;
  return b-a;
}
// ----------------------------------------------------------------------------
// Prints the temperatures measured by both the internal and external temperature sensors,
// their difference a a signature.
// Parameters: Two integers (our temperature).
// Return value: Null
// ----------------------------------------------------------------------------
void printTempsAndDiff(int extTemp,int intTemp) {
  print(-1,"ORT BRAUDE COLLEGE", 4); //-1 cause not temperature is printed
  print(-1,"Danny, Niv and Lior", 14); //-1 cause not temperature is printed
  print(extTemp,"External temp is ", 24);//14 means 2nd line
  print(intTemp,"Internal temp is ", 34); //3rd line
  print(abs(intTemp,extTemp),"Difference is ", 44); //4th line
}

// ----------------------------------------------------------------------------
// Configurates ADC's positive input and return the measured temperature in Celsius
// Parameters: AMX0P value (Configuration for the positive input)
// Return value: Temperature in Celsius
// ----------------------------------------------------------------------------
uint32_t measureTemprature(int input) {
  AMX0P=input; //Set ADC's positive input
  ADBZ=1; //initiate convertion
  while (adcINT!=1);//wait here if not done converting
  adcINT=0; //reset interrupt
  return ADC0;
}

// ----------------------------------------------------------------------------
// Sends the letter 'S' via bluetooth to the smartphone app
// Parameters: None
// Return value: None
// ----------------------------------------------------------------------------
void sendSignal() {
  SBUF1 = 'S';//send once every 500ms
}
// ----------------------------------------------------------------------------
// Manages the programs's logic. If button0 is pressed, start the program, and
// if button 1 is presses, than stop.
// Parameters: 2 Integers (our buttons).
// Return value: None
// ----------------------------------------------------------------------------
void controlLogic(int button0, int button1) {
  if (button0==0)
      runProgram=1;
  if (button1==0)
      runProgram=0;
}


int main(void)
{
  enter_DefaultMode_from_RESET();  // Enter default mode
  DISP_ClearAll();
  DISP_Init();
  //~~~{.c}
  while(1) {
      controlLogic(PB0, PB1); //the regular variables aren't 'detected' in the if
      if (runProgram) { //if PB0 is pressed, enter (active low)
          greenLed=0; //leds are active low
          while (runProgram) { //while PB1 is not pressed, perform program
              //if PB1 is pressed, the while ends and we'll through the main
              intTemp=InternalTempConv(measureTemprature(0x1e));
              extTemp=ExternalTempConv(measureTemprature(0x05));
              //Do the actions only after measuring both temps
              if (TF0==1) { //500ms
                  delayFlag++;
                  if (delayFlag%2==1) {//we've counted 1 second
                      delayFlag=0;
                      printTempsAndDiff(extTemp, intTemp);
                      if (abs(intTemp,extTemp)>=Diff) { //first 500ms have passed, and there's a difference
                        alarm=1;
                        sendSignal();
                      }
                      if (abs(intTemp,extTemp)<Diff) //first 500ms have passed, not difference
                        alarm=0;
                  }
                  TF0=0;
              }
              if (alarm) {
                  if (TF1==1)//timer 0: 440hz
                    buzz=~buzz; //do buzzer
                  greenLed=1; //turning off the green led cause its the same led
                  redLed=0;
                  TF1=0;
              }
              else {
                  redLed=1;
                  greenLed=0;
                  buzz=0;
              }
              controlLogic(PB0, PB1); //update program status
          }
          redLed=1;
          greenLed=1;
          buzz=0;
          DISP_ClearAll();
      }
    }
}
