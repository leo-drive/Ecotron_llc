/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Ecotron.h
 *
 * Code generated for Simulink model 'Ecotron'.
 *
 * Model version                  : 1.210
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Sat Aug 24 17:10:49 2024
 *
 * Target selection: EcoCoderTC27x.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Ecotron_h_
#define RTW_HEADER_Ecotron_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include <string.h>
#include "Service_CAN.h"
#include "Abstraction_Sys.h"
#include "Abstraction_Sys.h"
#include "TLF35584.h"
#include "Abstraction_ADC.h"
#include "Abstraction_CAN.h"
#ifndef RECOVER_BUSOFF_BSW_EN_AUTO
#ifndef RECOVER_BUSOFF_FUNC_DEF
#include "CAN.h"
#endif
#endif

#include "ASW_Schedule.h"
#include "Abstraction_HLSO.h"
#ifndef Ecotron_COMMON_INCLUDES_
# define Ecotron_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#endif                                 /* Ecotron_COMMON_INCLUDES_ */

#include "EcoCoderTypeDef.h"
#include "EcoSectionDef.h"
#include "rt_zcfcn.h"

extern uint32_T tEcotron;

#define PUSH__RWP
#include "EcoSectionDef.h"

extern __RWP const volatile uint32_T c1Ecotron;
extern __RWP const volatile uint32_T c2Ecotron;

#define POP__RWP
#include "EcoSectionDef.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmCounterLimit
# define rtmCounterLimit(rtm, idx)     ((rtm)->Timing.TaskCounters.cLimit[(idx)])
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#define Ecotron_M                      (M)

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

#ifndef DEFINED_TYPEDEF_FOR_Msg_
#define DEFINED_TYPEDEF_FOR_Msg_

typedef struct {
  boolean_T Available;
  uint32_T cnt;
  boolean_T timeout;
  real32_T freq;
} Msg;

#endif

#ifndef typedef_e_dsp_private_SlidingWindowAver
#define typedef_e_dsp_private_SlidingWindowAver

typedef struct {
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real32_T pCumSum;
  real32_T pCumSumRev[199];
  real32_T pCumRevIndex;
} e_dsp_private_SlidingWindowAver;

#endif                               /*typedef_e_dsp_private_SlidingWindowAver*/

#ifndef typedef_c_cell_wrap
#define typedef_c_cell_wrap

typedef struct {
  uint32_T f1[8];
} c_cell_wrap;

#endif                                 /*typedef_c_cell_wrap*/

#ifndef typedef_dsp_simulink_MovingAverage
#define typedef_dsp_simulink_MovingAverage

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  c_cell_wrap inputVarSize;
  e_dsp_private_SlidingWindowAver *pStatistic;
  int32_T NumChannels;
} dsp_simulink_MovingAverage;

#endif                                 /*typedef_dsp_simulink_MovingAverage*/

