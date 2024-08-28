/*************************************************************
Copyright (c) ECO-EV 2015-2016. All rights reserved.

File name:		ECOCCP_Def.h
Author:			HXL
Version:		V1.1.17
Date:           2023-02-15
Description:
Others:
History:

**************************************************************/

#ifndef ECOCCP_Def_H
#define ECOCCP_Def_H

/*************************************************************
Includes
**************************************************************/
//#include "hal_types.h"
//#include "can_def.h"

#define SEEK_KEY_EN 1
#define HAL_PRODUCT_CP_CHECK

#ifndef ECOCCP_S08
	#define ECOCCP_S08  signed char
#endif

#ifndef ECOCCP_U08
	#define ECOCCP_U08  unsigned char
#endif

#ifndef ECOCCP_S16
	#define ECOCCP_S16   signed short
#endif

#ifndef ECOCCP_U16
	#define ECOCCP_U16   unsigned short
#endif

#ifndef ECOCCP_S32
	#define ECOCCP_S32   signed long
#endif

#ifndef ECOCCP_U32 
	#define ECOCCP_U32   unsigned long
#endif

#ifndef ECOCCP_S64
	#define ECOCCP_S64   signed long long
#endif

#ifndef ECOCCP_U64 
	#define ECOCCP_U64   unsigned long long
#endif


#ifndef ECOCCP_TRUE
    #define ECOCCP_TRUE             (ECOCCP_U08)1
#endif

#ifndef ECOCCP_FALSE
    #define ECOCCP_FALSE            (ECOCCP_U08)0
#endif


typedef enum 
{
	CCP_CAN_CTRL_A,
	CCP_CAN_CTRL_B,
	CCP_CAN_CTRL_C,
	CCP_CAN_CTRL_D,
	CCP_CAN_CTRL_E
}CCP_CanControllerIdType;



typedef struct
{
	ECOCCP_U08 data[8];
	ECOCCP_U32 id;
	ECOCCP_U08 extended;
	ECOCCP_U08 length;
	ECOCCP_U08 remote;
} CCP_CANMsgElement_t;

/*************************************************************
Public Macro Definitions
**************************************************************/
// define result Memory check result
#define ECOCCP_MEM_CAL_ROM_RANGLE        	0x00
#define ECOCCP_MEM_CAL_RAM_RANGLE        	0x01
#define ECOCCP_MEM_DAQ_RAM_RANGLE        	0x02
#define ECOCCP_MEM_CAL_ROMCODE_ROM_RANGLE    0x03
#define ECOCCP_MEM_CAL_ROMERROR_RANGLE       0x04
#define ECOCCP_MEM_CAL_LENGTH_ERROR      	0x05
#define ECOCCP_MEM_EPK_ROM_RANGLE			0x06
#define ECOCCP_MAX_EXT_ADDR                  0x00

// define DAQ CHANNEL NUM
#define ECOCCP_DAQ_CHANNEL_0 			0x00
#define ECOCCP_DAQ_CHANNEL_1 			0x01
#define ECOCCP_DAQ_CHANNEL_2 			0x02
#define ECOCCP_DAQ_CHANNEL_3 			0x03

#define ECOCCP_DOUBLE_SIZE 			0x08
#define ECOCCP_FLOAT_SIZE 			0x04
#define ECOCCP_INT_SIZE			    0x04
#define ECOCCP_SHORT_SIZE			0x02
#define ECOCCP_CHAR_SIZE			    0x01
#define ECOCCP_DAQ_SEND_MAX_LENGTH	0x07
#define ECOCCP_DATA_SIX_DOWNILOAD	0x06
#define ECOCCP_DATA_SIX_PROGRAM		0x06
#define ECOCCP_CAN_BUFFER_LENGTH		0x08
#define ECOCCP_MIN_PRESCALE_NUM		0x01
#define ECOCCP_DAQ_LENGTH			0x100


/* Declare CCP-protocol version */
#define ECOCCP_VERSIECOCCP_ON_MAJOR 		0x02
#define ECOCCP_VERSIECOCCP_ON_MINOR		0x01

