/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		MCU_Check.h
Author:			
Version:		V1.0.1
Date:			2017-02-26
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef MCU_CHECK_H
#define MCU_CHECK_H

#include "Cpu\Std\Ifx_Types.h"

typedef struct
{
    uint32   AddNum;
    uint32	 subtractNum;
    uint32   multiplyNum;
    uint32	 divideNum;
    uint32   AndNum;
    uint32	 OrNum;
    uint32   LeftShiftNum;
    uint32	 RightShiftNum;

} Struct_CheckCompute_OprateNum;


typedef struct
{
    uint32   AddResult;
    uint32	 subtractResult;
    uint32   multiplyResult;
    uint32	 divideResult;
    uint32   AndResult;
    uint32	 OrResult;
    uint32	 NotResult;
    uint32   LeftShiftResult;
    uint32	 RightShiftResult;

} Struct_CheckCompute_Result;



extern uint8 F_Read_Core_DTC(void);
extern uint8 F_Read_Flash_DTC(void);
extern uint8 F_Read_Ram_DTC(void);


extern void F_OS_Ltask_Check_Flag_Set(void);
extern void F_OS_Ltask_Check_Flag_Clear(void);
extern void F_OS_Htask_Check_Flag_Set(void);
extern void F_OS_Htask_Check_Flag_Clear(void);
extern void F_CPU_Check(void);
extern void F_CPU0_Core_Check(void);

#endif







