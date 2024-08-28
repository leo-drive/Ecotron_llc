/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		TOM.h
Author:			
Version:		V1.0.1
Date:			2017-2-5
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef TOM_H
#define TOM_H


#include "Cpu\Std\Ifx_Types.h"
#include "ATOM.h"



typedef struct
{
	union
	{
		uint16 All;
		struct
		{
			uint16 channel1  	: 1;
			uint16 channel2  	: 1;
			uint16 channel3  	: 1;
			uint16 channel4  	: 1;
			uint16 channel5 	: 1;
			uint16 channel6  	: 1;
			uint16 channel7  	: 1;
			uint16 channel8  	: 1;
			uint16 channel9 	: 1;
			uint16 channel10  	: 1;
			uint16 Reserved 	: 6;

		}Chan;
	}PwmEn;

} GtmTomChanEnType;


// TOM ‰≥ˆPWMπ‹Ω≈≈‰÷√
#define GtmTom_PWM1_Pin_OUT		IfxGtm_TOM0_8_TOUT8_P02_8_OUT
#define GtmTom_PWM2_Pin_OUT		IfxGtm_TOM0_15_TOUT7_P02_7_OUT
#define GtmTom_PWM3_Pin_OUT		IfxGtm_TOM1_8_TOUT0_P02_0_OUT
#define GtmTom_PWM4_Pin_OUT		IfxGtm_TOM0_5_TOUT110_P10_8_OUT
#define GtmTom_PWM5_Pin_OUT		IfxGtm_TOM0_0_TOUT109_P10_7_OUT
#define GtmTom_PWM6_Pin_OUT		IfxGtm_TOM0_6_TOUT106_P10_4_OUT
#define GtmTom_PWM7_Pin_OUT		IfxGtm_TOM0_3_TOUT105_P10_3_OUT
#define GtmTom_PWM8_Pin_OUT		IfxGtm_TOM0_2_TOUT104_P10_2_OUT
#define GtmTom_PWM9_Pin_OUT		IfxGtm_TOM0_11_TOUT13_P00_4_OUT
#define GtmTom_PWM10_Pin_OUT	IfxGtm_TOM0_12_TOUT14_P00_5_OUT


extern void F_GtmTom_Init(GtmTomChanEnType *GtmTomChanEn_Ptr);
extern void F_GtmTom_OPWM_Set(OPWMChannelType channel, uint32 Freq, uint32 Duty);








#endif




