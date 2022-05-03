//=========================================================
// src/InitDevice.c: generated by Hardware Configurator
//
// This file will be regenerated when saving a document.
// leave the sections inside the "$[...]" comment tags alone
// or they will be overwritten!
//=========================================================

// USER INCLUDES
#include <SI_EFM8UB2_Register_Enums.h>
#include "InitDevice.h"

// USER PROTOTYPES
// USER FUNCTIONS

// $[Library Includes]
// [Library Includes]$

//==============================================================================
// enter_DefaultMode_from_RESET
//==============================================================================
extern void
enter_DefaultMode_from_RESET (void)
{
  // $[Config Calls]
  // Save the SFRPAGE
  uint8_t SFRPAGE_save = SFRPAGE;
  PCA_0_enter_DefaultMode_from_RESET ();
  PCACH_0_enter_DefaultMode_from_RESET ();
  PCACH_1_enter_DefaultMode_from_RESET ();
  PCACH_2_enter_DefaultMode_from_RESET ();
  PORTS_0_enter_DefaultMode_from_RESET ();
  PORTS_1_enter_DefaultMode_from_RESET ();
  PORTS_2_enter_DefaultMode_from_RESET ();
  PORTS_3_enter_DefaultMode_from_RESET ();
  PBCFG_0_enter_DefaultMode_from_RESET ();
  ADC_0_enter_DefaultMode_from_RESET ();
  VREF_0_enter_DefaultMode_from_RESET ();
  RSTSRC_0_enter_DefaultMode_from_RESET ();
  HFOSC_0_enter_DefaultMode_from_RESET ();
  CLOCK_0_enter_DefaultMode_from_RESET ();
  CIP51_0_enter_DefaultMode_from_RESET ();
  TIMER01_0_enter_DefaultMode_from_RESET ();
  TIMER16_3_enter_DefaultMode_from_RESET ();
  TIMER16_5_enter_DefaultMode_from_RESET ();
  TIMER_SETUP_0_enter_DefaultMode_from_RESET ();
  SPI_0_enter_DefaultMode_from_RESET ();
  UARTE_1_enter_DefaultMode_from_RESET ();
  INTERRUPT_0_enter_DefaultMode_from_RESET ();
  // Restore the SFRPAGE
  SFRPAGE = SFRPAGE_save;
  // [Config Calls]$

}

//================================================================================
// PCA_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
PCA_0_enter_DefaultMode_from_RESET (void)
{
  // $[PCA0MD - PCA Mode]
  /***********************************************************************
   - Disable Watchdog Timer
   - System clock divided by 12
   - PCA continues to function normally while the system controller is in
   Idle Mode
   - Disable the CF interrupt
   - Disable Watchdog Timer
   - Watchdog Timer Enable unlocked
   ***********************************************************************/
  SFRPAGE = 0x00;
  PCA0MD &= ~PCA0MD_WDTE__BMASK;
  PCA0MD = PCA0MD_CPS__SYSCLK_DIV_12 | PCA0MD_CIDL__NORMAL
      | PCA0MD_ECF__OVF_INT_DISABLED | PCA0MD_WDTE__DISABLED
      | PCA0MD_WDLCK__UNLOCKED;
  // [PCA0MD - PCA Mode]$

  // $[PCA0H - PCA Counter/Timer High Byte]
  // [PCA0H - PCA Counter/Timer High Byte]$

  // $[PCA0L - PCA Counter/Timer Low Byte]
  // [PCA0L - PCA Counter/Timer Low Byte]$

  // $[PCA0CN0 - PCA Control 0]
  /***********************************************************************
   - Start the PCA Counter/Timer running
   ***********************************************************************/
  PCA0CN0 |= PCA0CN0_CR__RUN;
  // [PCA0CN0 - PCA Control 0]$

}

//================================================================================
// PCACH_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
PCACH_0_enter_DefaultMode_from_RESET (void)
{
  uint8_t PCA0CN0_CR_save = PCA0CN0 & PCA0CN0_CR__BMASK;
  PCA0CN0 |= PCA0CN0_CR_save;

  // $[PCA0CPM0 - PCA Channel 0 Capture/Compare Mode]
  /***********************************************************************
   - Disable negative edge capture
   - Disable CCF0 interrupts
   - Disable match function
   - 8-bit PWM selected
   - Disable positive edge capture
   - Enable comparator function
   - Enable PWM function
   - Disable toggle function
   ***********************************************************************/
  PCA0CPM0 = PCA0CPM0_CAPN__DISABLED | PCA0CPM0_ECCF__DISABLED
      | PCA0CPM0_MAT__DISABLED | PCA0CPM0_PWM16__8_BIT | PCA0CPM0_CAPP__DISABLED
      | PCA0CPM0_ECOM__ENABLED | PCA0CPM0_PWM__ENABLED | PCA0CPM0_TOG__DISABLED;
  // [PCA0CPM0 - PCA Channel 0 Capture/Compare Mode]$

  // $[PCA0CPL0 - PCA Channel 0 Capture Module Low Byte]
  // [PCA0CPL0 - PCA Channel 0 Capture Module Low Byte]$

  // $[PCA0CPH0 - PCA Channel 0 Capture Module High Byte]
  PCA0CPH0 = 0x00;
  // [PCA0CPH0 - PCA Channel 0 Capture Module High Byte]$

  // $[PCA0 Start/Run restore]
  // [PCA0 Start/Run restore]$

}

