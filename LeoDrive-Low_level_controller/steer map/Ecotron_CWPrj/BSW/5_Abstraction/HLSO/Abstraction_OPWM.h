/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		Abstraction_OPWM.h
Author:			
Version:		V1.0.0
Date:			2018-8-14
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef Abstraction_OPWM_H
#define Abstraction_OPWM_H


#include "HLSO.h"


#define OPWM_LSO21	OPWM_1 
#define OPWM_LSO22	OPWM_2 
#define OPWM_LSO23	OPWM_3 
#define OPWM_LSO24	OPWM_4 
#define OPWM_LSO25	OPWM_5 
#define OPWM_LSO26	OPWM_6 
#define OPWM_LSO27	OPWM_7 
#define OPWM_LSO28	OPWM_8 
#define OPWM_LSO29	OPWM_9 
#define OPWM_LSO30	OPWM_10
//=======zhaoxn addsta 2020-5-6===========
#define OPWM_HSO07	OPWM_11
#define OPWM_HSO08	OPWM_12
#define OPWM_HSO09	OPWM_13
#define OPWM_HSO10	OPWM_14
//=======zhaoxn addend 2020-5-6===========


extern void F_Abstr_OPWM_Set(OPWMChannelType channel, uint32 Freq, uint32 Duty);



#endif







