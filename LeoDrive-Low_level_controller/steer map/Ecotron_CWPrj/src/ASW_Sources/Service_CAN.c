/******************************************************************************
 * Copyright (C),
 * File name:         Service_CAN.c
 *   <Author>         <Version>        <Date>
 *   HXL              0.3             2018-5-29
 * Description:
 * Develop pack:      CodeWarrior
 * Function List:
 *   1.
 * History:
 *   1. Date:         2015-5-15
 *      Author:       HXL
 *      Ver:          0.1
 *      Modification: Create
 *   2. Date:         2015-5-28
 *      Author:       HXL
 *      Ver:          0.2
 *      Modification: Create
 *   Standards:
 ******************************************************************************/
/******************************************************************************
   Includes
 ******************************************************************************/
#include <string.h>
#include "Service_CAN.h"
#include "LLD_InitConf.h"
#include "EcoCoderTypeDef.h"

//#include "ccp_driver.h"
#include "ECOCCP_Main.h"
#include "Abstraction_Sys.h"
#include "Flash.h"
#include "Ecotron.h"
#include "CAN.h"
#ifndef FLS_MIN_WRITE_SIZE
#define FLS_MIN_WRITE_SIZE             PFLS_MIN_WRITE_SIZE
#endif

#include "OS_Main.h"

/*******************************************************************************
 * Private Variable Definitions
 *******************************************************************************/
#define NUM_CANTx_CHANNEL              4

CANMsgElement_t canMsgElement0[100];
CANMsgElement_t canMsgElement1[20];
CANMsgElement_t canMsgElement2[20];
CANMsgElement_t canMsgElement3[20];
CANMsgElementPrt_t canMsgElementPrt[NUM_CANTx_CHANNEL]= {
  { canMsgElement0, 100 },

  { canMsgElement1, 20 },

  { canMsgElement2, 20 },

  { canMsgElement3, 20 },
};

CANMsgQueue_t canMsgQueue[NUM_CANTx_CHANNEL];

#define NUM_CANFDTx_CHANNEL            1

CANFDMsgElement_t canFDMsgElement0[2];
CANFDMsgElementPrt_t canFDMsgElementPrt[NUM_CANFDTx_CHANNEL]= {
  { canFDMsgElement0, 2 },
};

CANFDMsgQueue_t canFDMsgQueue[NUM_CANFDTx_CHANNEL];

/***********************************Direct Read List Start**************************************************/
#define NUM_CANRx_CHANNEL              4

CANDirectSlot_t CANDirectSlotMsgElemenA[1U];
CANDirectSlot_t CANDirectSlotMsgElemenB[18U];
CANDirectSlot_t CANDirectSlotMsgElemenC[13U];
CANDirectSlot_t CANDirectSlotMsgElemenD[4U];
CANDirectSlotElementPrt_t CANDirectSlotMsgElementPrt[NUM_CANRx_CHANNEL]= {
  { CANDirectSlotMsgElemenA, 1U },

  { CANDirectSlotMsgElemenB, 18U },

  { CANDirectSlotMsgElemenC, 13U },

  { CANDirectSlotMsgElemenD, 4U },
};

CANDirectSlot_Queue_t CANDirectSlot_Queue[NUM_CANRx_CHANNEL];

/***********************************Direct Read List End**************************************************/
static ECOCCP_U16 EcoCoderCcp_cntDAQ1= 0;
static ECOCCP_U16 EcoCoderCcp_cntDAQ2= 0;
void F_Servece_CAN_Update_H1ms(void)
{
  CANMsgElement_t messageObj;
  EcoCoderCcp_cntDAQ1++;
  EcoCoderCcp_cntDAQ2++;
  if (1==F_Servece_CAN_ReceiveDirect(&ServiceCANDirectSlot0x100_0_can0,
       &messageObj)) {
    F_ECOCCP_CcpMainFunction((CCP_CANMsgElement_t*)&messageObj);
  }
}

void F_Servece_CAN_Update_L1ms(void)
{
  if (EcoCoderCcp_cntDAQ1>=20) {
    EcoCoderCcp_cntDAQ1= 0;
    F_ECOCCP_CcpDaqEvent(ECOCCP_EVENT_CHANNEL_1);
  }

  if (EcoCoderCcp_cntDAQ2>=100) {
    EcoCoderCcp_cntDAQ2= 0;
    F_ECOCCP_CcpDaqEvent(ECOCCP_EVENT_CHANNEL_2);
  }
}

void F_Servece_CAN_Update_5ms(void)
{
}

void F_Servece_CAN_Update_10ms(void)
{
}

void F_Servece_CAN_Update_20ms(void)
{
}

void F_Servece_CAN_Update_100ms(void)
{
}

static ECO_U08 stEPKCtrlUsed;

#define PUSH__ADDR_EPK
#include "EcoSectionDef.h"

__ADDR_EPK __attribute__ ((__used__)) ECO_U08 ASW_CCP_EPKData[]= {
  "EcoCoder v2.9.12 R7 2024-06-13 18:26:44" };

#define POP__ADDR_EPK
#include "EcoSectionDef.h"

ECOCCP_U08 ASW_CCP_CAL_FLSBuffer[FLS_MIN_WRITE_SIZE+7]= { 0 };

