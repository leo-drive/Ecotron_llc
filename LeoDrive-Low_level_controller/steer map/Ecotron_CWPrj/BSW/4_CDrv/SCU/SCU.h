/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		SCU.h
Author:			
Version:		V1.0.1
Date:			2017-3-14
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef SCU_H
#define SCU_H

#include "Cpu\Std\Ifx_Types.h"




#define SPB_Frequency	100000000.0f	//System Peripheral Bus, 100M





extern uint8 Watchdog_Enable_flag;

extern void F_Watchdog_Init(uint8 Enable);
extern void F_Watchdog_service(void);
extern void F_SW_Reset(void);
extern void F_SYS_Clock_Init(void);
extern void F_SCU_Wait_us(uint16 DelayCount);
extern void F_SCU_Wait_ms(uint16 DelayCount);
extern void F_SCU_Wait_CPU1_ms(uint16 DelayCount);

#endif


