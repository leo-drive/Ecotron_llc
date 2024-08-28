/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		IO_main.h
Author:			
Version:		V1.0.1
Date:			2016-12-20
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef IO_MAIN_H
#define IO_MAIN_H


#include "IO_cfg.h"





extern boolean F_GPIO_Read(IoAbtype ChanNum);
extern void F_GPIO_Set(IoAbtype ChanNum, uint8 Level);
extern void F_Port_setPinMode(IoAbtype ChanNum, IfxPort_Mode mode);
extern void F_SYS_LED(uint8 state);

#endif