/* Basic */
#define ECOCCP_CC_CONNECT		    0x01
#define ECOCCP_CC_SET_MTA			0x02
#define ECOCCP_CC_DNLOAD				0x03
#define ECOCCP_CC_UPLOAD				0x04
#define ECOCCP_CC_TEST 				0x05 
#define ECOCCP_CC_START_STOP			0x06
#define ECOCCP_CC_DISCONNECT	        0x07
#define ECOCCP_CC_START_STOP_ALL		0x08 
#define ECOCCP_CC_SHORT_UPLOAD		0x0F
#define ECOCCP_CC_GET_DAQ_SIZE	    0x14
#define ECOCCP_CC_SET_DAQ_PTR	    0x15
#define ECOCCP_CC_WRITE_DAQ			0x16
#define ECOCCP_CC_EXCHANGE_ID	    0x17
#define ECOCCP_CC_GET_VERSION		0x1B 
#define ECOCCP_CC_DNLOAD6			0x23

/* Optional */
#define ECOCCP_CC_GET_CAL_PAGE			0x09
#define ECOCCP_CC_SET_S_STATUS			0x0C
#define ECOCCP_CC_GET_S_STATUS			0x0D
#define ECOCCP_CC_BUILD_CHKSUM			0x0E
#define ECOCCP_CC_CLEAR_MEMORY		    0x10
#define ECOCCP_CC_SET_CAL_PAGE			0x11
#define ECOCCP_CC_GET_SEED				0x12
#define ECOCCP_CC_UNLOCK				    0x13
#define ECOCCP_CC_PROGRAM				0x18
#define ECOCCP_CC_MOVE_MEMORY			0x19
#define ECOCCP_CC_DIAG_SERVICE			0x20
#define ECOCCP_CC_ACTIECOCCP_ON_SERVICE	0x21
#define ECOCCP_CC_PROGRAM6				0x22 

#define ECOCCP_CC_PROGRAM_END   0x1D   /* Prepare for flash kernel download */
#define ECOCCP_CC_GET_ECU_VERSION   0x1C  /**/

#define ECOCCP_DAQ_STOP				0x0
#define ECOCCP_DAQ_START				0x01
#define ECOCCP_DAQ_PREPARE			0x02

/* Session Status */
#define ECOCCP_SS_CAL					    0x01
#define ECOCCP_SS_DAQ					    0x02
#define ECOCCP_SS_RESUME				        0x04
#define ECOCCP_SS_TMP_DISCECOCCP_ONNECTED	    0x10
#define ECOCCP_SS_CONNECTED			0x20
#define ECOCCP_SS_STORE					    0x40
#define ECOCCP_SS_RUN					    0x80

/* Returncodes */
#define ECOCCP_CMD_RETURN_MESSAGE		0xff
#define ECOCCP_CRC_OK					0x00

/* C1 */
#define ECOCCP_CRC_CMD_BUSY			0x10
#define ECOCCP_CRC_DAQ_BUSY			0x11
#define ECOCCP_CRC_KEY_REQUEST		0x18
#define ECOCCP_CRC_STATUS_REQUEST	0x19

/* C2 */
#define ECOCCP_CRC_COLD_START_REQUEST	0x20
#define ECOCCP_CRC_CAL_INIT_REQUEST	0x21
#define ECOCCP_CRC_DAQ_INIT_REQUEST	0x22
#define ECOCCP_CRC_CODE_REQUEST		0x23

/* C3 (Errors) */
#define ECOCCP_CRC_CMD_UNKNOWN		    0x30
#define ECOCCP_CRC_CMD_SYNTAX			0x31
#define ECOCCP_CRC_OUT_OF_RANGE		    0x32
#define ECOCCP_CRC_ACCESS_DENIED	    0x33
#define ECOCCP_CRC_OVERLOAD			    0x34
#define ECOCCP_CRC_ACCEECOCCP_SS_LOCKED	0x35
#define ECOCCP_CRC_RESOUCE_DISEN	0x36

#define ECOCCP_ODT_ENTRY			0x07
//20180207 hxl
//#define ECOCCP_MAX_ODT			0x64//0xf0
#define ECOCCP_MAX_DAQ			0x04
#define ECOCCP_MAX_MTA 			0x02

#define ECOCCP_STATIECOCCP_ON_ID			0x0016d000

/*--------------------------------------------------------------------------*/
/* ECOCCP_Driver Variables, Type Definition */
/*--------------------------------------------------------------------------*/

#define ECOCCP_INTERNAL_MTA		(ECOCCP_MAX_MTA-1)

/* Priviledge Level */
#define ECOCCP_PL_CAL				0x01
#define ECOCCP_PL_DAQ 				0x02
#define ECOCCP_PL_PGM 				0x40
#define ECOCCP_CAN_BUF_NEW_DATA		0x01
#define ECOCCP_CAN_BUF_NO_DATA 		0x0