//================================================================================
// PCACH_1_enter_DefaultMode_from_RESET
//================================================================================
extern void
PCACH_1_enter_DefaultMode_from_RESET (void)
{
  uint8_t PCA0CN0_CR_save = PCA0CN0 & PCA0CN0_CR__BMASK;
  PCA0CN0 |= PCA0CN0_CR_save;

  // $[PCA0CPM1 - PCA Channel 1 Capture/Compare Mode]
  /***********************************************************************
   - Disable negative edge capture
   - Disable CCF1 interrupts
   - Disable match function
   - 8-bit PWM selected
   - Disable positive edge capture
   - Enable comparator function
   - Enable PWM function
   - Disable toggle function
   ***********************************************************************/
  PCA0CPM1 = PCA0CPM1_CAPN__DISABLED | PCA0CPM1_ECCF__DISABLED
      | PCA0CPM1_MAT__DISABLED | PCA0CPM1_PWM16__8_BIT | PCA0CPM1_CAPP__DISABLED
      | PCA0CPM1_ECOM__ENABLED | PCA0CPM1_PWM__ENABLED | PCA0CPM1_TOG__DISABLED;
  // [PCA0CPM1 - PCA Channel 1 Capture/Compare Mode]$

  // $[PCA0CPL1 - PCA Channel 1 Capture Module Low Byte]
  // [PCA0CPL1 - PCA Channel 1 Capture Module Low Byte]$

  // $[PCA0CPH1 - PCA Channel 1 Capture Module High Byte]
  PCA0CPH1 = 0x00;
  // [PCA0CPH1 - PCA Channel 1 Capture Module High Byte]$

  // $[PCA0 Start/Run restore]
  // [PCA0 Start/Run restore]$

}

//================================================================================
// PCACH_2_enter_DefaultMode_from_RESET
//================================================================================
extern void
PCACH_2_enter_DefaultMode_from_RESET (void)
{
  uint8_t PCA0CN0_CR_save = PCA0CN0 & PCA0CN0_CR__BMASK;
  PCA0CN0 |= PCA0CN0_CR_save;

  // $[PCA0CPM2 - PCA Channel 2 Capture/Compare Mode]
  /***********************************************************************
   - Disable negative edge capture
   - Disable CCF2 interrupts
   - Disable match function
   - 8-bit PWM selected
   - Disable positive edge capture
   - Enable comparator function
   - Enable PWM function
   - Disable toggle function
   ***********************************************************************/
  PCA0CPM2 = PCA0CPM2_CAPN__DISABLED | PCA0CPM2_ECCF__DISABLED
      | PCA0CPM2_MAT__DISABLED | PCA0CPM2_PWM16__8_BIT | PCA0CPM2_CAPP__DISABLED
      | PCA0CPM2_ECOM__ENABLED | PCA0CPM2_PWM__ENABLED | PCA0CPM2_TOG__DISABLED;
  // [PCA0CPM2 - PCA Channel 2 Capture/Compare Mode]$

  // $[PCA0CPL2 - PCA Channel 2 Capture Module Low Byte]
  // [PCA0CPL2 - PCA Channel 2 Capture Module Low Byte]$

  // $[PCA0CPH2 - PCA Channel 2 Capture Module High Byte]
  PCA0CPH2 = 0x00;
  // [PCA0CPH2 - PCA Channel 2 Capture Module High Byte]$

  // $[PCA0 Start/Run restore]
  // [PCA0 Start/Run restore]$

}

//================================================================================
// PORTS_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
PORTS_0_enter_DefaultMode_from_RESET (void)
{
  // $[P0 - Port 0 Pin Latch]
  // [P0 - Port 0 Pin Latch]$

  // $[P0MDOUT - Port 0 Output Mode]
  /***********************************************************************
   - P0.0 output is open-drain
   - P0.1 output is push-pull
   - P0.2 output is open-drain
   - P0.3 output is open-drain
   - P0.4 output is open-drain
   - P0.5 output is open-drain
   - P0.6 output is push-pull
   - P0.7 output is open-drain
   ***********************************************************************/
  P0MDOUT = P0MDOUT_B0__OPEN_DRAIN | P0MDOUT_B1__PUSH_PULL
      | P0MDOUT_B2__OPEN_DRAIN | P0MDOUT_B3__OPEN_DRAIN | P0MDOUT_B4__OPEN_DRAIN
      | P0MDOUT_B5__OPEN_DRAIN | P0MDOUT_B6__PUSH_PULL | P0MDOUT_B7__OPEN_DRAIN;
  // [P0MDOUT - Port 0 Output Mode]$

  // $[P0MDIN - Port 0 Input Mode]
  // [P0MDIN - Port 0 Input Mode]$

  // $[P0SKIP - Port 0 Skip]
  /***********************************************************************
   - P0.0 pin is skipped by the crossbar
   - P0.1 pin is skipped by the crossbar
   - P0.2 pin is skipped by the crossbar
   - P0.3 pin is skipped by the crossbar
   - P0.4 pin is skipped by the crossbar
   - P0.5 pin is skipped by the crossbar
   - P0.6 pin is not skipped by the crossbar
   - P0.7 pin is not skipped by the crossbar
   ***********************************************************************/
  P0SKIP = P0SKIP_B0__SKIPPED | P0SKIP_B1__SKIPPED | P0SKIP_B2__SKIPPED
      | P0SKIP_B3__SKIPPED | P0SKIP_B4__SKIPPED | P0SKIP_B5__SKIPPED
      | P0SKIP_B6__NOT_SKIPPED | P0SKIP_B7__NOT_SKIPPED;
  // [P0SKIP - Port 0 Skip]$

}

