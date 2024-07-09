/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		CAN.h
Author:			
Version:		V1.0.1
Date:			2016-10-24
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef CAN_H
#define CAN_H


#include "Cpu\Std\Ifx_Types.h"
#include "Multican\Std\IfxMultican.h"
#include "can_def.h"
#include "IO_cfg.h"

#ifndef NULL
    #define NULL (void *)(0)
#endif

#define CAN_Driver_CallBack

typedef struct
{
	boolean		Enable;			//通道使能
	uint32      BaudRate;		//波特率
	uint32 		RxID;			//接收ID
	uint32 		RxIDMask;		//接收ID过滤掩码
	boolean 	Extended;		//帧类型(0：标准帧； 1：扩展帧)
	uint8 		DataLen;		//数据长度
	boolean 	En_Filter;		//过滤使能
	boolean		EnableErrorInterrupt;
	boolean 	EnableWarningInterrupt;
	boolean 	EnableBusOffInterrupt;
	//=========zhaoxn addsta 2019-7-11=============

	boolean 	CanFD_Enable;		//enable CANFD send and receive message function
	uint16		CanFD_nominalSynchJumpWidth;/**< \brief Specifies the FD nominal resynchronisation jump width. Range = [0, 10000] resp. [0%, 100%] of the total nominal bit time */
    uint16		CanFD_nominalSamplePoint;        /**< \brief Specifies the FD nominal sample point. Range = [0, 10000] resp. [0%, 100%] of the total bit time */
    uint32		CanFD_fastBaudrate;              /**< \brief Specifies the FD fast baudrate (Data Bit rate) */
    uint16		CanFD_fastSynchJumpWidth;        /**< \brief Specifies the FD fast resynchronisation jump width. Range = [0, 10000] resp. [0%, 100%] of the total fast bit time */
    uint16		CanFD_fastSamplePoint;           /**< \brief Specifies the FD fast sample point. Range = [0, 10000] resp. [0%, 100%] of the total bit time */
    uint16		CanFD_loopDelayOffset;           /**< \brief Specifies the transceiver delay ompensation offset that is added to the measured transceiver delay. Range = [0, 15] */
	//=========zhaoxn addend 2019-7-11=============
}CAN_InitElement_type;



typedef struct
{
    uint32                     id;              /**< \brief CAN message ID */
    IfxMultican_DataLengthCode lengthCode;      /**< \brief CAN message data length code */
    uint32                     data[2];         /**< \brief CAN message data */
    boolean                    fastBitRate;     /**< \brief CAN FD fast bit rate enable/disable */
    boolean					   extended;		//帧类型(0：标准帧； 1：扩展帧)
} EcoMultican_Message;

//=========================zhaoxn addsta 2019-7-11============================
typedef struct
{
    uint8                      ESI;
	uint8                      ProtocolMode;
    uint8                      length;
	uint32                     id;              /**< \brief CAN message ID */
    IfxMultican_DataLengthCode lengthCode;      /**< \brief CAN message data length code */
    uint32                     data[16];         /**< \brief CAN message data */
    boolean                    fastBitRate;     /**< \brief CAN FD fast bit rate enable/disable */
    boolean					   extended;		//帧类型(0：标准帧； 1：扩展帧)
} EcoMultican_CANFDMessage;
//=========================zhaoxn addend 2019-7-11============================

typedef enum
{
	CAN_Interrupt_ERR=0,
	CAN_Interrupt_EWRN,
	CAN_Interrupt_BOFF
}CAN_Interrupt;

/** \brief Enumerate the Channel of CAN
 */
typedef enum
{
	CAN_Error_NoError = 0,
	CAN_Error_STF = 1,		//填充错误
	CAN_Error_FRM = 2,		//格式错误
	CAN_Error_ACK = 3,		//认可错误
	CAN_Error_BIT1 = 4,		//1 At least one bit sent as recessive is received as dominant
	CAN_Error_BIT0 = 5,		//1 At least one bit sent as dominant is received as recessive
	CAN_Error_CRC = 6,		//CRC校验
}CAN_Error;

/** \brief Enumerate the Channel of CAN
 */
typedef enum
{
	CAN_ErrorState_Active = 0,		//Counter <96
	CAN_ErrorState_TxWarning,		//Tx Counter >=96
	CAN_ErrorState_RxWarning,		//Rx Counter >=96
	CAN_ErrorState_Warning,			//Tx&Rx Counter >=96

	CAN_ErrorState_TxPassive,		//Tx Counter >=128
	CAN_ErrorState_RxPassive,		//Tx Counter >=128
	CAN_ErrorState_Passive,			//Tx&Rx Counter >=128

	CAN_ErrorState_BusOff,			//Tx Counter>=256
}CAN_ErrorState;