static ECOCCP_ODT_t ASW_CCP_odt[0+32+48+0+1];
static ECOCCP_U08 ASW_CCP_OdtEntryList[0+32+48+0+1];
void F_CCP21_ProCtrl(ECOCCP_U08 en)
{
  if (1==en) {
    F_Abstr_SWT_Resume();
    F_OS_ASWTaskCtrl(1);
  } else if (0==en) {
    F_Abstr_SWT_Pause();
    F_OS_ASWTaskCtrl(0);
  }
}

/******************************************************************************
   Pubilc Functions
 ******************************************************************************/
void call_back_null(void)
{
  return;
}

void F_Servece_CAN_Init(void)
{
  ECOCCP_Config_t ccpConfigTmp;
  F_ASW_DisCANFlg_Init();

  /*********0 nominal baudrate:500000bps=500kbps*1000****/

  /*********0 data baudrate:500000bps=500kbps*1000****/

  /*********2 nominal baudrate:500000bps=500kbps*1000****/

  /*********2 data baudrate:500000bps=500kbps*1000****/

  /*********1 nominal baudrate:500000bps=500kbps*1000****/

  /*********1 data baudrate:500000bps=500kbps*1000****/

  /*********3 nominal baudrate:500000bps=500kbps*1000****/

  /*********3 data baudrate:500000bps=500kbps*1000****/
  {
    CAN_InitElement_type CAN0_Init_Param;
    CAN_InitElement_type CAN1_Init_Param;
    CAN_InitElement_type CAN2_Init_Param;
    CAN_InitElement_type CAN3_Init_Param;
    memset((void *)&CAN0_Init_Param,0,sizeof(CAN_InitElement_type));
    memset((void *)&CAN1_Init_Param,0,sizeof(CAN_InitElement_type));
    memset((void *)&CAN2_Init_Param,0,sizeof(CAN_InitElement_type));
    memset((void *)&CAN3_Init_Param,0,sizeof(CAN_InitElement_type));

    /*-------------------------------CAN-0-----------------------------------------------------*/
    CAN0_Init_Param.BaudRate= 500000;
    CAN0_Init_Param.DataLen= 8;
    CAN0_Init_Param.En_Filter= 0;
    CAN0_Init_Param.Enable= 1;
    CAN0_Init_Param.Extended= 0;
    CAN0_Init_Param.RxID= 0x100;
    CAN0_Init_Param.RxIDMask= 0x7FF;

    /*-------------------------------CAN-1-----------------------------------------------------*/
    CAN1_Init_Param.BaudRate= 500000;
    CAN1_Init_Param.DataLen= 8;
    CAN1_Init_Param.En_Filter= 0;
    CAN1_Init_Param.Enable= 1;
    CAN1_Init_Param.Extended= 0;
    CAN1_Init_Param.RxID= 0xB5;
    CAN1_Init_Param.RxIDMask= 0x0;

    /*-------------------------------CAN-2-----------------------------------------------------*/
    CAN2_Init_Param.BaudRate= 500000;
    CAN2_Init_Param.DataLen= 8;
    CAN2_Init_Param.En_Filter= 0;
    CAN2_Init_Param.Enable= 1;
    CAN2_Init_Param.Extended= 0;
    CAN2_Init_Param.RxID= 0x100;
    CAN2_Init_Param.RxIDMask= 0x7FF;

    /*-------------------------------CAN-3-----------------------------------------------------*/
    CAN3_Init_Param.BaudRate= 500000;
    CAN3_Init_Param.DataLen= 8;
    CAN3_Init_Param.En_Filter= 0;
    CAN3_Init_Param.Enable= 1;
    CAN3_Init_Param.Extended= 0;
    CAN3_Init_Param.RxID= 0x100;
    CAN3_Init_Param.RxIDMask= 0x7FF;

    /*-----------------------------CANFD-0--------------------------------------------------------*/
    CAN0_Init_Param.CanFD_Enable= 0;
    CAN0_Init_Param.CanFD_fastBaudrate = 500000;
    CAN0_Init_Param.CanFD_nominalSynchJumpWidth = 8000;
    CAN0_Init_Param.CanFD_nominalSamplePoint = 7500;
    CAN0_Init_Param.CanFD_fastSynchJumpWidth = 8000;
    CAN0_Init_Param.CanFD_fastSamplePoint = 7500;
    CAN0_Init_Param.CanFD_loopDelayOffset = 0;

    /*-----------------------------CANFD-1--------------------------------------------------------*/
    CAN1_Init_Param.CanFD_Enable= 0;
    CAN1_Init_Param.CanFD_fastBaudrate = 500000;
    CAN1_Init_Param.CanFD_nominalSynchJumpWidth = 8000;
    CAN1_Init_Param.CanFD_nominalSamplePoint = 7500;
    CAN1_Init_Param.CanFD_fastSynchJumpWidth = 8000;
    CAN1_Init_Param.CanFD_fastSamplePoint = 7500;
    CAN1_Init_Param.CanFD_loopDelayOffset = 0;

    /*-----------------------------CANFD-2--------------------------------------------------------*/
    CAN2_Init_Param.CanFD_Enable= 0;
    CAN2_Init_Param.CanFD_fastBaudrate = 500000;
    CAN2_Init_Param.CanFD_nominalSynchJumpWidth = 8000;
    CAN2_Init_Param.CanFD_nominalSamplePoint = 7500;
    CAN2_Init_Param.CanFD_fastSynchJumpWidth = 8000;
    CAN2_Init_Param.CanFD_fastSamplePoint = 7500;
    CAN2_Init_Param.CanFD_loopDelayOffset = 0;

    /*-----------------------------CANFD-3--------------------------------------------------------*/
    CAN3_Init_Param.CanFD_Enable= 0;
    CAN3_Init_Param.CanFD_fastBaudrate = 500000;
    CAN3_Init_Param.CanFD_nominalSynchJumpWidth = 8000;
    CAN3_Init_Param.CanFD_nominalSamplePoint = 7500;
    CAN3_Init_Param.CanFD_fastSynchJumpWidth = 8000;
    CAN3_Init_Param.CanFD_fastSamplePoint = 7500;
    CAN3_Init_Param.CanFD_loopDelayOffset = 0;
    F_MultiCAN_init(&CAN0_Init_Param,&CAN1_Init_Param,&CAN2_Init_Param,
                    &CAN3_Init_Param);
  }

  F_Abstr_CAN_Init(canMsgQueue,canMsgElementPrt,NUM_CANTx_CHANNEL);
  F_Abstr_CANFD_Init(canFDMsgQueue,canFDMsgElementPrt,NUM_CANFDTx_CHANNEL);

  /**************************ServiceCANDirectSlot0x100_0_can0*************************************/
  ServiceCANDirectSlot0x100_0_can0.messageObj.id= 0x100;
  ServiceCANDirectSlot0x100_0_can0.messageObj.extended= 0;
  ServiceCANDirectSlot0x100_0_can0.messageObj.length= 8;
  ServiceCANDirectSlot0x100_0_can0.messageObj.remote= 0;
  ServiceCANDirectSlot0x100_0_can0.ready= 0;
  ServiceCANDirectSlot0x100_0_can0.read= 0;
  ServiceCANDirectSlot0x100_0_can0.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0xB5_0_1_2U*************************************/
  SvcCANDrtSlt0xB5_0_1_2U.messageObj.id= 0xB5;
  SvcCANDrtSlt0xB5_0_1_2U.messageObj.extended= 0;
  SvcCANDrtSlt0xB5_0_1_2U.messageObj.length= 8;
  SvcCANDrtSlt0xB5_0_1_2U.messageObj.remote= 0;
  SvcCANDrtSlt0xB5_0_1_2U.ready= 0;
  SvcCANDrtSlt0xB5_0_1_2U.read= 0;
  SvcCANDrtSlt0xB5_0_1_2U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0xA8_0_1_3U*************************************/
  SvcCANDrtSlt0xA8_0_1_3U.messageObj.id= 0xA8;
  SvcCANDrtSlt0xA8_0_1_3U.messageObj.extended= 0;
  SvcCANDrtSlt0xA8_0_1_3U.messageObj.length= 8;
  SvcCANDrtSlt0xA8_0_1_3U.messageObj.remote= 0;
  SvcCANDrtSlt0xA8_0_1_3U.ready= 0;
  SvcCANDrtSlt0xA8_0_1_3U.read= 0;
  SvcCANDrtSlt0xA8_0_1_3U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x3BE_0_1_4U*************************************/
  SvcCANDrtSlt0x3BE_0_1_4U.messageObj.id= 0x3BE;
  SvcCANDrtSlt0x3BE_0_1_4U.messageObj.extended= 0;
  SvcCANDrtSlt0x3BE_0_1_4U.messageObj.length= 8;
  SvcCANDrtSlt0x3BE_0_1_4U.messageObj.remote= 0;
  SvcCANDrtSlt0x3BE_0_1_4U.ready= 0;
  SvcCANDrtSlt0x3BE_0_1_4U.read= 0;
  SvcCANDrtSlt0x3BE_0_1_4U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x104_0_1_17U*************************************/
  SvcCANDrtSlt0x104_0_1_17U.messageObj.id= 0x104;
  SvcCANDrtSlt0x104_0_1_17U.messageObj.extended= 0;
  SvcCANDrtSlt0x104_0_1_17U.messageObj.length= 8;
  SvcCANDrtSlt0x104_0_1_17U.messageObj.remote= 0;
  SvcCANDrtSlt0x104_0_1_17U.ready= 0;
  SvcCANDrtSlt0x104_0_1_17U.read= 0;
  SvcCANDrtSlt0x104_0_1_17U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0xB2_0_1_18U*************************************/
  SvcCANDrtSlt0xB2_0_1_18U.messageObj.id= 0xB2;
  SvcCANDrtSlt0xB2_0_1_18U.messageObj.extended= 0;
  SvcCANDrtSlt0xB2_0_1_18U.messageObj.length= 8;
  SvcCANDrtSlt0xB2_0_1_18U.messageObj.remote= 0;
  SvcCANDrtSlt0xB2_0_1_18U.ready= 0;
  SvcCANDrtSlt0xB2_0_1_18U.read= 0;
  SvcCANDrtSlt0xB2_0_1_18U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x65F_0_1_19U*************************************/
  SvcCANDrtSlt0x65F_0_1_19U.messageObj.id= 0x65F;
  SvcCANDrtSlt0x65F_0_1_19U.messageObj.extended= 0;
  SvcCANDrtSlt0x65F_0_1_19U.messageObj.length= 8;
  SvcCANDrtSlt0x65F_0_1_19U.messageObj.remote= 0;
  SvcCANDrtSlt0x65F_0_1_19U.ready= 0;
  SvcCANDrtSlt0x65F_0_1_19U.read= 0;
  SvcCANDrtSlt0x65F_0_1_19U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0xA7_0_1_20U*************************************/
  SvcCANDrtSlt0xA7_0_1_20U.messageObj.id= 0xA7;
  SvcCANDrtSlt0xA7_0_1_20U.messageObj.extended= 0;
  SvcCANDrtSlt0xA7_0_1_20U.messageObj.length= 8;
  SvcCANDrtSlt0xA7_0_1_20U.messageObj.remote= 0;
  SvcCANDrtSlt0xA7_0_1_20U.ready= 0;
  SvcCANDrtSlt0xA7_0_1_20U.read= 0;
  SvcCANDrtSlt0xA7_0_1_20U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x176_0_1_21U*************************************/
  SvcCANDrtSlt0x176_0_1_21U.messageObj.id= 0x176;
  SvcCANDrtSlt0x176_0_1_21U.messageObj.extended= 0;
  SvcCANDrtSlt0x176_0_1_21U.messageObj.length= 8;
  SvcCANDrtSlt0x176_0_1_21U.messageObj.remote= 0;
  SvcCANDrtSlt0x176_0_1_21U.ready= 0;
  SvcCANDrtSlt0x176_0_1_21U.read= 0;
  SvcCANDrtSlt0x176_0_1_21U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x65A_0_1_22U*************************************/
  SvcCANDrtSlt0x65A_0_1_22U.messageObj.id= 0x65A;
  SvcCANDrtSlt0x65A_0_1_22U.messageObj.extended= 0;
  SvcCANDrtSlt0x65A_0_1_22U.messageObj.length= 8;
  SvcCANDrtSlt0x65A_0_1_22U.messageObj.remote= 0;
  SvcCANDrtSlt0x65A_0_1_22U.ready= 0;
  SvcCANDrtSlt0x65A_0_1_22U.read= 0;
  SvcCANDrtSlt0x65A_0_1_22U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x3DB_0_1_29U*************************************/
  SvcCANDrtSlt0x3DB_0_1_29U.messageObj.id= 0x3DB;
  SvcCANDrtSlt0x3DB_0_1_29U.messageObj.extended= 0;
  SvcCANDrtSlt0x3DB_0_1_29U.messageObj.length= 8;
  SvcCANDrtSlt0x3DB_0_1_29U.messageObj.remote= 0;
  SvcCANDrtSlt0x3DB_0_1_29U.ready= 0;
  SvcCANDrtSlt0x3DB_0_1_29U.read= 0;
  SvcCANDrtSlt0x3DB_0_1_29U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x86_0_1_30U*************************************/
  SvcCANDrtSlt0x86_0_1_30U.messageObj.id= 0x86;
  SvcCANDrtSlt0x86_0_1_30U.messageObj.extended= 0;
  SvcCANDrtSlt0x86_0_1_30U.messageObj.length= 8;
  SvcCANDrtSlt0x86_0_1_30U.messageObj.remote= 0;
  SvcCANDrtSlt0x86_0_1_30U.ready= 0;
  SvcCANDrtSlt0x86_0_1_30U.read= 0;
  SvcCANDrtSlt0x86_0_1_30U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x6B7_0_1_31U*************************************/
  SvcCANDrtSlt0x6B7_0_1_31U.messageObj.id= 0x6B7;
  SvcCANDrtSlt0x6B7_0_1_31U.messageObj.extended= 0;
  SvcCANDrtSlt0x6B7_0_1_31U.messageObj.length= 8;
  SvcCANDrtSlt0x6B7_0_1_31U.messageObj.remote= 0;
  SvcCANDrtSlt0x6B7_0_1_31U.ready= 0;
  SvcCANDrtSlt0x6B7_0_1_31U.read= 0;
  SvcCANDrtSlt0x6B7_0_1_31U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x121_0_1_32U*************************************/
  SvcCANDrtSlt0x121_0_1_32U.messageObj.id= 0x121;
  SvcCANDrtSlt0x121_0_1_32U.messageObj.extended= 0;
  SvcCANDrtSlt0x121_0_1_32U.messageObj.length= 8;
  SvcCANDrtSlt0x121_0_1_32U.messageObj.remote= 0;
  SvcCANDrtSlt0x121_0_1_32U.ready= 0;
  SvcCANDrtSlt0x121_0_1_32U.read= 0;
  SvcCANDrtSlt0x121_0_1_32U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x106_0_1_38U*************************************/
  SvcCANDrtSlt0x106_0_1_38U.messageObj.id= 0x106;
  SvcCANDrtSlt0x106_0_1_38U.messageObj.extended= 0;
  SvcCANDrtSlt0x106_0_1_38U.messageObj.length= 8;
  SvcCANDrtSlt0x106_0_1_38U.messageObj.remote= 0;
  SvcCANDrtSlt0x106_0_1_38U.ready= 0;
  SvcCANDrtSlt0x106_0_1_38U.read= 0;
  SvcCANDrtSlt0x106_0_1_38U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x101_0_1_39U*************************************/
  SvcCANDrtSlt0x101_0_1_39U.messageObj.id= 0x101;
  SvcCANDrtSlt0x101_0_1_39U.messageObj.extended= 0;
  SvcCANDrtSlt0x101_0_1_39U.messageObj.length= 8;
  SvcCANDrtSlt0x101_0_1_39U.messageObj.remote= 0;
  SvcCANDrtSlt0x101_0_1_39U.ready= 0;
  SvcCANDrtSlt0x101_0_1_39U.read= 0;
  SvcCANDrtSlt0x101_0_1_39U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0xAD_0_1_40U*************************************/
  SvcCANDrtSlt0xAD_0_1_40U.messageObj.id= 0xAD;
  SvcCANDrtSlt0xAD_0_1_40U.messageObj.extended= 0;
  SvcCANDrtSlt0xAD_0_1_40U.messageObj.length= 8;
  SvcCANDrtSlt0xAD_0_1_40U.messageObj.remote= 0;
  SvcCANDrtSlt0xAD_0_1_40U.ready= 0;
  SvcCANDrtSlt0xAD_0_1_40U.read= 0;
  SvcCANDrtSlt0xAD_0_1_40U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x176_0_1_41U*************************************/
  SvcCANDrtSlt0x176_0_1_41U.messageObj.id= 0x176;
  SvcCANDrtSlt0x176_0_1_41U.messageObj.extended= 0;
  SvcCANDrtSlt0x176_0_1_41U.messageObj.length= 8;
  SvcCANDrtSlt0x176_0_1_41U.messageObj.remote= 0;
  SvcCANDrtSlt0x176_0_1_41U.ready= 0;
  SvcCANDrtSlt0x176_0_1_41U.read= 0;
  SvcCANDrtSlt0x176_0_1_41U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x86_0_1_42U*************************************/
  SvcCANDrtSlt0x86_0_1_42U.messageObj.id= 0x86;
  SvcCANDrtSlt0x86_0_1_42U.messageObj.extended= 0;
  SvcCANDrtSlt0x86_0_1_42U.messageObj.length= 8;
  SvcCANDrtSlt0x86_0_1_42U.messageObj.remote= 0;
  SvcCANDrtSlt0x86_0_1_42U.ready= 0;
  SvcCANDrtSlt0x86_0_1_42U.read= 0;
  SvcCANDrtSlt0x86_0_1_42U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x420_0_2_5U*************************************/
  SvcCANDrtSlt0x420_0_2_5U.messageObj.id= 0x420;
  SvcCANDrtSlt0x420_0_2_5U.messageObj.extended= 0;
  SvcCANDrtSlt0x420_0_2_5U.messageObj.length= 8;
  SvcCANDrtSlt0x420_0_2_5U.messageObj.remote= 0;
  SvcCANDrtSlt0x420_0_2_5U.ready= 0;
  SvcCANDrtSlt0x420_0_2_5U.read= 0;
  SvcCANDrtSlt0x420_0_2_5U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x43C_0_2_6U*************************************/
  SvcCANDrtSlt0x43C_0_2_6U.messageObj.id= 0x43C;
  SvcCANDrtSlt0x43C_0_2_6U.messageObj.extended= 0;
  SvcCANDrtSlt0x43C_0_2_6U.messageObj.length= 6;
  SvcCANDrtSlt0x43C_0_2_6U.messageObj.remote= 0;
  SvcCANDrtSlt0x43C_0_2_6U.ready= 0;
  SvcCANDrtSlt0x43C_0_2_6U.read= 0;
  SvcCANDrtSlt0x43C_0_2_6U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x475_0_2_7U*************************************/
  SvcCANDrtSlt0x475_0_2_7U.messageObj.id= 0x475;
  SvcCANDrtSlt0x475_0_2_7U.messageObj.extended= 0;
  SvcCANDrtSlt0x475_0_2_7U.messageObj.length= 3;
  SvcCANDrtSlt0x475_0_2_7U.messageObj.remote= 0;
  SvcCANDrtSlt0x475_0_2_7U.ready= 0;
  SvcCANDrtSlt0x475_0_2_7U.read= 0;
  SvcCANDrtSlt0x475_0_2_7U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x294_0_2_8U*************************************/
  SvcCANDrtSlt0x294_0_2_8U.messageObj.id= 0x294;
  SvcCANDrtSlt0x294_0_2_8U.messageObj.extended= 0;
  SvcCANDrtSlt0x294_0_2_8U.messageObj.length= 2;
  SvcCANDrtSlt0x294_0_2_8U.messageObj.remote= 0;
  SvcCANDrtSlt0x294_0_2_8U.ready= 0;
  SvcCANDrtSlt0x294_0_2_8U.read= 0;
  SvcCANDrtSlt0x294_0_2_8U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x312_0_2_9U*************************************/
  SvcCANDrtSlt0x312_0_2_9U.messageObj.id= 0x312;
  SvcCANDrtSlt0x312_0_2_9U.messageObj.extended= 0;
  SvcCANDrtSlt0x312_0_2_9U.messageObj.length= 2;
  SvcCANDrtSlt0x312_0_2_9U.messageObj.remote= 0;
  SvcCANDrtSlt0x312_0_2_9U.ready= 0;
  SvcCANDrtSlt0x312_0_2_9U.read= 0;
  SvcCANDrtSlt0x312_0_2_9U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x310_0_2_10U*************************************/
  SvcCANDrtSlt0x310_0_2_10U.messageObj.id= 0x310;
  SvcCANDrtSlt0x310_0_2_10U.messageObj.extended= 0;
  SvcCANDrtSlt0x310_0_2_10U.messageObj.length= 8;
  SvcCANDrtSlt0x310_0_2_10U.messageObj.remote= 0;
  SvcCANDrtSlt0x310_0_2_10U.ready= 0;
  SvcCANDrtSlt0x310_0_2_10U.read= 0;
  SvcCANDrtSlt0x310_0_2_10U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x311_0_2_11U*************************************/
  SvcCANDrtSlt0x311_0_2_11U.messageObj.id= 0x311;
  SvcCANDrtSlt0x311_0_2_11U.messageObj.extended= 0;
  SvcCANDrtSlt0x311_0_2_11U.messageObj.length= 8;
  SvcCANDrtSlt0x311_0_2_11U.messageObj.remote= 0;
  SvcCANDrtSlt0x311_0_2_11U.ready= 0;
  SvcCANDrtSlt0x311_0_2_11U.read= 0;
  SvcCANDrtSlt0x311_0_2_11U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x290_0_2_12U*************************************/
  SvcCANDrtSlt0x290_0_2_12U.messageObj.id= 0x290;
  SvcCANDrtSlt0x290_0_2_12U.messageObj.extended= 0;
  SvcCANDrtSlt0x290_0_2_12U.messageObj.length= 8;
  SvcCANDrtSlt0x290_0_2_12U.messageObj.remote= 0;
  SvcCANDrtSlt0x290_0_2_12U.ready= 0;
  SvcCANDrtSlt0x290_0_2_12U.read= 0;
  SvcCANDrtSlt0x290_0_2_12U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x292_0_2_13U*************************************/
  SvcCANDrtSlt0x292_0_2_13U.messageObj.id= 0x292;
  SvcCANDrtSlt0x292_0_2_13U.messageObj.extended= 0;
  SvcCANDrtSlt0x292_0_2_13U.messageObj.length= 8;
  SvcCANDrtSlt0x292_0_2_13U.messageObj.remote= 0;
  SvcCANDrtSlt0x292_0_2_13U.ready= 0;
  SvcCANDrtSlt0x292_0_2_13U.read= 0;
  SvcCANDrtSlt0x292_0_2_13U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x42C_0_2_34U*************************************/
  SvcCANDrtSlt0x42C_0_2_34U.messageObj.id= 0x42C;
  SvcCANDrtSlt0x42C_0_2_34U.messageObj.extended= 0;
  SvcCANDrtSlt0x42C_0_2_34U.messageObj.length= 4;
  SvcCANDrtSlt0x42C_0_2_34U.messageObj.remote= 0;
  SvcCANDrtSlt0x42C_0_2_34U.ready= 0;
  SvcCANDrtSlt0x42C_0_2_34U.read= 0;
  SvcCANDrtSlt0x42C_0_2_34U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x428_0_2_35U*************************************/
  SvcCANDrtSlt0x428_0_2_35U.messageObj.id= 0x428;
  SvcCANDrtSlt0x428_0_2_35U.messageObj.extended= 0;
  SvcCANDrtSlt0x428_0_2_35U.messageObj.length= 8;
  SvcCANDrtSlt0x428_0_2_35U.messageObj.remote= 0;
  SvcCANDrtSlt0x428_0_2_35U.ready= 0;
  SvcCANDrtSlt0x428_0_2_35U.read= 0;
  SvcCANDrtSlt0x428_0_2_35U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x424_0_2_36U*************************************/
  SvcCANDrtSlt0x424_0_2_36U.messageObj.id= 0x424;
  SvcCANDrtSlt0x424_0_2_36U.messageObj.extended= 0;
  SvcCANDrtSlt0x424_0_2_36U.messageObj.length= 8;
  SvcCANDrtSlt0x424_0_2_36U.messageObj.remote= 0;
  SvcCANDrtSlt0x424_0_2_36U.ready= 0;
  SvcCANDrtSlt0x424_0_2_36U.read= 0;
  SvcCANDrtSlt0x424_0_2_36U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x421_0_2_37U*************************************/
  SvcCANDrtSlt0x421_0_2_37U.messageObj.id= 0x421;
  SvcCANDrtSlt0x421_0_2_37U.messageObj.extended= 0;
  SvcCANDrtSlt0x421_0_2_37U.messageObj.length= 8;
  SvcCANDrtSlt0x421_0_2_37U.messageObj.remote= 0;
  SvcCANDrtSlt0x421_0_2_37U.ready= 0;
  SvcCANDrtSlt0x421_0_2_37U.read= 0;
  SvcCANDrtSlt0x421_0_2_37U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x400_0_3_1U*************************************/
  SvcCANDrtSlt0x400_0_3_1U.messageObj.id= 0x400;
  SvcCANDrtSlt0x400_0_3_1U.messageObj.extended= 0;
  SvcCANDrtSlt0x400_0_3_1U.messageObj.length= 8;
  SvcCANDrtSlt0x400_0_3_1U.messageObj.remote= 0;
  SvcCANDrtSlt0x400_0_3_1U.ready= 0;
  SvcCANDrtSlt0x400_0_3_1U.read= 0;
  SvcCANDrtSlt0x400_0_3_1U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x402_0_3_14U*************************************/
  SvcCANDrtSlt0x402_0_3_14U.messageObj.id= 0x402;
  SvcCANDrtSlt0x402_0_3_14U.messageObj.extended= 0;
  SvcCANDrtSlt0x402_0_3_14U.messageObj.length= 8;
  SvcCANDrtSlt0x402_0_3_14U.messageObj.remote= 0;
  SvcCANDrtSlt0x402_0_3_14U.ready= 0;
  SvcCANDrtSlt0x402_0_3_14U.read= 0;
  SvcCANDrtSlt0x402_0_3_14U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x403_0_3_15U*************************************/
  SvcCANDrtSlt0x403_0_3_15U.messageObj.id= 0x403;
  SvcCANDrtSlt0x403_0_3_15U.messageObj.extended= 0;
  SvcCANDrtSlt0x403_0_3_15U.messageObj.length= 8;
  SvcCANDrtSlt0x403_0_3_15U.messageObj.remote= 0;
  SvcCANDrtSlt0x403_0_3_15U.ready= 0;
  SvcCANDrtSlt0x403_0_3_15U.read= 0;
  SvcCANDrtSlt0x403_0_3_15U.write= 0;

  /*************************************************************************/

  /**************************SvcCANDrtSlt0x401_0_3_16U*************************************/
  SvcCANDrtSlt0x401_0_3_16U.messageObj.id= 0x401;
  SvcCANDrtSlt0x401_0_3_16U.messageObj.extended= 0;
  SvcCANDrtSlt0x401_0_3_16U.messageObj.length= 8;
  SvcCANDrtSlt0x401_0_3_16U.messageObj.remote= 0;
  SvcCANDrtSlt0x401_0_3_16U.ready= 0;
  SvcCANDrtSlt0x401_0_3_16U.read= 0;
  SvcCANDrtSlt0x401_0_3_16U.write= 0;

  /*************************************************************************/
  F_Abstr_CANRx_Init(CANDirectSlot_Queue,CANDirectSlotMsgElementPrt,
                     NUM_CANRx_CHANNEL);
  stEPKCtrlUsed= stEPKCtrlUsed+ASW_CCP_EPKData[0];

  /**************CCP******************************/
  ccpConfigTmp.en= 1;
  ccpConfigTmp.stCALSeedKey = 0x11;
  ccpConfigTmp.stDAQSeedKey = 0x22;
  ccpConfigTmp.stPGMSeedKey = 0x33;
  ccpConfigTmp.unLock= 1001;
  ccpConfigTmp.can_channel= 0;
  ccpConfigTmp.stationAddr= 0x112;
  ccpConfigTmp.idCro= 0x100;
  ccpConfigTmp.idDto= 0x101;
  ccpConfigTmp.idDaq[0]= 0x101;
  ccpConfigTmp.idDaq[1]= 0x101;
  ccpConfigTmp.idDaq[2]= 0x101;
  ccpConfigTmp.idDaq[3]= 0x102;
  ccpConfigTmp.pidDaq[0]= 0x0;
  ccpConfigTmp.pidDaq[1]= 0x3C;
  ccpConfigTmp.pidDaq[2]= 0x78;
  ccpConfigTmp.pidDaq[3]= 0x0;
  ccpConfigTmp.lenDaq[0]= 0;
  ccpConfigTmp.lenDaq[1]= 32;
  ccpConfigTmp.lenDaq[2]= 48;
  ccpConfigTmp.lenDaq[3]= 0;
  ccpConfigTmp.lenDaqMax= 48;
  (ccpConfigTmp.ccp21ConfigMem).codeRomStart= 0x80010000;
  (ccpConfigTmp.ccp21ConfigMem).calRomStart= 0x80200000;
  (ccpConfigTmp.ccp21ConfigMem).calRamStart= 0x70000000;
  (ccpConfigTmp.ccp21ConfigMem).daqRamStart= 0x50000000;
  (ccpConfigTmp.ccp21ConfigMem).calMaxLength= 0x8000;
  (ccpConfigTmp.ccp21ConfigMem).daqMaxLength= 0x10000000;
  (ccpConfigTmp.ccp21ConfigMem).calMinWriteSize= FLS_MIN_WRITE_SIZE;
  (ccpConfigTmp.ccp21ConfigMem).calBuff= ASW_CCP_CAL_FLSBuffer;
  (ccpConfigTmp.ccp21ConfigMem).cntBuff= 0;
  (ccpConfigTmp.ccp21ConfigMem).EPKIDAddr= (ECOCCP_U32)ASW_CCP_EPKData;//0x80234000
  (ccpConfigTmp.ccp21ConfigMem).EPKLength= (ECOCCP_U08)(sizeof(ASW_CCP_EPKData)/
    sizeof(ASW_CCP_EPKData[0]));
  (ccpConfigTmp.ccp21ConfigMem).EPKLengthMax= (ECOCCP_U08)0xFF;
  (ccpConfigTmp.ccp21ConfigMem).bootIDAddr= 0x2010;
  (ccpConfigTmp.ccp21ConfigMem).calLength= 0x8000;//Calibration_Data_Length;
  (ccpConfigTmp.ccp21ConfigMem).odt= ASW_CCP_odt;
  (ccpConfigTmp.ccp21ConfigMem).OdtEntryList= ASW_CCP_OdtEntryList;

#ifdef ECO_CCP_SET_SEED_EN

  FP_CcpSetSeedTrigger= &EcoCoder_CCP_SetSeed_Trigger;

#endif

  //ccpConfigTmp.ccpCfg=&ASW_CCP21Cfg;
  FP_CcpTaskCtrl= &F_CCP21_ProCtrl;
  FP_CcpFlash_Program= &ProgramFlash;
  FP_CcpFlash_ClearMemory= &Flash_clr_memory;
  FP_CcpCAN_SendMsg= (FType_CcpCAN_SendMsg)&F_Abstr_CAN_Transmit2Queue;
  F_ECOCCP_CcpInit(&ccpConfigTmp);

#ifdef CCP_EV2106B01_EN

  //Task_Enable=1;
#endif

  //CCP_vInit();
  FP_OS_COM_SERVE_H1ms = F_Servece_CAN_Update_H1ms;
  FP_OS_COM_SERVE_L1ms = F_Servece_CAN_Update_L1ms;
  FP_OS_COM_SERVE_H5ms = F_Servece_CAN_Update_5ms;
  FP_OS_COM_SERVE_H10ms = F_Servece_CAN_Update_10ms;
  FP_OS_COM_SERVE_L20ms = F_Servece_CAN_Update_20ms;
  FP_OS_COM_SERVE_L100ms = F_Servece_CAN_Update_100ms;
}

