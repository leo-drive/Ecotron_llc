/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		EEPROM.h
Author:			
Version:		V1.0.1
Date:			2017-3-7
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef EEPROM_H
#define EEPROM_H

/*************************************************************
Includes
**************************************************************/
#include "Cpu\Std\Ifx_Types.h"

typedef enum
{
	BSW_EEPROM_WRITE_RISING_EDGE =0,
	BSW_EEPROM_WRITE_FALLING_EDGE =1,
}BSW_EEPROM_WriteEdge_e;


typedef enum
{
	BSW_EEPROM_WRITE_OK =0,
	BSW_EEPROM_WRITE_ERR_EN =1,
	BSW_EEPROM_WRITE_ERR_RANGE =2,
	BSW_EEPROM_WRITE_ERR_BYRE =3,
	BSW_EEPROM_WRITE_ONEBYTE_ERR=4,
	BSW_EEPROM_WRITE_ONEPAGE_ERR_EN=5,
	BSW_EEPROM_WRITE_ONEPAGE_ERR_DI=5,
}BSW_EEPROM_Write_Err_e;


typedef enum
{
	BSW_EEPROM_NO =0,
	BSW_EEPROM_YES =1,
}BSW_EEPROM_Result_e;


typedef struct
{
	uint32 baudrate;
	BSW_EEPROM_WriteEdge_e writetype;
	uint8 spich;
} BSW_EEPROM_Config;

/*************************************************************
Private Macro Definitions
**************************************************************/
//#define EEPROM_TEST
//#define EEPROM_TEST_WRITEPAGE
/*************************************************************
Public Macro Definitions
**************************************************************/
#define EEPROM_PAGE_NUM_MIN 0
#define EEPROM_PAGE_NUM_MAX 127
#define EEPROM_PAGE_BYTE_SZIE 32

#define EEPROM_STATUS_OK 0x00
#define EEPROM_STATUS_WIP 0x01
#define EEPROM_STATUS_WEL 0x02
#define EEPROM_STATUS_DEFULT 0xff

/*************************************************************
Public Variable Definitions
**************************************************************/


/*************************************************************
Private Variable Definitions
**************************************************************/
#define TEST_EEPROM_PRIVATE_FUNCTION
#ifdef TEST_EEPROM_PRIVATE_FUNCTION
extern void F_EEPROM_SendCode(uint8 *TxData,uint8 *RxData,uint8 txSize);

extern uint8 F_EEPROM_Write_En(void);

extern uint8 F_EEPROM_Write_DI(void);

extern uint8 F_EEPROM_Read_Status(void);
extern uint8 F_EEPROM_Write_Status(uint8 status);

extern BSW_EEPROM_Result_e F_EEPROM_Write_OneByte_NoCheck(uint16 TargetAddress,uint8 *DataInPtr);
extern BSW_EEPROM_Write_Err_e F_EEPROM_Write_OneByte(uint16 TargetAddress,uint8 *DataInPtr);
extern BSW_EEPROM_Write_Err_e F_EEPROM_Write_OnePage_NoCheck(uint8 PageNumber,uint8 *DataInPtr);

extern BSW_EEPROM_Result_e F_EEPROM_Read_OneByte(uint16 SourceAddress, uint8 *DataOutPtrLast);

extern uint8 F_EEPROM_Wait_StatusOK_Heal(uint32 waitMax);
//extern BSW_EEPROM_Result_e F_EEPROM_Wait_StatusOK(void);
extern BSW_EEPROM_Result_e F_EEPROM_Read_OnePage(uint8 PageNumber,uint8 *DataOutPtr);
extern BSW_EEPROM_Write_Err_e F_EEPROM_Write_OnePage(uint8 PageNumber,uint8 *DataInPtr);
#endif
/*************************************************************
Private Function Definitions
**************************************************************/

/*************************************************************
Public Function Definitions
**************************************************************/
extern void F_EEPROM_Init(BSW_EEPROM_Config *config);
extern uint8 F_EEPROM_Read_NByte(uint16 SourceAddress, uint8 *const DataOutPtr,uint16 len);
extern BSW_EEPROM_Write_Err_e F_EEPROM_Write_NByte(uint16 TargetAddress,uint8 *DataInPtr,uint16 len);


#endif







