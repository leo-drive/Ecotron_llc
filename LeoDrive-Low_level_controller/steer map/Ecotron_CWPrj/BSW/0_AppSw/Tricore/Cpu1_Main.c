/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		Cpu1_Main.c
Author:			
Version:		V1.0.1
Date:			2016-12-12
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/


/*************************************************************
Includes
**************************************************************/
#include "Cpu\Std\Ifx_Types.h"
#include "Cpu\Std\IfxCpu_Intrinsics.h"
#include "Scu\Std\IfxScuWdt.h"
#include "MCU_Check.h"



int core1_main (void)
{
    IfxScuWdt_disableCpuWatchdog (IfxScuWdt_getCpuWatchdogPassword ());

    while(1)
    {
    	F_CPU_Check();
    }

    return (1);
}