/* Block signals (default storage) */
typedef struct {
  real_T TmpRTBAtSwitch1Inport3;       /* '<S246>/Subsystem' */
  real_T TmpRTBAtSendCANMessage2Inport2;/* '<S445>/Chart' */
  real_T Channel;                      /* '<S199>/Chart' */
  real_T Onoff;                        /* '<S199>/Chart' */
  real_T Msgtrigger;                   /* '<S199>/Chart' */
  real_T cnt;                          /* '<S229>/Chart1' */
  real_T PtoNTrigger;                  /* '<S229>/Chart1' */
  real_T PtoDTrigger;                  /* '<S229>/Chart1' */
  real_T DtoNTrigger;                  /* '<S229>/Chart1' */
  real_T NtoDTrigger;                  /* '<S229>/Chart1' */
  real_T NtoRTrigger;                  /* '<S229>/Chart1' */
  real_T RtoNTrigger;                  /* '<S229>/Chart1' */
  uint32_T ReadCANMessage_o2;          /* '<S170>/Read CAN Message' */
  uint32_T ReadCANMessage_o2_k;        /* '<S115>/Read CAN Message' */
  uint32_T Checksum;                   /* '<S115>/Read CAN Message' */
  uint32_T Counter;                    /* '<S115>/Read CAN Message' */
  uint32_T SwitchRelated1;             /* '<S115>/Read CAN Message' */
  uint32_T RandomSignal;               /* '<S115>/Read CAN Message' */
  uint32_T RandomSignal2;              /* '<S115>/Read CAN Message' */
  uint32_T SwitchRelated2;             /* '<S115>/Read CAN Message' */
  uint32_T NoIdea2;                    /* '<S115>/Read CAN Message' */
  uint32_T NoIdea3;                    /* '<S115>/Read CAN Message' */
  uint32_T ReadCANMessage_o2_j;        /* '<S112>/Read CAN Message' */
  uint32_T rxMotor_12CRC;              /* '<S112>/Read CAN Message' */
  uint32_T rxMotor_12BZ;               /* '<S112>/Read CAN Message' */
  uint32_T rxMO_MomNeg_available;      /* '<S112>/Read CAN Message' */
  uint32_T rxMO_MomLim_stat;           /* '<S112>/Read CAN Message' */
  uint32_T rxMO_MomLim_dyn;            /* '<S112>/Read CAN Message' */
  uint32_T rxMO_Momentenintegral02;    /* '<S112>/Read CAN Message' */
  uint32_T rxMO_QBitRotationSpeed_01;  /* '<S112>/Read CAN Message' */
  uint32_T ReadCANMessage_o2_f;        /* '<S113>/Read CAN Message' */
  uint32_T rxMO_StartStoppStatus;      /* '<S113>/Read CAN Message' */
  uint32_T rxMO_StartStoppRestart;     /* '<S113>/Read CAN Message' */
  uint32_T rxMO_FreigReku;             /* '<S113>/Read CAN Message' */
  uint32_T rxMO_Kl50;                  /* '<S113>/Read CAN Message' */
  uint32_T rxMO_Gearposition;          /* '<S113>/Read CAN Message' */
  uint32_T rxMO_StartStoppDriverRequest;/* '<S113>/Read CAN Message' */
  uint32_T rxMO_HYBReadinesstoDrive;   /* '<S113>/Read CAN Message' */
  uint32_T rxMO_ExtE_Fahrt_aktiv;      /* '<S113>/Read CAN Message' */
  uint32_T rxMO_DriverBrake;           /* '<S113>/Read CAN Message' */
  uint32_T rxMO_QBitDriver_Brake;      /* '<S113>/Read CAN Message' */
  uint32_T rxMO_BLS;                   /* '<S113>/Read CAN Message' */
  uint32_T rxMO_ConsistencyBrakePedal; /* '<S113>/Read CAN Message' */
  uint32_T rxMO_TimeoutESP;            /* '<S113>/Read CAN Message' */
  uint32_T rxMO_KlimaEingr;            /* '<S113>/Read CAN Message' */
  uint32_T rxMO_AusspAnlass;           /* '<S113>/Read CAN Message' */
  uint32_T rxMO_FreigAnlass;           /* '<S113>/Read CAN Message' */
  uint32_T rxMO_KupplSchalter;         /* '<S113>/Read CAN Message' */
  uint32_T rxMO_Interlock;             /* '<S113>/Read CAN Message' */
  uint32_T rxMO_MotorLaeuft;           /* '<S113>/Read CAN Message' */
  uint32_T rxMO_Kickdown;              /* '<S113>/Read CAN Message' */
  uint32_T rxMO_StatusZylabschalt_01;  /* '<S113>/Read CAN Message' */
  uint32_T rxMO_EKlKomLeiRed;          /* '<S113>/Read CAN Message' */
  uint32_T rxMO_HandshakeSTH;          /* '<S113>/Read CAN Message' */
  uint32_T rxMO_BKVLowPressureWarning; /* '<S113>/Read CAN Message' */
  uint32_T rxMO_FreigabeSegeln;        /* '<S113>/Read CAN Message' */
  uint32_T rxMO_PTCStatus;             /* '<S113>/Read CAN Message' */
  uint32_T rxMO_QBitGearposition;      /* '<S113>/Read CAN Message' */
  uint32_T rxMO_GearPositionSignal_Source;/* '<S113>/Read CAN Message' */
  uint32_T rxMO_RemotestartBetrieb;    /* '<S113>/Read CAN Message' */
  uint32_T ReadCANMessage_o2_a;        /* '<S17>/Read CAN Message' */
  uint32_T TmpRTBAtRelationalOperatorInpor;/* '<S23>/Delay1' */
  uint32_T ReadCANMessage1_o2;         /* '<S21>/Read CAN Message1' */
  uint32_T TmpRTBAtRelationalOperatorInp_c;/* '<S48>/Delay1' */
  uint32_T ReadCANMessage_o2_jp;       /* '<S16>/Read CAN Message' */
  uint32_T ReadCANMessage3_o2;         /* '<S77>/Read CAN Message3' */
  uint32_T RBF_unused;                 /* '<S77>/Read CAN Message3' */
  uint32_T ReadCANMessage3_o2_m;       /* '<S55>/Read CAN Message3' */
  uint32_T ReadCANMessage2_o2;         /* '<S53>/Read CAN Message2' */
  uint32_T TmpRTBAtRelationalOperatorIn_ch;/* '<S56>/Delay1' */
  uint32_T ReadCANMessage3_o2_i;       /* '<S54>/Read CAN Message3' */
  uint32_T TmpRTBAtRelationalOperatorI_chc;/* '<S59>/Delay1' */
  uint32_T TmpRTBAtRelationalOperator_chcx;/* '<S66>/Delay1' */
  uint32_T ReadCANMessage2_o2_h;       /* '<S75>/Read CAN Message2' */
  uint32_T TmpRTBAtRelationalOperato_chcxw;/* '<S78>/Delay1' */
  uint32_T ReadCANMessage3_o2_a;       /* '<S76>/Read CAN Message3' */
  uint32_T TmpRTBAtRelationalOperat_chcxwz;/* '<S81>/Delay1' */
  uint32_T TmpRTBAtRelationalOpera_chcxwz4;/* '<S89>/Delay1' */
  uint32_T ReadCANMessage_o2_h;        /* '<S172>/Read CAN Message' */
  uint32_T PC_horn;                    /* '<S172>/Read CAN Message' */
  uint32_T TmpRTBAtRelationalOper_chcxwz4u;/* '<S185>/Delay1' */
  uint32_T TmpRTBAtRelationalOpe_chcxwz4uq;/* '<S173>/Delay1' */
  uint32_T TmpRTBAtRelationalOp_chcxwz4uqi;/* '<S179>/Delay1' */
  uint32_T ReadCANMessage_o2_kh;       /* '<S171>/Read CAN Message' */
  uint32_T TmpRTBAtRelationalO_chcxwz4uqit;/* '<S182>/Delay1' */
  uint32_T ReadCANMessage_o2_jn;       /* '<S103>/Read CAN Message' */
  uint32_T rxEPB_01CRC;                /* '<S103>/Read CAN Message' */
  uint32_T rxEPB_01BZ;                 /* '<S103>/Read CAN Message' */
  uint32_T rxEPB_QBitLongitudinalAccelerat;/* '<S103>/Read CAN Message' */
  uint32_T rxEPB_QBitPedalTravel_Clutch;/* '<S103>/Read CAN Message' */
  uint32_T rxEPB_BCM2Motor_Wakeup;     /* '<S103>/Read CAN Message' */
  uint32_T rxEPB_FreigVerzoeg_Anf;     /* '<S103>/Read CAN Message' */
  uint32_T rxEPB_VerzoegAnf;           /* '<S103>/Read CAN Message' */
  uint32_T rxEPB_PedalTravelClutch;    /* '<S103>/Read CAN Message' */
  uint32_T rxEPB_StartUpRequest_Recognized;/* '<S103>/Read CAN Message' */
  uint32_T rxEPB_DAARandbed_erf;       /* '<S103>/Read CAN Message' */
  uint32_T rxEPB_ErrorStatus;          /* '<S103>/Read CAN Message' */
  uint32_T rxEPB_SwitchStatus;         /* '<S103>/Read CAN Message' */
  uint32_T rxEPB_QBitSwitchStatus;     /* '<S103>/Read CAN Message' */
  uint32_T rxEPB_ConsistencyACC;       /* '<S103>/Read CAN Message' */
  uint32_T rxEPB_Tension;              /* '<S103>/Read CAN Message' */
  uint32_T ReadCANMessage_o2_kq;       /* '<S116>/Read CAN Message' */
  uint32_T ReadCANMessage_o2_kj;       /* '<S108>/Read CAN Message' */
  uint32_T rxTSK_QBitPitch;            /* '<S108>/Read CAN Message' */
  uint32_T rxTSK_QBitVehicleMass;      /* '<S108>/Read CAN Message' */
  uint32_T rxMO_StartVoltage02;        /* '<S108>/Read CAN Message' */
  uint32_T rxMO_DPFReg;                /* '<S108>/Read CAN Message' */
  uint32_T rxMO_HeaetingcurrentEKAT;   /* '<S108>/Read CAN Message' */
  uint32_T rxMO_HeaetingcurrentSCR;    /* '<S108>/Read CAN Message' */
  uint32_T ReadCANMessage_o2_o;        /* '<S111>/Read CAN Message' */
  uint32_T rxMotor_11CRC;              /* '<S111>/Read CAN Message' */
  uint32_T rxMotor_11BZ;               /* '<S111>/Read CAN Message' */
  uint32_T rxMO_MomTotal;              /* '<S111>/Read CAN Message' */
  uint32_T rxMO_MomInertia_Total;      /* '<S111>/Read CAN Message' */
  uint32_T rxMO_MomSchub;              /* '<S111>/Read CAN Message' */
  uint32_T rxMO_StatusNormalOperation_01;/* '<S111>/Read CAN Message' */
  uint32_T rxMO_FirstInaccurateThreshold;/* '<S111>/Read CAN Message' */
  uint32_T rxMO_QBitMotormomente;      /* '<S111>/Read CAN Message' */
  uint32_T ReadCANMessage_o2_i;        /* '<S101>/Read CAN Message' */
  uint32_T ReadCANMessage1_o2_n;       /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM_BrakePedalSensor;     /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM_BrakeFluidSensor;     /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM1_LichtWarn;           /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM_WashwaterSensor;      /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM_CoolantSensor;        /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM1_Kl15_HW_recognized;  /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM_IceOffroad_Button;    /* '<S100>/Read CAN Message1' */
  uint32_T rxZZH_EndlageOben;          /* '<S100>/Read CAN Message1' */
  uint32_T rxZZH_EndlageUnten;         /* '<S100>/Read CAN Message1' */
  uint32_T rxZZH_EndlageUnplausibel;   /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM2_EZSDepressed;        /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM2_SSTDepressed;        /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM_HybridStartStopp_Button;/* '<S100>/Read CAN Message1' */
  uint32_T rxBCM1_ValetParking_Button; /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM_RemotestartBetrieb;   /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM1_HSKButton;           /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM1_RearBlindButton;     /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM1_ReversingLightSchalter;/* '<S100>/Read CAN Message1' */
  uint32_T rxBCM1_MHSchalter;          /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM1_MHWIV_Schalter;      /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM_EcoCharisma_Taste;    /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM_Thermomanagement;     /* '<S100>/Read CAN Message1' */
  uint32_T rxBCM_ThermomanagementError;/* '<S100>/Read CAN Message1' */
  uint32_T rxBCM_ThermomanagementValid;/* '<S100>/Read CAN Message1' */
  uint32_T rxBCM1_LichtwarnTexte;      /* '<S100>/Read CAN Message1' */
  uint32_T ReadCANMessage_o2_l;        /* '<S105>/Read CAN Message' */
  uint32_T rxBCM_01Alt;                /* '<S105>/Read CAN Message' */
  uint32_T rxSMLS_01Alt;               /* '<S105>/Read CAN Message' */
  uint32_T rxZV_02Alt;                 /* '<S105>/Read CAN Message' */
  uint32_T rxWischer_01Alt;            /* '<S105>/Read CAN Message' */
  uint32_T rxAnhaenger_01Alt;          /* '<S105>/Read CAN Message' */
  uint32_T rxKlima_Sensor02_alt;       /* '<S105>/Read CAN Message' */
  uint32_T rxVSG_01Alt;                /* '<S105>/Read CAN Message' */
  uint32_T rxKlima_01Alt;              /* '<S105>/Read CAN Message' */
  uint32_T rxWFS_01Alt;                /* '<S105>/Read CAN Message' */
  uint32_T rxLicht_Anf01_alt;          /* '<S105>/Read CAN Message' */
  uint32_T rxZV_HFSOffen;              /* '<S105>/Read CAN Message' */
  uint32_T rxZV_HBFSOffen;             /* '<S105>/Read CAN Message' */
  uint32_T rxVS_VDOffen_ver;           /* '<S105>/Read CAN Message' */
  uint32_T rxVS_VDZu_ver;              /* '<S105>/Read CAN Message' */
  uint32_T rxZV_BTOffen;               /* '<S105>/Read CAN Message' */
  uint32_T rxBCM1_ReversingLightSwitch;/* '<S105>/Read CAN Message' */
  uint32_T rxZV_FTOffen;               /* '<S105>/Read CAN Message' */
  uint32_T rxWiper_FrontActive;        /* '<S105>/Read CAN Message' */
  uint32_T rxAAG_FollowersRecognized;  /* '<S105>/Read CAN Message' */
  uint32_T rxBCM1_MHSchalter_j;        /* '<S105>/Read CAN Message' */
  uint32_T rxZV_HDOffen;               /* '<S105>/Read CAN Message' */
  uint32_T rxWash_frontActive;         /* '<S105>/Read CAN Message' */
  uint32_T rxKL_Thermomanagement;      /* '<S105>/Read CAN Message' */
  uint32_T rxWFS_DrivingAuthorization_Key;/* '<S105>/Read CAN Message' */
  uint32_T rxBCM1_RFahrlichtFzg_Anf;   /* '<S105>/Read CAN Message' */
  uint32_T rxBCM1_RFahrlichtAhg_Anf;   /* '<S105>/Read CAN Message' */
  uint32_T rxBCM1_OBDFStatus_ATemp;    /* '<S105>/Read CAN Message' */
  uint32_T rxBCM1_OutsideTemp_Approximate;/* '<S105>/Read CAN Message' */
  uint32_T ReadCANMessage_o2_ic;       /* '<S110>/Read CAN Message' */
  uint32_T LWI_CHECKSUM;               /* '<S110>/Read CAN Message' */
  uint32_T LWI_COUNTER;                /* '<S110>/Read CAN Message' */
  uint32_T LWI_LWISensorstatus;        /* '<S110>/Read CAN Message' */
  uint32_T LWI_LWIQBit_Sub_Daten;      /* '<S110>/Read CAN Message' */
  uint32_T LWI_LWISub_Daten;           /* '<S110>/Read CAN Message' */
  uint32_T TmpRTBAtRelational_chcxwz4uqitp;/* '<S96>/Delay1' */
  uint32_T ReadCANMessage1_o2_i;       /* '<S109>/Read CAN Message1' */
  uint32_T rxKBI_Kilometerstand;       /* '<S109>/Read CAN Message1' */
  uint32_T rxKBI_Standzeit02;          /* '<S109>/Read CAN Message1' */
  uint32_T rxKBI_FStatusTank;          /* '<S109>/Read CAN Message1' */
  uint32_T rxKBI_QBitAussen_Temp_gef;  /* '<S109>/Read CAN Message1' */
  uint32_T rxKBI_AussenTemp_gef;       /* '<S109>/Read CAN Message1' */
  uint32_T ReadCANMessage_o2_ke;       /* '<S114>/Read CAN Message' */
  uint32_T rxCHECKSUM;                 /* '<S114>/Read CAN Message' */
  uint32_T rxCOUNTER;                  /* '<S114>/Read CAN Message' */
  uint32_T rxMO_QBitAcceleratorPedalValue_;/* '<S114>/Read CAN Message' */
  uint32_T rxMO_AcceleratorPedalGradient;/* '<S114>/Read CAN Message' */
  uint32_T rxMO_SigAcceleratorPedalGradien;/* '<S114>/Read CAN Message' */
  uint32_T rxMO_relManifoldPressure;   /* '<S114>/Read CAN Message' */
  uint32_T rxMO_relManifoldPressure_gem_er;/* '<S114>/Read CAN Message' */
  uint32_T rxMO_MomentIm_Neutral;      /* '<S114>/Read CAN Message' */
  uint32_T rxMO_FuelCutOff;            /* '<S114>/Read CAN Message' */
  uint32_T rxMO_TargetSpeed_Idle;      /* '<S114>/Read CAN Message' */
  uint32_T ReadCANMessage4_o2;         /* '<S18>/Read CAN Message4' */
  uint32_T ReadCANMessage3_o2_f;       /* '<S19>/Read CAN Message3' */
  uint32_T ReadCANMessage2_o2_g;       /* '<S20>/Read CAN Message2' */
  uint32_T ReadCANMessage5_o2;         /* '<S22>/Read CAN Message5' */
  uint32_T rxParallel_Group1;          /* '<S22>/Read CAN Message5' */
  uint32_T rxParallel_Group2;          /* '<S22>/Read CAN Message5' */
  uint32_T rxParallel_Group3;          /* '<S22>/Read CAN Message5' */
  uint32_T rxParallel_Group4;          /* '<S22>/Read CAN Message5' */
  uint32_T ReadCANMessage_o2_n;        /* '<S104>/Read CAN Message' */
  uint32_T rxCHECKSUM_o;               /* '<S104>/Read CAN Message' */
  uint32_T rxCOUNTER_k;                /* '<S104>/Read CAN Message' */
  uint32_T rxESP_QBitBrakePressure;    /* '<S104>/Read CAN Message' */
  uint32_T rxESP_QBitDriver_Brake;     /* '<S104>/Read CAN Message' */
  uint32_T rxESP_NegativePressure_Threshol;/* '<S104>/Read CAN Message' */
  uint32_T rxESP_DriverBrake;          /* '<S104>/Read CAN Message' */
  uint32_T rxESP_VerzTSK_aktiv;        /* '<S104>/Read CAN Message' */
  uint32_T rxESP_SteeringInterventionADS;/* '<S104>/Read CAN Message' */
  uint32_T rxESP_ConsistencyTSK;       /* '<S104>/Read CAN Message' */
  uint32_T rxESP_BrakePressureAWV2;    /* '<S104>/Read CAN Message' */
  uint32_T rxESP_ConsistencyAWV2;      /* '<S104>/Read CAN Message' */
  uint32_T rxECD_Error;                /* '<S104>/Read CAN Message' */
  uint32_T rxECD_notAvailable;         /* '<S104>/Read CAN Message' */
  uint32_T rxESP_StatusBrakeTemp;      /* '<S104>/Read CAN Message' */
  uint32_T rxESP_AutoholdStandby;      /* '<S104>/Read CAN Message' */
  uint32_T rxESP_HDCStandby;           /* '<S104>/Read CAN Message' */
  uint32_T rxESP_HBAAktiv;             /* '<S104>/Read CAN Message' */
  uint32_T rxESP_PrefillTriggered;     /* '<S104>/Read CAN Message' */
  uint32_T rxESP_ReverseTravelRecognized;/* '<S104>/Read CAN Message' */
  uint32_T rxESP_StatusTractionHelp;   /* '<S104>/Read CAN Message' */
  uint32_T rxESP_HDCAktiv;             /* '<S104>/Read CAN Message' */
  uint32_T rxESP_StartStoppInfo;       /* '<S104>/Read CAN Message' */
  uint32_T rxESP_InterventionHL;       /* '<S104>/Read CAN Message' */
  uint32_T rxESP_InterventionHR;       /* '<S104>/Read CAN Message' */
  uint32_T rxESP_InterventionVL;       /* '<S104>/Read CAN Message' */
  uint32_T rxESP_InterventionVR;       /* '<S104>/Read CAN Message' */
  uint32_T rxESP_BKVVacuum;            /* '<S104>/Read CAN Message' */
  uint32_T rxESP_AutoholdAktiv;        /* '<S104>/Read CAN Message' */
  uint32_T rxESP_FStatusTractionHelp;  /* '<S104>/Read CAN Message' */
  uint32_T rxESP_VerzEPB_aktiv;        /* '<S104>/Read CAN Message' */
  uint32_T rxECD_BrakeLight;           /* '<S104>/Read CAN Message' */
  uint32_T rxESP_VerzoegEPB_verf;      /* '<S104>/Read CAN Message' */
  uint32_T rxESP_StatusBrakePressure;  /* '<S104>/Read CAN Message' */
  uint32_T rxESP_RequirementEPB;       /* '<S104>/Read CAN Message' */
  uint32_T ReadCANMessage_o2_ik;       /* '<S106>/Read CAN Message' */
  uint32_T rxESP_02CRC;                /* '<S106>/Read CAN Message' */
  uint32_T rxESP_02BZ;                 /* '<S106>/Read CAN Message' */
  uint32_T rxESP_QBitYawRate;          /* '<S106>/Read CAN Message' */
  uint32_T rxESP_QBitLongitudinalAccelerat;/* '<S106>/Read CAN Message' */
  uint32_T rxESP_QBitLateral;          /* '<S106>/Read CAN Message' */
  uint32_T rxESP_Standstillflag;       /* '<S106>/Read CAN Message' */
  uint32_T rxESP_LateralAcceleration;  /* '<S106>/Read CAN Message' */
  uint32_T rxESP_VerteilWankmom;       /* '<S106>/Read CAN Message' */
  uint32_T rxESP_QBitAnf_Vert_Wank;    /* '<S106>/Read CAN Message' */
  uint32_T rxESP_YawRate;              /* '<S106>/Read CAN Message' */
  uint32_T rxESP_VZYawRate;            /* '<S106>/Read CAN Message' */
  uint32_T rxESP_EmergencyBrakeIndicator;/* '<S106>/Read CAN Message' */
  uint32_T rxESP_StartVoltage;         /* '<S106>/Read CAN Message' */
  uint32_T rxESP_PLACancellation;      /* '<S106>/Read CAN Message' */
  uint32_T rxESP_StatusESP_PLA;        /* '<S106>/Read CAN Message' */
  uint32_T ReadCANMessage_o2_lq;       /* '<S107>/Read CAN Message' */
  uint32_T rxCHECKSUM_e;               /* '<S107>/Read CAN Message' */
  uint32_T rxCOUNTERXX;                /* '<S107>/Read CAN Message' */
  uint32_T rxGE_MMomSoll_02;           /* '<S107>/Read CAN Message' */
  uint32_T rxGE_MMomHold_02;           /* '<S107>/Read CAN Message' */
  uint32_T rxGE_Uefkt;                 /* '<S107>/Read CAN Message' */
  uint32_T rxGE_SpeedLevel;            /* '<S107>/Read CAN Message' */
  uint32_T rxGE_SwitchingProcess;      /* '<S107>/Read CAN Message' */
  uint32_T rxGE_StatusCoupling;        /* '<S107>/Read CAN Message' */
  uint32_T rxGE_MMomStatus;            /* '<S107>/Read CAN Message' */
  uint32_T rxGE_ReleasedMMom_Hold;     /* '<S107>/Read CAN Message' */
  uint32_T rxGE_BanFadingOut;          /* '<S107>/Read CAN Message' */
  uint32_T ReceiveCANMessage_o4;       /* '<S102>/Receive CAN Message' */
  uint32_T ReceiveCANMessage1_o4;      /* '<S102>/Receive CAN Message1' */
  real32_T TmpRTBAtSwitchInport1;      /* '<S448>/calibration' */
  real32_T TmpRTBAtORInport3;          /* '<S204>/Delay' */
  real32_T TmpRTBAtSwitch2Inport1;     /* '<S246>/Subsystem1' */
  real32_T TmpRTBAtProductInport2;     /* '<S261>/1-D Lookup Table' */
  real32_T rxGE_TargetWalk_m;          /* '<S107>/Read CAN Message' */
  real32_T TmpRTBAtProduct1Inport2;    /* '<S246>/1-D Lookup Table' */
  real32_T Set_Brake_PosOvrMsr_d;      /* '<S441>/ Override Probe' */
  real32_T BrakeCalibCMD;
  real32_T Set_GasOvrMsr_a;            /* '<S443>/ Override Probe' */
  real32_T Activate_ThrottleControllerOvrM;/* '<S443>/ Override Probe1' */
  real32_T GOLF_MotorRPM_m;
  real32_T GOLF_KL75_ox;
  real32_T GOLF_AcceleratorRawValur_j;
  real32_T GOLF_BrakePedalPos_j;
  real32_T Steering_Angle_o;
  real32_T GOLF_Fuel_d;
  real32_T GOLF_HighBeam_i;
  real32_T GOLF_HandBrakeStatus_g;
  real32_T TmpRTBAtSendCANMessage3Inport1;/* '<S445>/VehicleSpeed' */
  real32_T TmpRTBAtSendCANMessage3Inport2;/* '<S445>/Steering Map reverse' */
  real32_T debug_Gatesetsteer_j;
  real32_T debug_GateTorquelimit_e;
  uint8_T ReceiveCANMessage_o5;        /* '<S102>/Receive CAN Message' */
  uint8_T ReceiveCANMessage_o6[8];     /* '<S102>/Receive CAN Message' */
  uint8_T ReceiveCANMessage1_o5;       /* '<S102>/Receive CAN Message1' */
  uint8_T ReceiveCANMessage1_o6[8];    /* '<S102>/Receive CAN Message1' */
  uint8_T Brake_ResetOvrMsr_c;         /* '<S441>/ Override Probe1' */
  uint8_T GOLF_CurrentGear_c;
  boolean_T TmpRTBAtSwitchInport2;     /* '<S448>/override' */
  boolean_T ReadCANMessage_o1;         /* '<S170>/Read CAN Message' */
  boolean_T ReadCANMessage_o1_l;       /* '<S115>/Read CAN Message' */
  boolean_T ReadCANMessage_o1_n;       /* '<S112>/Read CAN Message' */
  boolean_T ReadCANMessage_o1_o;       /* '<S113>/Read CAN Message' */
  boolean_T ReadCANMessage_o1_os;      /* '<S17>/Read CAN Message' */
  boolean_T ReadCANMessage1_o1;        /* '<S21>/Read CAN Message1' */
  boolean_T ReadCANMessage_o1_p;       /* '<S16>/Read CAN Message' */
  boolean_T ReadCANMessage3_o1;        /* '<S77>/Read CAN Message3' */
  boolean_T ReadCANMessage3_o1_f;      /* '<S55>/Read CAN Message3' */
  boolean_T ReadCANMessage2_o1;        /* '<S53>/Read CAN Message2' */
  boolean_T ReadCANMessage3_o1_fl;     /* '<S54>/Read CAN Message3' */
  boolean_T ReadCANMessage2_o1_j;      /* '<S75>/Read CAN Message2' */
  boolean_T ReadCANMessage3_o1_p;      /* '<S76>/Read CAN Message3' */
  boolean_T ReadCANMessage_o1_la;      /* '<S172>/Read CAN Message' */
  boolean_T ReadCANMessage_o1_j;       /* '<S169>/Read CAN Message' */
  boolean_T ReadCANMessage_o1_l1;      /* '<S171>/Read CAN Message' */
  boolean_T ReadCANMessage_o1_jy;      /* '<S103>/Read CAN Message' */
  boolean_T ReadCANMessage_o1_k;       /* '<S116>/Read CAN Message' */
  boolean_T ReadCANMessage_o1_f;       /* '<S108>/Read CAN Message' */
  boolean_T ReadCANMessage_o1_oj;      /* '<S111>/Read CAN Message' */
  boolean_T ReadCANMessage_o1_m;       /* '<S101>/Read CAN Message' */
  boolean_T ReadCANMessage1_o1_h;      /* '<S100>/Read CAN Message1' */
  boolean_T rxBCM1_WarnblinkButton;    /* '<S100>/Read CAN Message1' */
  boolean_T ReadCANMessage_o1_fa;      /* '<S105>/Read CAN Message' */
  boolean_T ReadCANMessage_o1_kz;      /* '<S110>/Read CAN Message' */
  boolean_T ReadCANMessage1_o1_d;      /* '<S109>/Read CAN Message1' */
  boolean_T ReadCANMessage_o1_or;      /* '<S114>/Read CAN Message' */
  boolean_T ReadCANMessage4_o1;        /* '<S18>/Read CAN Message4' */
  boolean_T ReadCANMessage3_o1_l;      /* '<S19>/Read CAN Message3' */
  boolean_T ReadCANMessage2_o1_a;      /* '<S20>/Read CAN Message2' */
  boolean_T ReadCANMessage5_o1;        /* '<S22>/Read CAN Message5' */
  boolean_T ReadCANMessage_o1_b;       /* '<S104>/Read CAN Message' */
  boolean_T ReadCANMessage_o1_o5;      /* '<S106>/Read CAN Message' */
  boolean_T ReadCANMessage_o1_e;       /* '<S107>/Read CAN Message' */
  boolean_T ReceiveCANMessage_o1;      /* '<S102>/Receive CAN Message' */
  boolean_T ReceiveCANMessage_o2;      /* '<S102>/Receive CAN Message' */
  boolean_T ReceiveCANMessage_o3;      /* '<S102>/Receive CAN Message' */
  boolean_T ReceiveCANMessage1_o1;     /* '<S102>/Receive CAN Message1' */
  boolean_T ReceiveCANMessage1_o2;     /* '<S102>/Receive CAN Message1' */
  boolean_T ReceiveCANMessage1_o3;     /* '<S102>/Receive CAN Message1' */
  boolean_T EPAS_DriverIntervention_overrid;
  boolean_T BBW_DriverIntervention_c;
  boolean_T GasPedalintervention;
  boolean_T mode;
  boolean_T isMotorRunning;
  boolean_T Kl75;
  boolean_T PDS_HeartbeatErr;
  boolean_T PDS_BUSErr;
  boolean_T BywirePowerErr;
  boolean_T EPASPowerErr;
  boolean_T BrakePowerErr;
  boolean_T Throttle_ECU_HeartbeatErr;
  boolean_T EPAS_SystemErr_g;
  boolean_T EPAS_HeartbeatErr_m;
  boolean_T Brake_SystemErr_n;
  boolean_T Brake_HeartBeatErr_d;
  boolean_T PC_HeartBeatErr;
  boolean_T mode_a;
  boolean_T UnitDelay_n;               /* '<S462>/Unit Delay' */
  boolean_T SwitchInput_ReadKeyOn;     /* '<S418>/SwitchInput_ReadKeyOn' */
  boolean_T LogicAND1;                 /* '<S419>/LogicAND1' */
  boolean_T LogicalOperator_k;         /* '<S440>/Logical Operator' */
  boolean_T Parktrigger;               /* '<S229>/Chart' */
} B;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  e_dsp_private_SlidingWindowAver gobj_0;/* '<S249>/Moving Average1' */
  e_dsp_private_SlidingWindowAver gobj_1;/* '<S249>/Moving Average1' */
  e_dsp_private_SlidingWindowAver gobj_0_a;/* '<S249>/Moving Average2' */
  e_dsp_private_SlidingWindowAver gobj_1_c;/* '<S249>/Moving Average2' */
  dsp_simulink_MovingAverage obj;      /* '<S249>/Moving Average1' */
  dsp_simulink_MovingAverage obj_k;    /* '<S249>/Moving Average2' */
  real_T Integrator_DSTATE;            /* '<S338>/Integrator' */
  real_T UD_DSTATE;                    /* '<S333>/UD' */
  real_T UnitDelay_DSTATE;             /* '<S438>/Unit Delay' */
  real_T UnitDelay_DSTATE_h;           /* '<S434>/Unit Delay' */
  real_T UnitDelay_DSTATE_i;           /* '<S436>/Unit Delay' */
  real_T TmpRTBAtSwitch1Inport3_Buffer0;/* synthesized block */
  real_T TmpRTBAtSendCANMessage2Inport2_;/* synthesized block */
  real_T TmpRTBAtSubtract1Outport1_Buffe;/* synthesized block */
  real_T repeat_h;                     /* '<S464>/Chart' */
  real32_T UnitDelay_DSTATE_l;         /* '<S263>/Unit Delay' */
  real32_T Integrator_DSTATE_c;        /* '<S293>/Integrator' */
  real32_T Integrator_DSTATE_n;        /* '<S383>/Integrator' */
  real32_T UD_DSTATE_p;                /* '<S378>/UD' */
  real32_T Delay_DSTATE[7];            /* '<S107>/Delay' */
  real32_T Delay_DSTATE_m[10];         /* '<S204>/Delay' */
  uint32_T Delay1_DSTATE[2];           /* '<S23>/Delay1' */
  uint32_T Delay1_DSTATE_p[2];         /* '<S48>/Delay1' */
  uint32_T Delay1_DSTATE_h[2];         /* '<S56>/Delay1' */
  uint32_T Delay1_DSTATE_f[2];         /* '<S59>/Delay1' */
  uint32_T Delay1_DSTATE_pa[2];        /* '<S66>/Delay1' */
  uint32_T Delay1_DSTATE_e[2];         /* '<S78>/Delay1' */
  uint32_T Delay1_DSTATE_j[2];         /* '<S81>/Delay1' */
  uint32_T Delay1_DSTATE_n[2];         /* '<S89>/Delay1' */
  uint32_T Delay1_DSTATE_m[2];         /* '<S96>/Delay1' */
  uint32_T Delay2_DSTATE[6];           /* '<S173>/Delay2' */
  uint32_T Delay1_DSTATE_nc[2];        /* '<S173>/Delay1' */
  uint32_T Delay1_DSTATE_l[2];         /* '<S179>/Delay1' */
  uint32_T Delay1_DSTATE_pg[2];        /* '<S182>/Delay1' */
  uint32_T Delay1_DSTATE_p4[2];        /* '<S185>/Delay1' */
  real32_T TmpRTBAtSwitchInport1_Buffer0;/* synthesized block */
  real32_T TmpRTBAtORInport3_Buffer0;  /* synthesized block */
  real32_T TmpRTBAtSwitch2Inport1_Buffer0;/* synthesized block */
  real32_T TmpRTBAtProductInport2_Buffer0;/* synthesized block */
  real32_T Brake_CalibCMDOvrMsr_Buffer;/* synthesized block */
  real32_T Set_Brake_PosOvrMsr_Buffer; /* synthesized block */
  real32_T Activate_ThrottleControllerOvrM;/* synthesized block */
  real32_T Set_GasOvrMsr_Buffer;       /* synthesized block */
  real32_T Brake_pedalPos_Buffer;      /* synthesized block */
  real32_T Steering_Angle_Buffer;      /* synthesized block */
  real32_T TmpRTBAtSendCANMessage3Inport1_;/* synthesized block */
  real32_T TmpRTBAtSendCANMessage3Inport2_;/* synthesized block */
  real32_T rxBH_HighBeam_Buffer;       /* synthesized block */
  real32_T rxEPB_Status_Buffer;        /* synthesized block */
  real32_T rxKBI_InhaltTank_Buffer;    /* synthesized block */
  real32_T rxMO_AcceleratorRawValue01_Buff;/* synthesized block */
  real32_T rxMO_Kl75_Buffer;           /* synthesized block */
  real32_T rxMO_RotationSpeed01_Buffer;/* synthesized block */
  real32_T debug_GateTorquelimit_Buffer;/* synthesized block */
  real32_T debug_Gatesetsteer_Buffer;  /* synthesized block */
  real32_T rxGE_TargetWalk_Buffer;     /* synthesized block */
  real32_T rxMO_Kl75_Buffer_n;         /* synthesized block */
  real32_T TmpRTBAtProduct1Inport2_Buffer0;/* synthesized block */
  real32_T TmpRTBAtSubtract1Outport1_Buf_j;/* synthesized block */
  uint32_T ReadCANMessage_DWORK1;      /* '<S170>/Read CAN Message' */
  uint32_T ReadCANMessage_DWORK1_o;    /* '<S115>/Read CAN Message' */
  uint32_T ReadCANMessage_DWORK1_j;    /* '<S112>/Read CAN Message' */
  uint32_T ReadCANMessage_DWORK1_i;    /* '<S113>/Read CAN Message' */
  uint32_T ReadCANMessage_DWORK1_p;    /* '<S17>/Read CAN Message' */
  uint32_T TmpRTBAtRelationalOperatorInpor;/* synthesized block */
  uint32_T ReadCANMessage1_DWORK1;     /* '<S21>/Read CAN Message1' */
  uint32_T TmpRTBAtRelationalOperatorInp_j;/* synthesized block */
  uint32_T ReadCANMessage_DWORK1_c;    /* '<S16>/Read CAN Message' */
  uint32_T ReadCANMessage3_DWORK1;     /* '<S77>/Read CAN Message3' */
  uint32_T ReadCANMessage3_DWORK1_g;   /* '<S55>/Read CAN Message3' */
  uint32_T ReadCANMessage2_DWORK1;     /* '<S53>/Read CAN Message2' */
  uint32_T TmpRTBAtRelationalOperatorIn_js;/* synthesized block */
  uint32_T ReadCANMessage3_DWORK1_h;   /* '<S54>/Read CAN Message3' */
  uint32_T TmpRTBAtRelationalOperatorI_jsf;/* synthesized block */
  uint32_T TmpRTBAtRelationalOperator_jsfr;/* synthesized block */
  uint32_T ReadCANMessage2_DWORK1_n;   /* '<S75>/Read CAN Message2' */
  uint32_T TmpRTBAtRelationalOperato_jsfrz;/* synthesized block */
  uint32_T ReadCANMessage3_DWORK1_k;   /* '<S76>/Read CAN Message3' */
  uint32_T TmpRTBAtRelationalOperat_jsfrzw;/* synthesized block */
  uint32_T TmpRTBAtRelationalOpera_jsfrzwg;/* synthesized block */
  uint32_T ReadCANMessage_DWORK1_jj;   /* '<S172>/Read CAN Message' */
  uint32_T TmpRTBAtRelationalOper_jsfrzwgr;/* synthesized block */
  uint32_T ReadCANMessage_DWORK1_io;   /* '<S169>/Read CAN Message' */
  uint32_T TmpRTBAtRelationalOpe_jsfrzwgrs;/* synthesized block */
  uint32_T TmpRTBAtRelationalOp_jsfrzwgrs5;/* synthesized block */
  uint32_T ReadCANMessage_DWORK1_g;    /* '<S171>/Read CAN Message' */
  uint32_T TmpRTBAtRelationalO_jsfrzwgrs54;/* synthesized block */
  uint32_T ReadCANMessage_DWORK1_cq;   /* '<S103>/Read CAN Message' */
  uint32_T ReadCANMessage_DWORK1_go;   /* '<S116>/Read CAN Message' */
  uint32_T ReadCANMessage_DWORK1_jr;   /* '<S108>/Read CAN Message' */
  uint32_T ReadCANMessage_DWORK1_k;    /* '<S111>/Read CAN Message' */
  uint32_T ReadCANMessage_DWORK1_e;    /* '<S101>/Read CAN Message' */
  uint32_T ReadCANMessage1_DWORK1_j;   /* '<S100>/Read CAN Message1' */
  uint32_T ReadCANMessage_DWORK1_b;    /* '<S105>/Read CAN Message' */
  uint32_T ReadCANMessage_DWORK1_cy;   /* '<S110>/Read CAN Message' */
  uint32_T TmpRTBAtRelational_jsfrzwgrs54s;/* synthesized block */
  uint32_T ReadCANMessage1_DWORK1_o;   /* '<S109>/Read CAN Message1' */
  uint32_T ReadCANMessage_DWORK1_ie;   /* '<S114>/Read CAN Message' */
  uint32_T Cnt1_Buffer;                /* synthesized block */
  uint32_T ReadCANMessage4_DWORK1;     /* '<S18>/Read CAN Message4' */
  uint32_T ReadCANMessage3_DWORK1_c;   /* '<S19>/Read CAN Message3' */
  uint32_T ReadCANMessage2_DWORK1_e;   /* '<S20>/Read CAN Message2' */
  uint32_T Cnt1_Buffer_p;              /* synthesized block */
  uint32_T ReadCANMessage5_DWORK1;     /* '<S22>/Read CAN Message5' */
  uint32_T Cnt1_Buffer_py;             /* synthesized block */
  uint32_T Cnt1_Buffer_py0;            /* synthesized block */
  uint32_T Cnt1_Buffer_py0c;           /* synthesized block */
  uint32_T Cnt1_Buffer_py0cy;          /* synthesized block */
  uint32_T Cnt1_Buffer_py0cyt;         /* synthesized block */
  uint32_T Cnt1_Buffer_py0cytz;        /* synthesized block */
  uint32_T Cnt1_Buffer_py0cytzh;       /* synthesized block */
  uint32_T ReadCANMessage_DWORK1_es;   /* '<S104>/Read CAN Message' */
  uint32_T ReadCANMessage_DWORK1_od;   /* '<S106>/Read CAN Message' */
  uint32_T ReadCANMessage_DWORK1_m;    /* '<S107>/Read CAN Message' */
  uint32_T PC_FrontwheelMsg_cnt_Buffer;/* synthesized block */
  uint32_T PC_FrontwheelMsg_cnt1_Buffer;/* synthesized block */
  uint32_T PC_FrontwheelMsg_cnt2_Buffer;/* synthesized block */
  uint32_T Cnt1_Buffer_py0cytzhx;      /* synthesized block */
  uint32_T Cnt1_Buffer_py0cytzhx4;     /* synthesized block */
  uint32_T Cnt1_Buffer_py0cytzhx4s;    /* synthesized block */
  uint32_T CircBufIdx;                 /* '<S107>/Delay' */
  uint32_T temporalCounter_i1;         /* '<S464>/Chart' */
  uint32_T PowerOffManagement_PREV_T;  /* '<S4>/Power Off Management' */
  uint32_T KeyCycle_PREV_T;            /* '<S416>/KeyCycle' */
  uint32_T temporalCounter_i1_n;       /* '<S229>/Chart1' */
  uint16_T temporalCounter_i1_j;       /* '<S442>/Chart' */
  uint16_T temporalCounter_i1_i;       /* '<S199>/Chart' */
  boolean_T UnitDelay_DSTATE_g;        /* '<S462>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_a;        /* '<S469>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_ls;       /* '<S468>/Unit Delay' */
  boolean_T UnitDelay7_DSTATE;         /* '<S416>/Unit Delay7' */
  boolean_T UnitDelay_DSTATE_c;        /* '<S425>/Unit Delay' */
  boolean_T UnitDelay1_DSTATE;         /* '<S425>/Unit Delay1' */
  boolean_T UnitDelay1_DSTATE_n;       /* '<S416>/Unit Delay1' */
  boolean_T UnitDelay3_DSTATE;         /* '<S416>/Unit Delay3' */
  boolean_T UnitDelay4_DSTATE;         /* '<S416>/Unit Delay4' */
  boolean_T UnitDelay2_DSTATE;         /* '<S416>/Unit Delay2' */
  boolean_T UnitDelay5_DSTATE;         /* '<S416>/Unit Delay5' */
  boolean_T UnitDelay6_DSTATE;         /* '<S416>/Unit Delay6' */
  boolean_T UnitDelay_DSTATE_j;        /* '<S432>/Unit Delay' */
  boolean_T UnitDelay1_DSTATE_nv;      /* '<S432>/Unit Delay1' */
  boolean_T UnitDelay_DSTATE_jx;       /* '<S433>/Unit Delay' */
  boolean_T UnitDelay1_DSTATE_f;       /* '<S433>/Unit Delay1' */
  boolean_T UnitDelay1_DSTATE_g;       /* '<S430>/Unit Delay1' */
  boolean_T UnitDelay_DSTATE_ij;       /* '<S429>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_b;        /* '<S428>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_ix;       /* '<S415>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_o;        /* '<S414>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_f;        /* '<S409>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_n;        /* '<S408>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_f4;       /* '<S407>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_o2;       /* '<S117>/Unit Delay' */
  int8_T Integrator_PrevResetState;    /* '<S293>/Integrator' */
  int8_T Integrator_PrevResetState_n;  /* '<S338>/Integrator' */
  int8_T Integrator_PrevResetState_f;  /* '<S383>/Integrator' */
  uint8_T Brake_ResetOvrMsr_Buffer;    /* synthesized block */
  uint8_T NoIdea1_Buffer;              /* synthesized block */
  uint8_T is_active_c4_Ecotron;        /* '<S445>/Chart' */
  uint8_T is_c4_Ecotron;               /* '<S445>/Chart' */
  uint8_T is_active_c14_Ecotron;       /* '<S464>/Chart' */
  uint8_T is_c14_Ecotron;              /* '<S464>/Chart' */
  uint8_T is_FallingBuzz;              /* '<S464>/Chart' */
  uint8_T is_active_c9_Ecotron;        /* '<S442>/Chart' */
  uint8_T is_c9_Ecotron;               /* '<S442>/Chart' */
  uint8_T is_HazardON;                 /* '<S442>/Chart' */
  uint8_T is_HazardOFF;                /* '<S442>/Chart' */
  uint8_T is_active_c11_Ecotron;       /* '<S199>/Chart' */
  uint8_T is_c11_Ecotron;              /* '<S199>/Chart' */
  uint8_T is_Startup;                  /* '<S199>/Chart' */
  uint8_T is_Shutdown;                 /* '<S199>/Chart' */
  uint8_T is_active_c6_Ecotron;        /* '<S198>/Chart' */
  uint8_T is_c6_Ecotron;               /* '<S198>/Chart' */
  uint8_T is_active_c5_Ecotron;        /* '<S245>/Chart' */
  uint8_T is_c5_Ecotron;               /* '<S245>/Chart' */
  uint8_T is_active_c8_Ecotron;        /* '<S247>/Chart1' */
  uint8_T is_c8_Ecotron;               /* '<S247>/Chart1' */
  uint8_T is_active_c12_Ecotron;       /* '<S196>/Chart' */
  uint8_T is_c12_Ecotron;              /* '<S196>/Chart' */
  uint8_T is_Otonom;                   /* '<S196>/Chart' */
  uint8_T temporalCounter_i1_k;        /* '<S196>/Chart' */
  uint8_T is_active_c2_Ecotron;        /* '<S195>/Chart' */
  uint8_T is_c2_Ecotron;               /* '<S195>/Chart' */
  uint8_T is_Otonom_f;                 /* '<S195>/Chart' */
  uint8_T temporalCounter_i1_jd;       /* '<S195>/Chart' */
  uint8_T is_active_c1_Ecotron;        /* '<S229>/Chart1' */
  uint8_T is_c1_Ecotron;               /* '<S229>/Chart1' */
  uint8_T is_active_c7_Ecotron;        /* '<S229>/Chart' */
  uint8_T is_c7_Ecotron;               /* '<S229>/Chart' */
  uint8_T temporalCounter_i1_j3;       /* '<S229>/Chart' */
  boolean_T Task_Call_DWORK0;          /* '<S4>/Task_Call' */
  boolean_T TmpRTBAtSwitchInport2_Buffer0;/* synthesized block */
  boolean_T BrakePowerErr_Buffer;      /* synthesized block */
  boolean_T Brake_HeartBeatErr_Buffer; /* synthesized block */
  boolean_T Brake_SystemErr_Buffer;    /* synthesized block */
  boolean_T BywirePowerErr_Buffer;     /* synthesized block */
  boolean_T EPASPowerErr_Buffer;       /* synthesized block */
  boolean_T EPAS_DriverIntervention_overrid;/* synthesized block */
  boolean_T EPAS_HeartbeatErr_Buffer;  /* synthesized block */
  boolean_T EPAS_SystemErr_Buffer;     /* synthesized block */
  boolean_T GasPedalintervention_Buffer;/* synthesized block */
  boolean_T Kl75_Buffer;               /* synthesized block */
  boolean_T PC_timeout_Buffer;         /* synthesized block */
  boolean_T PDS_BUSErr_Buffer;         /* synthesized block */
  boolean_T PDS_HeartbeatErr_Buffer;   /* synthesized block */
  boolean_T RBF_DriverIntervention_Buffer;/* synthesized block */
  boolean_T Throttle_ECU_HeartbeatErr_Buffe;/* synthesized block */
  boolean_T autonomy_Enable_Buffer;    /* synthesized block */
  boolean_T isMotorRunning_Buffer;     /* synthesized block */
  boolean_T autonomy_Enable_Buffer_d;  /* synthesized block */
  boolean_T stopMode_Buffer;           /* synthesized block */
  boolean_T stopMode_Buffer_d;         /* synthesized block */
  boolean_T stopMode_Buffer_b;         /* synthesized block */
  boolean_T stopMode_Buffer_o;         /* synthesized block */
  boolean_T TaskTrigger_DWORK0;        /* '<S1>/Task Trigger' */
  boolean_T objisempty;                /* '<S249>/Moving Average1' */
  boolean_T objisempty_i;              /* '<S249>/Moving Average2' */
} DW;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState UD_Reset_ZCE;             /* '<S333>/UD' */
  ZCSigState UD_Reset_ZCE_b;           /* '<S378>/UD' */
  ZCSigState Subsystem_Trig_ZCE;       /* '<S446>/Subsystem' */
  ZCSigState Reverse3_Trig_ZCE;        /* '<S444>/Reverse3' */
  ZCSigState Reverse2_Trig_ZCE;        /* '<S444>/Reverse2' */
  ZCSigState Reverse1_Trig_ZCE;        /* '<S444>/Reverse1' */
  ZCSigState Reverse_Trig_ZCE;         /* '<S444>/Reverse' */
  ZCSigState StoreAllNVMData_Trig_ZCE; /* '<S416>/Store All NVM Data' */
  ZCSigState SoftwareReset_Trig_ZCE;   /* '<S416>/Software Reset' */
  ZCSigState ShutdownPower_Trig_ZCE;   /* '<S416>/Shutdown Power' */
  ZCSigState Subsystem7_Trig_ZCE;      /* '<S102>/Subsystem7' */
  ZCSigState Subsystem2_Trig_ZCE;      /* '<S102>/Subsystem2' */
  ZCSigState Subsystem_Trig_ZCE_l;     /* '<S100>/Subsystem' */
} PrevZCX;