//================================================================================
// PORTS_1_enter_DefaultMode_from_RESET
//================================================================================
extern void
PORTS_1_enter_DefaultMode_from_RESET (void)
{
  // $[P1 - Port 1 Pin Latch]
  // [P1 - Port 1 Pin Latch]$

  // $[P1MDOUT - Port 1 Output Mode]
  /***********************************************************************
   - P1.0 output is push-pull
   - P1.1 output is open-drain
   - P1.2 output is open-drain
   - P1.3 output is open-drain
   - P1.4 output is push-pull
   - P1.5 output is open-drain
   - P1.6 output is open-drain
   - P1.7 output is push-pull
   ***********************************************************************/
  P1MDOUT = P1MDOUT_B0__PUSH_PULL | P1MDOUT_B1__OPEN_DRAIN
      | P1MDOUT_B2__OPEN_DRAIN | P1MDOUT_B3__OPEN_DRAIN | P1MDOUT_B4__PUSH_PULL
      | P1MDOUT_B5__OPEN_DRAIN | P1MDOUT_B6__OPEN_DRAIN | P1MDOUT_B7__PUSH_PULL;
  // [P1MDOUT - Port 1 Output Mode]$

  // $[P1MDIN - Port 1 Input Mode]
  /***********************************************************************
   - P1.0 pin is configured for digital mode
   - P1.1 pin is configured for digital mode
   - P1.2 pin is configured for digital mode
   - P1.3 pin is configured for digital mode
   - P1.4 pin is configured for digital mode
   - P1.5 pin is configured for analog mode
   - P1.6 pin is configured for digital mode
   - P1.7 pin is configured for digital mode
   ***********************************************************************/
  P1MDIN = P1MDIN_B0__DIGITAL | P1MDIN_B1__DIGITAL | P1MDIN_B2__DIGITAL
      | P1MDIN_B3__DIGITAL | P1MDIN_B4__DIGITAL | P1MDIN_B5__ANALOG
      | P1MDIN_B6__DIGITAL | P1MDIN_B7__DIGITAL;
  // [P1MDIN - Port 1 Input Mode]$

  // $[P1SKIP - Port 1 Skip]
  /***********************************************************************
   - P1.0 pin is not skipped by the crossbar
   - P1.1 pin is skipped by the crossbar
   - P1.2 pin is skipped by the crossbar
   - P1.3 pin is skipped by the crossbar
   - P1.4 pin is skipped by the crossbar
   - P1.5 pin is skipped by the crossbar
   - P1.6 pin is skipped by the crossbar
   - P1.7 pin is not skipped by the crossbar
   ***********************************************************************/
  P1SKIP = P1SKIP_B0__NOT_SKIPPED | P1SKIP_B1__SKIPPED | P1SKIP_B2__SKIPPED
      | P1SKIP_B3__SKIPPED | P1SKIP_B4__SKIPPED | P1SKIP_B5__SKIPPED
      | P1SKIP_B6__SKIPPED | P1SKIP_B7__NOT_SKIPPED;
  // [P1SKIP - Port 1 Skip]$

}

