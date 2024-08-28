/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		HLSO.h
Author:			
Version:		V1.0.1
Date:			2017-2-23
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef HLSO_H
#define HLSO_H


#include "Cpu\Std\Ifx_Types.h"
#include "ATOM.h"


typedef enum
{
	HSO_01 = 1,
	HSO_02 = 2,
	HSO_03 = 3,
	HSO_04 = 4,
	HSO_05 = 5,
	HSO_06 = 6,
	HSO_07 = 7,
	HSO_08 = 8,
	HSO_09 = 9,
	HSO_10 = 10,

	InsidePullUp = 11,

} HSOChannelType;

#define HSO_1 	HSO_01
#define HSO_2 	HSO_02
#define HSO_3 	HSO_03
#define HSO_4 	HSO_04
#define HSO_5 	HSO_05
#define HSO_6 	HSO_06
#define HSO_7 	HSO_07
#define HSO_8 	HSO_08
#define HSO_9 	HSO_09


typedef enum
{
	LSO_01 = 1,
	LSO_02 = 2,
	LSO_03 = 3,
	LSO_04 = 4,
	LSO_05 = 5,
	LSO_06 = 6,
	LSO_07 = 7,
	LSO_08 = 8,
	LSO_09 = 9,
	LSO_10 = 10,
	LSO_11 = 11,
	LSO_12 = 12,
	LSO_13 = 13,
	LSO_14 = 14,
	LSO_15 = 15,
	LSO_16 = 16,

	LSO_P01 = 17,
	LSO_P02 = 18,
	LSO_P03 = 19,
	LSO_P04 = 20,
	LSO_P05 = 21,
	LSO_P06 = 22,
	LSO_P07 = 23,
	LSO_P08 = 24,
	LSO_P09 = 25,
	LSO_P10 = 26,

} LSOChannelType;

#define LSO_1 	LSO_01
#define LSO_2	LSO_02
#define LSO_3	LSO_03
#define LSO_4 	LSO_04
#define LSO_5	LSO_05
#define LSO_6	LSO_06
#define LSO_7	LSO_07
#define LSO_8	LSO_08
#define LSO_9	LSO_09

#define LSO_P1 	LSO_P01
#define LSO_P2 	LSO_P02
#define LSO_P3 	LSO_P03
#define LSO_P4 	LSO_P04
#define LSO_P5 	LSO_P05
#define LSO_P6 	LSO_P06
#define LSO_P7 	LSO_P07
#define LSO_P8 	LSO_P08
#define LSO_P9 	LSO_P09


typedef enum
{
	HLSO_TYPE_IO  = 0,
	HLSO_TYPE_SPI = 1,

} HLSO_DriveType;

typedef struct
{
	GtmAtomChanEnType GtmAtomChanEn;

	HLSO_DriveType Ch_LSO_P01;
	HLSO_DriveType Ch_LSO_P02;
	HLSO_DriveType Ch_LSO_P03;
	HLSO_DriveType Ch_LSO_P04;
	HLSO_DriveType Ch_LSO_P05;
	HLSO_DriveType Ch_LSO_P06;
	HLSO_DriveType Ch_LSO_P07;
	HLSO_DriveType Ch_LSO_P08;
	HLSO_DriveType Ch_LSO_P09;
	HLSO_DriveType Ch_LSO_P10;

	HLSO_DriveType Ch_LSO_01;
	HLSO_DriveType Ch_LSO_02;
	HLSO_DriveType Ch_LSO_03;

} LSO_Config;

//======================zhaoxn addsta 2020-5-7=======================
typedef enum
{
	HLSO_P01 = 0,
	HLSO_P02 ,
	HLSO_P03 ,
	HLSO_P04 ,
	HLSO_P05 ,
	HLSO_P06 ,
	HLSO_P07 ,
	HLSO_P08 ,
	HLSO_P09 ,
	HLSO_P10 ,
	HLSO_P11 ,
	HLSO_P12 ,
	HLSO_P13 ,
	HLSO_P14 ,
} HLSOPWMChannel;

typedef struct
{
	GtmAtomChanEnType GtmAtomChanEn;

	HLSO_DriveType Ch_LSO_P01;
	HLSO_DriveType Ch_LSO_P02;
	HLSO_DriveType Ch_LSO_P03;
	HLSO_DriveType Ch_LSO_P04;
	HLSO_DriveType Ch_LSO_P05;
	HLSO_DriveType Ch_LSO_P06;
	HLSO_DriveType Ch_LSO_P07;
	HLSO_DriveType Ch_LSO_P08;
	HLSO_DriveType Ch_LSO_P09;
	HLSO_DriveType Ch_LSO_P10;

	HLSO_DriveType Ch_LSO_01;
	HLSO_DriveType Ch_LSO_02;
	HLSO_DriveType Ch_LSO_03;

} HLSO_Config;

extern void F_Abstracton_HLSO_Init(HLSO_Config *config);
extern void F_Abstracton_HLSO_OPWMSet(OPWMChannelType channel, uint32 Freq, uint32 Duty);
//======================zhaoxn addend 2020-5-7=======================



extern uint8 HLSO_DriveType_NCV7513_IN0;
extern uint8 HLSO_DriveType_NCV7513_IN1;
extern uint8 HLSO_DriveType_NCV7513_IN2;

extern uint8 HLSO_DriveType_TLE8110_P01;
extern uint8 HLSO_DriveType_TLE8110_P02;
extern uint8 HLSO_DriveType_TLE8110_P03;
extern uint8 HLSO_DriveType_TLE8110_P04;
extern uint8 HLSO_DriveType_TLE8110_P05;
extern uint8 HLSO_DriveType_TLE8110_P06;
extern uint8 HLSO_DriveType_TLE8110_P07;
extern uint8 HLSO_DriveType_TLE8110_P08;
extern uint8 HLSO_DriveType_TLE8110_P09;
extern uint8 HLSO_DriveType_TLE8110_P10;


extern void F_Abstracton_HSO_Init(void);
extern void F_Abstracton_HSO_SwitchSet(HSOChannelType Channel,boolean Level);

//extern void F_Abstracton_LSO_Init(LSO_Config *config);
extern void F_Abstracton_LSO_SwitchSet(LSOChannelType Channel,boolean Level);
extern void F_Abstracton_LSO_OPWMSet(OPWMChannelType channel, uint32 Freq, uint32 Duty);

extern uint16 F_Read_HSO_DTC(HSOChannelType Channel);
extern uint16 F_Read_LSO_DTC(LSOChannelType Channel);


#endif







