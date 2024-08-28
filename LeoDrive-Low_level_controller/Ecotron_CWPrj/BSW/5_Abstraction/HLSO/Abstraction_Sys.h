/******************************************************************************
Copyright (c)  Technologies Co., Ltd. 2015-2016. All rights reserved.

File name:		Abstraction_Sys.h
Author:			
Version:		V1.0.0
Date:			2018-8-14
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
*******************************************************************************/

#ifndef ABSTRACTION_SYS_H
#define ABSTRACTION_SYS_H

/******************************************************************************
Includes
*******************************************************************************/
#include "NVMEM.h"
#include "SCU.h"
#include "STM.h"
#include "MCU_Check.h"



//#define F_Abstr_SoftReset() F_SW_Reset()

#include "NVM.h"
//======modify 2019-5-22===========
//#define F_Abstr_MemRam2Nvm() F_NVM_STORE()//F_NVMEM_STORE()
//#define F_Abstr_MemNvm2Ram() F_NVM_RESTORE()//F_NVMEM_RESTORE()
//======modify 2019-5-22===========

//======zhaoxn addsta 2019-7-27==============
//#define F_Abstr_Storage_GetFirstPowerOnFlg() Mem_GetFirstPowerOnFlag()
//#define F_Abstr_Storage_GetUFNVMOKFlag() Mem_UFNVMOKFlag()
//======zhaoxn addend 2019-7-27==============

//#define F_Abstr_SWT_Pause()
//#define F_Abstr_SWT_Resume()

//#define F_Abstr_GetSysTime() F_STM_GetLowerFreeTimerValue()


#define F_Abstr_DiagROM() F_Read_Flash_DTC()
#define F_Abstr_DiagRAM() F_Read_Ram_DTC()
#define F_Abstr_DiagMainChip() F_Read_Core_DTC()


extern void F_Abstr_SoftReset(void);
extern uint32 F_Abstr_GetSysTime(void);

/****************hxl addsta 20190803**************************/
extern void F_Abstr_HWT_Init(uint8 enHWT);
extern void F_Abstr_SWT_Init(uint8 enSWT,uint32 timeOutSetMs);
extern void F_Abstr_SWT_Pause(void);
extern void F_Abstr_SWT_Resume(void);
extern void F_Abstr_SWT_Service(void);

extern void F_Abstr_SWT_Service(void);
extern void F_Abstr_SWT_Service(void);
extern void F_Abstr_MemRam2Nvm(void);
extern void F_Abstr_MemNvm2Ram(void);
/****************hxl addend 20190803**************************/


#endif