//================================================================================
// PORTS_2_enter_DefaultMode_from_RESET
//================================================================================
extern void
PORTS_2_enter_DefaultMode_from_RESET (void)
{
  // $[P2 - Port 2 Pin Latch]
  // [P2 - Port 2 Pin Latch]$

  // $[P2MDOUT - Port 2 Output Mode]
  // [P2MDOUT - Port 2 Output Mode]$

  // $[P2MDIN - Port 2 Input Mode]
  /***********************************************************************
   - P2.0 pin is configured for digital mode
   - P2.1 pin is configured for digital mode
   - P2.2 pin is configured for digital mode
   - P2.3 pin is configured for digital mode
   - P2.4 pin is configured for digital mode
   - P2.5 pin is configured for analog mode
   - P2.6 pin is configured for analog mode
   - P2.7 pin is configured for digital mode
   ***********************************************************************/
  P2MDIN = P2MDIN_B0__DIGITAL | P2MDIN_B1__DIGITAL | P2MDIN_B2__DIGITAL
      | P2MDIN_B3__DIGITAL | P2MDIN_B4__DIGITAL | P2MDIN_B5__ANALOG
      | P2MDIN_B6__ANALOG | P2MDIN_B7__DIGITAL;
  // [P2MDIN - Port 2 Input Mode]$

  // $[P2SKIP - Port 2 Skip]
  /***********************************************************************
   - P2.0 pin is skipped by the crossbar
   - P2.1 pin is not skipped by the crossbar
   - P2.2 pin is not skipped by the crossbar
   - P2.3 pin is not skipped by the crossbar
   - P2.4 pin is not skipped by the crossbar
   - P2.5 pin is skipped by the crossbar
   - P2.6 pin is skipped by the crossbar
   - P2.7 pin is not skipped by the crossbar
   ***********************************************************************/
  P2SKIP = P2SKIP_B0__SKIPPED | P2SKIP_B1__NOT_SKIPPED | P2SKIP_B2__NOT_SKIPPED
      | P2SKIP_B3__NOT_SKIPPED | P2SKIP_B4__NOT_SKIPPED | P2SKIP_B5__SKIPPED
      | P2SKIP_B6__SKIPPED | P2SKIP_B7__NOT_SKIPPED;
  // [P2SKIP - Port 2 Skip]$

}

//================================================================================
// PBCFG_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
PBCFG_0_enter_DefaultMode_from_RESET (void)
{
  // $[XBR1 - Port I/O Crossbar 1]
  /***********************************************************************
   - Weak Pullups enabled 
   - Crossbar enabled
   - All PCA I/O unavailable at Port pins
   - ECI unavailable at Port pin
   - T0 unavailable at Port pin
   - T1 unavailable at Port pin
   ***********************************************************************/
  XBR1 = XBR1_WEAKPUD__PULL_UPS_ENABLED | XBR1_XBARE__ENABLED
      | XBR1_PCA0ME__DISABLED | XBR1_ECIE__DISABLED | XBR1_T0E__DISABLED
      | XBR1_T1E__DISABLED;
  // [XBR1 - Port I/O Crossbar 1]$

  // $[XBR0 - Port I/O Crossbar 0]
  /***********************************************************************
   - UART0 I/O unavailable at Port pin
   - SPI I/O routed to Port pins
   - SMBus 0 I/O unavailable at Port pins
   - CP0 unavailable at Port pin
   - Asynchronous CP0 unavailable at Port pin
   - CP1 unavailable at Port pin
   - Asynchronous CP1 unavailable at Port pin
   - SYSCLK unavailable at Port pin
   ***********************************************************************/
  XBR0 = XBR0_URT0E__DISABLED | XBR0_SPI0E__ENABLED | XBR0_SMB0E__DISABLED
      | XBR0_CP0E__DISABLED | XBR0_CP0AE__DISABLED | XBR0_CP1E__DISABLED
      | XBR0_CP1AE__DISABLED | XBR0_SYSCKE__DISABLED;
  // [XBR0 - Port I/O Crossbar 0]$

  // $[XBR2 - Port I/O Crossbar 2]
  /***********************************************************************
   - UART1 TX, RX routed to Port pins
   - SMBus1 I/O unavailable at Port pins
   ***********************************************************************/
  XBR2 = XBR2_URT1E__ENABLED | XBR2_SMB1E__DISABLED;
  // [XBR2 - Port I/O Crossbar 2]$

}

//================================================================================
// HFOSC_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
HFOSC_0_enter_DefaultMode_from_RESET (void)
{
  // $[HFO0CN - High Frequency Oscillator Control]
  /***********************************************************************
   - SYSCLK can be derived from Internal H-F Oscillator divided by 2 
   ***********************************************************************/
  HFO0CN &= ~HFO0CN_IFCN__FMASK;
  HFO0CN |= HFO0CN_IFCN__SYSCLK_DIV_2;
  // [HFO0CN - High Frequency Oscillator Control]$

}

//================================================================================
// CLOCK_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
CLOCK_0_enter_DefaultMode_from_RESET (void)
{
  // $[CLKSEL - Clock Select]
  // [CLKSEL - Clock Select]$

}
/*
 //================================================================================
 // TIMER01_0_enter_DefaultMode_from_RESET
 //================================================================================
 extern void TIMER01_0_enter_DefaultMode_from_RESET(void) {
 // $[Timer Initialization]
 //Save Timer Configuration
 uint8_t TCON_save;
 TCON_save = TCON;
 //Stop Timers
 TCON &= ~TCON_TR0__BMASK & ~TCON_TR1__BMASK;

 // [Timer Initialization]$

 // $[TH0 - Timer 0 High Byte]
 // [TH0 - Timer 0 High Byte]$

 // $[TL0 - Timer 0 Low Byte]
 /***********************************************************************
 - Timer 0 Low Byte = 0x06
 ***********************************************************************/
/*
 TL0 = (0x06 << TL0_TL0__SHIFT);
 // [TL0 - Timer 0 Low Byte]$

 // $[TH1 - Timer 1 High Byte]
 // [TH1 - Timer 1 High Byte]$

 // $[TL1 - Timer 1 Low Byte]
 // [TL1 - Timer 1 Low Byte]$

 // $[Timer Restoration]
 //Restore Timer Configuration
 TCON |= (TCON_save & TCON_TR0__BMASK) | (TCON_save & TCON_TR1__BMASK);

 // [Timer Restoration]$

 }
 */
