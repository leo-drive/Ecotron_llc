/******************************************************************************
 * Copyright (C),
 * File name:         Service_CAN.h
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

#ifndef _H_Service_CAN_H_
#define _H_Service_CAN_H_

/******************************************************************************
   Includes
 ******************************************************************************/
#include "Abstraction_CAN.h"
#include "EcoCoderTypeDef.h"

/******************************************************************************
   Exported Data Declarations
 ******************************************************************************/
extern CANDirectSlot_t CANDirectSlotMsgElemenA[1U];
extern CANDirectSlot_t CANDirectSlotMsgElemenB[18U];
extern CANDirectSlot_t CANDirectSlotMsgElemenC[13U];
extern CANDirectSlot_t CANDirectSlotMsgElemenD[4U];

#define ServiceCANDirectSlot0x100_0_can0 CANDirectSlotMsgElemenA[0]
#define SvcCANDrtSlt0xB5_0_1_2U        CANDirectSlotMsgElemenB[0]
#define SvcCANDrtSlt0xA8_0_1_3U        CANDirectSlotMsgElemenB[1]
#define SvcCANDrtSlt0x3BE_0_1_4U       CANDirectSlotMsgElemenB[2]
#define SvcCANDrtSlt0x104_0_1_17U      CANDirectSlotMsgElemenB[3]
#define SvcCANDrtSlt0xB2_0_1_18U       CANDirectSlotMsgElemenB[4]
#define SvcCANDrtSlt0x65F_0_1_19U      CANDirectSlotMsgElemenB[5]
#define SvcCANDrtSlt0xA7_0_1_20U       CANDirectSlotMsgElemenB[6]
#define SvcCANDrtSlt0x176_0_1_21U      CANDirectSlotMsgElemenB[7]
#define SvcCANDrtSlt0x65A_0_1_22U      CANDirectSlotMsgElemenB[8]
#define SvcCANDrtSlt0x3DB_0_1_29U      CANDirectSlotMsgElemenB[9]
#define SvcCANDrtSlt0x86_0_1_30U       CANDirectSlotMsgElemenB[10]
#define SvcCANDrtSlt0x6B7_0_1_31U      CANDirectSlotMsgElemenB[11]
#define SvcCANDrtSlt0x121_0_1_32U      CANDirectSlotMsgElemenB[12]
#define SvcCANDrtSlt0x106_0_1_38U      CANDirectSlotMsgElemenB[13]
#define SvcCANDrtSlt0x101_0_1_39U      CANDirectSlotMsgElemenB[14]
#define SvcCANDrtSlt0xAD_0_1_40U       CANDirectSlotMsgElemenB[15]
#define SvcCANDrtSlt0x176_0_1_41U      CANDirectSlotMsgElemenB[16]
#define SvcCANDrtSlt0x86_0_1_42U       CANDirectSlotMsgElemenB[17]
#define SvcCANDrtSlt0x420_0_2_5U       CANDirectSlotMsgElemenC[0]
#define SvcCANDrtSlt0x43C_0_2_6U       CANDirectSlotMsgElemenC[1]
#define SvcCANDrtSlt0x475_0_2_7U       CANDirectSlotMsgElemenC[2]
#define SvcCANDrtSlt0x294_0_2_8U       CANDirectSlotMsgElemenC[3]
#define SvcCANDrtSlt0x312_0_2_9U       CANDirectSlotMsgElemenC[4]
#define SvcCANDrtSlt0x310_0_2_10U      CANDirectSlotMsgElemenC[5]
#define SvcCANDrtSlt0x311_0_2_11U      CANDirectSlotMsgElemenC[6]
#define SvcCANDrtSlt0x290_0_2_12U      CANDirectSlotMsgElemenC[7]
#define SvcCANDrtSlt0x292_0_2_13U      CANDirectSlotMsgElemenC[8]
#define SvcCANDrtSlt0x42C_0_2_34U      CANDirectSlotMsgElemenC[9]
#define SvcCANDrtSlt0x428_0_2_35U      CANDirectSlotMsgElemenC[10]
#define SvcCANDrtSlt0x424_0_2_36U      CANDirectSlotMsgElemenC[11]
#define SvcCANDrtSlt0x421_0_2_37U      CANDirectSlotMsgElemenC[12]
#define SvcCANDrtSlt0x400_0_3_1U       CANDirectSlotMsgElemenD[0]
#define SvcCANDrtSlt0x402_0_3_14U      CANDirectSlotMsgElemenD[1]
#define SvcCANDrtSlt0x403_0_3_15U      CANDirectSlotMsgElemenD[2]
#define SvcCANDrtSlt0x401_0_3_16U      CANDirectSlotMsgElemenD[3]

/******************************************************************************
   Exported Function Declarations
 ******************************************************************************/
extern void F_Servece_CAN_Init(void);
extern ECO_U08 F_Servece_CAN_ReceiveDirect(CANDirectSlot_t *directslot,
  CANMsgElement_t *messageObj);
extern ECO_U08 F_Servece_CAN_Transmit(CanControllerIdType channel,
  CANMsgElement_t *messageObj);
extern ECO_U08 F_ASW_CAN_Tx(CanControllerIdType channel, ECO_BOOL remote,
  ECO_BOOL extended,ECO_U32 id,ECO_U08 length,ECO_U08 *data);
extern ECO_BOOL F_ASW_CAN_Rx(CANDirectSlot_t *directslot, ECO_BOOL *remote,
  ECO_BOOL *extended,ECO_U32 *id,ECO_U08 *length,ECO_U08 *data);
extern ECO_U08 dataASWCANFDLEN0;
extern ECO_U08 F_ASW_CANFD_Tx(CanControllerIdType channel, ECO_BOOL extended,
  ECO_U32 id,ECO_U08 length,ECO_U08 DLC,ECO_U08 fastBitRate,ECO_U08 *data);
extern ECO_U08 F_ASW_DisableCAN(CanControllerIdType channel);
extern ECO_U08 F_ASW_EnableCAN(CanControllerIdType channel);
extern ECO_U08 F_ASW_GetCANTxDisFlg(CanControllerIdType channel);
extern ECO_U08 F_ASW_GetCANRxDisFlg(CanControllerIdType channel);
extern void F_ASW_DisCANFlg_Init(void);

#endif                                 /* _H_Service_CAN_H_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