ECO_U08 F_Servece_CAN_ReceiveDirect(CANDirectSlot_t *directslot, CANMsgElement_t
  *messageObj)
{
  return F_Abstr_CAN_ReceiveDirect(directslot,messageObj);
}

ECO_U08 F_Servece_CAN_Transmit(CanControllerIdType channel, CANMsgElement_t
  *messageObj)
{
  return F_Abstr_CAN_Transmit2Queue(channel,messageObj);
}

ECO_U08 F_ASW_CAN_Tx(CanControllerIdType channel, ECO_BOOL remote, ECO_BOOL
                     extended,ECO_U32 id,ECO_U08 length,ECO_U08 *data)
{
  CANMsgElement_t messageObj;
  ECO_U08 i;
  messageObj.remote= remote;
  messageObj.extended= extended;
  messageObj.id= id;
  messageObj.length= length;
  for (i=0;i<length;i++) {
    messageObj.data[i]= data[i];
  }

  return F_Abstr_CAN_Transmit2Queue(channel,&messageObj);
}

ECO_BOOL F_ASW_CAN_Rx(CANDirectSlot_t *directslot, ECO_BOOL *remote, ECO_BOOL
                      *extended,ECO_U32 *id,ECO_U08 *length,ECO_U08 *data)
{
  CANMsgElement_t messageObj;
  ECO_BOOL flgSlotStr= 0;
  ECO_U08 i;
  flgSlotStr= F_Servece_CAN_ReceiveDirect(directslot, &messageObj);
  if (1==flgSlotStr) {
    *remote= messageObj.remote;
    *extended= messageObj.extended;
    *id= messageObj.id;
    *length= messageObj.length;
    for (i=0;i<8;i++) {
      data[i]= messageObj.data[i];
    }
  }

  return flgSlotStr;
}