/* Real-time Model Data Structure */
struct tag_RTM {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick1;
    struct {
      uint16_T TID[9];
      uint16_T cLimit[9];
    } TaskCounters;

    struct {
      uint16_T TID0_2;
      uint16_T TID0_5;
      uint16_T TID0_7;
    } RateInteraction;
  } Timing;
};

extern void flData2SigCnn1U();
extern void flData2SigCnn2U();
extern void flData2SigCnn3U();
extern void flData2SigCnn4U();
extern void flData2SigCnn5U();
extern void flData2SigCnn6U();
extern void flData2SigCnn7U();
extern void flData2SigCnn8U();
extern void flData2SigCnn9U();
extern void flData2SigCnn10U();
extern void flData2SigCnn11U();
extern void flData2SigCnn12U();
extern void flData2SigCnn13U();
extern void flData2SigCnn14U();
extern void flData2SigCnn15U();
extern void flData2SigCnn16U();
extern void flData2SigCnn17U();
extern void flData2SigCnn18U();
extern void flData2SigCnn19U();
extern void flData2SigCnn20U();
extern void flData2SigCnn21U();
extern void flData2SigCnn22U();
extern void flSig2DataCnn23U();
extern void flSig2DataCnn24U();
extern void flSig2DataCnn25U();
extern void flSig2DataCnn26U();
extern void flSig2DataCnn27U();
extern void flSig2DataCnn28U();
extern void flData2SigCnn29U();
extern void flData2SigCnn30U();
extern void flData2SigCnn31U();
extern void flData2SigCnn32U();
extern void flSig2DataCnn33U();
extern void flData2SigCnn34U();
extern void flData2SigCnn35U();
extern void flData2SigCnn36U();
extern void flData2SigCnn37U();
extern void flData2SigCnn38U();
extern void flData2SigCnn39U();
extern void flData2SigCnn40U();
extern void flSig2DataCnn43U();
extern void flSig2DataCnn44U();
extern void flSig2DataCnn45U();
extern void flSig2DataCnn46U();
extern void flSig2DataCnn47U();
extern void flSig2DataCnn48U();
extern void flSig2DataCnn49U();
extern void flSig2DataCnn50U();