//================================================================================
// TIMER16_3_enter_DefaultMode_from_RESET
//================================================================================
extern void
TIMER16_3_enter_DefaultMode_from_RESET (void)
{
  // $[Timer Initialization]
  // Save Timer Configuration
  uint8_t TMR3CN0_TR3_save;
  TMR3CN0_TR3_save = TMR3CN0 & TMR3CN0_TR3__BMASK;
  // Stop Timer
  TMR3CN0 &= ~(TMR3CN0_TR3__BMASK);
  // [Timer Initialization]$

  // $[TMR3CN0 - Timer 3 Control]
  // [TMR3CN0 - Timer 3 Control]$

  // $[TMR3H - Timer 3 High Byte]
  /***********************************************************************
   - Timer 3 High Byte = 0xF8
   ***********************************************************************/
  TMR3H = (0xF8 << TMR3H_TMR3H__SHIFT);
  // [TMR3H - Timer 3 High Byte]$

  // $[TMR3L - Timer 3 Low Byte]
  /***********************************************************************
   - Timer 3 Low Byte = 0x30
   ***********************************************************************/
  TMR3L = (0x30 << TMR3L_TMR3L__SHIFT);
  // [TMR3L - Timer 3 Low Byte]$

  // $[TMR3RLH - Timer 3 Reload High Byte]
  /***********************************************************************
   - Timer 3 Reload High Byte = 0xFE
   ***********************************************************************/
  TMR3RLH = (0xFE << TMR3RLH_TMR3RLH__SHIFT);
  // [TMR3RLH - Timer 3 Reload High Byte]$

  // $[TMR3RLL - Timer 3 Reload Low Byte]
  /***********************************************************************
   - Timer 3 Reload Low Byte = 0x0C
   ***********************************************************************/
  TMR3RLL = (0x0C << TMR3RLL_TMR3RLL__SHIFT);
  // [TMR3RLL - Timer 3 Reload Low Byte]$

  // $[TMR3CN0]
  /***********************************************************************
   - Start Timer 3 running
   ***********************************************************************/
  TMR3CN0 |= TMR3CN0_TR3__RUN;
  // [TMR3CN0]$

  // $[Timer Restoration]
  // Restore Timer Configuration
  TMR3CN0 |= TMR3CN0_TR3_save;
  // [Timer Restoration]$

}

//================================================================================
// TIMER_SETUP_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
TIMER_SETUP_0_enter_DefaultMode_from_RESET (void)
{
  // $[CKCON0 - Clock Control 0]
  /***********************************************************************
   - System clock divided by 48
   - Counter/Timer 0 uses the clock defined by the prescale field, SCA
   - Timer 2 high byte uses the clock defined by T2XCLK in TMR2CN0
   - Timer 2 low byte uses the clock defined by T2XCLK in TMR2CN0
   - Timer 3 high byte uses the clock defined by T3XCLK in TMR3CN0
   - Timer 3 low byte uses the clock defined by T3XCLK in TMR3CN0
   - Timer 1 uses the clock defined by the prescale field, SCA
   ***********************************************************************/
  SFRPAGE = 0x00;
  CKCON0 = CKCON0_SCA__SYSCLK_DIV_48 | CKCON0_T0M__PRESCALE
      | CKCON0_T2MH__EXTERNAL_CLOCK | CKCON0_T2ML__EXTERNAL_CLOCK
      | CKCON0_T3MH__EXTERNAL_CLOCK | CKCON0_T3ML__EXTERNAL_CLOCK
      | CKCON0_T1M__PRESCALE;
  // [CKCON0 - Clock Control 0]$

  // $[CKCON1 - Clock Control 1]
  // [CKCON1 - Clock Control 1]$

  // $[TMOD - Timer 0/1 Mode]
  /***********************************************************************
   - Mode 1, 16-bit Counter/Timer
   - Mode 1, 16-bit Counter/Timer
   - Timer Mode
   - Timer 0 enabled when TR0 = 1 irrespective of INT0 logic level
   - Timer Mode
   - Timer 1 enabled when TR1 = 1 irrespective of INT1 logic level
   ***********************************************************************/
  TMOD = TMOD_T0M__MODE1 | TMOD_T1M__MODE1 | TMOD_CT0__TIMER
      | TMOD_GATE0__DISABLED | TMOD_CT1__TIMER | TMOD_GATE1__DISABLED;
  // [TMOD - Timer 0/1 Mode]$

  // $[TCON - Timer 0/1 Control]
  /***********************************************************************
   - Start Timer 0 running
   - Start Timer 1 running
   ***********************************************************************/
  TCON |= TCON_TR0__RUN | TCON_TR1__RUN;
  // [TCON - Timer 0/1 Control]$

}

