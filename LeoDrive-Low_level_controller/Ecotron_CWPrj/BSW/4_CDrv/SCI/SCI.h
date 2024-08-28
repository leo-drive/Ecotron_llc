/*
 * SCI.h
 *
 *  Created on: 2021Äê8ÔÂ25ÈÕ
 *      Author:SHM
 */

#ifndef SRC_BSW_MCAL_TC29XB_MCAL_COM_ASCLIN_ASC_SCI_H_
#define SRC_BSW_MCAL_TC29XB_MCAL_COM_ASCLIN_ASC_SCI_H_
#include "Cpu/Std/Ifx_Types.h"
#include "IntPrioDef.h"

#include <Asclin/Asc/IfxAsclin_Asc.h>

extern uint8 Test_RS232_Data;
extern uint8 RS232_Test_Count;
extern uint8 RS232_Test_DataPtr[255];
#ifndef NULL
#define  (void *)(0)
#endif


//typedef void (*FType_Abstr_SCIRxIsr)(SciChannelType channel, uint8 Rx_data);

typedef struct{
	uint8 RX_Data_Length;
	uint8 RX_Data[255];
}RxData;

typedef enum
{
	SCI_UART_A,
	SCI_UART_B,
	SCI_UART_C,
	SCI_UART_MAX
}SciChannelType;

typedef enum
{
	SCI_PARITY_NONE,
	SCI_PARITY_ODD,
	SCI_PARITY_EVEN
}SciParityModeType;


#define SCI0_RX_PIN IfxAsclin1_RXG_P02_3_IN
#define SCI0_TX_PIN IfxAsclin1_TX_P02_2_OUT

#define SCI1_RX_PIN IfxAsclin2_RXB_P02_1_IN
#define SCI1_TX_PIN IfxAsclin2_TX_P02_0_OUT

//#define SCI2_RX_PIN IfxAsclin0_RXD_P34_2_IN
//#define SCI2_TX_PIN IfxAsclin0_TX_P34_1_OUT

#define SCI2_RX_PIN IfxAsclin3_RXE_P00_1_IN
#define SCI2_TX_PIN IfxAsclin3_TX_P00_0_OUT

extern void F_SCI_Init(SciChannelType channel,uint32 baudrate,SciParityModeType paritymode,IfxAsclin_StopBit StopBitmode);
//extern uint8 F_SCI_Multibyte_TxData(SciChannelType channel, uint8 length,uint8 *data);
//extern uint8 F_SCI_Multibyte_RxData(SciChannelType channel, uint8 *dataP);
extern uint8 F_SCI_TxData(SciChannelType channel,uint8 data);
extern uint8 F_SCI_RxData(SciChannelType channel, uint8 *dataPtr);
typedef void (*FType_Abstr_SCIRxIsr)(SciChannelType channel, uint8 Rx_data);

extern void F_SCI_InstallRxSltCall(FType_Abstr_SCIRxIsr ISR_SCI_Rx_Data_Fun);

#define SCI_CTRL_A SCI_UART_A
#define SCI_CTRL_B SCI_UART_B
#define SCI_CTRL_C SCI_UART_C

#endif /* SRC_BSW_MCAL_TC29XB_MCAL_COM_ASCLIN_ASC_SCI_H_ */
