/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		QSPI.h
Author:			
Version:		V1.0.1
Date:			2016-12-29
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef QSPI_H
#define QSPI_H


#include "Cpu\Std\Ifx_Types.h"
#include "IO_cfg.h"


typedef enum
{
    NCV7513_CS = 0,
    A3942_CS,
    TLE8110_U0_CS,
	TLE8110_U1_CS,
    EEPROM_CS,
    TLF35584_CS,

} CsAbtype;



// QSPI0 通道管脚配置
#define Qspi_SCLK0_Pin_OUT    IfxQspi0_SCLK_P20_11_OUT
#define Qspi_MTSR0_Pin_OUT    IfxQspi0_MTSR_P20_14_OUT
#define Qspi_MRST0_Pin_IN     IfxQspi0_MRSTA_P20_12_IN

// QSPI1 通道管脚配置
#define Qspi_SCLK1_Pin_OUT    IfxQspi1_SCLK_P11_6_OUT
#define Qspi_MTSR1_Pin_OUT    IfxQspi1_MTSR_P11_9_OUT
#define Qspi_MRST1_Pin_IN     IfxQspi1_MRSTB_P11_3_IN

// QSPI2 通道管脚配置
#define Qspi_SCLK2_Pin_OUT    IfxQspi2_SCLK_P15_3_OUT
#define Qspi_MTSR2_Pin_OUT    IfxQspi2_MTSR_P15_5_OUT
#define Qspi_MRST2_Pin_IN     IfxQspi2_MRSTA_P15_4_IN

// QSPI3 通道管脚配置
#define Qspi_SCLK3_Pin_OUT    IfxQspi3_SCLK_P22_3_OUT
#define Qspi_MTSR3_Pin_OUT    IfxQspi3_MTSR_P22_0_OUT
#define Qspi_MRST3_Pin_IN     IfxQspi3_MRSTE_P22_1_IN

// 片选信号管脚配置
#define Qspi_CS_A3942_Pin_OUT	      		IfxQspi2_SLSO0_P15_2_OUT
#define Qspi_CS_NCV7513_Pin_OUT	      		IfxQspi0_SLSO2_P20_13_OUT
#define Qspi_CS_TLE8110_U0_CS_Pin_OUT	    IfxQspi1_SLSO1_P20_9_OUT
#define Qspi_CS_TLE8110_U1_CS_Pin_OUT	    IfxQspi1_SLSO10_P10_0_OUT
#define Qspi_CS_EEPROM_Pin_OUT	      		IfxQspi2_SLSO7_P20_10_OUT
#define Qspi_CS_TLF35584_Pin_OUT	      	IfxQspi3_SLSO12_P22_2_OUT



extern void F_QSPI0_init(void);
extern void F_QSPI1_init(void);
extern void F_QSPI2_init(void);
extern void F_QSPI3_init(void);
extern void F_QSPI_ExchangeData(uint8 Channel,float32 Baudrate,uint8 ShiftClock,CsAbtype CS_Channel,const void *TxData,void *RxData,uint8 DataLen);








#endif



