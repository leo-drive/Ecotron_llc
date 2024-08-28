/*************************************************************
Copyright (c) ECO-EV 2015-2016. All rights reserved.

File name:		ECOCCP_Main.h
Author:			HXL
Version:		V1.1.17
Date:           2023-02-15
Description:
Others:
History:

**************************************************************/

#ifndef  ECOCCP_Main_H
#define  ECOCCP_Main_H


/*************************************************************
Includes
**************************************************************/
#include "ECOCCP_Def.h"
/*************************************************************
Public Macro Definitions
**************************************************************/
typedef ECOCCP_U32 (*FType_CcpSeed)(ECOCCP_U08 resourceMask);
typedef ECOCCP_U08 (*FType_CcpKey)(ECOCCP_U32 key);


typedef void (*FType_CcpSetSeedTrigger)();
typedef ECOCCP_U08 (*FType_CcpSeed2Keey)(ECOCCP_U08 *Seed,ECOCCP_U16 SizeSeed,ECOCCP_U08 *Key,ECOCCP_U16 MaxSizeKey,ECOCCP_U16 *SizeKey);
typedef void (*FType_CcpASWTaskCtrl)(ECOCCP_U08 en);  //1Enable application layer task, 0 disable application layer task

//0:successful, other:error Point source to data, write to dest address, length is size
typedef ECOCCP_U08 (*FType_CcpFlash_Program)(ECOCCP_U32 dest,ECOCCP_U32 source,ECOCCP_U32 size);
typedef ECOCCP_U08 (*FType_CcpFlash_ClearMemory)(ECOCCP_U32 local_clr_addr,ECOCCP_U32 local_clr_memory_size);//0:successful, other:error
typedef ECOCCP_U08 (*FType_CcpCAN_SendMsg)(CCP_CanControllerIdType channel, CCP_CANMsgElement_t *messageObj);//1:successful, other:error


#ifdef ECO_CCP_FIXED_EN
	extern ECOCCP_U08 Hardware_Version[16]; 
	extern ECOCCP_U08 Software_LLD_Version[16];
	extern ECOCCP_U08 Software_HLD_Version[16];                                   
	extern ECOCCP_U08 Software_CLD_Version[16]; 
#endif


extern FType_CcpASWTaskCtrl FP_CcpTaskCtrl;
extern FType_CcpFlash_Program FP_CcpFlash_Program;
extern FType_CcpFlash_ClearMemory FP_CcpFlash_ClearMemory;
extern FType_CcpCAN_SendMsg FP_CcpCAN_SendMsg;

extern FType_CcpSetSeedTrigger FP_CcpSetSeedTrigger;
extern FType_CcpSeed2Keey FP_CcpSeed2Keey_P;
extern FType_CcpSeed2Keey FP_CcpSeed2Keey_C;
extern FType_CcpSeed2Keey FP_CcpSeed2Keey_M;
/*************************************************************
Exported Function Declarations                                                                     
**************************************************************/
extern ECOCCP_U08 F_ECOCCP_CcpInit(ECOCCP_Config_t *ccpConfig);
extern ECOCCP_U08 F_ECOCCP_CcpMainFunction(CCP_CANMsgElement_t *messageObj);
extern ECOCCP_U08 F_ECOCCP_CcpDaqEvent(ECOCCP_EventType EventChannel);

extern void F_ECOCCP_SetSeed(ECOCCP_U08 *SeedSet);

#endif 




