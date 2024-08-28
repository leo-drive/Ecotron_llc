/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		A3942.h
Author:			
Version:		V1.0.1
Date:			2017-1-13
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/


#ifndef A3942_H
#define A3942_H

#include "Cpu\Std\Ifx_Types.h"
#include "QSPI.h"




struct A3942drive
{
	union
	{
		uint8 D;
		struct
		{
			uint8 Gate0      : 1;
			uint8 STGBT      : 2;
			uint8 ClrFaults  : 1;
			uint8 Mask     	 : 1;
			uint8 InReadEn   : 1;
			uint8 Address    : 2;

		}bit;
	}DATA0;
	union
	{
		uint8 D;
		struct
		{
			uint8 Gate1      : 1;
			uint8 STGBT      : 2;
			uint8 ClrFaults  : 1;
			uint8 Mask     	 : 1;
			uint8 InReadEn   : 1;
			uint8 Address    : 2;

		}bit;
	}DATA1;
	union
	{
		uint8 D;
		struct
		{
			uint8 Gate2      : 1;
			uint8 STGBT      : 2;
			uint8 ClrFaults  : 1;
			uint8 Mask     	 : 1;
			uint8 InReadEn   : 1;
			uint8 Address    : 2;

		}bit;
	}DATA2;
	union
	{
		uint8 D;
		struct
		{
			uint8 Gate3      : 1;
			uint8 STGBT      : 2;
			uint8 ClrFaults  : 1;
			uint8 Mask     	 : 1;
			uint8 InReadEn   : 1;
			uint8 Address    : 2;

		}bit;
	}DATA3;
};








extern void F_A3942_init(void);
extern void F_A3942_PinOut_r10ms(void);
extern void HSD_01_SetChan(boolean Level);
extern void HSD_02_SetChan(boolean Level);
extern void HSD_03_SetChan(boolean Level);
extern void HSD_04_SetChan(boolean Level);
extern uint16 Read_A3942_DTC(uint8 Channel);






#endif





