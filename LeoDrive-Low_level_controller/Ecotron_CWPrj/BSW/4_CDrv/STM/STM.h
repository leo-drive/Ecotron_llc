/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		STM.h
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

#ifndef STM_H
#define STM_H


#include "Cpu\Std\Ifx_Types.h"

typedef void (*stm_type_task)(void);

extern void F_STM_Init(void);
extern uint32 F_STM_GetLowerFreeTimerValue(void );


extern stm_type_task FP_STM_500ms;
extern stm_type_task FP_STM_1000ms;


#endif







