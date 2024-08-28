/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		TLE8110.h
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


#ifndef TLE8110_H
#define TLE8110_H


#include "Cpu\Std\Ifx_Types.h"
#include "QSPI.h"




struct TLE8110drive
{
	union
	{
		uint16 D;
		struct
		{
			uint16 OUT1  	: 1;
			uint16 OUT2  	: 1;
			uint16 OUT3  	: 1;
			uint16 OUT4  	: 1;
			uint16 OUT5 	: 1;
			uint16 OUT6  	: 1;
			uint16 OUT7  	: 1;
			uint16 OUT8  	: 1;
			uint16 OUT9 	: 1;
			uint16 OUT10  	: 1;
			uint16 Reserved : 2;
			uint16 Address  : 3;
			uint16 W_R  	: 1;

		}bit;
	}OUT;
	union
	{
		uint16 D;
		struct
		{
			uint16 IS1  	: 2;
			uint16 IS2  	: 2;
			uint16 IS3  	: 2;
			uint16 IS4  	: 2;
			uint16 IS5 		: 2;
			uint16 IS6  	: 2;
			uint16 Address  : 3;
			uint16 W_R  	: 1;

		}bit;
	}ISA;
	union
	{
		uint16 D;
		struct
		{
			uint16 IS7  	: 2;
			uint16 IS8  	: 2;
			uint16 IS9  	: 2;
			uint16 IS10  	: 2;
			uint16 Reserved : 4;
			uint16 Address  : 3;
			uint16 W_R  	: 1;

		}bit;
	}ISB;
};






extern void F_TLE8110_init(void);
extern void F_TLE8110_PinOut_r10ms(void);
extern void F_TLE8110_UpdateData(CsAbtype CS_Channel, const void *TxData);
extern void LSD_07_SetChan(boolean Level);
extern void LSD_08_SetChan(boolean Level);
extern void LSD_09_SetChan(boolean Level);
extern void LSD_10_SetChan(boolean Level);
extern void LSD_11_SetChan(boolean Level);
extern void LSD_12_SetChan(boolean Level);
extern void LSD_13_SetChan(boolean Level);
extern void LSD_14_SetChan(boolean Level);
extern void LSD_15_SetChan(boolean Level);
extern void LSD_16_SetChan(boolean Level);

extern void LSD_P01_SetChan(boolean Level);
extern void LSD_P02_SetChan(boolean Level);
extern void LSD_P03_SetChan(boolean Level);
extern void LSD_P04_SetChan(boolean Level);
extern void LSD_P05_SetChan(boolean Level);
extern void LSD_P06_SetChan(boolean Level);
extern void LSD_P07_SetChan(boolean Level);
extern void LSD_P08_SetChan(boolean Level);
extern void LSD_P09_SetChan(boolean Level);
extern void LSD_P10_SetChan(boolean Level);

extern uint16 Read_TLE8110_U0_DTC(uint8 Channel);
extern uint16 Read_TLE8110_U1_DTC(uint8 Channel);
extern void F_Read_TLE8110_DTC_Service_r20ms(void);

#endif




