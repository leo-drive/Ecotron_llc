#ifndef FLEXRAY_H_
#define FLEXRAY_H_

#include "MCAL_RAY.h"
//==============zhaoxn addsta 2019-11-26================
#include "hal_version.h"
//==============zhaoxn addend 2019-11-26================

#define FLEXRAY_CHANNELA_TX_OUT     (&IfxEray0_TXDA_P02_0_OUT)
#define FLEXRAY_CHANNELA_RX_IN      (&IfxEray0_RXDA2_P02_1_IN)
#define FLEXRAY_CHANNELA_TX_ENOUT   (&IfxEray0_TXENA_P14_9_OUT)

//==========Modify by zhaoxn 2019-11-26=================
#ifndef EH2275A02
#define FLEXRAY_CHANNELB_TX_OUT     (NULL_PTR)
#define FLEXRAY_CHANNELB_RX_IN      (NULL_PTR)
#define FLEXRAY_CHANNELB_TX_ENOUT   (NULL_PTR)
#endif

#ifdef EH2275A02
#define FLEXRAY_CHANNELB_TX_OUT     (&IfxEray0_TXDB_P11_12_OUT)
#define FLEXRAY_CHANNELB_RX_IN      (&IfxEray0_RXDB1_P11_10_IN)
#define FLEXRAY_CHANNELB_TX_ENOUT   (&IfxEray0_TXENB_P11_11_OUT)
#endif
//==========Modify by zhaoxn 2019-11-26=================

typedef enum {
	FlexRay_IntVector_MHF = 0,
	FlexRay_IntVector_SDS,
	FlexRay_IntVector_CYCS,
	FlexRay_IntVector_SUCS,
	FlexRay_IntVector_TIBC,
	FlexRay_IntVector_Count
}FlexRay_InterruptVector;

typedef enum {
    FlexRay_State_defaultConfig               = 0,
    FlexRay_State_ready                       = 1,
    FlexRay_State_normalActive                = 2,
    FlexRay_State_normalPassive               = 3,
    FlexRay_State_halt                        = 4,
    FlexRay_State_monitor                     = 5,
    FlexRay_State_config                      = 15,
    FlexRay_State_wakeupStandby               = 16,
    FlexRay_State_wakeupListen                = 17,
    FlexRay_State_wakeupSend                  = 18,
    FlexRay_State_wakeupDetect                = 19,
    FlexRay_State_startup                     = 32,
    FlexRay_State_coldStartListen             = 33,
    FlexRay_State_collisionResolution         = 34,
    FlexRay_State_consistencyCheck            = 35,
    FlexRay_State_gap                         = 36,
    FlexRay_State_join                        = 37,
    FlexRay_State_integrationCheck            = 38,
    FlexRay_State_integrationListen           = 39,
    FlexRay_State_integrationConsistencyCheck = 40,
    FlexRay_State_initializeSchedule          = 41,
    FlexRay_State_staruAborted                = 42,
    FlexRay_State_startupSucced               = 43
}FlexRay_State;

typedef enum {
    FlexRay_OK=0,
    FlexRay_Busy,
    FlexRay_Error
}FlexRay_Operation_Result;

typedef void (*FlexRay_Interrupt_Handler)(void);

typedef enum {
    FlexRay_BufferDirection_Receive  = 0,
    FlexRay_BufferDirection_Transmit = 1
}FlexRay_BufferDirection;

typedef enum {
    FlexRay_TransmissionMode_Continuous = 0,
    FlexRay_TransmissionMode_SingleShot = 1
}FlexRay_TransmissionMode;

typedef enum {
   FlexRay_ColdStart = 0,
   FlexRay_NonColdStart
} FlexRay_Startup_Type;

typedef Mcal_Ray_Message FlexRay_Message;

typedef struct {
    FlexRay_Message *p_msg_instances;
    uint8 msg_count;
    uint8 static_msg_count;
    //uint8 fifo_msg_count;
    uint32 *p_msg_data_buffer;
}Flexray_MsgPara;

typedef struct {
    boolean en_additional_rx_interrupt_handler;
    Macl_Ray_Rx_Interrupt_Handler rx_handler;
}FlexRay_Additional_RxHandler;

typedef Mcal_Ray_RxMessage FlexRay_ReceivedMessage;

typedef Mcal_Ray_TxMessage FlexRay_TransmitMessage;

typedef struct {
    Mcal_Ray_Node_Para node_init_para;
    Mcal_Ray_Network_Para network_init_para;
    Mcal_Ray_Baudrate baudrate;
    FlexRay_Startup_Type startup_type;
} Flexray_NetPara;

typedef struct {
    Flexray_NetPara flexray_init_para;
    Flexray_MsgPara init_msg_para;
    FlexRay_Additional_RxHandler rx_interrupt_handler;
}FlexRay_InitPara;

typedef struct {
    uint32 *data;
    uint8 length;
    uint8 buffer_index;
}FlexRay_TransmitFrame;

typedef Mcal_Ray_ErrorFlag FlexRay_Error_State;

extern void FlexRay_Init(const FlexRay_InitPara *init_para);
extern FlexRay_Operation_Result FlexRay_Write(FlexRay_TransmitMessage *tx_msg);
extern FlexRay_Operation_Result FlexRay_Read(FlexRay_ReceivedMessage *rx_msg);
extern void FlexRay_Interrupt_Install(FlexRay_InterruptVector interrupt_vector, FlexRay_Interrupt_Handler handler);
extern void FlexRay_Interrupt_Unstall(FlexRay_InterruptVector interrupt_vector);
extern FlexRay_State FlexRay_GetStatus(void);
extern FlexRay_Error_State FlexRay_GetErrorStatus(void);
extern void FlexRay_ClearError(FlexRay_Error_State error);
extern void FlexRay_Clear_AllErrors(void);
extern void FlexRay_Startup_1msTask(void);
//=================== addsta 2019-7-19=======================
extern boolean FlexRay_changePocState(IfxEray_PocCommand PocCommand);
//=================== addend 2019-7-19=======================
/*---------------------------hxl 2019-12-6---------------------------*/
extern FlexRay_Operation_Result FlexRay_WriteDataByIndex(uint32 buffer_index,uint8 *data);
extern FlexRay_Operation_Result FlexRay_ReadDataByIndex(uint32 buffer_index,uint8 *data);
/*---------------------------hxl 2019-12-6---------------------------*/
#endif

