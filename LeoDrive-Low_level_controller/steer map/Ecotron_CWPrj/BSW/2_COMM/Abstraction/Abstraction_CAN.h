/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		Abstraction_CAN.h
Author:			hxl
Version:		V1.0.3
Date:			2020-1-13
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef ABSTRACTION_CAN_H
#define ABSTRACTION_CAN_H

/*************************************************************
Includes
**************************************************************/
#include "hal_types.h"
//#define LLD_CAN_Test

#include "can_def.h"
#ifdef LLD_MPC_Platform
	#include "os_main.h"
#else
	#include "OS_Main.h"
#endif

/*************************************************************
Exported Function Declarations                                                                     
**************************************************************/
extern U08 F_Abstr_CAN_Init(CANMsgQueue_t *canMsgTxQueue,CANMsgElementPrt_t *canMsgElementPrt,U08 numChannel);

extern U08 F_Abstr_CANRx_Init(CANDirectSlot_Queue_t *rxMsgQueueArray,CANDirectSlotElementPrt_t *canDirectSlotElementPrt,U08 numChannel);

extern U08 F_Abstr_CAN_ReceiveDirect(CANDirectSlot_t *directslot, CANMsgElement_t *messageObj);

extern U08 F_Abstr_CAN_Transmit2Queue(CanControllerIdType channel, CANMsgElement_t *messageObj);

extern U16 F_Abstr_CAN_RxLiveCounter(CanControllerIdType channel);

//===================addsta 2019-5-22=====================
#include "CAN.h"
#define F_Abstr_CAN_GetErrorState(channel)  F_CAN_GetErrorState(channel)
//===================addend 2019-5-22=====================
//=========================zhaoxn addsta 2019-7-11=================================
extern U08 F_Abstr_CANFD_Init(CANFDMsgQueue_t *canMsgTxQueue,CANFDMsgElementPrt_t *canMsgElementPrt,U08 numChannel);

extern U08 F_Abstr_CANFD_Transmit2Queue(CanControllerIdType channel, CANFDMsgElement_t *messageObj);

//=========================zhaoxn addend 2019-7-11=================================
extern void F_Abstr_CANFD_InstallRxSltCall(FType_Abstr_CANFDRxIsr CANFDRxIsrPtr);
extern void F_Abstr_CAN_InstallRxSltCall(FType_Abstr_CANRxIsr CANRxIsrPtr);
#endif


