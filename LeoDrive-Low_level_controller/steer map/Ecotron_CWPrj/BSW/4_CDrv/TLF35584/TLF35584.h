/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		TLF35584.h
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

#ifndef TLF35584_H
#define TLF35584_H

#include "Cpu\Std\Ifx_Types.h"

typedef enum
{

	SPI_Style,
	WDI_Style

} Enum_WWDStyle;

typedef enum
{
	POWERDOWN_State = 0,
	INIT_State = 1,
	NORMAL_state = 2,
	SLEEP_state = 3,
	STANDBY_state = 4,
	WAKE_state = 5,
	FAILSAFE_state = 6,

} Enum_PowerState;

typedef enum
{
	DEVCFG0 = 0x00,
	DEVCFG1 = 0x01,
	DEVCFG2 = 0x02,
	PROTCFG = 0x03,
	SYSPCFG0 = 0x04,
	SYSPCFG1 = 0x05,
	WDCFG0 = 0x06,
	WDCFG1 = 0x07,
	FWDCFG = 0x08,
	WWDCFG0 = 0x09,
	WWDCFG1 = 0x0A,
	RSYSPCFG0 = 0x0B,
	RSYSPCFG1 = 0x0C,
	RWDCFG0 = 0x0D,
	RWDCFG1 = 0x0E,
	RFWDCFG = 0x0F,
	RWWDCFG0 = 0x10,
	RWWDCFG1 = 0x11,
	WKTIMCFG0 = 0x12,
	WKTIMCFG1 = 0x13,
	WKTIMCFG2 = 0x14,
	DEVCTRL = 0x15,
	DEVCTRLN = 0x16,
	WWDSCMD = 0x17,
	FWDRSP = 0x18,
	FWDRSPSYNC = 0x19,
	SYSFAIL = 0x1A,
	INITERR = 0x1B,
	IF = 0x1C,
	SYSSF = 0x1D,
	WKSF = 0x1E,
	SPISF = 0x1F,
	MONSF0 = 0x20,
	MONSF1 = 0x21,
	MONSF2 = 0x22,
	MONSF3 = 0x23,
	OTFAIL = 0x24,
	OTWRNSF = 0x25,
	VMONSTAT = 0x26,
	DEVSTAT = 0x27,
	PROTSTAT = 0x28,
	WWDSTAT = 0x29,
	FWDSTAT0 = 0x2A,
	FWDSTAT1 = 0x2B,
	ABIST_CTRL0 = 0x2C,
	ABIST_CTRL1 = 0x2D,
	ABIST_SELECT0 = 0x2E,
	ABIST_SELECT1 = 0x2F,
	ABIST_SELECT2 = 0x30,
	GTM = 0x3F,
	BCK_FREQ_CHANGE = 0x31,
	BCK_FRE_SPREAD = 0x32,
	BCK_MAIN_CTRL = 0x33,

} Enum_Registers;



extern void F_TLF35584_Init(Enum_WWDStyle WWD_Style);
extern void F_TLF35584_Off(void);
extern void F_TLF35584_Sleep(void);

extern void F_TLF35584_FeedWindowWatchdog_100ms(void);
extern void F_TLF35584_FeedFunctionalWatchdog_200ms(void);
extern uint32 F_TLF35584_ReadSummaryErrCode(void);
extern uint8 F_TLF35584_GetSpecificErrNum(void);
extern uint32 F_TLF35584_GetSpecificErrCode(uint8 Num);
extern void F_TLF35584_ClearErrFlag(void);



#endif







