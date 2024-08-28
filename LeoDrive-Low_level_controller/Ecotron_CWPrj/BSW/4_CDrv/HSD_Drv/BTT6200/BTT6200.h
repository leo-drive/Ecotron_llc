/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		BTT6200.h
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

#ifndef BTT6200_H
#define BTT6200_H


#include "Cpu\Std\Ifx_Types.h"




extern void F_BTT6200_init(void);

extern void HSD_05_SetChan(boolean Level);
extern void HSD_06_SetChan(boolean Level);
extern void HSD_07_SetChan(boolean Level);
extern void HSD_08_SetChan(boolean Level);
extern void HSD_09_SetChan(boolean Level);
extern void HSD_10_SetChan(boolean Level);

extern uint16 Read_BTT6200_U0_DTC(uint8 Channel);
extern uint16 Read_BTT6200_U1_DTC(uint8 Channel);
extern void BTT6200_DSEL_Switch_r1ms(void);


#endif




