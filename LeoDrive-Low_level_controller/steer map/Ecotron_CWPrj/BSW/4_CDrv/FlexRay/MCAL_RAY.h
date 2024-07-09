#ifndef _MCAL_RAY_H_
#define _MCAL_RAY_H_

#include <Eray/Eray/IfxEray_Eray.h>

#define MCAL_ISR_PRIORITY_ERAY_INT0		(1)	//INT0 interrupt priority
#define MCAL_ISR_PRIORITY_ERAY_INT1		(2)	//INT1 interrupt priority
#define MCAL_ISR_PRIORITY_ERAY_NDAT0	(3)	//NDA0 interrupt priority
#define MCAL_ISR_PRIORITY_ERAY_NDAT1	(4)	//NDA1 interrupt priority

#define MCAL_RAY_CHANNELA_ENABLE		(1)	//enable channelA bit set
#define MCAL_RAY_CHANNELB_ENABLE		(2)	//enable channelB bit set
/*The communication baudrate enum typedef */
typedef enum{
	Mcal_Ray_10M=0,
	Mcal_Ray_5M,
	Mcal_Ray_2_5M,
}Mcal_Ray_Baudrate;

/*The network parameter struct typedef */
typedef struct{
	uint32 gColdStartAttempts:5;		//Maximum number of times a node in the cluster is permitted to attempt to start the cluster
										//by initiating schedule synchronization.
	uint32 gdMinislotActionPoint:5;		//Number of macroticks the minislot action point is offset from the beginning of a minislot.
	uint32 gdNIT:14;					//Duration of the Network Idle Time
	uint32 gdActionPointOffset:6;		//Number of macroticks the action point is offset from the beginning of a static slot.
	uint32 :2;

	uint32 gdStaticSlot:10;				//Duration of a static slot,uint MT
	uint32 gdTSSTransmitter:4;			//Number of bits in the Transmission Start Sequence
	uint32 gdWakeupSymbolRxIdle:6;		//Number of bits used by the node to transmit the 'idle' part of a wakeup symbol
	uint32 gListenNoise:4;				//Upper limit for the startup listen timeout and wakeup listen timeout in the presence of noise.
	uint32 gdMinislot:6;				//Duration of a minislot
	uint32 gdDynamicSlotIdlePhase:2;	//Duration of the idle phase within a dynamic slot.


	uint32 gdWakeupSymbolTxLow:6;
	uint32 gMacroPerCycle:14;			//Number of macroticks in a communication cycle.
	uint32 gdSampleClockPeriod:2;
	uint32 gdWakeupSymbolRxLow:6;		//Number of bits used by the node to test the duration of the LOW phase of a received wakeup
	uint32 gMaxWithoutClockCorrectionFatal:4;	//Defines the number of consecutive even/odd cycle pairs with missing clock correction
												//terms that will cause the protocol to transition from the POC:normal active or
												//POC:normal passive state into the POC:halt state.
	uint32 gdWakeupSymbolTxIdle:8;		//Number of bits used by the node to transmit the 'idle' part of a wakeup symbol
	uint32 gSyncNodeMax:4;				//Maximum number of syncnodes at current cluster.
	uint32 gNumberOfMinislots:13;		//Number of minislots in the dynamic segment.
	uint32 gPayloadLengthStatic:7;		//Payload length of a static frame.

	uint32 gNumberOfStaticSlots:10;		//Number of static slots in the static segment.
	uint32 gOffsetCorrectionStart:14;	//Start of the offset correction phase within the NIT.
	uint32 gMaxWithoutClockCorrectionPassive:4;	//
	uint32 gNetworkManagementVectorLength:4;	//Length of the Network Management vector in a cluster.

	uint32 gdWakeupSymbolRxWindow:9;
	uint32 gdCASRxLowMax:7;				//Upper limit of the CAS acceptance window.
}Mcal_Ray_Network_Para;
/*The node parameter struct typedef */
typedef struct{
	uint32 pMacroInitialOffsetA:7;	//Integer number of macroticks between the static slot
									//boundary and the following macrotick boundary of the
									//secondary time reference point based on the nominal
									//macrotick duration.
	uint32 pMacroInitialOffsetB:7;
	uint32 pMicroInitialOffsetA:8;	//Number of microticks between the secondary time
									//reference point and the macrotick boundary immediately
									//following the secondary time reference point.
	uint32 pMicroInitialOffsetB:8;
	uint32 pSamplesPerMicrotick:2;

	uint32 pdAcceptedStartupRange:11;	//Expanded range of measured clock deviation allowed for startup frames during integration
	uint32 pLatestTx:13;			//Number of the last minislot in which a frame transmission can start in the dynamic segment
	uint32 pDecodingCorrection:8;	//Value used by the receiver to calculate the difference
									//between primary time reference point and secondary
									//time reference point.

	uint32 pdListenTimeOut:21;		//Value for the startup listen timeout and wakeup listen
									//timeout. Although this is a node local parameter, the
									//real time equivalent of this value should be the same
									//for all nodes in the cluster.
	uint32 pdMaxDrift:11;			//Magnitude of the maximum permissible rate correction
									//value and the maximum drift offset between two nodes
									//operating with non-synchronized clocks for one communication cycle.

	uint32 pDelayCompensationA:8;	//Value used to compensate for reception delays on the indicated channel.
	uint32 pDelayCompensationB:8;
	uint32 pClusterDriftDamping:5;	//Local cluster drift damping factor used for rate correction.
	uint32 pAllowPassiveToActive:5;
	uint32 pExternOffsetCorrection:3;
	uint32 pExternRateCorrection:3;	//Number of microticks added or subtracted to the NIT to carry out a host-controlled external offset correction.

	uint32 pMicroPerCycle:20;		//Nominal number of microticks in the communication
									//cycle of the local node. If nodes have different microtick
									//durations this number will differ from node to node.
	uint32 pRateCorrectionOut:10;	//Magnitude of the maximum permissible rate correction
									//value and the maximum drift offset between two nodes
									//operating with non-synchronized clocks for one communication cycle.
	uint32 pChannels:2;				//Channels to which the node is connected.

	uint32 pAllowHaltDueToClock:1;
	uint32 pKeySlotUsedForStartup:1;//Parameter indicating whether the key slot(s) are used to transmit startup frames.
	uint32 pKeySlotUsedForSync:1;	//Parameter indicating whether the key slot(s) are used to transmit sync frames.
	uint32 pOffsetCorrectionOut:14;	//Magnitude of the maximum permissible offset correction value.
	uint32 pSingleSlotEnabled:1;
	uint32 pWakeupChannel:1;		//Channel used by the node to send a wakeup pattern.
	uint32 pWakeupPattern:6;		//Number of repetitions of the wakeup symbol that are
									//combined to form a wakeup pattern when the node
									//enters the POC:wakeup send state.
}Mcal_Ray_Node_Para;
/*Head map struct*/
typedef struct{
	uint16 frameId;			//Frame ID
	uint8  playloadlength;	//Playload length
	uint32 *p_data_buffer;	//The head pointer which indicate the frame date buffer
}Mcal_Ray_HeadMap;
/*Eray NodeA pin parameters */
typedef struct{
	boolean channelA_en;
    const IfxEray_Rxd_In   *rxIn;
    const IfxEray_Txd_Out  *txOut;
    const IfxEray_Txen_Out *txEnOut;
}Mcal_Ray_NodeA_Pin_Para;
/*Eray NodeB pin parameters */
typedef struct{
	boolean channelB_en;
    const IfxEray_Rxd_In   *rxIn;
    const IfxEray_Txd_Out  *txOut;
    const IfxEray_Txen_Out *txEnOut;
}Mcal_Ray_NodeB_Pin_Para;
/*Eray pin parameters */
typedef struct{
	Mcal_Ray_NodeA_Pin_Para nodeA_pins;
	Mcal_Ray_NodeB_Pin_Para nodeB_pins;
}Mcal_Ray_Node_Pin_Para;
/*Eray transfer message struct*/
typedef struct{
	IfxEray_SlotConfig slot;
	IfxEray_Header head;
}Mcal_Ray_Message;

