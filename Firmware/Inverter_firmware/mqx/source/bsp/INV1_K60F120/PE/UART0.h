/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : UART0.h
**     Project     : ProcessorExpert
**     Processor   : MK60FN1M0VLQ12
**     Component   : Init_UART
**     Version     : Component 01.004, Driver 01.04, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2013-08-09, 15:03, # CodeGen: 12
**     Abstract    :
**          This file implements the UART (UART0) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
**     Settings    :
**          Component name                                 : UART0
**          Device                                         : UART0
**          Settings                                       : 
**            Clock gate                                   : Enabled
**            Clock settings                               : 
**              Baud rate divisor                          : 65
**              Baud rate fine adjust                      : 3
**              Baud rate                                  : 115218.435 baud
**            Transfer settings                            : 
**              Data format                                : 8bit
**              Bits ordering                              : LSB first
**              Parity                                     : Off
**              Parity placement                           : Parity in last data bit
**            Idle character counting                      : After start bit
**            Break character generation length            : Short
**            LIN Break detection                          : Disabled
**            Stop in Wait mode                            : Disabled
**            Receiver wakeup settings                     : 
**              Receiver wakeup                            : Normal operation
**              Receiver wake up method                    : Idle-line
**              Receive wakeup idle detect                 : Don't set IDLE bit
**              Match address settings                     : 
**                Match address 1                          : Disabled
**                Match address 1 value                    : 0
**                Match address 2                          : Disabled
**                Match address 2 value                    : 0
**            Modem settings                               : 
**              Tx CTS                                     : Disabled
**              Tx RTS                                     : Disabled
**              Tx RTS polarity                            : Active low
**              Rx RTS                                     : Disabled
**            Infrared settings                            : 
**              Infrared                                   : Disabled
**              Tx narrow pulse width                      : 3/16
**            FIFOs settings                               : 
**              Tx FIFO                                    : Enabled
**              Tx watermark                               : 32
**              Rx FIFO                                    : Enabled
**              Rx watermark                               : 32
**            Smartcards interface (ISO7816) settings      : 
**              ISO7816 functionality                      : Disabled
**              Transfer type                              : T=0
**                Rx error action                          : Error NACK not generated
**                Rx FIFO overflow action                  : Overflow NACK not generated
**                Rx NACK threshold                        : 0
**                Tx NACK threshold                        : 0
**                Wait time value                          : 10
**              Init char detection                        : Disabled
**              Guard band N                               : 0
**              FD multiplier                              : 1
**            CEA709.1-B interface settings                : 
**              CEA709 functionality                       : Disabled
**              Collision detection                        : Disabled
**              Transmitter                                : Disabled
**              Collision signal polarity                  : Low
**              Packet time counter                        : 0
**              Beta 1 timer                               : 0
**              Secondary delay timer                      : 0
**              Preamble                                   : 0
**              WBase                                      : 0
**              Collision pulse width                      : 0
**              Receive indeterminate time                 : 0
**              Transmit indeterminate time                : 0
**            Loops and Single wire settings               : 
**              Loop mode                                  : Disabled
**              Receiver source in Loop mode               : Loop mode
**              TxD pin direction in Single-wire mode      : Input
**            Receiver input                               : Not inverted
**            Transmitter output                           : Not inverted
**          Pins/Signals                                   : 
**            Receiver pin                                 : Enabled
**              Pin                                        : TSI0_CH9/PTB16/SPI1_SOUT/UART0_RX/I2S1_TXD0/FBa_AD17/EWM_IN
**              Pin signal                                 : 
**            Transmitter pin                              : Enabled
**              Pin                                        : TSI0_CH10/PTB17/SPI1_SIN/UART0_TX/I2S1_TXD1/FBa_AD16/EWM_OUT_b
**              Pin signal                                 : 
**              Transmitter modulation                     : Disabled
**            CTS pin                                      : Disabled
**            RTS pin                                      : Disabled
**          Interrupts/DMA                                 : 
**            Common Tx/Rx interrupt                       : 
**              Interrupt                                  : INT_UART0_RX_TX
**              Interrupt request                          : Disabled
**              Interrupt priority                         : 0 (Highest)
**              ISR name                                   : 
**              Transmit empty request                     : Disabled
**              Transmit empty request type                : IRQ
**              Transmit complete request                  : Disabled
**              Receiver full request                      : Disabled
**              Receiver full request type                 : IRQ
**              Idle line request                          : Disabled
**              LIN break detect request                   : Disabled
**              Rx active edge interrupt                   : Disabled
**              Smartcards interface (ISO7816) interrupts  : 
**                Init char detected interrupt             : Disabled
**            Error Interrupt                              : 
**              Error interrupt                            : INT_UART0_ERR
**              Interrupt request                          : Disabled
**              Interrupt priority                         : 0 (Highest)
**              ISR name                                   : 
**              Overrun error interrupt                    : Disabled
**              Noise error interrupt                      : Disabled
**              Framing error interrupt                    : Disabled
**              Parity error interrupt                     : Disabled
**              FIFOs interrupts                           : 
**                Tx FIFO overflow interrupt               : Disabled
**                Rx FIFO underflow interrupt              : Disabled
**              Smartcards interface (ISO7816) interrupts  : 
**                Wait timer interrupt                     : Disabled
**                Char wait timer interrupt                : Disabled
**                Block wait timer interrupt               : Disabled
**                Tx threshold exceeded interrupt          : Disabled
**                Rx threshold exceeded                    : Disabled
**                Guard timer violated interrupt           : Disabled
**            CEA709 Interrupt                             : 
**              CEA709 interrupt                           : INT_UART0_LON
**              Interrupt request                          : Disabled
**              Interrupt priority                         : 0 (Highest)
**              ISR name                                   : 
**              Wbase expired interrupt                    : Disabled
**              Initial sync detection interrupt           : Disabled
**              Packet received interrupt                  : Disabled
**              Packet transmitted interrupt               : Disabled
**              Packet cycle timer interrupt               : Disabled
**              Preamble start interrupt                   : Disabled
**              Transmission fail interrupt                : Disabled
**          Initialization                                 : 
**            Send break                                   : Disabled
**            Enable transmitter                           : Enabled
**            Enable receiver                              : Enabled
**            Call Init method                             : yes
**     Contents    :
**         Init - void UART0_Init(void);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file UART0.h
** @version 01.04
** @brief
**          This file implements the UART (UART0) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
*/         
/*!
**  @addtogroup UART0_module UART0 module documentation
**  @{
*/         

#ifndef UART0_H_
#define UART0_H_

/* MODULE UART0. */

/* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"

/* Peripheral base address parameter */
#define UART0_DEVICE UART0_BASE_PTR


/*
** ===================================================================
**     Method      :  UART0_Init (component Init_UART)
**     Description :
**         This method initializes registers of the UART module
**         according to the Peripheral Initialization settings.
**         Call this method in user code to initialize the module. By
**         default, the method is called by PE automatically; see "Call
**         Init method" property of the component for more details.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void UART0_Init(void);


/* END UART0. */
#endif /* #ifndef __UART0_H_ */
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
