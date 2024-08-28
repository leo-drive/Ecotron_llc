/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		NCV7513.h
Author:			
Version:		V1.0.1
Date:			2017-1-16
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/


#ifndef NCV7513_H
#define NCV7513_H


#include "Cpu\Std\Ifx_Types.h"
#include "QSPI.h"



struct NCV7513drive
{
	union
	{
		uint16 D;
		struct
		{
			uint16 D0  		: 1;
			uint16 D1  		: 1;
			uint16 D2  		: 1;
			uint16 D3  		: 1;
			uint16 D4 		: 1;
			uint16 D5  		: 1;
			uint16 Reserved : 6;
			uint16 Address  : 4;

		}bit;
	}DATA0;

	union
	{
		uint16 D;
		struct
		{
			uint16 R0  		: 1;
			uint16 R1  		: 1;
			uint16 R2  		: 1;
			uint16 R3  		: 1;
			uint16 R4 		: 1;
			uint16 R5  		: 1;
			uint16 Reserved : 6;
			uint16 Address  : 4;

		}bit;
	}DATA1;

};








extern void F_NCV7513_init(void);
extern void F_NCV7513_PinOut_r10ms(void);
extern void F_NCV7513_UpdateData(CsAbtype CS_Channel, const void *TxData);
extern void LSD_01_SetChan(boolean Level);
extern void LSD_02_SetChan(boolean Level);
extern void LSD_03_SetChan(boolean Level);
extern void LSD_04_SetChan(boolean Level);
extern void LSD_05_SetChan(boolean Level);
extern void LSD_06_SetChan(boolean Level);
extern uint16 Read_NCV7513_DTC(uint8 Channel);



#endif




