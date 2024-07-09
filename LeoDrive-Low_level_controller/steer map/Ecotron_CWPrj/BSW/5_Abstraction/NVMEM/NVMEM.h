/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		NVMEM.h
Author:			
Version:		V1.0.1
Date:			2017-3-9
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/
#ifndef NVMEM_H
#define NVMEM_H

#include "Cpu\Std\Ifx_Types.h"

typedef enum
{
	ABST_NVMEM_NO =0,
	ABST_NVMEM_YES =1,
}ABST_NVMEM_Result_e;

typedef struct
{
	boolean all_en;
	boolean read_en;
	boolean write_en;
} ABST_NVMEM_Config;

/*************************************************************
Private Macro Definitions
**************************************************************/
//=======delete 2019-9-23==========
//#define ABST_DECMEM_TEST
//=======delete 2019-9-23==========
/*************************************************************
Public Macro Definitions
**************************************************************/
#define NVMEM_RAM_START  0x50014000
#define NVMEM_RAM_MAX_LENGTH 0x1000
/*************************************************************
Public Variable Definitions
**************************************************************/

/*************************************************************
Private Function Definitions
**************************************************************/


/*************************************************************
Public Function Definitions
**************************************************************/
extern void F_NVMEM_Init(void);

//将数据从RAM保存到EEPROM
extern ABST_NVMEM_Result_e F_NVMEM_STORE(void);
//将数据从EEPROM读出到RAM
extern ABST_NVMEM_Result_e F_NVMEM_RESTORE(void);


#endif







