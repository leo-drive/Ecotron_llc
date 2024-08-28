/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		TIM.h
Author:			
Version:		V1.0.1
Date:			2017-2-22
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef TIM_H
#define TIM_H


#include "Cpu\Std\Ifx_Types.h"


typedef enum
{
	IPWM_1 = 1,
	IPWM_2 = 2,
	//==========================zhaoxn addsta 2020-5-6=================================
	IPWM_3 = 3,
	IPWM_4 = 4,
	//==========================zhaoxn addend 2020-5-6=================================

} IPWMChannelType;


// TIM ‰»Îπ‹Ω≈≈‰÷√
#define GtmTim_PWM1_Pin_IN		IfxGtm_TIM0_4_TIN22_P33_0_IN
#define GtmTim_PWM2_Pin_IN		IfxGtm_TIM0_5_TIN23_P33_1_IN
//==========================zhaoxn addsta 2020-5-6=================================
#define GtmTim_PWM3_Pin_IN		IfxGtm_TIM0_7_TIN44_P23_3_IN
#define GtmTim_PWM4_Pin_IN		IfxGtm_TIM1_7_TIN45_P23_4_IN
//==========================zhaoxn addend 2019-5-6=================================

//==========================zhaoxn addsta 2019-3-23=================================
#define GtmTim_PULSE1_INT_Pin_IN		IfxGtm_TIM1_1_TIN27_P33_5_IN
#define GtmTim_PULSE2_INT_Pin_IN		IfxGtm_TIM1_2_TIN28_P33_6_IN
#define GtmTim_PULSE3_INT_Pin_IN		IfxGtm_TIM1_6_TIN43_P23_2_IN
#define GtmTim_PULSE4_INT_Pin_IN		IfxGtm_TIM1_5_TIN40_P32_4_IN

typedef enum
{
	chan1 = 10,
	chan2 = 11,
	chan5 = 12,
	chan6 = 13,
}GTM_TIM1CHx_NUM;

typedef void (*GTM_timerHandler)(GTM_TIM1CHx_NUM num,uint32 effctive,uint32 period);
extern void F_GTM_TIME1CHxIntConfig(GTM_TIM1CHx_NUM num, uint8 edge);
extern void F_GTM_TIME1CHxISRInstall(GTM_timerHandler handler);
//==========================zhaoxn addend 2019-3-23=================================

extern void F_GtmTim_Init(void);
extern void F_GtmTim_IPWM_Read(IPWMChannelType Channel, uint32 *Freq, uint32 *Duty);
extern void F_IPWM_Timeout_Counter_r1ms(void);



#endif




