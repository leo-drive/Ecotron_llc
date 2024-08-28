/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		CCU6.h
Author:			
Version:		V1.0.1
Date:			2017-2-21
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef CCU6_H
#define CCU6_H


#include "Cpu\Std\Ifx_Types.h"



typedef void (*ccu6_type_task)(void);

extern void F_CCU6_Init(void);

//extern uint16 CCU6_T13_GetCounterValue(void);

extern ccu6_type_task FP_CCU6_50ms;
extern ccu6_type_task FP_CCU6_200ms;

#endif