//================================================================================
// SPI_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
SPI_0_enter_DefaultMode_from_RESET (void)
{
  // $[SPI0CKR - SPI0 Clock Rate]
  /***********************************************************************
   - SPI0 Clock Rate = 0x02
   ***********************************************************************/
  SPI0CKR = (0x02 << SPI0CKR_SPI0CKR__SHIFT);
  // [SPI0CKR - SPI0 Clock Rate]$

  // $[SPI0CFG - SPI0 Configuration]
  /***********************************************************************
   - Enable master mode. Operate as a master
   ***********************************************************************/
  SPI0CFG |= SPI0CFG_MSTEN__MASTER_ENABLED;
  // [SPI0CFG - SPI0 Configuration]$

  // $[SPI0CN0 - SPI0 Control]
  /***********************************************************************
   - Enable the SPI module
   - 3-Wire Slave or 3-Wire Master Mode
   ***********************************************************************/
  SPI0CN0 &= ~SPI0CN0_NSSMD__FMASK;
  SPI0CN0 |= SPI0CN0_SPIEN__ENABLED;
  // [SPI0CN0 - SPI0 Control]$

}

//================================================================================
// INTERRUPT_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
INTERRUPT_0_enter_DefaultMode_from_RESET (void)
{
  // $[EIE1 - Extended Interrupt Enable 1]
  /***********************************************************************
   - Disable ADC0 Conversion Complete interrupt
   - Disable ADC0 Window Comparison interrupt
   - Disable CP0 interrupts
   - Disable CP1 interrupts
   - Disable all PCA0 interrupts
   - Disable all SMB0 interrupts
   - Enable interrupt requests generated by the TF3L or TF3H flags
   - Disable all USB0 interrupts
   ***********************************************************************/
  EIE1 = EIE1_EADC0__DISABLED | EIE1_EWADC0__DISABLED | EIE1_ECP0__DISABLED
      | EIE1_ECP1__DISABLED | EIE1_EPCA0__DISABLED | EIE1_ESMB0__DISABLED
      | EIE1_ET3__ENABLED | EIE1_EUSB0__DISABLED;
  // [EIE1 - Extended Interrupt Enable 1]$

  // $[EIP1 - Extended Interrupt Priority 1]
  // [EIP1 - Extended Interrupt Priority 1]$

  // $[IE - Interrupt Enable]
  /***********************************************************************
   - Enable each interrupt according to its individual mask setting
   - Disable external interrupt 0
   - Disable external interrupt 1
   - Enable interrupt requests generated by SPI0
   - Disable all Timer 0 interrupt
   - Disable all Timer 1 interrupt
   - Enable interrupt requests generated by the TF2L or TF2H flags
   - Disable UART0 interrupt
   ***********************************************************************/
  IE = IE_EA__ENABLED | IE_EX0__DISABLED | IE_EX1__DISABLED | IE_ESPI0__ENABLED
      | IE_ET0__DISABLED | IE_ET1__DISABLED | IE_ET2__ENABLED
      | IE_ES0__DISABLED;
  // [IE - Interrupt Enable]$

  // $[IP - Interrupt Priority]
  // [IP - Interrupt Priority]$

  // $[EIE2 - Extended Interrupt Enable 2]
  // [EIE2 - Extended Interrupt Enable 2]$

  // $[EIP2 - Extended Interrupt Priority 2]
  // [EIP2 - Extended Interrupt Priority 2]$

}

extern void
CIP51_0_enter_DefaultMode_from_RESET (void)
{

  // $[PFE0CN - Prefetch Engine Control]
  /***********************************************************************
   - Each byte of a firmware flash write is written individually
   - Disable the prefetch engine 
   ***********************************************************************/
  PFE0CN = PFE0CN_FLBWE__BLOCK_WRITE_DISABLED | PFE0CN_PFEN__DISABLED;
  // [PFE0CN - Prefetch Engine Control]$

}

extern void
TIMER01_0_enter_DefaultMode_from_RESET (void)
{
  // $[Timer Initialization]
  //Save Timer Configuration
  uint8_t TCON_save;
  TCON_save = TCON;
  //Stop Timers
  TCON &= ~TCON_TR0__BMASK & ~TCON_TR1__BMASK;

  // [Timer Initialization]$

  // $[TH0 - Timer 0 High Byte]
  // [TH0 - Timer 0 High Byte]$

  // $[TL0 - Timer 0 Low Byte]
  // [TL0 - Timer 0 Low Byte]$

  // $[TH1 - Timer 1 High Byte]
  /***********************************************************************
   - Timer 1 High Byte = 0xFE
   ***********************************************************************/
  TH1 = (0xFE << TH1_TH1__SHIFT);
  // [TH1 - Timer 1 High Byte]$

  // $[TL1 - Timer 1 Low Byte]
  /***********************************************************************
   - Timer 1 Low Byte = 0xE4
   ***********************************************************************/
  TL1 = (0xE4 << TL1_TL1__SHIFT);
  // [TL1 - Timer 1 Low Byte]$

  // $[Timer Restoration]
  //Restore Timer Configuration
  TCON |= (TCON_save & TCON_TR0__BMASK) | (TCON_save & TCON_TR1__BMASK);

  // [Timer Restoration]$

}

