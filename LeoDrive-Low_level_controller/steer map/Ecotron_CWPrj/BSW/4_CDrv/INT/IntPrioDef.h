/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		IntPrioDef.h
Author:			
Version:		V1.0.1
Date:			2016-12-28
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef INTPRIODEF_H
#define INTPRIODEF_H


/****************** CAN错误 中断优先级 *****************************/
#define IFX_INTPRIO_CAN_ERR          5
#define IFX_INTPRIO_CAN_EWRNBOFF     6

/****************** SPI 中断优先级 *****************************/
#define IFX_INTPRIO_QSPI0_TX  	10
#define IFX_INTPRIO_QSPI0_RX  	11
#define IFX_INTPRIO_QSPI0_ER  	12

#define IFX_INTPRIO_QSPI1_TX  	13
#define IFX_INTPRIO_QSPI1_RX  	14
#define IFX_INTPRIO_QSPI1_ER  	15

#define IFX_INTPRIO_QSPI2_TX  	16
#define IFX_INTPRIO_QSPI2_RX  	17
#define IFX_INTPRIO_QSPI2_ER  	18

#define IFX_INTPRIO_QSPI3_TX  	19
#define IFX_INTPRIO_QSPI3_RX  	20
#define IFX_INTPRIO_QSPI3_ER  	21

#define IFX_INTPRIO_LINA_SLAVE_RX   22
#define IFX_INTPRIO_LINA_SLAVE_TX   23

/****************** CCU6 中断优先级 *****************************/

#define IFX_INTPRIO_CCU61 		30
#define IFX_INTPRIO_CCU60 		31

/****************** STM 中断优先级 *****************************/

#define IFX_INTPRIO_STM1 		32
#define IFX_INTPRIO_STM2 		33

//=============zhaoxn addmodifysta 2019-3-23================
/****************** GTM TIM1 中断优先级 ***************************/

#define IFX_INTPRIO_GTM_TIM1CH1 34
#define IFX_INTPRIO_GTM_TIM1CH2 35
#define IFX_INTPRIO_GTM_TIM1CH6 36
#define IFX_INTPRIO_GTM_TIM1CH5 37

/****************** GPT12 中断优先级 ***************************/

#define IFX_INTPRIO_GPT12_T4	45	//100ms
#define IFX_INTPRIO_GPT12_T3	46	//20ms
#define IFX_INTPRIO_GPT12_T2	47	//10ms
#define IFX_INTPRIO_GPT12_T6	48	//5ms
#define IFX_INTPRIO_GPT12_T5	49	//1ms

/****************** CAN 中断优先级 *****************************/

#define IFX_INTPRIO_CAN0_RX  	50
#define IFX_INTPRIO_CAN1_RX  	51
#define IFX_INTPRIO_CAN2_RX  	52
#define IFX_INTPRIO_CAN3_RX  	53
//=============zhaoxn addmodifyend 2019-3-23================

#define IFX_INTPRIO_CANFD_CAN2_RX  	56


#define IFX_INTPRIO_SCI0_TX  57
#define IFX_INTPRIO_SCI0_RX  58
#define IFX_INTPRIO_SCI0_ER  59

#define IFX_INTPRIO_SCI1_TX  60
#define IFX_INTPRIO_SCI1_RX  61
#define IFX_INTPRIO_SCI1_ER  62

#define IFX_INTPRIO_SCI2_TX  63
#define IFX_INTPRIO_SCI2_RX  64
#define IFX_INTPRIO_SCI2_ER  65









#endif