//CAN0通道管脚配置
#define	Multican_RX0_Pin_IN		IfxMultican_RXD0D_P02_4_IN
#define	Multican_TX0_Pin_OUT	IfxMultican_TXD0_P02_5_OUT

//CAN1通道管脚配置
#define	Multican_RX1_Pin_IN		IfxMultican_RXD1B_P14_1_IN
#define	Multican_TX1_Pin_OUT	IfxMultican_TXD1_P14_0_OUT

//CAN2通道管脚配置
#define	Multican_RX2_Pin_IN		IfxMultican_RXD2B_P02_3_IN
#define	Multican_TX2_Pin_OUT	IfxMultican_TXD2_P02_2_OUT

//CAN3通道管脚配置
#define	Multican_RX3_Pin_IN		IfxMultican_RXD3A_P00_3_IN
#define	Multican_TX3_Pin_OUT	IfxMultican_TXD3_P00_2_OUT


typedef void (*CAN_IsrPtrType)(void);
typedef void (*FType_Abstr_CANFDRxIsr)(CanControllerIdType channel,CANFDMsgElement_t *messageObj);
typedef void (*FType_Abstr_CANRxIsr)(CanControllerIdType channel,CANMsgElement_t *messageObj);

#define  CAN_ERROR_NUMMAX			(7)
#define  CAN_INTERRUPT_NUMMAX		(3)


#define  CAN_DRIVER_NUM_CH  4
/******************************************************************************
Exported Function Declarations
******************************************************************************/

extern void F_MultiCAN_init(CAN_InitElement_type *CAN0_Init_Ptr, CAN_InitElement_type *CAN1_Init_Ptr,
		CAN_InitElement_type *CAN2_Init_Ptr, CAN_InitElement_type *CAN3_Init_Ptr);
extern uint16 F_CAN_TxData(CanControllerIdType CanNode, CANMsgElement_t *DataPtr);
extern CAN_RxPtrType FP_CAN_Driver_UpdateRxSlot_Event;
extern void F_Can_Node_recoverBusOff(void);
extern uint8 F_Read_Power_On_State(void);
extern void F_CAN_Transceiver_EN(uint8 enable);

extern uint8 F_Driver_CAN_TxBufferFull(CanControllerIdType CanNode);

extern boolean  F_CAN_IsErrorOccur(CanControllerIdType CAN_Node,CAN_Error CAN_Error);
extern void  F_CAN_ClearError(CanControllerIdType CAN_Node,CAN_Error CAN_Error);
extern void F_CAN_ClearAllError(CanControllerIdType CAN_Node);
extern CAN_Error  F_CAN_GetLastError(CanControllerIdType CAN_Node);
extern CAN_ErrorState F_CAN_GetErrorState(CanControllerIdType CAN_Node);
extern uint8 F_CAN_ReadTxErrorCounter(CanControllerIdType CAN_Node);
extern uint8 F_CAN_ReadRxErrorCounter(CanControllerIdType CAN_Node);
extern void F_CAN_RecoverBusOff(CanControllerIdType CAN_Node);

extern void F_CAN_InstallIsr(CanControllerIdType CAN_Node,CAN_Interrupt Int,CAN_IsrPtrType Isr_PtrType);
extern void F_CAN_UninstallIsr(CanControllerIdType CAN_Node,CAN_Interrupt Int);

//===========================zhaoxn addsta 2019-7-11================================
extern uint16 F_CANFD_TxData(CanControllerIdType CanNode, CANFDMsgElement_t *DataPtr);
extern uint16 F_CANFD_RxData(CanControllerIdType CanNode, CANFDMsgElement_t *DataPtr);
extern uint8 F_Driver_CANFD_TxBufferFull(CanControllerIdType CanNode);
//===========================zhaoxn addend 2019-7-11================================
extern void F_CANFD_InstallRxSltCall(FType_Abstr_CANFDRxIsr CANFDRxIsrPtr);
extern void F_CAN_InstallRxSltCall(FType_Abstr_CANRxIsr CANRxIsrPtr);

//20200117 hxl
extern uint16 F_Driver_CAN_RxLiveCounter(CanControllerIdType channel);

#endif