extern void
ADC_0_enter_DefaultMode_from_RESET (void)
{
  // $[ADC0CF - ADC0 Configuration]
  /***********************************************************************
   - Data in the ADC0H:ADC0L registers is right-justified
   - SAR Clock Divider = 0x00
   ***********************************************************************/
  ADC0CF = ADC0CF_ADLJST__RIGHT_JUSTIFIED | (0x00 << ADC0CF_ADSC__SHIFT);
  // [ADC0CF - ADC0 Configuration]$

  // $[ADC0GTH - ADC0 Greater-Than High Byte]
  // [ADC0GTH - ADC0 Greater-Than High Byte]$

  // $[ADC0GTL - ADC0 Greater-Than Low Byte]
  // [ADC0GTL - ADC0 Greater-Than Low Byte]$

  // $[ADC0LTH - ADC0 Less-Than High Byte]
  // [ADC0LTH - ADC0 Less-Than High Byte]$

  // $[ADC0LTL - ADC0 Less-Than Low Byte]
  // [ADC0LTL - ADC0 Less-Than Low Byte]$

  // $[AMX0N - AMUX0 Negative Multiplexer Selection]
  /***********************************************************************
   - Ground 
   ***********************************************************************/
  AMX0N = AMX0N_AMX0N__GND;
  // [AMX0N - AMUX0 Negative Multiplexer Selection]$

  // $[AMX0P - AMUX0 Positive Multiplexer Selection]
  /***********************************************************************
   - Temperature sensor
   ***********************************************************************/
  AMX0P = AMX0P_AMX0P__TEMP;
  // [AMX0P - AMUX0 Positive Multiplexer Selection]$

  // $[ADC0CN0 - ADC0 Control]
  /***********************************************************************
   - ADC0 Enabled 
   ***********************************************************************/
  ADC0CN0 |= ADC0CN0_ADEN__ENABLED;
  // [ADC0CN0 - ADC0 Control]$

}

extern void
VREF_0_enter_DefaultMode_from_RESET (void)
{
  // $[REF0CN - Voltage Reference Control]
  /***********************************************************************
   - Enable the internal Temperature Sensor
   - Enable the internal reference buffer
   - The on-chip voltage reference buffer gain is 1
   - The REFSL bit selects the voltage reference source
   - Use the VREF pin as the voltage reference
   ***********************************************************************/
  REF0CN = REF0CN_TEMPE__ENABLED | REF0CN_REFBE__ENABLED | REF0CN_REFBGS__GAIN_1
      | REF0CN_REGOVR__REFSL | REF0CN_REFSL__VREF;
  // [REF0CN - Voltage Reference Control]$

}

extern void
RSTSRC_0_enter_DefaultMode_from_RESET (void)
{
  // $[RSTSRC - Reset Source]
  /***********************************************************************
   - A power-on or supply monitor reset occurred
   - A missing clock detector reset occurred
   - A Comparator 0 reset did not occur
   - A USB0 reset did not occur
   ***********************************************************************/
  RSTSRC = RSTSRC_PORSF__SET | RSTSRC_MCDRSF__SET | RSTSRC_C0RSEF__NOT_SET
      | RSTSRC_USBRSF__NOT_SET;
  // [RSTSRC - Reset Source]$

}

