/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : Cpu.h
**     Project     : ProcessorExpert
**     Processor   : MK60FN1M0VLQ12
**     Component   : MK60FN1M0LQ15
**     Version     : Component 01.005, Driver 01.04, CPU db: 3.00.000
**     Datasheet   : K60P144M150SF3RM, Rev. 2, Dec 2011
**     Compiler    : GNU C Compiler
**     Date/Time   : 2013-08-09, 08:31, # CodeGen: 4
**     Abstract    :
**
**     Settings    :
**
**     Contents    :
**         SetClockConfiguration - LDD_TError Cpu_SetClockConfiguration(LDD_TClockConfiguration ModeID);
**         GetClockConfiguration - uint8_t Cpu_GetClockConfiguration(void);
**         SetOperationMode      - LDD_TError Cpu_SetOperationMode(LDD_TDriverOperationMode OperationMode,...
**         EnableInt             - void Cpu_EnableInt(void);
**         DisableInt            - void Cpu_DisableInt(void);
**         GetLLSWakeUpFlags     - uint32_t Cpu_GetLLSWakeUpFlags(void);
**         MCGAutoTrim           - LDD_TError Cpu_MCGAutoTrim(uint8_t ClockSelect);
**
**     (c) Freescale Semiconductor, Inc.
**     2004 All Rights Reserved
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file Cpu.h
** @version 01.04
** @brief
**
*/         
/*!
**  @addtogroup Cpu_module Cpu module documentation
**  @{
*/         

#ifndef __Cpu_H
#define __Cpu_H

/* MODULE Cpu. */
/*Include shared modules, which are used for whole project*/
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

#ifdef __cplusplus
extern "C" {
#endif 

/* Active configuration define symbol */
#define PEcfg_RAM 1U

/* Methods configuration constants - generated for all enabled component's methods */
#define Cpu_SetClockConfiguration_METHOD_ENABLED
#define Cpu_GetClockConfiguration_METHOD_ENABLED
#define Cpu_SetOperationMode_METHOD_ENABLED
#define Cpu_EnableInt_METHOD_ENABLED
#define Cpu_DisableInt_METHOD_ENABLED
#define Cpu_GetLLSWakeUpFlags_METHOD_ENABLED
#define Cpu_MCGAutoTrim_METHOD_ENABLED

/* Events configuration constants - generated for all enabled component's events */
#define Cpu_OnLLSWakeUpINT_EVENT_ENABLED

#define CPU_BUS_CLK_HZ                  60000000U /* Initial value of the bus clock frequency in Hz */
#define CPU_CORE_CLK_HZ                 120000000U /* Initial value of the core/system clock frequency in Hz.  */

#define CPU_CLOCK_CONFIG_NUMBER         0x03U /* Specifies number of defined clock configurations. */

#define CPU_BUS_CLK_HZ_CLOCK_CONFIG0    60000000U /* Value of the bus clock frequency in the clock configuration 0 in Hz. */
#define CPU_CORE_CLK_HZ_CLOCK_CONFIG0   120000000U /* Value of the core/system clock frequency in the clock configuration 0 in Hz. */

#define CPU_BUS_CLK_HZ_CLOCK_CONFIG1    12000000U /* Value of the bus clock frequency in the clock configuration 1 in Hz. */
#define CPU_CORE_CLK_HZ_CLOCK_CONFIG1   12000000U /* Value of the core/system clock frequency in the clock configuration 1 in Hz. */

#define CPU_BUS_CLK_HZ_CLOCK_CONFIG2    2000000U /* Value of the bus clock frequency in the clock configuration 2 in Hz. */
#define CPU_CORE_CLK_HZ_CLOCK_CONFIG2   2000000U /* Value of the core/system clock frequency in the clock configuration 2 in Hz. */


#define CPU_XTAL_CLK_HZ                 8000000U /* Value of the external crystal or oscillator clock frequency in Hz */
#define CPU_XTAL32k_CLK_HZ              32768U /* Value of the external 32k crystal or oscillator clock frequency in Hz */
#define CPU_INT_SLOW_CLK_HZ             32768U /* Value of the slow internal oscillator clock frequency in Hz  */
#define CPU_INT_FAST_CLK_HZ             4000000U /* Value of the fast internal oscillator clock frequency in Hz  */

#define CPU_FAMILY_Kinetis             /* Specification of the core type of the selected cpu */
#define CPU_DERIVATIVE_MK60FN1M0LQ15   /* Name of the selected cpu derivative */
#define CPU_PARTNUM_MK60FN1M0VLQ12     /* Part number of the selected cpu */
#define CPU_LITTLE_ENDIAN              /* The selected cpu uses little endian */

/* CPU frequencies in clock configuration 0 */
#define CPU_CLOCK_CONFIG_0              0x00U /* Clock configuration 0 identifier */
#define CPU_CORE_CLK_HZ_CONFIG_0        120000000UL /* Core clock frequency in clock configuration 0 */
#define CPU_BUS_CLK_HZ_CONFIG_0         60000000UL /* Bus clock frequency in clock configuration 0 */
#define CPU_FLEXBUS_CLK_HZ_CONFIG_0     40000000UL /* Flexbus clock frequency in clock configuration 0 */
#define CPU_FLASH_CLK_HZ_CONFIG_0       20000000UL /* FLASH clock frequency in clock configuration 0 */
#define CPU_USB_CLK_HZ_CONFIG_0         0UL /* USB clock frequency in clock configuration 0 */
#define CPU_PLL_FLL_CLK_HZ_CONFIG_0     120000000UL /* PLL/FLL clock frequency in clock configuration 0 */
#define CPU_MCGIR_CLK_HZ_CONFIG_0       2000000UL /* MCG internal reference clock frequency in clock configuration 0 */
#define CPU_OSCER_CLK_HZ_CONFIG_0       8000000UL /* System OSC external reference clock frequency in clock configuration 0 */
#define CPU_ERCLK32K_CLK_HZ_CONFIG_0    32768UL /* External reference clock 32k frequency in clock configuration 0 */
#define CPU_MCGFF_CLK_HZ_CONFIG_0       15625UL /* MCG fixed frequency clock */

/* CPU frequencies in clock configuration 1 */
#define CPU_CLOCK_CONFIG_1              0x01U /* Clock configuration 1 identifier */
#define CPU_CORE_CLK_HZ_CONFIG_1        12000000UL /* Core clock frequency in clock configuration 1 */
#define CPU_BUS_CLK_HZ_CONFIG_1         12000000UL /* Bus clock frequency in clock configuration 1 */
#define CPU_FLEXBUS_CLK_HZ_CONFIG_1     12000000UL /* Flexbus clock frequency in clock configuration 1 */
#define CPU_FLASH_CLK_HZ_CONFIG_1       12000000UL /* FLASH clock frequency in clock configuration 1 */
#define CPU_USB_CLK_HZ_CONFIG_1         0UL /* USB clock frequency in clock configuration 1 */
#define CPU_PLL_FLL_CLK_HZ_CONFIG_1     120000000UL /* PLL/FLL clock frequency in clock configuration 1 */
#define CPU_MCGIR_CLK_HZ_CONFIG_1       2000000UL /* MCG internal reference clock frequency in clock configuration 1 */
#define CPU_OSCER_CLK_HZ_CONFIG_1       8000000UL /* System OSC external reference clock frequency in clock configuration 1 */
#define CPU_ERCLK32K_CLK_HZ_CONFIG_1    32768UL /* External reference clock 32k frequency in clock configuration 1 */
#define CPU_MCGFF_CLK_HZ_CONFIG_1       15625UL /* MCG fixed frequency clock */

/* CPU frequencies in clock configuration 2 */
#define CPU_CLOCK_CONFIG_2              0x02U /* Clock configuration 2 identifier */
#define CPU_CORE_CLK_HZ_CONFIG_2        2000000UL /* Core clock frequency in clock configuration 2 */
#define CPU_BUS_CLK_HZ_CONFIG_2         2000000UL /* Bus clock frequency in clock configuration 2 */
#define CPU_FLEXBUS_CLK_HZ_CONFIG_2     2000000UL /* Flexbus clock frequency in clock configuration 2 */
#define CPU_FLASH_CLK_HZ_CONFIG_2       500000UL /* FLASH clock frequency in clock configuration 2 */
#define CPU_USB_CLK_HZ_CONFIG_2         0UL /* USB clock frequency in clock configuration 2 */
#define CPU_PLL_FLL_CLK_HZ_CONFIG_2     2000000UL /* PLL/FLL clock frequency in clock configuration 2 */
#define CPU_MCGIR_CLK_HZ_CONFIG_2       2000000UL /* MCG internal reference clock frequency in clock configuration 2 */
#define CPU_OSCER_CLK_HZ_CONFIG_2       8000000UL /* System OSC external reference clock frequency in clock configuration 2 */
#define CPU_ERCLK32K_CLK_HZ_CONFIG_2    0UL /* External reference clock 32k frequency in clock configuration 2 */
#define CPU_MCGFF_CLK_HZ_CONFIG_2       16384UL /* MCG fixed frequency clock */


typedef struct  {
  uint32_t cpu_core_clk_hz;            /* Core clock frequency in clock configuration */
  uint32_t cpu_bus_clk_hz;             /* Bus clock frequency in clock configuration */
  uint32_t cpu_flexbus_clk_hz;         /* Flexbus clock frequency in clock configuration */
  uint32_t cpu_flash_clk_hz;           /* FLASH clock frequency in clock configuration */
  uint32_t cpu_usb_clk_hz;             /* USB clock frequency in clock configuration */
  uint32_t cpu_pll_fll_clk_hz;         /* PLL/FLL clock frequency in clock configuration */
  uint32_t cpu_mcgir_clk_hz;           /* MCG internal reference clock frequency in clock configuration */
  uint32_t cpu_oscer_clk_hz;           /* System OSC external reference clock frequency in clock configuration */
  uint32_t cpu_erclk32k_clk_hz;        /* External reference clock 32k frequency in clock configuration */
  uint32_t cpu_mcgff_clk_hz;           /* MCG fixed frequency clock */
} TCpuClockConfiguration;

/* The array of clock frequencies in configured clock configurations */
extern const TCpuClockConfiguration PE_CpuClockConfigurations[CPU_CLOCK_CONFIG_NUMBER];

/* Constants defined for use with GetLLSWakeUpFlags method */
#define LLWU_EXT_PIN0                  0x01U /* WakeUp caused by - External pin 0 (ADC1_SE5a/PTE1/LLWU_P0/SPI1_SOUT/UART1_RX/SDHC0_D0/I2C1_SCL/SPI1_SIN) */
#define LLWU_EXT_PIN1                  0x02U /* WakeUp caused by - External pin 1 (ADC1_SE6a/PTE2/LLWU_P1/SPI1_SCK/UART1_CTS_b/SDHC0_DCLK) */
#define LLWU_EXT_PIN2                  0x04U /* WakeUp caused by - External pin 2 (PTE4/LLWU_P2/SPI1_PCS0/UART3_TX/SDHC0_D3) */
#define LLWU_EXT_PIN3                  0x08U /* WakeUp caused by - External pin 3 (TSI0_CH5/PTA4/LLWU_P3/FTM0_CH1/NMI_b/EZP_CS_b) */
#define LLWU_EXT_PIN4                  0x10U /* WakeUp caused by - External pin 4 (CMP2_IN1/PTA13/LLWU_P4/CAN0_RX/FTM1_CH1/RMII0_RXD0/MII0_RXD0/I2S0_TX_FS/FTM1_QD_PHB) */
#define LLWU_EXT_PIN5                  0x20U /* WakeUp caused by - External pin 5 (ADC0_SE8/ADC1_SE8/ADC2_SE8/ADC3_SE8/TSI0_CH0/PTB0/LLWU_P5/I2C0_SCL/FTM1_CH0/RMII0_MDIO/MII0_MDIO/FTM1_QD_PHA) */
#define LLWU_EXT_PIN6                  0x40U /* WakeUp caused by - External pin 6 (ADC0_SE15/TSI0_CH14/PTC1/LLWU_P6/SPI0_PCS3/UART1_RTS_b/FTM0_CH0/FBa_AD13/NFC_DATA10/I2S0_TXD0) */
#define LLWU_EXT_PIN7                  0x80U /* WakeUp caused by - External pin 7 (CMP1_IN1/PTC3/LLWU_P7/SPI0_PCS1/UART1_RX/FTM0_CH2/CLKOUTa/I2S0_TX_BCLK) */
#define LLWU_EXT_PIN8                  0x0100U /* WakeUp caused by - External pin 8 (PTC4/LLWU_P8/SPI0_PCS0/UART1_TX/FTM0_CH3/FBa_AD11/NFC_DATA8/CMP1_OUT/I2S1_TX_BCLK) */
#define LLWU_EXT_PIN9                  0x0200U /* WakeUp caused by - External pin 9 (PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/I2S0_RXD0/FBa_AD10/NFC_DATA7/CMP0_OUT/I2S1_TX_FS) */
#define LLWU_EXT_PIN10                 0x0400U /* WakeUp caused by - External pin 10 (CMP0_IN0/PTC6/LLWU_P10/SPI0_SOUT/PDB0_EXTRG/I2S0_RX_BCLK/FBa_AD9/NFC_DATA6/I2S0_MCLK) */
#define LLWU_EXT_PIN11                 0x0800U /* WakeUp caused by - External pin 11 (ADC1_SE7b/PTC11/LLWU_P11/I2C1_SDA/FTM3_CH7/I2S0_RXD1/FBa_RW_b/NFC_WE) */
#define LLWU_EXT_PIN12                 0x1000U /* WakeUp caused by - External pin 12 (PTD0/LLWU_P12/SPI0_PCS0/UART2_RTS_b/FTM3_CH0/FBa_ALE/FBa_CS1_b/FBa_TS_b/I2S1_RXD1) */
#define LLWU_EXT_PIN13                 0x2000U /* WakeUp caused by - External pin 13 (PTD2/LLWU_P13/SPI0_SOUT/UART2_RX/FTM3_CH2/FBa_AD4/I2S1_RX_FS) */
#define LLWU_EXT_PIN14                 0x4000U /* WakeUp caused by - External pin 14 (PTD4/LLWU_P14/SPI0_PCS1/UART0_RTS_b/FTM0_CH4/FBa_AD2/NFC_DATA1/EWM_IN) */
#define LLWU_EXT_PIN15                 0x8000U /* WakeUp caused by - External pin 15 (ADC0_SE7b/PTD6/LLWU_P15/SPI0_PCS3/UART0_RX/FTM0_CH6/FBa_AD0/FTM0_FLT0) */
#define LLWU_INT_MODULE0               0x00010000U /* WakeUp caused by - Internal module 0 (LPTMR0) */
#define LLWU_INT_MODULE1               0x00020000U /* WakeUp caused by - Internal module 1 (CMP0) */
#define LLWU_INT_MODULE2               0x00040000U /* WakeUp caused by - Internal module 2 (CMP1) */
#define LLWU_INT_MODULE3               0x00080000U /* WakeUp caused by - Internal module 3 (CMP2/CMP3) */
#define LLWU_INT_MODULE4               0x00100000U /* WakeUp caused by - Internal module 4 (TSI0) */
#define LLWU_INT_MODULE5               0x00200000U /* WakeUp caused by - Internal module 5 (RTC) */
#define LLWU_INT_MODULE7               0x00800000U /* WakeUp caused by - Internal module 7 (RTC_Seconds) */
#define LLWU_FILTER1                   0x01000000U /* WakeUp caused by digital filter 1 */
#define LLWU_FILTER2                   0x02000000U /* WakeUp caused by digital filter 2 */

/* Global variables */
/*lint -esym(765,SR_reg) Disable MISRA rule (8.10) checking for symbols (SR_reg). The SR_reg is used in inline assembler. */
extern volatile uint8_t SR_reg;        /* Current FAULTMASK register */
/*lint -esym(765,SR_lock) Disable MISRA rule (8.10) checking for symbols (SR_lock). The SR_reg is used in inline assembler. */
extern volatile uint8_t SR_lock;

/*
** ===================================================================
**     Method      :  Cpu_MCGAutoTrim (component MK60FN1M0LQ15)
**     Description :
**         This method uses MCG auto trim feature to trim internal
**         reference clock. This method can be used only in a clock
**         configuration which derives its bus clock from external
**         reference clock (<MCG mode> must be one of the following
**         modes - FEE, FBE, BLPE, PEE, PBE) and if value of <Bus clock>
**         is in the range <8; 16>MHz.
**         The slow internal reference clock is trimmed to the value
**         selected by <Slow internal reference clock [kHz]> property. 
**         The fast internal reference clock will be trimmed to value
**         4MHz.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ClockSelect     - Selects which internal
**                           reference clock will be trimmed.
**                           0 ... slow (32kHz) internal reference clock
**                           will be trimmed
**                           > 0 ... fast (4MHz) internal reference
**                           clock will be trimmed
**     Returns     :
**         ---             - Error code
**                           ERR_OK - OK
**                           ERR_SPEED - The method does not work in the
**                           active clock configuration.
**                           ERR_FAILED - Autotrim process failed.
** ===================================================================
*/
LDD_TError Cpu_MCGAutoTrim(uint8_t ClockSelect);

/*
** ===================================================================
**     Method      :  Cpu_GetLLSWakeUpFlags (component MK60FN1M0LQ15)
**     Description :
**         This method returns the current status of the LLWU wake-up
**         flags indicating which wake-up source caused the MCU to exit
**         LLS or VLLSx low power mode.
**         The following predefined constants can be used to determine
**         the wake-up source:
**         LLWU_EXT_PIN0, ... LLWU_EXT_PIN15 - external pin 0 .. 15
**         caused the wake-up
**         LLWU_INT_MODULE0 .. LLWU_INT_MODULE7 - internal module 0..15
**         caused the wake-up.
**     Parameters  : None
**     Returns     :
**         ---             - Returns the current status of the LLWU
**                           wake-up flags indicating which wake-up
**                           source caused the MCU to exit LLS or VLLSx
**                           low power mode.
** ===================================================================
*/
uint32_t Cpu_GetLLSWakeUpFlags(void);

/*
** ===================================================================
**     Method      :  Cpu_SetClockConfiguration (component MK60FN1M0LQ15)
**     Description :
**         Calling of this method will cause the clock configuration
**         change and reconfiguration of all components according to
**         the requested clock configuration setting.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ModeID          - Clock configuration identifier
**     Returns     :
**         ---             - ERR_OK - OK.
**                           ERR_RANGE - Mode parameter out of range
** ===================================================================
*/
LDD_TError Cpu_SetClockConfiguration(LDD_TClockConfiguration ModeID);

/*
** ===================================================================
**     Method      :  Cpu_GetClockConfiguration (component MK60FN1M0LQ15)
**     Description :
**         Returns the active clock configuration identifier. The
**         method is enabled only if more than one clock configuration
**         is enabled in the component.
**     Parameters  : None
**     Returns     :
**         ---             - Active clock configuration identifier
** ===================================================================
*/
uint8_t Cpu_GetClockConfiguration(void);

/*
** ===================================================================
**     Method      :  Cpu_SetOperationMode (component MK60FN1M0LQ15)
**     Description :
**         This method requests to change the component's operation
**         mode (RUN, WAIT, SLEEP, STOP). The target operation mode
**         will be entered immediately. 
**         See <Operation mode settings> for further details of the
**         operation modes mapping to low power modes of the cpu.
**     Parameters  :
**         NAME            - DESCRIPTION
**         OperationMode   - Requested driver
**                           operation mode
**         ModeChangeCallback - Callback to
**                           notify the upper layer once a mode has been
**                           changed. Parameter is ignored, only for
**                           compatibility of API with other components.
**       * ModeChangeCallbackParamPtr 
**                           - Pointer to callback parameter to notify
**                           the upper layer once a mode has been
**                           changed. Parameter is ignored, only for
**                           compatibility of API with other components.
**     Returns     :
**         ---             - Error code
**                           ERR_OK - OK
**                           ERR_PARAM_MODE - Invalid operation mode
** ===================================================================
*/
LDD_TError Cpu_SetOperationMode(LDD_TDriverOperationMode OperationMode, LDD_TCallback ModeChangeCallback, LDD_TCallbackParam *ModeChangeCallbackParamPtr);

/*
** ===================================================================
**     Method      :  Cpu_EnableInt (component MK60FN1M0LQ15)
**     Description :
**         Enables all maskable interrupts.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void Cpu_EnableInt(void);

/*
** ===================================================================
**     Method      :  Cpu_DisableInt (component MK60FN1M0LQ15)
**     Description :
**         Disables all maskable interrupts.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void Cpu_DisableInt(void);

/*
** ===================================================================
**     Method      :  PE_low_level_init (component MK60FN1M0LQ15)
**
**     Description :
**         Initializes beans and provides common register initialization. 
**         The method is called automatically as a part of the 
**         application initialization code.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void PE_low_level_init(void);

/* {MQX RTOS Adapter} ISR function prototype */
void Cpu_INT_LLWInterrupt(LDD_RTOS_TISRParameter _isrParameter);
/*
** ===================================================================
**     Method      :  Cpu_INT_LLWInterrupt (component MK60FN1M0LQ15)
**
**     Description :
**         This ISR services the 'LLWU' interrupt.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/

void __pe_initialize_hardware(void);
/*
** ===================================================================
**     Method      :  __pe_initialize_hardware (component MK60FN1M0LQ15)
**
**     Description :
**         Initializes the whole system like timing, external bus, etc.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/

/* END Cpu. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif
/* __Cpu_H */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.2 [05.06]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