/* Block signals (default storage) */
extern B B_n;

/* Block states (default storage) */
extern DW DW_l;

/* Model entry point functions */
void Ecotron_initialize(void);
void Ecotron_step(int_T tid);
extern uint32_T cntDrtSlt0x400_0_3_1U;
extern uint32_T cntDrtSlt0xB5_0_1_2U;
extern uint32_T cntDrtSlt0xA8_0_1_3U;
extern uint32_T cntDrtSlt0x3BE_0_1_4U;
extern uint32_T cntDrtSlt0x420_0_2_5U;
extern uint32_T cntDrtSlt0x43C_0_2_6U;
extern uint32_T cntDrtSlt0x475_0_2_7U;
extern uint32_T cntDrtSlt0x294_0_2_8U;
extern uint32_T cntDrtSlt0x312_0_2_9U;
extern uint32_T cntDrtSlt0x310_0_2_10U;
extern uint32_T cntDrtSlt0x311_0_2_11U;
extern uint32_T cntDrtSlt0x290_0_2_12U;
extern uint32_T cntDrtSlt0x292_0_2_13U;
extern uint32_T cntDrtSlt0x402_0_3_14U;
extern uint32_T cntDrtSlt0x403_0_3_15U;
extern uint32_T cntDrtSlt0x401_0_3_16U;
extern uint32_T cntDrtSlt0x104_0_1_17U;
extern uint32_T cntDrtSlt0xB2_0_1_18U;
extern uint32_T cntDrtSlt0x65F_0_1_19U;
extern uint32_T cntDrtSlt0xA7_0_1_20U;
extern uint32_T cntDrtSlt0x176_0_1_21U;
extern uint32_T cntDrtSlt0x65A_0_1_22U;
extern uint32_T cntDrtSlt0x3DB_0_1_29U;
extern uint32_T cntDrtSlt0x86_0_1_30U;
extern uint32_T cntDrtSlt0x6B7_0_1_31U;
extern uint32_T cntDrtSlt0x121_0_1_32U;
extern uint32_T cntDrtSlt0x42C_0_2_34U;
extern uint32_T cntDrtSlt0x428_0_2_35U;
extern uint32_T cntDrtSlt0x424_0_2_36U;
extern uint32_T cntDrtSlt0x421_0_2_37U;
extern uint32_T cntDrtSlt0x106_0_1_38U;
extern uint32_T cntDrtSlt0x101_0_1_39U;
extern uint32_T cntDrtSlt0xAD_0_1_40U;

