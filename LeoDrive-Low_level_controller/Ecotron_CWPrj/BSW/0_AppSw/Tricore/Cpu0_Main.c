/*
 * File: Cpu0_Main.c

 */

/*************************************************************
   Copyright (c) ECO-EV Technologies Co.
 **************************************************************/
#include "OS_Main.h"
#include "LLD_InitConf.h"

int core0_main(void)
{
	  F_BSW_ASW_Init();
	  F_OS_Init();
	  F_OS_LStart();
	  return(1);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
