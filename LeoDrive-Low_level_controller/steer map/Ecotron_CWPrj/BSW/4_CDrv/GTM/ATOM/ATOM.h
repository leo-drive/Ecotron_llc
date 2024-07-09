/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		ATOM.h
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

#ifndef ATOM_H
#define ATOM_H


#include "Cpu\Std\Ifx_Types.h"
#include "IO_cfg.h"
//================zhaoxn addsta 2019-11-26================
#include "hal_version.h"
//================zhaoxn addend 2019-11-26================

#define IfxGtm_GclkFrequency	10000000.0f		// GTM模块频率设定：10M


typedef enum
{
	OPWM_1 = 1,
	OPWM_2 = 2,
	OPWM_3 = 3,
	OPWM_4 = 4,
	OPWM_5 = 5,
	OPWM_6 = 6,
	OPWM_7 = 7,
	OPWM_8 = 8,
	OPWM_9 = 9,
	OPWM_10 = 10,
	//===zhaoxn addsta 2020-5-6======
	OPWM_11 = 11,
	OPWM_12 = 12,
	OPWM_13 = 13,
	OPWM_14 = 14,
	//===zhaoxn addend 2020-5-6======

} OPWMChannelType;


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
			//====zhaoxn modify 2020-5-6======
			uint16 channel11  	: 1;
			uint16 channel12  	: 1;
			uint16 channel13  	: 1;
			uint16 channel14  	: 1;
			uint16 Reserved 	: 2;
			//====zhaoxn modify 2020-5-6======

		}Chan;
	}PwmEn;

} GtmAtomChanEnType;


// TOM输出PWM管脚配置
#define GtmAtom_PWM1_Pin_OUT				IfxGtm_ATOM4_3_TOUT71_P15_0_OUT
#define GtmAtom_PWM2_Pin_OUT				IfxGtm_ATOM1_4_TOUT72_P15_1_OUT
#define GtmAtom_PWM3_Pin_OUT				IfxGtm_ATOM0_6_TOUT106_P10_4_OUT
#define GtmAtom_PWM4_Pin_OUT				IfxGtm_ATOM1_3_TOUT105_P10_3_OUT
#define GtmAtom_PWM5_Pin_OUT				IfxGtm_ATOM1_2_TOUT104_P10_2_OUT
//=============================zhaoxn modify 2019-11-26==============================
#ifndef EH2275A02
#define GtmAtom_PWM6_Pin_OUT				IfxGtm_ATOM1_1_TOUT103_P10_1_OUT
#define GtmAtom_PWM7_Pin_OUT				IfxGtm_ATOM2_7_TOUT101_P11_12_OUT
#define GtmAtom_PWM8_Pin_OUT				IfxGtm_ATOM2_6_TOUT100_P11_11_OUT
#endif
//=============================zhaoxn modify 2019-11-26==============================
#define GtmAtom_PWM9_Pin_OUT				IfxGtm_ATOM0_3_TOUT13_P00_4_OUT
#define GtmAtom_PWM10_Pin_OUT				IfxGtm_ATOM0_4_TOUT14_P00_5_OUT
//=============================zhaoxn addsta 2020-5-6==============================
#define GtmAtom_PWM11_Pin_OUT				IfxGtm_ATOM2_2_TOUT20_P00_11_OUT
#define GtmAtom_PWM12_Pin_OUT				IfxGtm_ATOM2_3_TOUT21_P00_12_OUT
#define GtmAtom_PWM13_Pin_OUT				IfxGtm_ATOM1_6_TOUT24_P33_2_OUT
#define GtmAtom_PWM14_Pin_OUT				IfxGtm_ATOM1_7_TOUT25_P33_3_OUT
//=============================zhaoxn addend 2020-5-6==============================

#define GtmAtom_TLF35584_ERR_Pin_OUT		IfxGtm_ATOM0_2_TOUT33_P33_11_OUT



extern void F_GtmAtom_Init(GtmAtomChanEnType *GtmAtomChanEn_Ptr);
extern void F_GtmAtom_OPWM_Set(OPWMChannelType channel, uint32 Freq, uint32 Duty);
extern void F_TLF35584_ERR_Init(uint8 Enable);



#endif




