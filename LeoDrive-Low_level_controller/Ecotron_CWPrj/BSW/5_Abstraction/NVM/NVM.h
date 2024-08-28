/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		NVM.h
Author:			
Version:		V1.0.1
Date:			2017-9-6
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/
#ifndef NVM_H
#define NVM_H

#include "Cpu\Std\Ifx_Types.h"
//#include "Service_CAN.h"

#define FNVM_DATA_RAM_START  0x50014000
#define FNVM_DATA_ROM_START  0x80214000   //S5

#define UFNVM_DATA_RAM_START  0x50016000
#define UFNVM_DATA_ROM_START  0x80218000  //S6

#define Data_Length_FNVM	  0x2000
#define Data_Length_UFNVM	  0x2000


#define FNVM_Flag_ROM_START	  0x8021C000  //S7
#define UFNVM_Flag_ROM_START  0x80220000  //S8

#define First_PowerOn_Flag_ROM  0x80228000  //S9




extern void F_NVM_RESTORE(void);
extern void F_NVM_STORE(void);
extern void F_NVM_Repair(void);
//======zhaoxn addsta 2019-7-27==============
extern boolean Mem_GetFirstPowerOnFlag(void);
extern boolean Mem_UFNVMOKFlag(void);
//======zhaoxn addend 2019-7-27==============

void FlashReadData(uint32 PageAddr,uint32 *DesData);


#endif