/* Exported data declaration */
#define PUSH__RWP
#include "EcoSectionDef.h"

/* Declaration for custom storage class: Calibration */
extern __RWP const volatile real32_T Activate_ThrottleControllerOvrCal_val;/* Referenced by: '<S471>/calibration' */
extern __RWP const volatile boolean_T Activate_ThrottleControllerOvrEn_val;/* Referenced by: '<S471>/override' */
extern __RWP const volatile real32_T Brake_CalibCMDOvrCal_val;/* Referenced by: '<S399>/calibration' */
extern __RWP const volatile boolean_T Brake_CalibCMDOvrEn_val;/* Referenced by: '<S399>/override' */
extern __RWP const volatile real32_T Brake_ControlMode;
                                 /* Referenced by: '<S441>/Read Calibration1' */
extern __RWP const volatile real32_T Brake_PID_D;
                                 /* Referenced by: '<S255>/Read Calibration2' */
extern __RWP const volatile real32_T Brake_PID_I;
                                 /* Referenced by: '<S255>/Read Calibration1' */
extern __RWP const volatile real32_T Brake_PID_P;
                                  /* Referenced by: '<S255>/Read Calibration' */
extern __RWP const volatile uint8_T Brake_ResetOvrCal_val;/* Referenced by: '<S449>/calibration' */
extern __RWP const volatile boolean_T Brake_ResetOvrEn_val;/* Referenced by: '<S449>/override' */
extern __RWP const volatile uint8_T Brake_SetDuty;
                                /* Referenced by: '<S441>/Read Calibration19' */
extern __RWP const volatile boolean_T Button_Hazard_LightOvrCal_val;/* Referenced by: '<S450>/calibration' */
extern __RWP const volatile boolean_T Button_Hazard_LightOvrEn_val;/* Referenced by: '<S450>/override' */
extern __RWP const volatile boolean_T Button_Headlight_FlasherOvrCal_val;/* Referenced by: '<S454>/calibration' */
extern __RWP const volatile boolean_T Button_Headlight_FlasherOvrEn_val;/* Referenced by: '<S454>/override' */
extern __RWP const volatile boolean_T Button_HighBeamOvrCal_val;/* Referenced by: '<S453>/calibration' */
extern __RWP const volatile boolean_T Button_HighBeamOvrEn_val;/* Referenced by: '<S453>/override' */
extern __RWP const volatile boolean_T Button_Left_BlinkerOvrCal_val;/* Referenced by: '<S451>/calibration' */
extern __RWP const volatile boolean_T Button_Left_BlinkerOvrEn_val;/* Referenced by: '<S451>/override' */
extern __RWP const volatile boolean_T Button_Right_BlinkerOvrCal_val;/* Referenced by: '<S452>/calibration' */
extern __RWP const volatile boolean_T Button_Right_BlinkerOvrEn_val;/* Referenced by: '<S452>/override' */
extern __RWP const volatile boolean_T Buzz_controlOvrCal_val;/* Referenced by: '<S455>/calibration' */
extern __RWP const volatile boolean_T Buzz_controlOvrEn_val;/* Referenced by: '<S455>/override' */
extern __RWP const volatile real32_T Buzz_falling_duration;
                                 /* Referenced by: '<S464>/Read Calibration1' */
extern __RWP const volatile real32_T Buzz_falling_offduration;
                                 /* Referenced by: '<S464>/Read Calibration2' */
extern __RWP const volatile real32_T Buzz_rising_duration;
                                  /* Referenced by: '<S464>/Read Calibration' */
extern __RWP const volatile real32_T CANA_recover;
                                 /* Referenced by: '<Root>/Read Calibration9' */
extern __RWP const volatile real32_T CANB_recover;
                                /* Referenced by: '<Root>/Read Calibration10' */
extern __RWP const volatile real32_T CANC_recover;
                                /* Referenced by: '<Root>/Read Calibration11' */
extern __RWP const volatile real32_T Compensation_I;
                                 /* Referenced by: '<S246>/Read Calibration1' */
extern __RWP const volatile real32_T Compensation_P;
                                  /* Referenced by: '<S246>/Read Calibration' */
extern __RWP const volatile real32_T Delay;
                                /* Referenced by: '<S229>/Read Calibration19' */
extern __RWP const volatile boolean_T EPAS_DriverIntervention_overrideOvrCal_val;/* Referenced by: '<S88>/calibration' */
extern __RWP const volatile boolean_T EPAS_DriverIntervention_overrideOvrEn_val;/* Referenced by: '<S88>/override' */
extern __RWP const volatile real32_T EPAS_MaxSpeed;
                                  /* Referenced by: '<S195>/Read Calibration' */
extern __RWP const volatile real32_T EPAS_MaxTorque;
                                 /* Referenced by: '<S196>/Read Calibration1' */
extern __RWP const volatile real32_T SetACCOvrCal_val;/* Referenced by: '<S178>/calibration' */
extern __RWP const volatile boolean_T SetACCOvrEn_val;/* Referenced by: '<S178>/override' */
extern __RWP const volatile real32_T Set_Brake_PosOvrCal_val;/* Referenced by: '<S448>/calibration' */
extern __RWP const volatile boolean_T Set_Brake_PosOvrEn_val;/* Referenced by: '<S448>/override' */
extern __RWP const volatile real32_T Set_GasOvrCal_val;/* Referenced by: '<S470>/calibration' */
extern __RWP const volatile boolean_T Set_GasOvrEn_val;/* Referenced by: '<S470>/override' */
extern __RWP const volatile real32_T Set_GearEnableOvrCal_val;/* Referenced by: '<S227>/calibration' */
extern __RWP const volatile boolean_T Set_GearEnableOvrEn_val;/* Referenced by: '<S227>/override' */
extern __RWP const volatile uint8_T Set_GearOvrCal_val;/* Referenced by: '<S230>/calibration' */
extern __RWP const volatile boolean_T Set_GearOvrEn_val;/* Referenced by: '<S230>/override' */
extern __RWP const volatile real32_T Torque_PID_D;
                                 /* Referenced by: '<S254>/Read Calibration2' */
extern __RWP const volatile real32_T Torque_PID_I;
                                 /* Referenced by: '<S254>/Read Calibration1' */
extern __RWP const volatile real32_T Torque_PID_P;
                                  /* Referenced by: '<S254>/Read Calibration' */
extern __RWP const volatile boolean_T debug_PCheardbeatOvrCal_val;/* Referenced by: '<S403>/calibration' */
extern __RWP const volatile boolean_T debug_PCheardbeatOvrEn_val;/* Referenced by: '<S403>/override' */
extern __RWP const volatile boolean_T debug_otonomDisableOvrCal_val;/* Referenced by: '<S402>/calibration' */
extern __RWP const volatile boolean_T debug_otonomDisableOvrEn_val;/* Referenced by: '<S402>/override' */
extern __RWP const volatile boolean_T debug_otonomEnableOvrCal_val;/* Referenced by: '<S401>/calibration' */
extern __RWP const volatile boolean_T debug_otonomEnableOvrEn_val;/* Referenced by: '<S401>/override' */
extern __RWP const volatile real32_T interval;
                                /* Referenced by: '<S229>/Read Calibration17' */
extern __RWP const volatile real32_T interval2;
                                /* Referenced by: '<S229>/Read Calibration18' */
extern __RWP const volatile real32_T repeat;
                                /* Referenced by: '<S229>/Read Calibration16' */

#define POP__RWP
#include "EcoSectionDef.h"
#define PUSH__MP
#include "EcoSectionDef.h"

