/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		can_def.h
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

#ifndef CAN_DEF_H
#define CAN_DEF_H

/*************************************************************
Includes
**************************************************************/
#include "hal_types.h"

/*************************************************************
Public Variable Definitions
**************************************************************/

typedef enum 
{
	CAN_CTRL_A=0,
	CAN_CTRL_B,
	CAN_CTRL_C,
	CAN_CTRL_D
} CanControllerIdType;


typedef enum 
{
	CAN_ID_TYPE_EXTENDED,
	CAN_ID_TYPE_MIXED,
	CAN_ID_TYPE_STANDARD
} Can_IdTypeType;


typedef struct
{
	U08 data[8];
	U32 id;
	U08 extended;
	U08 length;
	U08 remote;
} CANMsgElement_t;

//==========zhaoxn addsta 2019-7-11===============
typedef struct
{
	U08 ProtocolMode;
	U08 DLC;
	U08 ESI;
	U08 data[64];
	U32 id;
	U08 extended;
	U08 length;
	U08 remote;
	U08 fastBitRate;     /**< \brief CAN FD fast bit rate enable/disable */;
} CANFDMsgElement_t;
//==========zhaoxn addend 2019-7-11===============

typedef struct
{
	U08 ready;
	U08 read;
	U08 write;
	CANMsgElement_t messageObj;
} CANDirectSlot_t;

typedef struct
{
	CANDirectSlot_t  *queue;
	U16 maxSize;
	U16 front;
	U16 rear;
	U16 track;
} CANDirectSlot_Queue_t;

typedef struct
{
	CANMsgElement_t  *Ele;   //发送数据域的首地址
	U16 size;        		 //数据不空
} CANMsgElementPrt_t;
	
typedef struct
{
	CANDirectSlot_t  *Ele;   //发送数据域的首地址
	U16 size;        		 //数据不空
} CANDirectSlotElementPrt_t;


/*******************20191230 hxl****************************/
typedef struct
{
	CANMsgElement_t  *queue;
	U16 maxSize;
	U16 front;
	U16 rear;
    U08 reading;
	U08 writing;
	U08 flgEnqueuing;
	U08 flgDequeuing;
} CANMsgQueue_t;
/*******************20191230 hxl****************************/


typedef U08 (*CAN_TxPtrType)(U08 Channel);
typedef U08 (*CAN_RxPtrType)(CanControllerIdType channel,CANMsgElement_t *messageObj);
typedef U08 (*CANFD_TxPtrType)(U08 Channel);
typedef U08 (*CANFD_RxPtrType)(CanControllerIdType channel,CANFDMsgElement_t *messageObj);

//==========================zhaoxn addsta 2019-7-11======================================
typedef struct
{
	CANFDMsgElement_t  *Ele;   //发送数据域的首地址
	U16 size;        		 //数据不空
} CANFDMsgElementPrt_t;

typedef struct
{
	CANFDMsgElement_t  *queue;
	U16 maxSize;
	U16 front;
	U16 rear;
    U08 reading;
	U08 writing;
	U08 flgEnqueuing;
	U08 flgDequeuing;
} CANFDMsgQueue_t;
typedef U08 (*CANFD_RxPtrType)(CanControllerIdType channel,CANFDMsgElement_t *messageObj);
//==========================zhaoxn addsta 2019-7-11======================================




#endif
