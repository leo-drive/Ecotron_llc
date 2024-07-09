/*************************************************************
Copyright (c)  2019-2020. All rights reserved.

File name:		Abstraction_LIN.h
Author:
Version:		V1.0.3
Date:			2020-01-14
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef _ABSTRACTION_LIN_H_
#define _ABSTRACTION_LIN_H_

/******************************************************************************
Includes
*******************************************************************************/
#include "Cpu\Std\Ifx_Types.h"
#include "Asclin\Std\IfxAsclin.h"
/******************************************************************************
Exported Macro Definitions
******************************************************************************/
#define LIN_TIMEOUT_MAX 100000*200 //must less than uint32_max
#ifndef NULL
    #define NULL (void *)(0)
#endif
/******************************************************************************
Exported Structure Definitions
******************************************************************************/
typedef enum
{
   LIN_A=0,
   LIN_CTRL_Num
}LIN_ControllerType;

typedef enum {
	LIN_Master_Break_At10bit=10,
	LIN_Master_Break_At11bit=11,
	LIN_Master_Break_At12bit=12,
	LIN_Master_Break_At13bit=13,
	LIN_Master_Break_At14bit=14,
	LIN_Master_Break_At15bit=15,
	LIN_Master_Break_At16bit=16,
	LIN_Master_Break_At17bit=17,
	LIN_Master_Break_At18bit=18,
	LIN_Master_Break_At19bit=19,
	LIN_Master_Break_At20bit=20,
	LIN_Master_Break_At21bit=21,
	LIN_Master_Break_At22bit=22,
	LIN_Master_Break_At23bit=23,
	LIN_Master_Break_At36bit=36,
	LIN_Master_Break_At50bit=50
}LIN_Break_LengthType;    /**/

typedef enum
{
    LIN_Checksum_Classic  = IfxAsclin_Checksum_classic, /**< \brief classic checksum */
	LIN_Checksum_Enhanced = IfxAsclin_Checksum_enhanced  /**< \brief enhanced checksum */
} LIN_Checksum;

typedef enum
{
    Lin_Mode_Slave  = IfxAsclin_LinMode_slave, /**< \brief operates in slave mode */
    Lin_Mode_Master = IfxAsclin_LinMode_master  /**< \brief operates in master mode */
}Lin_ModeType;

typedef struct
{
   LIN_Break_LengthType breakLength;         /*Break length.*/
   Lin_ModeType linMode;                     /*Device running in master mode or slave mode.*/
   uint32 baudrate;                           /*Communicaiton baudrate.*/
}LIN_InitPrat_Type;

typedef enum
{
	LIN_StType_NoBusy=0,
	LIN_MasterStType_TxID=1,
	LIN_MasterStType_TxALL=2,
	LIN_MasterStType_ModeErr=3,
	LIN_MasterStType_NoInit=4,
	LIN_SlaveStType_WaitData,
	LIN_SlaveStType_TxData,
}LIN_StType;


/*--------------------------------LINSlaveRxID-----------------------------------------------*/
typedef void (*FType_LINSlaveRxID)(LIN_ControllerType ch,uint8 id);
typedef struct Node_LINSlaveRxID
{
  FType_LINSlaveRxID data;
  struct Node_LINSlaveRxID *next;
} tNode_LINSlaveRxID,*pNode_LINSlaveRxID;

typedef struct Link_LINSlaveRxID
{
	pNode_LINSlaveRxID rear;
	pNode_LINSlaveRxID head;
} tLink_LINSlaveRxID,*pTLink_LINSlaveRxID;
/*------------------------------------LINSlaveRxData-------------------------------------------*/
typedef void (*FType_LINSlaveRxData)(LIN_ControllerType ch,uint8 id,uint8 size,uint8 *data,LIN_Checksum checksum);
typedef struct Node_LINSlaveRxData
{
  FType_LINSlaveRxData data;
  struct Node_LINSlaveRxData *next;
} tNode_LINSlaveRxData,*pNode_LINSlaveRxData;

typedef struct Link_LINSlaveRxData
{
	pNode_LINSlaveRxData rear;
	pNode_LINSlaveRxData head;
} tLink_LINSlaveRxData,*pTLink_LINSlaveRxData;



/******************************************************************************
Exported Data Declarations
******************************************************************************/
/******************************************************************************
Exported Function Declarations
******************************************************************************/
extern void F_Abstr_LIN_Init(LIN_ControllerType ch,Lin_ModeType linMode,uint32 baudrate,LIN_Break_LengthType breakLength);

extern uint8 F_Abstr_LINMaster_TxID(LIN_ControllerType ch,uint8 en,uint8 id,uint8 size,LIN_Checksum checksum);
extern uint8 F_Abstr_LINMaster_RxData(LIN_ControllerType ch,uint8 en,uint8 id,uint8 size,uint8 *data,LIN_Checksum checksum);
extern uint8 F_Abstr_LINMaster_TxIDAndData(LIN_ControllerType ch,uint8 en,uint8 id,uint8 size,uint8 *data,LIN_Checksum checksum);

extern uint8 F_LINSlave_SetRxDataInfo(LIN_ControllerType ch,uint8 idRx,uint8 idRxData,uint8 size,LIN_Checksum checksum);
extern uint8 F_LINSlave_SendData(LIN_ControllerType ch,uint8 idRx,uint8 idTx,uint8 size,uint8 *data,LIN_Checksum checksum);
extern void F_LINSlave_AppendNodeRxID(LIN_ControllerType ch,FType_LINSlaveRxID data,pNode_LINSlaveRxID node);
extern void F_LINSlave_AppendNodeRxData(LIN_ControllerType ch,FType_LINSlaveRxData data,pNode_LINSlaveRxData node);
#endif

/* EOF */