/* Return values for ccpWriteMTA and ccpCheckWriteEEPROM */
#define ECOCCP_WRITE_DENIED		0x00
#define ECOCCP_WRITE_OK			0x01
#define ECOCCP_WRITE_PENDING		0x02
#define ECOCCP_WRITE_ERROR		0x03

/* DAQ list */
#define ECOCCP_DAQ_FLAG_START		0x01
#define ECOCCP_DAQ_FLAG_SEND			0x02
#define ECOCCP_DAQ_FLAG_PREPARED		0x04
#define ECOCCP_DAQ_FLAG_OVERRUN		0x80

#define ECOCCP_DISCECOCCP_ONNECT_CMD_TEM		0x0
#define ECOCCP_DISCECOCCP_ONNECT_CMD_END		0x01

/* Bitmasks for ccp.SendStatus */
#define ECOCCP_CRM_REQUEST			0x01
#define ECOCCP_DTM_REQUEST			0x02
#define ECOCCP_USR_REQUEST			0x04
#define ECOCCP_CMD_PENDING			0x08
#define ECOCCP_CRM_PENDING 		    0x10
#define ECOCCP_DTM_PENDING 		    0x20
#define ECOCCP_USR_PENDING			0x40
#define ECOCCP_TX_PENDING			0x80
#define ECOCCP_SEND_PENDING 		(ECOCCP_DTM_PENDING|ECOCCP_CRM_PENDING|ECOCCP_USR_PENDING)

#define ECOCCP_FLS_MIN_WRITE_SIZE 		0x08
#define ECOCCP_MEM_CAL_ROMBLOCK_START        0x00160000


#define ECOCCP_MEM_CAL_BLOCK_BLOCKSIZE_0 0x20000
#define ECOCCP_MEM_CAL_BLOCK_BLOCKSIZE_1 0x20000
#define ECOCCP_MEM_CAL_BLOCK_BLOCKSIZE_2 0x10000



#define ECOCCP_DAQ_ID_MAX 			    0x02
#define ECOCCP_FLASH_MAX_ADDRESS   		0xC0000000
#define ECOCCP_FLASH_MIN_ADDRESS  		0x00000000

#define ECOCCP_SEED_CAL 			0x01020304
#define ECOCCP_SEED_DAQ 			0x11121314
#define ECOCCP_SEED_PGM 			0x21222324

#define	ECOCCP_MAX_EVENT			0x04

#define	ECOCCP_ON 					0x01
#define	ECOCCP_OFF					0x0

#define ECOCCP_BOOTLOOD_SWITCH    ECOCCP_OFF



typedef enum {
	ECOCCP_EVENT_CHANNEL_0=(ECOCCP_U08)0x01,
	ECOCCP_EVENT_CHANNEL_1=(ECOCCP_U08)0x02,
	ECOCCP_EVENT_CHANNEL_2=(ECOCCP_U08)0x04,
	ECOCCP_EVENT_CHANNEL_3=(ECOCCP_U08)0x08
}ECOCCP_EventType;


#define ECOCCP_DISABLE_INTERRUPT //F_INTC_disableIrq()
#define ECOCCP_ENABLE_INTERRUPT  //F_INTC_enableIrq()


/*define Daq channel time */
#define ECOCCP_MAX_DNLOAD_SIZE 		0x05


/**** 20170117 hanxl **********************/
//#define ECOCCP_NUM_ODT_DAQ0 0x2
//#define ECOCCP_NUM_ODT_DAQ1 0xc
//#define ECOCCP_NUM_ODT_DAQ2 0x12
/**** 20180207 hanxl **********************/
//#define ECOCCP_NUM_ODT_DAQ3 ECOCCP_MAX_ODT//0x90//0xf0

/* ODT entry */
typedef struct ECOCCP_ccpOdtEntry 
{
  ECOCCP_U08     * ptr; 
  ECOCCP_U08       siz;

} ECOCCP_OdtEntry_t;

/* ODT */
typedef ECOCCP_OdtEntry_t ECOCCP_ODT_t[ECOCCP_ODT_ENTRY ];

/* DAQ list */
typedef struct ECOCCP_ccpDaqList 
{
  //ECOCCP_ODT_t   odt[ECOCCP_MAX_ODT];
  ECOCCP_U16        Prescaler;
  ECOCCP_U16        cycle;
  ECOCCP_U08        eventChannel;
  ECOCCP_U08        last;
  ECOCCP_U08        flags;
  ECOCCP_U08		 configured;
} ECOCCP_DaqList_t;