/* Declaration for custom storage class: Measurement */
extern __MP real32_T Activate_ThrottleControllerOvrMsr;/* '<S471>/Switch' */
extern __MP boolean_T BBW_AngleSensorConnection;/* '<S55>/Read CAN Message3' */
extern __MP real32_T BBW_BoxTemp;      /* '<S54>/Read CAN Message3' */
extern __MP real32_T BBW_BrakePos;     /* '<S53>/Read CAN Message2' */
extern __MP boolean_T BBW_CalibrationErr;/* '<S55>/Read CAN Message3' */
extern __MP boolean_T BBW_DriverIntervention;/* '<S55>/Read CAN Message3' */
extern __MP boolean_T BBW_ECUReset;    /* '<S55>/Read CAN Message3' */
extern __MP boolean_T BBW_MotorConnection;/* '<S55>/Read CAN Message3' */
extern __MP real32_T BBW_MotorCurrent; /* '<S54>/Read CAN Message3' */
extern __MP real32_T BBW_MotorDuty;    /* '<S54>/Read CAN Message3' */
extern __MP real32_T BBW_MotorVoltage; /* '<S54>/Read CAN Message3' */
extern __MP boolean_T BBW_OnCalibration;/* '<S55>/Read CAN Message3' */
extern __MP boolean_T BBW_OverCurrent; /* '<S55>/Read CAN Message3' */
extern __MP real32_T BBW_RawTorqueA;   /* '<S54>/Read CAN Message3' */
extern __MP real32_T BBW_RawTorqueB;   /* '<S54>/Read CAN Message3' */
extern __MP real32_T BBW_ReferenceBrakePos;/* '<S53>/Read CAN Message2' */
extern __MP boolean_T BBW_UnderVoltage;/* '<S55>/Read CAN Message3' */
extern __MP real32_T Brake_CalibCMDOvrMsr;/* '<S399>/Switch' */
extern __MP uint8_T Brake_ResetOvrMsr; /* '<S449>/Switch' */
extern __MP boolean_T Button_Hazard_LightOvrMsr;/* '<S450>/Switch' */
extern __MP boolean_T Button_Headlight_FlasherOvrMsr;/* '<S454>/Switch' */
extern __MP boolean_T Button_HighBeamOvrMsr;/* '<S453>/Switch' */
extern __MP boolean_T Button_Left_BlinkerOvrMsr;/* '<S451>/Switch' */
extern __MP boolean_T Button_Right_BlinkerOvrMsr;/* '<S452>/Switch' */
extern __MP boolean_T Buzz_controlOvrMsr;/* '<S455>/Switch' */
extern __MP boolean_T Diag_BrakePowerErr;/* '<S202>/OR7' */
extern __MP boolean_T Diag_By_wirePowerErr;/* '<S202>/OR1' */
extern __MP boolean_T Diag_EPASPowerErr;/* '<S202>/OR6' */
extern __MP boolean_T Diag_KL75;       /* '<S204>/OR' */
extern __MP boolean_T Diag_PDS_BUSErr; /* '<S206>/Compare' */
extern __MP boolean_T Diag_PDS_HeartbeatErr;/* '<S202>/OR' */
extern __MP boolean_T Diag_isMotorrunning;/* '<S204>/OR1' */
extern __MP real32_T EPAS_ActualSteeringPos;/* '<S75>/Read CAN Message2' */
extern __MP boolean_T EPAS_AngleSensorConnection;/* '<S77>/Read CAN Message3' */
extern __MP real32_T EPAS_BoxTemp;     /* '<S76>/Read CAN Message3' */
extern __MP boolean_T EPAS_DriverIntervention;/* '<S77>/Read CAN Message3' */
extern __MP boolean_T EPAS_DriverIntervention_overrideOvrMsr;/* '<S88>/Switch' */
extern __MP boolean_T EPAS_ECUReset;   /* '<S77>/Read CAN Message3' */
extern __MP boolean_T EPAS_MotorConnection;/* '<S77>/Read CAN Message3' */
extern __MP real32_T EPAS_MotorCurrent;/* '<S76>/Read CAN Message3' */
extern __MP real32_T EPAS_MotorDuty;   /* '<S76>/Read CAN Message3' */
extern __MP real32_T EPAS_MotorVoltage;/* '<S76>/Read CAN Message3' */
extern __MP boolean_T EPAS_OverCurrent;/* '<S77>/Read CAN Message3' */
extern __MP real32_T EPAS_RefSteerPos; /* '<S75>/Read CAN Message2' */
extern __MP real32_T EPAS_TorqueA;     /* '<S76>/Read CAN Message3' */
extern __MP real32_T EPAS_TorqueB;     /* '<S76>/Read CAN Message3' */
extern __MP boolean_T EPAS_UnderVoltage;/* '<S77>/Read CAN Message3' */
extern __MP real32_T GOLF_AcceleratorRawValur;/* '<S114>/Read CAN Message' */
extern __MP real32_T GOLF_BLWheelSpeed;/* '<S116>/Read CAN Message' */
extern __MP real32_T GOLF_BRWheelSpeed;/* '<S116>/Read CAN Message' */
extern __MP real32_T GOLF_BlinkerLeft; /* '<S105>/Read CAN Message' */
extern __MP real32_T GOLF_BlinkerRight;/* '<S105>/Read CAN Message' */
extern __MP real32_T GOLF_BrakePedalPos;/* '<S101>/Read CAN Message' */
extern __MP uint8_T GOLF_CurrentGear;  /* '<S115>/Read CAN Message' */
extern __MP real32_T GOLF_FLWheelSpeed;/* '<S116>/Read CAN Message' */
extern __MP real32_T GOLF_FRWheelSpeed;/* '<S116>/Read CAN Message' */
extern __MP real32_T GOLF_Fuel;        /* '<S109>/Read CAN Message1' */
extern __MP real32_T GOLF_Fuel_ratio;  /* '<S109>/Divide' */
extern __MP real32_T GOLF_GearLevel;   /* '<S107>/Delay' */
extern __MP real32_T GOLF_HandBrakeStatus;/* '<S103>/Read CAN Message' */
extern __MP boolean_T GOLF_HazardLight;/* '<S118>/Switch' */
extern __MP real32_T GOLF_HighBeam;    /* '<S105>/Read CAN Message' */
extern __MP real32_T GOLF_KL75;        /* '<S113>/Read CAN Message' */
extern __MP real32_T GOLF_LWIQbit_SteeringWheelAngle;/* '<S110>/Read CAN Message' */
extern __MP real32_T GOLF_LWIVZ_SteeringWheelAngle;/* '<S110>/Read CAN Message' */
extern __MP real32_T GOLF_LWIVZ_SteeringWheelAngle_Speed;/* '<S110>/Read CAN Message' */
extern __MP real32_T GOLF_LWI_SteeringWheelAngle;/* '<S110>/Read CAN Message' */
extern __MP real32_T GOLF_LWI_SteeringWheelAngle_Speed;/* '<S110>/Read CAN Message' */
extern __MP real32_T GOLF_LongitudinalAcceleration;/* '<S103>/Read CAN Message' */
extern __MP real32_T GOLF_MotorRPM;    /* '<S112>/Read CAN Message' */
extern __MP real32_T GOLF_MotorTorque_filtered;/* '<S111>/Read CAN Message' */
extern __MP real32_T GOLF_MotorTorque_raw;/* '<S111>/Read CAN Message' */
extern __MP uint8_T GOLF_StartStop;    /* '<S113>/Read CAN Message' */
extern __MP real32_T GOLF_rxACC;       /* '<S106>/Read CAN Message' */
extern __MP real32_T GOLF_rxESPBrakePressure;/* '<S104>/Read CAN Message' */
extern __MP real32_T GOLF_rxPitch;     /* '<S108>/Read CAN Message' */
extern __MP uint32_T GOLF_rxVehiclemass;/* '<S108>/Read CAN Message' */
extern __MP real32_T PC_FrontwheelMsg_Freq;/* '<S173>/Divide' */
extern __MP uint32_T PC_FrontwheelMsg_cnt;/* '<S169>/Read CAN Message' */
extern __MP uint8_T PC_LongMode;       /* '<S172>/Read CAN Message' */
extern __MP real32_T PC_SetBrakePos;   /* '<S171>/Read CAN Message' */
extern __MP real32_T PC_SetFrontWheelAngel_Rate;/* '<S169>/Read CAN Message' */
extern __MP real32_T PC_SetFrontWheelAngle;/* '<S169>/Read CAN Message' */
extern __MP real32_T PC_SetGasPos;     /* '<S171>/Read CAN Message' */
extern __MP real32_T PC_SetLimitVel;   /* '<S170>/Read CAN Message' */
extern __MP real32_T PC_SetLongAcc;    /* '<S170>/Read CAN Message' */
extern __MP uint8_T PC_blinker;        /* '<S172>/Read CAN Message' */
extern __MP uint8_T PC_gear;           /* '<S172>/Read CAN Message' */
extern __MP uint8_T PC_handBrake;      /* '<S172>/Read CAN Message' */
extern __MP uint8_T PC_headlight;      /* '<S172>/Read CAN Message' */
extern __MP uint8_T PC_mode;           /* '<S172>/Read CAN Message' */
extern __MP uint8_T PC_wiper;          /* '<S172>/Read CAN Message' */
extern __MP real32_T PDS_BoardTemp;    /* '<S21>/Read CAN Message1' */
extern __MP real32_T PDS_CH10Current;  /* '<S18>/Read CAN Message4' */
extern __MP real32_T PDS_CH1Current;   /* '<S20>/Read CAN Message2' */
extern __MP real32_T PDS_CH2Current;   /* '<S20>/Read CAN Message2' */
extern __MP real32_T PDS_CH3Current;   /* '<S20>/Read CAN Message2' */
extern __MP real32_T PDS_CH4Current;   /* '<S20>/Read CAN Message2' */
extern __MP real32_T PDS_CH5Current;   /* '<S19>/Read CAN Message3' */
extern __MP real32_T PDS_CH6Current;   /* '<S19>/Read CAN Message3' */
extern __MP real32_T PDS_CH7Current;   /* '<S19>/Read CAN Message3' */
extern __MP real32_T PDS_CH8Current;   /* '<S19>/Read CAN Message3' */
extern __MP real32_T PDS_CH9Current;   /* '<S18>/Read CAN Message4' */
extern __MP uint8_T PDS_Errors;        /* '<S17>/Read CAN Message' */
extern __MP real32_T PDS_InputCurrent; /* '<S21>/Read CAN Message1' */
extern __MP real32_T PDS_InputVoltage; /* '<S21>/Read CAN Message1' */
extern __MP uint8_T PDS_Status1;       /* '<S17>/Read CAN Message' */
extern __MP uint8_T PDS_Status10;      /* '<S17>/Read CAN Message' */
extern __MP uint8_T PDS_Status2;       /* '<S17>/Read CAN Message' */
extern __MP uint8_T PDS_Status3;       /* '<S17>/Read CAN Message' */
extern __MP uint8_T PDS_Status4;       /* '<S17>/Read CAN Message' */
extern __MP uint8_T PDS_Status5;       /* '<S17>/Read CAN Message' */
extern __MP uint8_T PDS_Status6;       /* '<S17>/Read CAN Message' */
extern __MP uint8_T PDS_Status7;       /* '<S17>/Read CAN Message' */
extern __MP uint8_T PDS_Status8;       /* '<S17>/Read CAN Message' */
extern __MP uint8_T PDS_Status9;       /* '<S17>/Read CAN Message' */
extern __MP boolean_T PwrM_flgKeyOnDelay;/* '<S425>/debounce' */
extern __MP boolean_T PwrM_flgKeyOnRaw;/* '<S418>/Switch' */
extern __MP real32_T SetACCOvrMsr;     /* '<S178>/Switch' */
extern __MP real32_T Set_Brake_PosOvrMsr;/* '<S448>/Switch' */
extern __MP real32_T Set_GasOvrMsr;    /* '<S470>/Switch' */
extern __MP real32_T Set_GearEnableOvrMsr;/* '<S227>/Switch' */
extern __MP uint8_T Set_GearOvrMsr;    /* '<S230>/Switch' */
extern __MP real32_T Steering_Angle;   /* '<S110>/Product' */
extern __MP real32_T Steering_Angle_Speed;/* '<S110>/Product1' */
extern __MP real32_T THROTTLE_CurrentPedalPos;/* '<S16>/Read CAN Message' */
extern __MP real32_T THROTTLE_ECUTimeout;/* '<S16>/Read CAN Message' */
extern __MP real32_T THROTTLE_PedalConnectionError;/* '<S16>/Read CAN Message' */
extern __MP real32_T debug_CompensationPID_out;/* '<S300>/Saturation' */
extern __MP boolean_T debug_EPAS_ECU_reset;/* '<S195>/Chart' */
extern __MP uint8_T debug_EPASmode;    /* '<S195>/Chart' */
extern __MP real32_T debug_EPASsetsteer;/* '<S195>/Chart' */
extern __MP real32_T debug_EPASspeedlimit;/* '<S195>/Chart' */
extern __MP boolean_T debug_Errors;    /* '<S198>/OR' */
extern __MP real32_T debug_Fr_request; /* '<S246>/Sum' */
extern __MP real32_T debug_GateTorquelimit;/* '<S196>/Chart' */
extern __MP real32_T debug_Gatesetsteer;/* '<S196>/Chart' */
extern __MP boolean_T debug_Mode;      /* '<S198>/Chart' */
extern __MP boolean_T debug_PCheardbeatOvrMsr;/* '<S403>/Switch' */
extern __MP real32_T debug_filtered_ACC;/* '<S249>/Moving Average2' */
extern __MP boolean_T debug_otonomDisableOvrMsr;/* '<S402>/Switch' */
extern __MP boolean_T debug_otonomEnableOvrMsr;/* '<S401>/Switch' */
extern __MP real32_T debug_set_brake;  /* '<S246>/Switch2' */
extern __MP boolean_T debug_stopmode;  /* '<S247>/Chart1' */
extern __MP real32_T gear_cnt;         /* '<S229>/Data Type Conversion2' */

#define POP__MP
#include "EcoSectionDef.h"

/* Real-time Model object */
extern RT_MODEL *const M;
extern boolean_T F_Abstr_DI_GetKeyValue(real32_T facAd2Volt,real32_T uKeyOffThr,
  real32_T uKeyOnHyst);