typedef struct
{
    IfxEray_ReceivedHeader header;
    uint32                 *data;
}Mcal_Ray_ReceivedFrame;

typedef struct{
	uint16 frameID;
	uint32 *out_data;
}Mcal_Ray_RxMessage;

typedef struct{
	uint16 frameID;
	uint32 *in_data;
}Mcal_Ray_TxMessage;

typedef void (*Macl_Ray_Rx_Interrupt_Handler)(Mcal_Ray_ReceivedFrame *received_frame);
typedef void (*Mcal_Ray_Interrupt_Handler)(void);

typedef enum{
	Mcal_Ray_Interrupt_MHF = 0,
	Mcal_Ray_Interrupt_SDS,
	Mcal_Ray_Interrupt_CYCS,
	Mcal_Ray_Interrupt_SUCS,
	Mcal_Ray_Interrupt_TIBC,
	Mcal_Ray_Interrupt_Count
}Mcal_Ray_Interrupt;
/*The eray parameter,used for the node init*/
typedef struct{
	Mcal_Ray_Baudrate 				baudrate;
	Mcal_Ray_Node_Pin_Para 			pin_para;
	Mcal_Ray_Network_Para 			network_para;
	Mcal_Ray_Node_Para 				node_para;
	Mcal_Ray_Message 				*p_messages_instances;
	Macl_Ray_Rx_Interrupt_Handler 	rx_interrupt_handler;
	uint32 							*p_message_buffer;
	uint8 							message_count;
	uint8 							static_message_count;
	boolean 						coldstart_node;
	boolean 						rx_message_in_interrput;
}Mcal_Ray_Init_Para;
/*The Eray operation result*/
typedef enum{
	Mcal_Ray_ReadFailed=0,
	Mcal_Ray_ReadOK,
	Mcal_Ray_NoStartup,
	Mcal_Ray_WriteFailed,
	Mcal_Ray_WriteOK
}Mcal_Ray_Operation_Result;
/*The node startup state .*/
typedef enum{
	Mcal_Ray_WaitInit=0,
	Mcal_Ray_InitDone,
	Mcal_Ray_WakeupListen,
	Mcal_Ray_EnColdstart,
	Mcal_Ray_StartCommunication,
	Mcal_Ray_NormalActive,
	Mcal_Ray_StartupDone
}Mcal_Ray_Startup_State;
/*Error event list*/
typedef enum{
	Mcal_Ray_ErrorFlag_None = 0,
	Mcal_Ray_ErrorFlag_PEMC = 1,         /**< \brief POC error mode change bit. */
	Mcal_Ray_ErrorFlag_CNA  = 2,         /**< \brief command not accepted event bit. */
	Mcal_Ray_ErrorFlag_SFBM = 4,         /**< \brief sync frame below minimum bit. */
	Mcal_Ray_ErrorFlag_SFO  = 8,         /**< \brief sync frame overflow event bit */
	Mcal_Ray_ErrorFlag_CCF  = 16,        /**< \brief clock correction failure event. */
	Mcal_Ray_ErrorFlag_CCL  = 32,        /**< \brief CHI command locked event. */
	Mcal_Ray_ErrorFlag_PEER = 64,        /**< \brief ECC error event bit. */
	Mcal_Ray_ErrorFlag_RFO  = 128,       /**< \brief RxFIFO overrun event bit. */
	Mcal_Ray_ErrorFlag_EFA  = 256,       /**< \brief empty FIFO access event bit. */
	Mcal_Ray_ErrorFlag_IIBA = 512,       /**< \brief illegal input buffer access event. */
	Mcal_Ray_ErrorFlag_IOBA = 1024,      /**< \brief illegal output buffer access event. */
	Mcal_Ray_ErrorFlag_MHF  = 2048,      /**< \brief message handler constraint flag. */
	Mcal_Ray_ErrorFlag_EDA  = 65536,     /**< \brief error event on channel A. */
	Mcal_Ray_ErrorFlag_LTVA = 131072,    /**< \brief latest transmit violation flag on channel A . */
	Mcal_Ray_ErrorFlag_TABA = 262144,    /**< \brief transmission across channel A boundary flag. */
	Mcal_Ray_ErrorFlag_EDB  = 16777216,  /**< \brief error event on channel B. */
	Mcal_Ray_ErrorFlag_LTVB = 33554432,  /**< \brief latest transmit violation flag on channel B . */
	Mcal_Ray_ErrorFlag_TABB = 67108864   /**< \brief transmission across channel B boundary flag. */
}Mcal_Ray_ErrorFlag;
/*Eray instance struct*/
typedef struct
{
    IfxEray_Eray            eray;                                     /**< \brief Eray handle */
    IfxEray_Eray_Config     erayModuleConfig;                         /**< \brief Eray module Configuration structure */
    IfxEray_Eray_NodeConfig nodeConfig;                               /**< \brief Eray Node Configuration structure */
    volatile unsigned       errors;                                   /**< \brief error interrupt counter */
    Macl_Ray_Rx_Interrupt_Handler rx_interrupt_handler;				 //When rx interrupt set,Enable this function point to process the message
    uint8 message_number;											 //How many message in current network,defined all message ID was continuous
    boolean cold_startnode;
} Mcal_App_Eray;

