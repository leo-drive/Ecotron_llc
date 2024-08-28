/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		VADC.h
Author:			
Version:		V1.0.1
Date:			2017-1-9
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef VADC_H
#define VADC_H


#include "Vadc\Adc\IfxVadc_Adc.h"
#include "DMA.h"


#define NUM_SCANNED_CHANNELS  48



typedef enum
{
	AN0_0 = 0,
	AN0_1 = 1,
	AN0_2 = 2,
	AN0_3 = 3,
	AN0_4 = 4,
	AN0_5 = 5,
	AN0_6 = 6,
	AN0_7 = 7,

	AN1_0 = 8,
	AN1_1 = 9,
	AN1_2 = 10,
	AN1_3 = 11,
	AN1_4 = 12,
	AN1_5 = 13,
	AN1_6 = 14,
	AN1_7 = 15,

	AN2_0 = 16,
	AN2_1 = 17,
	AN2_2 = 18,
	AN2_3 = 19,
	AN2_4 = 20,
	AN2_5 = 21,
	AN2_6 = 22,
	AN2_7 = 23,

	AN3_0 = 24,
	AN3_1 = 25,
	AN3_2 = 26,
	AN3_3 = 27,
	AN3_4 = 28,
	AN3_5 = 29,
	AN3_6 = 30,
	AN3_7 = 31,

	AN4_0 = 32,
	AN4_1 = 33,
	AN4_2 = 34,
	AN4_3 = 35,
	AN4_4 = 36,
	AN4_5 = 37,
	AN4_6 = 38,
	AN4_7 = 39,

	AN5_0 = 40,
	AN5_1 = 41,
	AN5_2 = 42,
	AN5_3 = 43,
	AN5_4 = 44,
	AN5_5 = 45,
	AN5_6 = 46,
	AN5_7 = 47,

} AdcChannelType;

#define  VADCGLOBResolutin_12bit IfxVadc_ChannelResolution_12bit
#define  VADCGLOBResolutin_10bit IfxVadc_ChannelResolution_10bit
#define  VADCGLOBResolutin_8bit IfxVadc_ChannelResolution_8bit

// VADC group handle
extern IfxVadc_Adc_Group adcGroup0;
extern IfxVadc_Adc_Group adcGroup1;
extern IfxVadc_Adc_Group adcGroup2;
extern IfxVadc_Adc_Group adcGroup3;
extern IfxVadc_Adc_Group adcGroup4;
extern IfxVadc_Adc_Group adcGroup5;
//VADC group DMA config
extern IfxDma_Init_Config DmaInit_Config_VADC_G0;
extern IfxDma_Init_Config DmaInit_Config_VADC_G1;
extern IfxDma_Init_Config DmaInit_Config_VADC_G2;
extern IfxDma_Init_Config DmaInit_Config_VADC_G3;
extern IfxDma_Init_Config DmaInit_Config_VADC_G4;
extern IfxDma_Init_Config DmaInit_Config_VADC_G5;


extern void F_VADC_Init(IfxVadc_ChannelResolution GlobalResolution);
extern uint16 F_ADC_ReadAdcResult(AdcChannelType channel);




#endif


