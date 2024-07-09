/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		IO_cfg.h
Author:			
Version:		V1.0.1
Date:			2016-12-20
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef IO_CFG_H
#define IO_CFG_H

#include "Port\Io\IfxPort_Io.h"
//==========zhaoxn addsta 2019-11-26===============
#include "hal_version.h"
//==========zhaoxn addend 2019-11-26===============



#define Level_High	1
#define Level_Low	0


typedef struct
{
	Ifx_P *PortNum;
	uint8 PinNum;
}IoAbtype;



//系统LED
extern IoAbtype LED;

//高边驱动BTT6200
//U0
extern IoAbtype HSD_05;
extern IoAbtype HSD_06;
extern IoAbtype HSD_07;
extern IoAbtype HSD_08;

extern IoAbtype BTT6200_DEN;
extern IoAbtype BTT6200_DSEL0;
extern IoAbtype BTT6200_DSEL1;

//U1
extern IoAbtype HSD_09;
extern IoAbtype HSD_10;
//内部上拉开关设置
extern IoAbtype Inside_PullUp;

//高边驱动A3942
extern IoAbtype A3942_RESETZ;
extern IoAbtype A3942_ENB;

//低边驱动NCV7513
extern IoAbtype NCV7513_ENA1;
extern IoAbtype NCV7513_ENA2;

extern IoAbtype NCV7513_IN0;
extern IoAbtype NCV7513_IN1;
extern IoAbtype NCV7513_IN2;

//低边驱动TLE8110
extern IoAbtype TLE8110_EN0;
extern IoAbtype TLE8110_EN1;
extern IoAbtype TLE8110_RST0;
extern IoAbtype TLE8110_RST1;

//CAN收发器控制管脚
extern IoAbtype TLE6251D_STB1;
extern IoAbtype TLE6251D_STB2;
extern IoAbtype TLE6251D_STB3;

extern IoAbtype TJA1043_STB_N;
extern IoAbtype TJA1043_ERR_N;
extern IoAbtype TJA1043_EN;

//电源管理芯片TLF35584
extern IoAbtype TLF35584_WDI;

//FlexRay 收发器控制管脚
extern IoAbtype TJA1080A_EN;
extern IoAbtype TJA1080A_STB;
//===========zhaoxn addsta 2019-11-26================
#ifdef EH2275A02
extern IoAbtype TJA1080A_VIO;
extern IoAbtype TJA1080A_EN_B;
extern IoAbtype TJA1080A_STB_B;
#endif
//===========zhaoxn addend 2019-11-26================



// 数字IO输入采集端口 DI
extern IoAbtype DI_L_00;
extern IoAbtype DI_L_01;
extern IoAbtype DI_L_02;
extern IoAbtype DI_L_03;
extern IoAbtype DI_L_04;
extern IoAbtype DI_L_05;
extern IoAbtype DI_L_06;
extern IoAbtype DI_L_07;
extern IoAbtype DI_L_08;
extern IoAbtype DI_L_09;
extern IoAbtype DI_L_10;
extern IoAbtype DI_H_11;
extern IoAbtype DI_H_12;
//===========zhaoxn modify 2019-11-26================
#ifndef EH2275A02
extern IoAbtype DI_H_13;
extern IoAbtype DI_H_14;
extern IoAbtype DI_H_15;
extern IoAbtype DI_H_16;
extern IoAbtype DI_H_17;
extern IoAbtype DI_H_18;
extern IoAbtype DI_H_19;
#endif
//===========zhaoxn modify 2019-11-26================





extern void F_GPIO_init(void);




#endif


