/******************************************************************************
 * Copyright (C),
 * File name:         DataDef_NVM.c
 *   <Author>         <Version>        <Date>
 *   HXL              0.2             2018-5-29
 * Description:
 * Develop pack:      CodeWarrior
 * Function List:
 *   1.
 * History:
 *   1. Date:         2018-5-7
 *      Author:       HXL
 *      Ver:          0.1
 *      Modification: Create
 *   2. *   Standards:
 ******************************************************************************/
#include "DataDef_NVM.h"

/**************************NVM Data Definition Redundancy***********************************************/
#define PUSH__UFNVMP
#include "EcoSectionDef.h"

__UFNVMP uint8_T T_BSW_UFVNMdata= 0;

#define POP__UFNVMP
#include "EcoSectionDef.h"

/**************************FNVM Data Definition Redundancy***********************************************/
#define PUSH__FNVMP
#include "EcoSectionDef.h"

__FNVMP uint8_T T_BSW_FVNMdata= 0;

#define POP__FNVMP
#include "EcoSectionDef.h"

/**************************FNVM Flg Definition Redundancy***********************************************/
#define PUSH__FNVMF
#include "EcoSectionDef.h"

__FNVMF uint8_T T_BSW_FVNMflg= 0;

#define POP__FNVMF
#include "EcoSectionDef.h"

/**************************MEM_NVM_Init**************************************************************/
#ifdef MEM_NVM_INT_EN

uint8_T MEM_NVM_Init(void)
{
  uint8_T iLLDCAL= 0;
  iLLDCAL= T_BSW_FVNMdata||T_BSW_FVNMflg;
  iLLDCAL= iLLDCAL||T_BSW_UFVNMdata;
  if (iLLDCAL) {
    return 1;
  } else {
    return 0;
  }
}

#endif
