/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		Ser_Mem.h
Author:			
Version:		V1.0.1
Date:			2017-12-18
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef _SER_MEM_H
#define _SER_MEM_H

#include "CAN.h"


#define 	SER_MEM_CANNODE_MAXNUM			(4)

/** \brief the Structure of the SPI Frame
 */
typedef struct
{
	uint32  Enable;
	uint32  BaudRate;
	uint32 	SationAddress;
	uint32  DTO_ID;
	uint32  CRO_ID;
}Ser_Mem_NodeConfigure;

/* brief the Structure of Calibration Data
 */
typedef struct
{
	uint32 EnterLoader;			//TRUE VCU reset Enter Loader wait connect code ,if
	uint32 ProgramEnd;				//main App must set TRUE
	uint32 MainAppEntryAddress;

	Ser_Mem_NodeConfigure ProgramNode[SER_MEM_CANNODE_MAXNUM];

    uint8 SeedKey_Key[256];

} Ser_Mem_CalibrationInFlash;

/******************************************************************************
Exported variable/constant Declarations
******************************************************************************/
extern Ser_Mem_CalibrationInFlash Calibration_Mirror;

/******************************************************************************
Exported Function Declarations
******************************************************************************/
extern void Ser_Mem_MirrorCopy(void);
extern void Ser_Mem_MirrorStore(void);
extern void Ser_Mem_ConfigureUpdataChannel(CanControllerIdType Can_Node,Ser_Mem_NodeConfigure *InitConfigure);
extern void Ser_Mem_SetProgramEnd(void);
extern void Ser_Mem_UpdataKeyWord(uint8 *NewKeyWord);

extern void Ser_Mem_OnlineProgram(void);

#endif