ECO_U08 dataASWCANFDLEN0= 0;
ECO_U08 F_ASW_CANFD_Tx(CanControllerIdType channel, ECO_BOOL extended,ECO_U32 id,
  ECO_U08 length,ECO_U08 DLC,ECO_U08 fastBitRate,ECO_U08 *data)
{
  CANFDMsgElement_t messageObj;
  ECO_U08 i;
  messageObj.remote= 0;
  messageObj.extended= extended;
  messageObj.id= id;
  messageObj.length= length;
  messageObj.DLC= DLC;
  messageObj.fastBitRate= fastBitRate;
  for (i=0;i<length;i++) {
    messageObj.data[i]= data[i];
  }

  return F_Abstr_CANFD_Transmit2Queue(channel,&messageObj);
}

static ECO_U08 flgASWTx_Dis[10]= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

static ECO_U08 flgASWRx_Dis[10]= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

void F_ASW_DisCANFlg_Init(void)
{
  ECO_U08 i= 0;
  for (i=0;i<10;i++) {
    flgASWTx_Dis[i]= 0;
    flgASWRx_Dis[i]= 0;
  }
}

ECO_U08 F_ASW_DisableCAN(CanControllerIdType channel)
{
  if (channel>=10) {
    return 0;
  }

  flgASWTx_Dis[channel]= 1;
  flgASWRx_Dis[channel]= 1;
  return 1;
}

ECO_U08 F_ASW_EnableCAN(CanControllerIdType channel)
{
  if (channel>=10) {
    return 0;
  }

  flgASWTx_Dis[channel]= 0;
  flgASWRx_Dis[channel]= 0;
  return 1;
}

ECO_U08 F_ASW_GetCANTxDisFlg(CanControllerIdType channel)
{
  if (channel>=10) {
    return 0;
  }

  return flgASWTx_Dis[channel];
}

ECO_U08 F_ASW_GetCANRxDisFlg(CanControllerIdType channel)
{
  if (channel>=10) {
    return 0;
  }

  return flgASWRx_Dis[channel];
}