extern void Mcal_Ray_Init(Mcal_Ray_Init_Para *init_para);
extern void Mcal_Ray_Coldstart(void);
extern void Mcal_Ray_NonColdstart(void);
extern Mcal_Ray_Operation_Result Mcal_Ray_Write(Mcal_Ray_TxMessage *tx_msg);
extern Mcal_Ray_Operation_Result Mcal_Ray_Read(Mcal_Ray_RxMessage *rx_msg);
extern Mcal_Ray_Startup_State Mcal_Ray_GetStartupState(void);
extern void Mcal_Ray_Interrupt_Install(Mcal_Ray_Interrupt interrupt_vector, Mcal_Ray_Interrupt_Handler handler);
extern void Mcal_Ray_Interrupt_Unstall(Mcal_Ray_Interrupt interrupt_vector);
extern uint8 Mcal_Ray_GetPOCS(void);
extern void Mcal_Ray_ClearAllErrors(void);
extern void Mcal_Ray_ClearError(Mcal_Ray_ErrorFlag error_flag);
extern void Mcal_Ray_Startup_1msTask(void);
//===================zhaoxn addsta 2019-7-19=======================
extern boolean Mcal_Ray_changePocState(IfxEray_PocCommand PocCommand);
//===================zhaoxn addend 2019-7-19=======================
/*---------------------------hxl 2019-12-6---------------------------*/
extern uint8 Mcal_Ray_WriteDataByIndex(uint32 buffer_index,uint8 *data);
extern uint8 Mcal_Ray_ReadDataByIndex(uint32 buffer_index,uint8 *data);
/*---------------------------hxl 2019-12-6---------------------------*/
#endif

/* EOF */