typedef struct ECOCCP_CCP21Type{
  ECOCCP_U08 Crm[8];                           /* CRM Command Return Message buffer */
  ECOCCP_U08 SessionStatus;
  ECOCCP_U08 SendStatus;
  ECOCCP_U08 *MTA[ECOCCP_MAX_MTA];           /* Memory Transfer Address */
  ECOCCP_U08 Dtm[ECOCCP_MAX_DAQ][ECOCCP_CAN_BUFFER_LENGTH];                            /* DTM Data Transmission Message buffer */    
  ECOCCP_U08 CurrentDaq;
  ECOCCP_U08 CurrentOdt;     
  ECOCCP_OdtEntry_t *DaqListPtr;               /* Pointer for SET_DAQ_PTR, make it near to save RAM  */
  ECOCCP_DaqList_t DaqList[ECOCCP_MAX_DAQ];     /* DAQ list */  
  //ECOCCP_ODT_t *odt;//[ECOCCP_NUM_ODT_DAQ0+ECOCCP_NUM_ODT_DAQ1+ECOCCP_NUM_ODT_DAQ2+ECOCCP_NUM_ODT_DAQ3];  
  ECOCCP_U08 UserSessionStatus;                /* Used for GET/SET_SESSIECOCCP_ON_STATUS */
  ECOCCP_U08 ProtectionStatus;               /* Resource Protection Status */
  ECOCCP_U16 CheckSumSize;                 /* Counter for checksum calculation */
  ECOCCP_U32 cal_ptr;
  ECOCCP_U08 EventChannel;
  //ECOCCP_U08 OdtEntryLength[ECOCCP_MAX_DAQ][ECOCCP_MAX_ODT]; 
  //ECOCCP_U08 *OdtEntryList;//[ECOCCP_NUM_ODT_DAQ0+ECOCCP_NUM_ODT_DAQ1+ECOCCP_NUM_ODT_DAQ2+ECOCCP_NUM_ODT_DAQ3];  
}ECOCCP_t;

/*MPF=======================================================================*/
/*
    STRUCT NAME:	ECOCCP_Can_PduType
    COMPONENT:      CAN Driver
    SCOPE:			PACKAGE
    DESCRIPTION:
		This type is used to provide ID,DLC and SDU from CAN interface to CAN driver.
*/
typedef struct
{
	ECOCCP_U08 *sdu;
	ECOCCP_U32 id;
	ECOCCP_U16 swPduHandle;
	ECOCCP_U08 Length;
	ECOCCP_U08 pid;
}ECOCCP_Can_PduType;


typedef struct
{
  ECOCCP_U32  codeRomStart;
  ECOCCP_U32  calRomStart;
  ECOCCP_U32  calRamStart;
  ECOCCP_U32  daqRamStart;
  ECOCCP_U32  calMaxLength;
  ECOCCP_U32  daqMaxLength;
  ECOCCP_U32  calMinWriteSize;
  ECOCCP_U08 *calBuff;
  ECOCCP_U32 cntBuff;
  ECOCCP_U32 bootIDAddr;
  ECOCCP_U32 calLength;
  ECOCCP_U32 EPKIDAddr;
  ECOCCP_U08 EPKLength;
  ECOCCP_U08 EPKLengthMax;
  ECOCCP_ODT_t *odt;
  ECOCCP_U08 *OdtEntryList;
} ECOCCP_ConfigMem_t;


typedef struct  
{
  ECOCCP_U08 en;
  ECOCCP_U08 stCALSeedKey;
  ECOCCP_U08 stDAQSeedKey;
  ECOCCP_U08 stPGMSeedKey;
  ECOCCP_U16 unLock;
  CCP_CanControllerIdType can_channel;
  ECOCCP_U16 stationAddr; 
  ECOCCP_U32 idCro;
  ECOCCP_U32 idDto;
  ECOCCP_U08 lenDaqMax;
  ECOCCP_U32 idDaq[ECOCCP_MAX_DAQ];
  ECOCCP_U08 pidDaq[ECOCCP_MAX_DAQ];
  ECOCCP_U08 lenDaq[ECOCCP_MAX_DAQ];
  ECOCCP_ConfigMem_t ccp21ConfigMem;
} ECOCCP_Config_t;


typedef  void (*ECOCCP_Event_t)(ECOCCP_U08 *com);

typedef struct 
{
  ECOCCP_U08  msgEvent; 
  ECOCCP_Event_t ccpEventHandle;
} ECOCCP_EventMAP_t;

typedef struct 
{
  ECOCCP_U08  privilegeLevel; 
  ECOCCP_U08  seed[4];
  ECOCCP_U32  key;
} ECOCCP_SeedKey_t;


#endif