extern void Ecotron_step0(void);       /* Sample time: [0.001s, 0.0s] */
extern void Ecotron_step1(void);       /* Sample time: [0.005s, 0.0s] */
extern void Ecotron_step2(void);       /* Sample time: [0.01s, 0.0s]  */
extern void Ecotron_step3(void);       /* Sample time: [0.02s, 0.0s]  */
extern void Ecotron_step4(void);       /* Sample time: [0.05s, 0.0s]  */
extern void Ecotron_step5(void);       /* Sample time: [0.1s, 0.0s]   */
extern void Ecotron_step6(void);       /* Sample time: [0.2s, 0.0s]   */
extern void Ecotron_step7(void);       /* Sample time: [0.5s, 0.0s]   */
extern void Ecotron_step8(void);       /* Sample time: [1.0s, 0.0s]   */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Ecotron'
 * '<S1>'   : 'Ecotron/EcoCoder Target Definition'
 * '<S2>'   : 'Ecotron/Input'
 * '<S3>'   : 'Ecotron/Main '
 * '<S4>'   : 'Ecotron/Power Management Example'
 * '<S5>'   : 'Ecotron/Recover CAN Bus Off'
 * '<S6>'   : 'Ecotron/Recover CAN Bus Off1'
 * '<S7>'   : 'Ecotron/Recover CAN Bus Off2'
 * '<S8>'   : 'Ecotron/Subsystem4'
 * '<S9>'   : 'Ecotron/EcoCoder Target Definition/FunctionNull'
 * '<S10>'  : 'Ecotron/Input/By-wire'
 * '<S11>'  : 'Ecotron/Input/Golf'
 * '<S12>'  : 'Ecotron/Input/PC'
 * '<S13>'  : 'Ecotron/Input/By-wire/PDS'
 * '<S14>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU'
 * '<S15>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU'
 * '<S16>'  : 'Ecotron/Input/By-wire/Throttle Controller'
 * '<S17>'  : 'Ecotron/Input/By-wire/PDS/Subsystem'
 * '<S18>'  : 'Ecotron/Input/By-wire/PDS/Subsystem1'
 * '<S19>'  : 'Ecotron/Input/By-wire/PDS/Subsystem2'
 * '<S20>'  : 'Ecotron/Input/By-wire/PDS/Subsystem3'
 * '<S21>'  : 'Ecotron/Input/By-wire/PDS/Subsystem4'
 * '<S22>'  : 'Ecotron/Input/By-wire/PDS/Subsystem6'
 * '<S23>'  : 'Ecotron/Input/By-wire/PDS/Subsystem/Subsystem4'
 * '<S24>'  : 'Ecotron/Input/By-wire/PDS/Subsystem/Write and Read Measurement'
 * '<S25>'  : 'Ecotron/Input/By-wire/PDS/Subsystem/Write and Read Measurement1'
 * '<S26>'  : 'Ecotron/Input/By-wire/PDS/Subsystem/Write and Read Measurement10'
 * '<S27>'  : 'Ecotron/Input/By-wire/PDS/Subsystem/Write and Read Measurement2'
 * '<S28>'  : 'Ecotron/Input/By-wire/PDS/Subsystem/Write and Read Measurement3'
 * '<S29>'  : 'Ecotron/Input/By-wire/PDS/Subsystem/Write and Read Measurement4'
 * '<S30>'  : 'Ecotron/Input/By-wire/PDS/Subsystem/Write and Read Measurement5'
 * '<S31>'  : 'Ecotron/Input/By-wire/PDS/Subsystem/Write and Read Measurement6'
 * '<S32>'  : 'Ecotron/Input/By-wire/PDS/Subsystem/Write and Read Measurement7'
 * '<S33>'  : 'Ecotron/Input/By-wire/PDS/Subsystem/Write and Read Measurement8'
 * '<S34>'  : 'Ecotron/Input/By-wire/PDS/Subsystem/Write and Read Measurement9'
 * '<S35>'  : 'Ecotron/Input/By-wire/PDS/Subsystem1/Subsystem6'
 * '<S36>'  : 'Ecotron/Input/By-wire/PDS/Subsystem1/Write and Read Measurement'
 * '<S37>'  : 'Ecotron/Input/By-wire/PDS/Subsystem1/Write and Read Measurement1'
 * '<S38>'  : 'Ecotron/Input/By-wire/PDS/Subsystem2/Subsystem1'
 * '<S39>'  : 'Ecotron/Input/By-wire/PDS/Subsystem2/Write and Read Measurement'
 * '<S40>'  : 'Ecotron/Input/By-wire/PDS/Subsystem2/Write and Read Measurement1'
 * '<S41>'  : 'Ecotron/Input/By-wire/PDS/Subsystem2/Write and Read Measurement2'
 * '<S42>'  : 'Ecotron/Input/By-wire/PDS/Subsystem2/Write and Read Measurement3'
 * '<S43>'  : 'Ecotron/Input/By-wire/PDS/Subsystem3/Subsystem2'
 * '<S44>'  : 'Ecotron/Input/By-wire/PDS/Subsystem3/Write and Read Measurement'
 * '<S45>'  : 'Ecotron/Input/By-wire/PDS/Subsystem3/Write and Read Measurement1'
 * '<S46>'  : 'Ecotron/Input/By-wire/PDS/Subsystem3/Write and Read Measurement2'
 * '<S47>'  : 'Ecotron/Input/By-wire/PDS/Subsystem3/Write and Read Measurement3'
 * '<S48>'  : 'Ecotron/Input/By-wire/PDS/Subsystem4/Subsystem3'
 * '<S49>'  : 'Ecotron/Input/By-wire/PDS/Subsystem4/Write and Read Measurement'
 * '<S50>'  : 'Ecotron/Input/By-wire/PDS/Subsystem4/Write and Read Measurement1'
 * '<S51>'  : 'Ecotron/Input/By-wire/PDS/Subsystem4/Write and Read Measurement2'
 * '<S52>'  : 'Ecotron/Input/By-wire/PDS/Subsystem6/Subsystem5'
 * '<S53>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg1'
 * '<S54>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg2'
 * '<S55>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg3'
 * '<S56>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg1/Subsystem4'
 * '<S57>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg1/Write and Read Measurement'
 * '<S58>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg1/Write and Read Measurement1'
 * '<S59>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg2/Subsystem4'
 * '<S60>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg2/Write and Read Measurement'
 * '<S61>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg2/Write and Read Measurement1'
 * '<S62>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg2/Write and Read Measurement2'
 * '<S63>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg2/Write and Read Measurement3'
 * '<S64>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg2/Write and Read Measurement5'
 * '<S65>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg2/Write and Read Measurement6'
 * '<S66>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg3/Subsystem4'
 * '<S67>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg3/Write and Read Measurement'
 * '<S68>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg3/Write and Read Measurement1'
 * '<S69>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg3/Write and Read Measurement2'
 * '<S70>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg3/Write and Read Measurement3'
 * '<S71>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg3/Write and Read Measurement4'
 * '<S72>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg3/Write and Read Measurement5'
 * '<S73>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg3/Write and Read Measurement6'
 * '<S74>'  : 'Ecotron/Input/By-wire/Robeff Brake ECU/Robeff Brake FbMsg3/Write and Read Measurement7'
 * '<S75>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg1'
 * '<S76>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg2'
 * '<S77>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg3'
 * '<S78>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg1/Subsystem4'
 * '<S79>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg1/Write and Read Measurement'
 * '<S80>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg1/Write and Read Measurement1'
 * '<S81>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg2/Subsystem4'
 * '<S82>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg2/Write and Read Measurement1'
 * '<S83>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg2/Write and Read Measurement2'
 * '<S84>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg2/Write and Read Measurement3'
 * '<S85>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg2/Write and Read Measurement4'
 * '<S86>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg2/Write and Read Measurement5'
 * '<S87>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg2/Write and Read Measurement6'
 * '<S88>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg3/ Override Probe'
 * '<S89>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg3/Subsystem4'
 * '<S90>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg3/Write and Read Measurement'
 * '<S91>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg3/Write and Read Measurement1'
 * '<S92>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg3/Write and Read Measurement2'
 * '<S93>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg3/Write and Read Measurement3'
 * '<S94>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg3/Write and Read Measurement4'
 * '<S95>'  : 'Ecotron/Input/By-wire/Robeff EPAS ECU/Robeff EPAS FbMsg3/Write and Read Measurement5'
 * '<S96>'  : 'Ecotron/Input/By-wire/Throttle Controller/Subsystem4'
 * '<S97>'  : 'Ecotron/Input/By-wire/Throttle Controller/Write and Read Measurement'
 * '<S98>'  : 'Ecotron/Input/By-wire/Throttle Controller/Write and Read Measurement1'
 * '<S99>'  : 'Ecotron/Input/By-wire/Throttle Controller/Write and Read Measurement2'
 * '<S100>' : 'Ecotron/Input/Golf/BCM_01'
 * '<S101>' : 'Ecotron/Input/Golf/Brake'
 * '<S102>' : 'Ecotron/Input/Golf/Brake and Steering Feedback Echo'
 * '<S103>' : 'Ecotron/Input/Golf/EPB_01'
 * '<S104>' : 'Ecotron/Input/Golf/ESP_05'
 * '<S105>' : 'Ecotron/Input/Golf/Gateway_72'
 * '<S106>' : 'Ecotron/Input/Golf/Getriebe_1'
 * '<S107>' : 'Ecotron/Input/Golf/Getriebe_11'
 * '<S108>' : 'Ecotron/Input/Golf/Getriebe_2'
 * '<S109>' : 'Ecotron/Input/Golf/Kombi_02'
 * '<S110>' : 'Ecotron/Input/Golf/LWl'
 * '<S111>' : 'Ecotron/Input/Golf/Motor_11'
 * '<S112>' : 'Ecotron/Input/Golf/Motor_12'
 * '<S113>' : 'Ecotron/Input/Golf/Motor_14'
 * '<S114>' : 'Ecotron/Input/Golf/Motor_20'
 * '<S115>' : 'Ecotron/Input/Golf/Subsystem'
 * '<S116>' : 'Ecotron/Input/Golf/WheelSpeed'
 * '<S117>' : 'Ecotron/Input/Golf/BCM_01/Rising Edge'
 * '<S118>' : 'Ecotron/Input/Golf/BCM_01/Subsystem'
 * '<S119>' : 'Ecotron/Input/Golf/BCM_01/Subsystem1'
 * '<S120>' : 'Ecotron/Input/Golf/BCM_01/Write and Read Measurement'
 * '<S121>' : 'Ecotron/Input/Golf/Brake/Subsystem1'
 * '<S122>' : 'Ecotron/Input/Golf/Brake/Write and Read Measurement'
 * '<S123>' : 'Ecotron/Input/Golf/Brake and Steering Feedback Echo/Subsystem2'
 * '<S124>' : 'Ecotron/Input/Golf/Brake and Steering Feedback Echo/Subsystem7'
 * '<S125>' : 'Ecotron/Input/Golf/EPB_01/Subsystem1'
 * '<S126>' : 'Ecotron/Input/Golf/EPB_01/Write and Read Measurement'
 * '<S127>' : 'Ecotron/Input/Golf/EPB_01/Write and Read Measurement1'
 * '<S128>' : 'Ecotron/Input/Golf/ESP_05/Subsystem1'
 * '<S129>' : 'Ecotron/Input/Golf/ESP_05/Write and Read Measurement'
 * '<S130>' : 'Ecotron/Input/Golf/Gateway_72/Subsystem1'
 * '<S131>' : 'Ecotron/Input/Golf/Gateway_72/Write and Read Measurement'
 * '<S132>' : 'Ecotron/Input/Golf/Gateway_72/Write and Read Measurement1'
 * '<S133>' : 'Ecotron/Input/Golf/Gateway_72/Write and Read Measurement2'
 * '<S134>' : 'Ecotron/Input/Golf/Getriebe_1/Subsystem1'
 * '<S135>' : 'Ecotron/Input/Golf/Getriebe_1/Write and Read Measurement'
 * '<S136>' : 'Ecotron/Input/Golf/Getriebe_11/Subsystem1'
 * '<S137>' : 'Ecotron/Input/Golf/Getriebe_11/Write and Read Measurement'
 * '<S138>' : 'Ecotron/Input/Golf/Getriebe_2/Subsystem1'
 * '<S139>' : 'Ecotron/Input/Golf/Getriebe_2/Write and Read Measurement'
 * '<S140>' : 'Ecotron/Input/Golf/Getriebe_2/Write and Read Measurement1'
 * '<S141>' : 'Ecotron/Input/Golf/Kombi_02/Subsystem1'
 * '<S142>' : 'Ecotron/Input/Golf/Kombi_02/Write and Read Measurement'
 * '<S143>' : 'Ecotron/Input/Golf/Kombi_02/Write and Read Measurement1'
 * '<S144>' : 'Ecotron/Input/Golf/LWl/Subsystem1'
 * '<S145>' : 'Ecotron/Input/Golf/LWl/Write and Read Measurement'
 * '<S146>' : 'Ecotron/Input/Golf/LWl/Write and Read Measurement1'
 * '<S147>' : 'Ecotron/Input/Golf/LWl/Write and Read Measurement2'
 * '<S148>' : 'Ecotron/Input/Golf/LWl/Write and Read Measurement3'
 * '<S149>' : 'Ecotron/Input/Golf/LWl/Write and Read Measurement4'
 * '<S150>' : 'Ecotron/Input/Golf/LWl/Write and Read Measurement5'
 * '<S151>' : 'Ecotron/Input/Golf/LWl/Write and Read Measurement6'
 * '<S152>' : 'Ecotron/Input/Golf/Motor_11/Subsystem1'
 * '<S153>' : 'Ecotron/Input/Golf/Motor_11/Write and Read Measurement'
 * '<S154>' : 'Ecotron/Input/Golf/Motor_11/Write and Read Measurement1'
 * '<S155>' : 'Ecotron/Input/Golf/Motor_12/Subsystem1'
 * '<S156>' : 'Ecotron/Input/Golf/Motor_12/Write and Read Measurement'
 * '<S157>' : 'Ecotron/Input/Golf/Motor_14/Subsystem1'
 * '<S158>' : 'Ecotron/Input/Golf/Motor_14/Write and Read Measurement'
 * '<S159>' : 'Ecotron/Input/Golf/Motor_14/Write and Read Measurement1'
 * '<S160>' : 'Ecotron/Input/Golf/Motor_20/Subsystem1'
 * '<S161>' : 'Ecotron/Input/Golf/Motor_20/Write and Read Measurement'
 * '<S162>' : 'Ecotron/Input/Golf/Subsystem/Subsystem1'
 * '<S163>' : 'Ecotron/Input/Golf/Subsystem/Write and Read Measurement'
 * '<S164>' : 'Ecotron/Input/Golf/WheelSpeed/Subsystem1'
 * '<S165>' : 'Ecotron/Input/Golf/WheelSpeed/Write and Read Measurement'
 * '<S166>' : 'Ecotron/Input/Golf/WheelSpeed/Write and Read Measurement1'
 * '<S167>' : 'Ecotron/Input/Golf/WheelSpeed/Write and Read Measurement2'
 * '<S168>' : 'Ecotron/Input/Golf/WheelSpeed/Write and Read Measurement3'
 * '<S169>' : 'Ecotron/Input/PC/FrontWheelCommands'
 * '<S170>' : 'Ecotron/Input/PC/LongitudinalCommands'
 * '<S171>' : 'Ecotron/Input/PC/LongitudinalCommandsV2'
 * '<S172>' : 'Ecotron/Input/PC/Vehicle_Commands'
 * '<S173>' : 'Ecotron/Input/PC/FrontWheelCommands/Subsystem1'
 * '<S174>' : 'Ecotron/Input/PC/FrontWheelCommands/Write and Read Measurement'
 * '<S175>' : 'Ecotron/Input/PC/FrontWheelCommands/Write and Read Measurement1'
 * '<S176>' : 'Ecotron/Input/PC/FrontWheelCommands/Subsystem1/Write Measurement'
 * '<S177>' : 'Ecotron/Input/PC/FrontWheelCommands/Subsystem1/Write Measurement1'
 * '<S178>' : 'Ecotron/Input/PC/LongitudinalCommands/ Override Probe'
 * '<S179>' : 'Ecotron/Input/PC/LongitudinalCommands/Subsystem1'
 * '<S180>' : 'Ecotron/Input/PC/LongitudinalCommands/Write and Read Measurement'
 * '<S181>' : 'Ecotron/Input/PC/LongitudinalCommands/Write and Read Measurement1'
 * '<S182>' : 'Ecotron/Input/PC/LongitudinalCommandsV2/Subsystem1'
 * '<S183>' : 'Ecotron/Input/PC/LongitudinalCommandsV2/Write and Read Measurement'
 * '<S184>' : 'Ecotron/Input/PC/LongitudinalCommandsV2/Write and Read Measurement1'
 * '<S185>' : 'Ecotron/Input/PC/Vehicle_Commands/Subsystem1'
 * '<S186>' : 'Ecotron/Input/PC/Vehicle_Commands/Write and Read Measurement'
 * '<S187>' : 'Ecotron/Input/PC/Vehicle_Commands/Write and Read Measurement1'
 * '<S188>' : 'Ecotron/Input/PC/Vehicle_Commands/Write and Read Measurement2'
 * '<S189>' : 'Ecotron/Input/PC/Vehicle_Commands/Write and Read Measurement3'
 * '<S190>' : 'Ecotron/Input/PC/Vehicle_Commands/Write and Read Measurement4'
 * '<S191>' : 'Ecotron/Input/PC/Vehicle_Commands/Write and Read Measurement5'
 * '<S192>' : 'Ecotron/Input/PC/Vehicle_Commands/Write and Read Measurement6'
 * '<S193>' : 'Ecotron/Main /Err Handler'
 * '<S194>' : 'Ecotron/Main /Gear'
 * '<S195>' : 'Ecotron/Main /LateralControl'
 * '<S196>' : 'Ecotron/Main /LateralControl1GateECU'
 * '<S197>' : 'Ecotron/Main /LongControl '
 * '<S198>' : 'Ecotron/Main /Mode Select'
 * '<S199>' : 'Ecotron/Main /PDS StartupShutdown'
 * '<S200>' : 'Ecotron/Main /Err Handler/Check Brake Err'
 * '<S201>' : 'Ecotron/Main /Err Handler/Check EPAS Err'
 * '<S202>' : 'Ecotron/Main /Err Handler/Check PDS Errors'
 * '<S203>' : 'Ecotron/Main /Err Handler/Check Throttle ECU Errors'
 * '<S204>' : 'Ecotron/Main /Err Handler/MotorStatus'
 * '<S205>' : 'Ecotron/Main /Err Handler/Subsystem'
 * '<S206>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Compare To Constant'
 * '<S207>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Compare To Constant1'
 * '<S208>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Compare To Constant10'
 * '<S209>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Compare To Constant2'
 * '<S210>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Compare To Constant3'
 * '<S211>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Compare To Constant4'
 * '<S212>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Compare To Constant5'
 * '<S213>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Compare To Constant6'
 * '<S214>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Compare To Constant7'
 * '<S215>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Compare To Constant8'
 * '<S216>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Compare To Constant9'
 * '<S217>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Write Measurement1'
 * '<S218>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Write Measurement2'
 * '<S219>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Write Measurement3'
 * '<S220>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Write Measurement4'
 * '<S221>' : 'Ecotron/Main /Err Handler/Check PDS Errors/Write Measurement5'
 * '<S222>' : 'Ecotron/Main /Err Handler/Check Throttle ECU Errors/Compare To Constant'
 * '<S223>' : 'Ecotron/Main /Err Handler/Check Throttle ECU Errors/Compare To Constant1'
 * '<S224>' : 'Ecotron/Main /Err Handler/MotorStatus/Compare To Constant'
 * '<S225>' : 'Ecotron/Main /Err Handler/MotorStatus/Write Measurement'
 * '<S226>' : 'Ecotron/Main /Err Handler/MotorStatus/Write Measurement1'
 * '<S227>' : 'Ecotron/Main /Gear/ Override Probe'
 * '<S228>' : 'Ecotron/Main /Gear/Compare To Constant'
 * '<S229>' : 'Ecotron/Main /Gear/Gear_Control'
 * '<S230>' : 'Ecotron/Main /Gear/Gear_Control/ Override Probe'
 * '<S231>' : 'Ecotron/Main /Gear/Gear_Control/Chart'
 * '<S232>' : 'Ecotron/Main /Gear/Gear_Control/Chart1'
 * '<S233>' : 'Ecotron/Main /Gear/Gear_Control/Write Measurement2'
 * '<S234>' : 'Ecotron/Main /LateralControl/Chart'
 * '<S235>' : 'Ecotron/Main /LateralControl/Steering Map'
 * '<S236>' : 'Ecotron/Main /LateralControl/Write and Read Measurement'
 * '<S237>' : 'Ecotron/Main /LateralControl/Write and Read Measurement1'
 * '<S238>' : 'Ecotron/Main /LateralControl/Write and Read Measurement2'
 * '<S239>' : 'Ecotron/Main /LateralControl/Write and Read Measurement3'
 * '<S240>' : 'Ecotron/Main /LateralControl1GateECU/Chart'
 * '<S241>' : 'Ecotron/Main /LateralControl1GateECU/Steering Map'
 * '<S242>' : 'Ecotron/Main /LateralControl1GateECU/Write and Read Measurement1'
 * '<S243>' : 'Ecotron/Main /LateralControl1GateECU/Write and Read Measurement2'
 * '<S244>' : 'Ecotron/Main /LongControl /ACC Control'
 * '<S245>' : 'Ecotron/Main /LongControl /Brake Calib logic'
 * '<S246>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator '
 * '<S247>' : 'Ecotron/Main /LongControl /ACC Control/StopModeDesicion'
 * '<S248>' : 'Ecotron/Main /LongControl /ACC Control/VehicleSpeed'
 * '<S249>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Acceleration1'
 * '<S250>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Compare To Constant'
 * '<S251>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller'
 * '<S252>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Gearbox loss'
 * '<S253>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Rolling resistance'
 * '<S254>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem'
 * '<S255>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1'
 * '<S256>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Write Measurement'
 * '<S257>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Write Measurement1'
 * '<S258>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Write Measurement2'
 * '<S259>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Write Measurement3'
 * '<S260>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Write Measurement4'
 * '<S261>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /motorbrake'
 * '<S262>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /slope'
 * '<S263>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Acceleration1/basic derivative1'
 * '<S264>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Anti-windup'
 * '<S265>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/D Gain'
 * '<S266>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Filter'
 * '<S267>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Filter ICs'
 * '<S268>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/I Gain'
 * '<S269>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Ideal P Gain'
 * '<S270>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S271>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Integrator'
 * '<S272>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Integrator ICs'
 * '<S273>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/N Copy'
 * '<S274>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/N Gain'
 * '<S275>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/P Copy'
 * '<S276>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Parallel P Gain'
 * '<S277>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Reset Signal'
 * '<S278>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Saturation'
 * '<S279>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Saturation Fdbk'
 * '<S280>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Sum'
 * '<S281>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Sum Fdbk'
 * '<S282>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Tracking Mode'
 * '<S283>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Tracking Mode Sum'
 * '<S284>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/postSat Signal'
 * '<S285>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/preSat Signal'
 * '<S286>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S287>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/D Gain/Disabled'
 * '<S288>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Filter/Disabled'
 * '<S289>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Filter ICs/Disabled'
 * '<S290>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/I Gain/External Parameters'
 * '<S291>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S292>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S293>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Integrator/Discrete'
 * '<S294>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S295>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S296>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/N Gain/Disabled'
 * '<S297>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/P Copy/Disabled'
 * '<S298>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Parallel P Gain/External Parameters'
 * '<S299>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Reset Signal/External Reset'
 * '<S300>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Saturation/Enabled'
 * '<S301>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S302>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Sum/Sum_PI'
 * '<S303>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S304>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Tracking Mode/Disabled'
 * '<S305>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S306>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S307>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S308>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1'
 * '<S309>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Anti-windup'
 * '<S310>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/D Gain'
 * '<S311>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Filter'
 * '<S312>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Filter ICs'
 * '<S313>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/I Gain'
 * '<S314>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Ideal P Gain'
 * '<S315>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Ideal P Gain Fdbk'
 * '<S316>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Integrator'
 * '<S317>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Integrator ICs'
 * '<S318>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/N Copy'
 * '<S319>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/N Gain'
 * '<S320>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/P Copy'
 * '<S321>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Parallel P Gain'
 * '<S322>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Reset Signal'
 * '<S323>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Saturation'
 * '<S324>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Saturation Fdbk'
 * '<S325>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Sum'
 * '<S326>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Sum Fdbk'
 * '<S327>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Tracking Mode'
 * '<S328>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Tracking Mode Sum'
 * '<S329>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/postSat Signal'
 * '<S330>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/preSat Signal'
 * '<S331>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S332>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/D Gain/External Parameters'
 * '<S333>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Filter/Differentiator'
 * '<S334>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Filter ICs/Internal IC - Differentiator'
 * '<S335>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/I Gain/External Parameters'
 * '<S336>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Ideal P Gain/Passthrough'
 * '<S337>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S338>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Integrator/Discrete'
 * '<S339>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Integrator ICs/Internal IC'
 * '<S340>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S341>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/N Gain/Passthrough'
 * '<S342>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/P Copy/Disabled'
 * '<S343>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Parallel P Gain/External Parameters'
 * '<S344>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Reset Signal/External Reset'
 * '<S345>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Saturation/Enabled'
 * '<S346>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Saturation Fdbk/Disabled'
 * '<S347>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Sum/Sum_PID'
 * '<S348>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Sum Fdbk/Disabled'
 * '<S349>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Tracking Mode/Disabled'
 * '<S350>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S351>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/postSat Signal/Forward_Path'
 * '<S352>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem/PID Controller1/preSat Signal/Forward_Path'
 * '<S353>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1'
 * '<S354>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Anti-windup'
 * '<S355>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/D Gain'
 * '<S356>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Filter'
 * '<S357>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Filter ICs'
 * '<S358>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/I Gain'
 * '<S359>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Ideal P Gain'
 * '<S360>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Ideal P Gain Fdbk'
 * '<S361>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Integrator'
 * '<S362>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Integrator ICs'
 * '<S363>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/N Copy'
 * '<S364>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/N Gain'
 * '<S365>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/P Copy'
 * '<S366>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Parallel P Gain'
 * '<S367>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Reset Signal'
 * '<S368>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Saturation'
 * '<S369>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Saturation Fdbk'
 * '<S370>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Sum'
 * '<S371>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Sum Fdbk'
 * '<S372>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Tracking Mode'
 * '<S373>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Tracking Mode Sum'
 * '<S374>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/postSat Signal'
 * '<S375>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/preSat Signal'
 * '<S376>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S377>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/D Gain/External Parameters'
 * '<S378>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Filter/Differentiator'
 * '<S379>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Filter ICs/Internal IC - Differentiator'
 * '<S380>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/I Gain/External Parameters'
 * '<S381>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Ideal P Gain/Passthrough'
 * '<S382>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S383>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Integrator/Discrete'
 * '<S384>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Integrator ICs/Internal IC'
 * '<S385>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S386>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/N Gain/Passthrough'
 * '<S387>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/P Copy/Disabled'
 * '<S388>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Parallel P Gain/External Parameters'
 * '<S389>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Reset Signal/External Reset'
 * '<S390>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Saturation/Enabled'
 * '<S391>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Saturation Fdbk/Disabled'
 * '<S392>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Sum/Sum_PID'
 * '<S393>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Sum Fdbk/Disabled'
 * '<S394>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Tracking Mode/Disabled'
 * '<S395>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S396>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/postSat Signal/Forward_Path'
 * '<S397>' : 'Ecotron/Main /LongControl /ACC Control/Fcalculator /Subsystem1/PID Controller1/preSat Signal/Forward_Path'
 * '<S398>' : 'Ecotron/Main /LongControl /ACC Control/StopModeDesicion/Chart1'
 * '<S399>' : 'Ecotron/Main /LongControl /Brake Calib logic/ Override Probe'
 * '<S400>' : 'Ecotron/Main /LongControl /Brake Calib logic/Chart'
 * '<S401>' : 'Ecotron/Main /Mode Select/ Override Probe'
 * '<S402>' : 'Ecotron/Main /Mode Select/ Override Probe1'
 * '<S403>' : 'Ecotron/Main /Mode Select/ Override Probe2'
 * '<S404>' : 'Ecotron/Main /Mode Select/Chart'
 * '<S405>' : 'Ecotron/Main /Mode Select/Compare To Constant'
 * '<S406>' : 'Ecotron/Main /Mode Select/Compare To Constant1'
 * '<S407>' : 'Ecotron/Main /Mode Select/Rising Edge1'
 * '<S408>' : 'Ecotron/Main /Mode Select/Rising Edge2'
 * '<S409>' : 'Ecotron/Main /Mode Select/Rising Edge3'
 * '<S410>' : 'Ecotron/Main /Mode Select/Write Measurement'
 * '<S411>' : 'Ecotron/Main /Mode Select/Write Measurement3'
 * '<S412>' : 'Ecotron/Main /PDS StartupShutdown/Chart'
 * '<S413>' : 'Ecotron/Main /PDS StartupShutdown/Compare To Constant'
 * '<S414>' : 'Ecotron/Main /PDS StartupShutdown/Falling Edge'
 * '<S415>' : 'Ecotron/Main /PDS StartupShutdown/Rising Edge'
 * '<S416>' : 'Ecotron/Power Management Example/Power Off Management'
 * '<S417>' : 'Ecotron/Power Management Example/Power On Init'
 * '<S418>' : 'Ecotron/Power Management Example/Power Off Management/Get flgKeyOn'
 * '<S419>' : 'Ecotron/Power Management Example/Power Off Management/KeyCycle'
 * '<S420>' : 'Ecotron/Power Management Example/Power Off Management/Shutdown Power'
 * '<S421>' : 'Ecotron/Power Management Example/Power Off Management/Shutdown Power Hold'
 * '<S422>' : 'Ecotron/Power Management Example/Power Off Management/Software Reset'
 * '<S423>' : 'Ecotron/Power Management Example/Power Off Management/Software Reset Hold'
 * '<S424>' : 'Ecotron/Power Management Example/Power Off Management/Store All NVM Data'
 * '<S425>' : 'Ecotron/Power Management Example/Power Off Management/TOfD_xxxx1'
 * '<S426>' : 'Ecotron/Power Management Example/Power Off Management/Write and Read Measurement'
 * '<S427>' : 'Ecotron/Power Management Example/Power Off Management/Write and Read Measurement1'
 * '<S428>' : 'Ecotron/Power Management Example/Power Off Management/KeyCycle/ER_xxxx'
 * '<S429>' : 'Ecotron/Power Management Example/Power Off Management/KeyCycle/ER_xxxx1'
 * '<S430>' : 'Ecotron/Power Management Example/Power Off Management/KeyCycle/RSFF_xxxx'
 * '<S431>' : 'Ecotron/Power Management Example/Power Off Management/KeyCycle/Reset_Action'
 * '<S432>' : 'Ecotron/Power Management Example/Power Off Management/KeyCycle/TOfD_xxxx'
 * '<S433>' : 'Ecotron/Power Management Example/Power Off Management/KeyCycle/edgeDbncRise'
 * '<S434>' : 'Ecotron/Power Management Example/Power Off Management/KeyCycle/TOfD_xxxx/DebounceTimer'
 * '<S435>' : 'Ecotron/Power Management Example/Power Off Management/KeyCycle/TOfD_xxxx/DebounceTimer/dt'
 * '<S436>' : 'Ecotron/Power Management Example/Power Off Management/KeyCycle/edgeDbncRise/DebounceTimer'
 * '<S437>' : 'Ecotron/Power Management Example/Power Off Management/KeyCycle/edgeDbncRise/DebounceTimer/dt'
 * '<S438>' : 'Ecotron/Power Management Example/Power Off Management/TOfD_xxxx1/DebounceTimer'
 * '<S439>' : 'Ecotron/Power Management Example/Power Off Management/TOfD_xxxx1/DebounceTimer/dt'
 * '<S440>' : 'Ecotron/Power Management Example/Power On Init/Restore NVM Data'
 * '<S441>' : 'Ecotron/Subsystem4/Brake'
 * '<S442>' : 'Ecotron/Subsystem4/Button cntrl '
 * '<S443>' : 'Ecotron/Subsystem4/Gas'
 * '<S444>' : 'Ecotron/Subsystem4/Gear'
 * '<S445>' : 'Ecotron/Subsystem4/PC'
 * '<S446>' : 'Ecotron/Subsystem4/PDS'
 * '<S447>' : 'Ecotron/Subsystem4/Steering Control 1'
 * '<S448>' : 'Ecotron/Subsystem4/Brake/ Override Probe'
 * '<S449>' : 'Ecotron/Subsystem4/Brake/ Override Probe1'
 * '<S450>' : 'Ecotron/Subsystem4/Button cntrl / Override Probe'
 * '<S451>' : 'Ecotron/Subsystem4/Button cntrl / Override Probe1'
 * '<S452>' : 'Ecotron/Subsystem4/Button cntrl / Override Probe2'
 * '<S453>' : 'Ecotron/Subsystem4/Button cntrl / Override Probe3'
 * '<S454>' : 'Ecotron/Subsystem4/Button cntrl / Override Probe4'
 * '<S455>' : 'Ecotron/Subsystem4/Button cntrl / Override Probe5'
 * '<S456>' : 'Ecotron/Subsystem4/Button cntrl /Chart'
 * '<S457>' : 'Ecotron/Subsystem4/Button cntrl /Compare To Constant'
 * '<S458>' : 'Ecotron/Subsystem4/Button cntrl /Compare To Constant1'
 * '<S459>' : 'Ecotron/Subsystem4/Button cntrl /Compare To Constant2'
 * '<S460>' : 'Ecotron/Subsystem4/Button cntrl /Compare To Constant3'
 * '<S461>' : 'Ecotron/Subsystem4/Button cntrl /Compare To Constant4'
 * '<S462>' : 'Ecotron/Subsystem4/Button cntrl /Subsystem'
 * '<S463>' : 'Ecotron/Subsystem4/Button cntrl /Subsystem1'
 * '<S464>' : 'Ecotron/Subsystem4/Button cntrl /Subsystem4'
 * '<S465>' : 'Ecotron/Subsystem4/Button cntrl /Subsystem1/Compare To Constant'
 * '<S466>' : 'Ecotron/Subsystem4/Button cntrl /Subsystem1/Compare To Constant1'
 * '<S467>' : 'Ecotron/Subsystem4/Button cntrl /Subsystem4/Chart'
 * '<S468>' : 'Ecotron/Subsystem4/Button cntrl /Subsystem4/Falling Edge'
 * '<S469>' : 'Ecotron/Subsystem4/Button cntrl /Subsystem4/Rising Edge'
 * '<S470>' : 'Ecotron/Subsystem4/Gas/ Override Probe'
 * '<S471>' : 'Ecotron/Subsystem4/Gas/ Override Probe1'
 * '<S472>' : 'Ecotron/Subsystem4/Gear/Drive '
 * '<S473>' : 'Ecotron/Subsystem4/Gear/Neutral'
 * '<S474>' : 'Ecotron/Subsystem4/Gear/Reverse'
 * '<S475>' : 'Ecotron/Subsystem4/Gear/Reverse1'
 * '<S476>' : 'Ecotron/Subsystem4/Gear/Reverse2'
 * '<S477>' : 'Ecotron/Subsystem4/Gear/Reverse3'
 * '<S478>' : 'Ecotron/Subsystem4/PC/Chart'
 * '<S479>' : 'Ecotron/Subsystem4/PC/Steering Map reverse'
 * '<S480>' : 'Ecotron/Subsystem4/PC/VehicleSpeed'
 * '<S481>' : 'Ecotron/Subsystem4/PDS/Subsystem'
 */
#endif                                 /* RTW_HEADER_Ecotron_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
