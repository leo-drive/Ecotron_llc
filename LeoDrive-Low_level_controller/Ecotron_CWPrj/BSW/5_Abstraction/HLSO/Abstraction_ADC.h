/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		Abstraction_ADC.h
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

#ifndef Abstraction_ADC_H
#define Abstraction_ADC_H


#include "VADC.h"
#include "hal_version.h"

#define ABS_ADC_01 AN0_0
#define ABS_ADC_02 AN1_0
#define ABS_ADC_03 AN1_2
#define ABS_ADC_04 AN1_3
#define ABS_ADC_05 AN0_3
#define ABS_ADC_06 AN1_4
#define ABS_ADC_07 AN0_4
#define ABS_ADC_08 AN2_0
#define ABS_ADC_09 AN2_1
#define ABS_ADC_11 AN3_0
#define ABS_ADC_12 AN3_1
#define ABS_ADC_13 AN3_2
#define ABS_ADC_14 AN3_3
#define ABS_ADC_15 AN3_4
#define ABS_ADC_16 AN4_6

//=========zhaoxn addsta 2019-11-26===========
#ifdef EH2275A02
#define ABS_ADC_17 AN2_3
#define ABS_ADC_18 AN2_4
#define ABS_ADC_19 AN2_5
#define ABS_ADC_20 AN5_5
#define ABS_ADC_21 AN5_6
#define ABS_ADC_22 AN5_7
#define ABS_ADC_23 AN2_2//correspond to AI_S16 in schematic
#endif
//=========zhaoxn addend 2019-11-26===========

#define ABS_ADC_27 AN4_5
#define ABS_ADC_28 AN4_7

#define ABS_ADC_0  ABS_ADC_00
#define ABS_ADC_1  ABS_ADC_01
#define ABS_ADC_2  ABS_ADC_02
#define ABS_ADC_3  ABS_ADC_03
#define ABS_ADC_4  ABS_ADC_04
#define ABS_ADC_5  ABS_ADC_05
#define ABS_ADC_6  ABS_ADC_06
#define ABS_ADC_7  ABS_ADC_07
#define ABS_ADC_8  ABS_ADC_08
#define ABS_ADC_9  ABS_ADC_09


#define F_Abstr_ADC_GetValue(channel) F_ADC_ReadAdcResult(channel)



#endif