extern void
PORTS_3_enter_DefaultMode_from_RESET (void)
{
  // $[P3 - Port 3 Pin Latch]
  /***********************************************************************
   - P3.0 is high. Set P3.0 to drive or float high
   - P3.1 is high. Set P3.1 to drive or float high
   - P3.2 is high. Set P3.2 to drive or float high
   - P3.3 is high. Set P3.3 to drive or float high
   - P3.4 is high. Set P3.4 to drive or float high
   - P3.5 is high. Set P3.5 to drive or float high
   - P3.6 is high. Set P3.6 to drive or float high
   - P3.7 is low. Set P3.7 to drive low
   ***********************************************************************/
  P3 = P3_B0__HIGH | P3_B1__HIGH | P3_B2__HIGH | P3_B3__HIGH | P3_B4__HIGH
      | P3_B5__HIGH | P3_B6__HIGH | P3_B7__LOW;
  // [P3 - Port 3 Pin Latch]$

  // $[P3MDOUT - Port 3 Output Mode]
  /***********************************************************************
   - P3.0 output is open-drain
   - P3.1 output is open-drain
   - P3.2 output is open-drain
   - P3.3 output is open-drain
   - P3.4 output is open-drain
   - P3.5 output is open-drain
   - P3.6 output is open-drain
   - P3.7 output is push-pull
   ***********************************************************************/
  P3MDOUT = P3MDOUT_B0__OPEN_DRAIN | P3MDOUT_B1__OPEN_DRAIN
      | P3MDOUT_B2__OPEN_DRAIN | P3MDOUT_B3__OPEN_DRAIN | P3MDOUT_B4__OPEN_DRAIN
      | P3MDOUT_B5__OPEN_DRAIN | P3MDOUT_B6__OPEN_DRAIN | P3MDOUT_B7__PUSH_PULL;
  // [P3MDOUT - Port 3 Output Mode]$

  // $[P3MDIN - Port 3 Input Mode]
  /***********************************************************************
   - P3.0 pin is configured for digital mode
   - P3.1 pin is configured for digital mode
   - P3.2 pin is configured for digital mode
   - P3.3 pin is configured for digital mode
   - P3.4 pin is configured for digital mode
   - P3.5 pin is configured for digital mode
   - P3.6 pin is configured for analog mode
   - P3.7 pin is configured for digital mode
   ***********************************************************************/
  P3MDIN = P3MDIN_B0__DIGITAL | P3MDIN_B1__DIGITAL | P3MDIN_B2__DIGITAL
      | P3MDIN_B3__DIGITAL | P3MDIN_B4__DIGITAL | P3MDIN_B5__DIGITAL
      | P3MDIN_B6__ANALOG | P3MDIN_B7__DIGITAL;
  // [P3MDIN - Port 3 Input Mode]$

  // $[P3SKIP - Port 3 Skip]
  /***********************************************************************
   - P3.0 pin is not skipped by the crossbar
   - P3.1 pin is not skipped by the crossbar
   - P3.2 pin is not skipped by the crossbar
   - P3.3 pin is not skipped by the crossbar
   - P3.4 pin is not skipped by the crossbar
   - P3.5 pin is not skipped by the crossbar
   - P3.6 pin is skipped by the crossbar
   - P3.7 pin is skipped by the crossbar
   ***********************************************************************/
  P3SKIP = P3SKIP_B0__NOT_SKIPPED | P3SKIP_B1__NOT_SKIPPED
      | P3SKIP_B2__NOT_SKIPPED | P3SKIP_B3__NOT_SKIPPED | P3SKIP_B4__NOT_SKIPPED
      | P3SKIP_B5__NOT_SKIPPED | P3SKIP_B6__SKIPPED | P3SKIP_B7__SKIPPED;
  // [P3SKIP - Port 3 Skip]$

}

extern void
TIMER16_5_enter_DefaultMode_from_RESET (void)
{
  // $[Timer Initialization]
  // Save Timer Configuration
  uint8_t TMR5CN0_TR5_save;
  SFRPAGE = 0x0F;
  TMR5CN0_TR5_save = TMR5CN0 & TMR5CN0_TR5__BMASK;
  // Stop Timer
  TMR5CN0 &= ~(TMR5CN0_TR5__BMASK);
  // [Timer Initialization]$

  // $[TMR5CN0 - Timer 5 Control]
  /***********************************************************************
   - Timer 5 operates as two 8-bit auto-reload timers
   ***********************************************************************/
  TMR5CN0 |= TMR5CN0_T5SPLIT__8_BIT_RELOAD;
  // [TMR5CN0 - Timer 5 Control]$

  // $[TMR5H - Timer 5 High Byte]
  // [TMR5H - Timer 5 High Byte]$

  // $[TMR5L - Timer 5 Low Byte]
  /***********************************************************************
   - Timer 5 Low Byte = 0x96
   ***********************************************************************/
  TMR5L = (0x96 << TMR5L_TMR5L__SHIFT);
  // [TMR5L - Timer 5 Low Byte]$

  // $[TMR5RLH - Timer 5 Reload High Byte]
  // [TMR5RLH - Timer 5 Reload High Byte]$

  // $[TMR5RLL - Timer 5 Reload Low Byte]
  // [TMR5RLL - Timer 5 Reload Low Byte]$

  // $[TMR5CN0]
  // [TMR5CN0]$

  // $[Timer Restoration]
  // Restore Timer Configuration
  TMR5CN0 |= TMR5CN0_TR5_save;
  // [Timer Restoration]$

}

extern void
UARTE_1_enter_DefaultMode_from_RESET (void)
{
  // $[SBCON1 - UART1 Baud Rate Generator Control]
  /***********************************************************************
   - Enable the baud rate generator
   - Prescaler = 1
   ***********************************************************************/
  SBCON1 = SBCON1_BREN__ENABLED | SBCON1_BPS__DIV_BY_1;
  // [SBCON1 - UART1 Baud Rate Generator Control]$

  // $[SMOD1 - UART1 Mode]
  // [SMOD1 - UART1 Mode]$

  // $[SBRLH1 - UART1 Baud Rate Generator High Byte]
  /***********************************************************************
   - UART1 Baud Rate Reload High = 0xFE
   ***********************************************************************/
  SBRLH1 = (0xFE << SBRLH1_BRH__SHIFT);
  // [SBRLH1 - UART1 Baud Rate Generator High Byte]$

  // $[SBRLL1 - UART1 Baud Rate Generator Low Byte]
  /***********************************************************************
   - UART1 Baud Rate Reload Low = 0xC8
   ***********************************************************************/
  SBRLL1 = (0xC8 << SBRLL1_BRL__SHIFT);
  // [SBRLL1 - UART1 Baud Rate Generator Low Byte]$

  // $[SCON1 - UART1 Serial Port Control]
  // [SCON1 - UART1 Serial Port Control]$

}
