/*************************************************************
Copyright (c) ECO-EV Technologies Co., Ltd. 2015-2016. All rights reserved.

File name:		Abstraction_IPWM.h
Author:			
Version:		V1.0.1
Date:			2018-8-20
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef ABSTRACTION_IPWM_H
#define ABSTRACTION_IPWM_H

/*************************************************************
Includes
**************************************************************/
#include "TIM.h"


/******************************************************************************
type define
******************************************************************************/
//============zhaoxn addsta 2019-3-23================
typedef enum
{
	IPWM_DI01=chan1,
	IPWM_DI02=chan2,
	IPWM_DI11=chan6,
	IPWM_DI12=chan5,
} AbstrIPWMChType;

typedef enum
{

	IPWM_RISING_EDGE=1,
	IPWM_FALLING_EDGE=0,
} AbstrIPWMTriggerType;
//============zhaoxn addend 2019-3-23================



#define ABS_SPEED1 IPWM_1
#define ABS_SPEED2 IPWM_2
//=======zhaoxn addsta 2020-5-6===========
#define ABS_SPEED3 IPWM_3
#define ABS_SPEED4 IPWM_4
//=======zhaoxn addend 2020-5-6===========


#define ABS_SPEED01 	ABS_SPEED1
#define ABS_SPEED02 	ABS_SPEED2
#define ABS_SPEED03 	ABS_SPEED3
#define ABS_SPEED04 	ABS_SPEED4
#define ABS_SPEED05 	ABS_SPEED5
#define ABS_SPEED06 	ABS_SPEED6

/*************************************************************
Exported Function Declarations                                                                     
**************************************************************/

extern void F_Abstr_IPWM_GetWF(IPWMChannelType Channel, uint32 *Freq, uint32 *Duty);

//================================zhaoxn addsta 2019-3-23=============================================
//tEffLevel:The unit is us.  tPeriod:The unit is us.
//typedef void (*FType_Abstr_IPWM_Isr)(AbstrIPWMChType channel,uint32 tEffLevel,uint32 tPeriod);

extern  void F_Abstr_IPWM_InitCh(AbstrIPWMChType channel,AbstrIPWMTriggerType triggerType);
extern  void F_Abstr_IPWM_SetIsrCall(GTM_timerHandler isrPtr);
//================================zhaoxn addend 2019-3-23=============================================

#endif


