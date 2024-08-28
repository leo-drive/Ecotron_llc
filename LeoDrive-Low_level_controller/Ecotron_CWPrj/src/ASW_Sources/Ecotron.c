/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Ecotron.c
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

#include "Ecotron.h"
#include "look1_binlx.h"
#include "look1_iflf_binlx.h"

uint32_T tEcotron;

#define PUSH__RWP
#include "EcoSectionDef.h"

__RWP const volatile uint32_T c1Ecotron = 0x11223344;
__RWP const volatile uint32_T c2Ecotron = 0x55667788;

#define POP__RWP
#include "EcoSectionDef.h"

/* Named constants for Chart: '<S229>/Chart' */
#define IN_NO_ACTIVE_CHILD             ((uint8_T)0U)
#define IN_init                        ((uint8_T)1U)
#define IN_trigger                     ((uint8_T)2U)

/* Named constants for Chart: '<S229>/Chart1' */
#define IN_high                        ((uint8_T)1U)
#define IN_high1                       ((uint8_T)2U)
#define IN_high2                       ((uint8_T)3U)
#define IN_high3                       ((uint8_T)4U)
#define IN_high4                       ((uint8_T)5U)
#define IN_high5                       ((uint8_T)6U)
#define IN_init_d                      ((uint8_T)7U)
#define IN_low                         ((uint8_T)8U)
#define IN_low1                        ((uint8_T)9U)
#define IN_low2                        ((uint8_T)10U)
#define IN_low3                        ((uint8_T)11U)
#define IN_low4                        ((uint8_T)12U)
#define IN_low5                        ((uint8_T)13U)

/* Named constants for Chart: '<S195>/Chart' */
#define IN_Fast                        ((uint8_T)1U)
#define IN_Manual                      ((uint8_T)1U)
#define IN_Otonom                      ((uint8_T)2U)
#define IN_Slow                        ((uint8_T)2U)
#define IN_mod1                        ((uint8_T)3U)
#define IN_reset                       ((uint8_T)4U)
#define IN_set                         ((uint8_T)5U)

/* Named constants for Chart: '<S247>/Chart1' */
#define IN_Move                        ((uint8_T)1U)
#define IN_StopMode                    ((uint8_T)2U)

/* Named constants for Chart: '<S245>/Chart' */
#define IN_SetCalibCMD                 ((uint8_T)1U)
#define IN_init_b                      ((uint8_T)2U)

/* Named constants for Chart: '<S198>/Chart' */
#define IN_Autonomous                  ((uint8_T)1U)
#define IN_Manual_g                    ((uint8_T)2U)

/* Named constants for Chart: '<S199>/Chart' */
#define IN_Brake                       ((uint8_T)1U)
#define IN_DBW                         ((uint8_T)2U)
#define IN_EPAS                        ((uint8_T)3U)
#define IN_GNSS                        ((uint8_T)4U)
#define IN_LIDARS                      ((uint8_T)5U)
#define IN_Modem                       ((uint8_T)6U)
#define IN_Shutdown                    ((uint8_T)1U)
#define IN_Startup                     ((uint8_T)2U)
#define IN_VLS128                      ((uint8_T)7U)
#define IN_start                       ((uint8_T)3U)

/* Named constants for Chart: '<S442>/Chart' */
#define IN_HazardOFF                   ((uint8_T)1U)
#define IN_HazardON                    ((uint8_T)2U)
#define IN_Reset                       ((uint8_T)1U)
#define IN_Set                         ((uint8_T)2U)
#define IN_init_h                      ((uint8_T)3U)

/* Named constants for Chart: '<S464>/Chart' */
#define IN_FallingBuzz                 ((uint8_T)1U)
#define IN_NoBuzz                      ((uint8_T)2U)
#define IN_OFF                         ((uint8_T)1U)
#define IN_ON                          ((uint8_T)2U)
#define IN_risingBuzz                  ((uint8_T)3U)

/* Named constants for Chart: '<S445>/Chart' */
#define IN_Hazard                      ((uint8_T)1U)
#define IN_left                        ((uint8_T)3U)
#define IN_right                       ((uint8_T)4U)

uint32_T cntDrtSlt0x400_0_3_1U= 0;
uint32_T cntDrtSlt0xB5_0_1_2U= 0;
uint32_T cntDrtSlt0xA8_0_1_3U= 0;
uint32_T cntDrtSlt0x3BE_0_1_4U= 0;
uint32_T cntDrtSlt0x420_0_2_5U= 0;
uint32_T cntDrtSlt0x43C_0_2_6U= 0;
uint32_T cntDrtSlt0x475_0_2_7U= 0;
uint32_T cntDrtSlt0x294_0_2_8U= 0;
uint32_T cntDrtSlt0x312_0_2_9U= 0;
uint32_T cntDrtSlt0x310_0_2_10U= 0;
uint32_T cntDrtSlt0x311_0_2_11U= 0;
uint32_T cntDrtSlt0x290_0_2_12U= 0;
uint32_T cntDrtSlt0x292_0_2_13U= 0;
uint32_T cntDrtSlt0x402_0_3_14U= 0;
uint32_T cntDrtSlt0x403_0_3_15U= 0;
uint32_T cntDrtSlt0x401_0_3_16U= 0;
uint32_T cntDrtSlt0x104_0_1_17U= 0;
uint32_T cntDrtSlt0xB2_0_1_18U= 0;
uint32_T cntDrtSlt0x65F_0_1_19U= 0;
uint32_T cntDrtSlt0xA7_0_1_20U= 0;
uint32_T cntDrtSlt0x176_0_1_21U= 0;
uint32_T cntDrtSlt0x65A_0_1_22U= 0;
uint32_T cntDrtSlt0x3DB_0_1_29U= 0;
uint32_T cntDrtSlt0x86_0_1_30U= 0;
uint32_T cntDrtSlt0x6B7_0_1_31U= 0;
uint32_T cntDrtSlt0x121_0_1_32U= 0;
uint32_T cntDrtSlt0x42C_0_2_34U= 0;
uint32_T cntDrtSlt0x428_0_2_35U= 0;
uint32_T cntDrtSlt0x424_0_2_36U= 0;
uint32_T cntDrtSlt0x421_0_2_37U= 0;
uint32_T cntDrtSlt0x106_0_1_38U= 0;
uint32_T cntDrtSlt0x101_0_1_39U= 0;
uint32_T cntDrtSlt0xAD_0_1_40U= 0;

/* Exported data definition */
#define PUSH__RWP
#include "EcoSectionDef.h"

/* Definition for custom storage class: Calibration */
__RWP const volatile real32_T Activate_ThrottleControllerOvrCal_val = 0.0F;/* Referenced by: '<S471>/calibration' */
__RWP const volatile boolean_T Activate_ThrottleControllerOvrEn_val = 0;/* Referenced by: '<S471>/override' */
__RWP const volatile real32_T Brake_CalibCMDOvrCal_val = 0.0F;/* Referenced by: '<S399>/calibration' */
__RWP const volatile boolean_T Brake_CalibCMDOvrEn_val = 0;/* Referenced by: '<S399>/override' */
__RWP const volatile real32_T Brake_ControlMode = 0.0F;
                                 /* Referenced by: '<S441>/Read Calibration1' */
__RWP const volatile real32_T Brake_PID_D = 0.0F;
                                 /* Referenced by: '<S255>/Read Calibration2' */
__RWP const volatile real32_T Brake_PID_I = 5.0F;
                                 /* Referenced by: '<S255>/Read Calibration1' */
__RWP const volatile real32_T Brake_PID_P = 3.0F;
                                  /* Referenced by: '<S255>/Read Calibration' */
__RWP const volatile uint8_T Brake_ResetOvrCal_val = 0U;/* Referenced by: '<S449>/calibration' */
__RWP const volatile boolean_T Brake_ResetOvrEn_val = 0;/* Referenced by: '<S449>/override' */
__RWP const volatile uint8_T Brake_SetDuty = 0U;
                                /* Referenced by: '<S441>/Read Calibration19' */
__RWP const volatile boolean_T Button_Hazard_LightOvrCal_val = 0;/* Referenced by: '<S450>/calibration' */
__RWP const volatile boolean_T Button_Hazard_LightOvrEn_val = 0;/* Referenced by: '<S450>/override' */
__RWP const volatile boolean_T Button_Headlight_FlasherOvrCal_val = 0;/* Referenced by: '<S454>/calibration' */
__RWP const volatile boolean_T Button_Headlight_FlasherOvrEn_val = 0;/* Referenced by: '<S454>/override' */
__RWP const volatile boolean_T Button_HighBeamOvrCal_val = 0;/* Referenced by: '<S453>/calibration' */
__RWP const volatile boolean_T Button_HighBeamOvrEn_val = 0;/* Referenced by: '<S453>/override' */
__RWP const volatile boolean_T Button_Left_BlinkerOvrCal_val = 0;/* Referenced by: '<S451>/calibration' */
__RWP const volatile boolean_T Button_Left_BlinkerOvrEn_val = 0;/* Referenced by: '<S451>/override' */
__RWP const volatile boolean_T Button_Right_BlinkerOvrCal_val = 0;/* Referenced by: '<S452>/calibration' */
__RWP const volatile boolean_T Button_Right_BlinkerOvrEn_val = 0;/* Referenced by: '<S452>/override' */
__RWP const volatile boolean_T Buzz_controlOvrCal_val = 0;/* Referenced by: '<S455>/calibration' */
__RWP const volatile boolean_T Buzz_controlOvrEn_val = 0;/* Referenced by: '<S455>/override' */
__RWP const volatile real32_T Buzz_falling_duration = 500.0F;
                                 /* Referenced by: '<S464>/Read Calibration1' */
__RWP const volatile real32_T Buzz_falling_offduration = 250.0F;
                                 /* Referenced by: '<S464>/Read Calibration2' */
__RWP const volatile real32_T Buzz_rising_duration = 500.0F;
                                  /* Referenced by: '<S464>/Read Calibration' */
__RWP const volatile real32_T CANA_recover = 0.0F;
                                 /* Referenced by: '<Root>/Read Calibration9' */
__RWP const volatile real32_T CANB_recover = 0.0F;
                                /* Referenced by: '<Root>/Read Calibration10' */
__RWP const volatile real32_T CANC_recover = 0.0F;
                                /* Referenced by: '<Root>/Read Calibration11' */
__RWP const volatile real32_T Compensation_I = 300.0F;
                                 /* Referenced by: '<S246>/Read Calibration1' */
__RWP const volatile real32_T Compensation_P = 300.0F;
                                  /* Referenced by: '<S246>/Read Calibration' */
__RWP const volatile real32_T Delay = 0.0F;
                                /* Referenced by: '<S229>/Read Calibration19' */
__RWP const volatile boolean_T EPAS_DriverIntervention_overrideOvrCal_val = 0;/* Referenced by: '<S88>/calibration' */
__RWP const volatile boolean_T EPAS_DriverIntervention_overrideOvrEn_val = 0;/* Referenced by: '<S88>/override' */
__RWP const volatile real32_T EPAS_MaxSpeed = 360.0F;
                                  /* Referenced by: '<S195>/Read Calibration' */
__RWP const volatile real32_T EPAS_MaxTorque = 250.0F;
                                 /* Referenced by: '<S196>/Read Calibration1' */
__RWP const volatile real32_T SetACCOvrCal_val = 0.0F;/* Referenced by: '<S178>/calibration' */
__RWP const volatile boolean_T SetACCOvrEn_val = 0;/* Referenced by: '<S178>/override' */
__RWP const volatile real32_T Set_Brake_PosOvrCal_val = 0.0F;/* Referenced by: '<S448>/calibration' */
__RWP const volatile boolean_T Set_Brake_PosOvrEn_val = 0;/* Referenced by: '<S448>/override' */
__RWP const volatile real32_T Set_GasOvrCal_val = 0.0F;/* Referenced by: '<S470>/calibration' */
__RWP const volatile boolean_T Set_GasOvrEn_val = 0;/* Referenced by: '<S470>/override' */
__RWP const volatile real32_T Set_GearEnableOvrCal_val = 1.0F;/* Referenced by: '<S227>/calibration' */
__RWP const volatile boolean_T Set_GearEnableOvrEn_val = 0;/* Referenced by: '<S227>/override' */
__RWP const volatile uint8_T Set_GearOvrCal_val = 1U;/* Referenced by: '<S230>/calibration' */
__RWP const volatile boolean_T Set_GearOvrEn_val = 0;/* Referenced by: '<S230>/override' */
__RWP const volatile real32_T Torque_PID_D = 0.0F;
                                 /* Referenced by: '<S254>/Read Calibration2' */
__RWP const volatile real32_T Torque_PID_I = 0.3F;
                                 /* Referenced by: '<S254>/Read Calibration1' */
__RWP const volatile real32_T Torque_PID_P = 0.05F;
                                  /* Referenced by: '<S254>/Read Calibration' */
__RWP const volatile boolean_T debug_PCheardbeatOvrCal_val = 0;/* Referenced by: '<S403>/calibration' */
__RWP const volatile boolean_T debug_PCheardbeatOvrEn_val = 0;/* Referenced by: '<S403>/override' */
__RWP const volatile boolean_T debug_otonomDisableOvrCal_val = 0;/* Referenced by: '<S402>/calibration' */
__RWP const volatile boolean_T debug_otonomDisableOvrEn_val = 0;/* Referenced by: '<S402>/override' */
__RWP const volatile boolean_T debug_otonomEnableOvrCal_val = 0;/* Referenced by: '<S401>/calibration' */
__RWP const volatile boolean_T debug_otonomEnableOvrEn_val = 0;/* Referenced by: '<S401>/override' */
__RWP const volatile real32_T interval = 0.0F;
                                /* Referenced by: '<S229>/Read Calibration17' */
__RWP const volatile real32_T interval2 = 0.0F;
                                /* Referenced by: '<S229>/Read Calibration18' */
__RWP const volatile real32_T repeat = 5.0F;
                                /* Referenced by: '<S229>/Read Calibration16' */

#define POP__RWP
#include "EcoSectionDef.h"
#define PUSH__MP
#include "EcoSectionDef.h"

/* Definition for custom storage class: Measurement */
__MP real32_T Activate_ThrottleControllerOvrMsr;/* '<S471>/Switch' */
__MP boolean_T BBW_AngleSensorConnection;/* '<S55>/Read CAN Message3' */
__MP real32_T BBW_BoxTemp;             /* '<S54>/Read CAN Message3' */
__MP real32_T BBW_BrakePos;            /* '<S53>/Read CAN Message2' */
__MP boolean_T BBW_CalibrationErr;     /* '<S55>/Read CAN Message3' */
__MP boolean_T BBW_DriverIntervention; /* '<S55>/Read CAN Message3' */
__MP boolean_T BBW_ECUReset;           /* '<S55>/Read CAN Message3' */
__MP boolean_T BBW_MotorConnection;    /* '<S55>/Read CAN Message3' */
__MP real32_T BBW_MotorCurrent;        /* '<S54>/Read CAN Message3' */
__MP real32_T BBW_MotorDuty;           /* '<S54>/Read CAN Message3' */
__MP real32_T BBW_MotorVoltage;        /* '<S54>/Read CAN Message3' */
__MP boolean_T BBW_OnCalibration;      /* '<S55>/Read CAN Message3' */
__MP boolean_T BBW_OverCurrent;        /* '<S55>/Read CAN Message3' */
__MP real32_T BBW_RawTorqueA;          /* '<S54>/Read CAN Message3' */
__MP real32_T BBW_RawTorqueB;          /* '<S54>/Read CAN Message3' */
__MP real32_T BBW_ReferenceBrakePos;   /* '<S53>/Read CAN Message2' */
__MP boolean_T BBW_UnderVoltage;       /* '<S55>/Read CAN Message3' */
__MP real32_T Brake_CalibCMDOvrMsr;    /* '<S399>/Switch' */
__MP uint8_T Brake_ResetOvrMsr;        /* '<S449>/Switch' */
__MP boolean_T Button_Hazard_LightOvrMsr;/* '<S450>/Switch' */
__MP boolean_T Button_Headlight_FlasherOvrMsr;/* '<S454>/Switch' */
__MP boolean_T Button_HighBeamOvrMsr;  /* '<S453>/Switch' */
__MP boolean_T Button_Left_BlinkerOvrMsr;/* '<S451>/Switch' */
__MP boolean_T Button_Right_BlinkerOvrMsr;/* '<S452>/Switch' */
__MP boolean_T Buzz_controlOvrMsr;     /* '<S455>/Switch' */
__MP boolean_T Diag_BrakePowerErr;     /* '<S202>/OR7' */
__MP boolean_T Diag_By_wirePowerErr;   /* '<S202>/OR1' */
__MP boolean_T Diag_EPASPowerErr;      /* '<S202>/OR6' */
__MP boolean_T Diag_KL75;              /* '<S204>/OR' */
__MP boolean_T Diag_PDS_BUSErr;        /* '<S206>/Compare' */
__MP boolean_T Diag_PDS_HeartbeatErr;  /* '<S202>/OR' */
__MP boolean_T Diag_isMotorrunning;    /* '<S204>/OR1' */
__MP real32_T EPAS_ActualSteeringPos;  /* '<S75>/Read CAN Message2' */
__MP boolean_T EPAS_AngleSensorConnection;/* '<S77>/Read CAN Message3' */
__MP real32_T EPAS_BoxTemp;            /* '<S76>/Read CAN Message3' */
__MP boolean_T EPAS_DriverIntervention;/* '<S77>/Read CAN Message3' */
__MP boolean_T EPAS_DriverIntervention_overrideOvrMsr;/* '<S88>/Switch' */
__MP boolean_T EPAS_ECUReset;          /* '<S77>/Read CAN Message3' */
__MP boolean_T EPAS_MotorConnection;   /* '<S77>/Read CAN Message3' */
__MP real32_T EPAS_MotorCurrent;       /* '<S76>/Read CAN Message3' */
__MP real32_T EPAS_MotorDuty;          /* '<S76>/Read CAN Message3' */
__MP real32_T EPAS_MotorVoltage;       /* '<S76>/Read CAN Message3' */
__MP boolean_T EPAS_OverCurrent;       /* '<S77>/Read CAN Message3' */
__MP real32_T EPAS_RefSteerPos;        /* '<S75>/Read CAN Message2' */
__MP real32_T EPAS_TorqueA;            /* '<S76>/Read CAN Message3' */
__MP real32_T EPAS_TorqueB;            /* '<S76>/Read CAN Message3' */
__MP boolean_T EPAS_UnderVoltage;      /* '<S77>/Read CAN Message3' */
__MP real32_T GOLF_AcceleratorRawValur;/* '<S114>/Read CAN Message' */
__MP real32_T GOLF_BLWheelSpeed;       /* '<S116>/Read CAN Message' */
__MP real32_T GOLF_BRWheelSpeed;       /* '<S116>/Read CAN Message' */
__MP real32_T GOLF_BlinkerLeft;        /* '<S105>/Read CAN Message' */
__MP real32_T GOLF_BlinkerRight;       /* '<S105>/Read CAN Message' */
__MP real32_T GOLF_BrakePedalPos;      /* '<S101>/Read CAN Message' */
__MP uint8_T GOLF_CurrentGear;         /* '<S115>/Read CAN Message' */
__MP real32_T GOLF_FLWheelSpeed;       /* '<S116>/Read CAN Message' */
__MP real32_T GOLF_FRWheelSpeed;       /* '<S116>/Read CAN Message' */
__MP real32_T GOLF_Fuel;               /* '<S109>/Read CAN Message1' */
__MP real32_T GOLF_Fuel_ratio;         /* '<S109>/Divide' */
__MP real32_T GOLF_GearLevel;          /* '<S107>/Delay' */
__MP real32_T GOLF_HandBrakeStatus;    /* '<S103>/Read CAN Message' */
__MP boolean_T GOLF_HazardLight;       /* '<S118>/Switch' */
__MP real32_T GOLF_HighBeam;           /* '<S105>/Read CAN Message' */
__MP real32_T GOLF_KL75;               /* '<S113>/Read CAN Message' */
__MP real32_T GOLF_LWIQbit_SteeringWheelAngle;/* '<S110>/Read CAN Message' */
__MP real32_T GOLF_LWIVZ_SteeringWheelAngle;/* '<S110>/Read CAN Message' */
__MP real32_T GOLF_LWIVZ_SteeringWheelAngle_Speed;/* '<S110>/Read CAN Message' */
__MP real32_T GOLF_LWI_SteeringWheelAngle;/* '<S110>/Read CAN Message' */
__MP real32_T GOLF_LWI_SteeringWheelAngle_Speed;/* '<S110>/Read CAN Message' */
__MP real32_T GOLF_LongitudinalAcceleration;/* '<S103>/Read CAN Message' */
__MP real32_T GOLF_MotorRPM;           /* '<S112>/Read CAN Message' */
__MP real32_T GOLF_MotorTorque_filtered;/* '<S111>/Read CAN Message' */
__MP real32_T GOLF_MotorTorque_raw;    /* '<S111>/Read CAN Message' */
__MP uint8_T GOLF_StartStop;           /* '<S113>/Read CAN Message' */
__MP real32_T GOLF_rxACC;              /* '<S106>/Read CAN Message' */
__MP real32_T GOLF_rxESPBrakePressure; /* '<S104>/Read CAN Message' */
__MP real32_T GOLF_rxPitch;            /* '<S108>/Read CAN Message' */
__MP uint32_T GOLF_rxVehiclemass;      /* '<S108>/Read CAN Message' */
__MP real32_T PC_FrontwheelMsg_Freq;   /* '<S173>/Divide' */
__MP uint32_T PC_FrontwheelMsg_cnt;    /* '<S169>/Read CAN Message' */
__MP uint8_T PC_LongMode;              /* '<S172>/Read CAN Message' */
__MP real32_T PC_SetBrakePos;          /* '<S171>/Read CAN Message' */
__MP real32_T PC_SetFrontWheelAngel_Rate;/* '<S169>/Read CAN Message' */
__MP real32_T PC_SetFrontWheelAngle;   /* '<S169>/Read CAN Message' */
__MP real32_T PC_SetGasPos;            /* '<S171>/Read CAN Message' */
__MP real32_T PC_SetLimitVel;          /* '<S170>/Read CAN Message' */
__MP real32_T PC_SetLongAcc;           /* '<S170>/Read CAN Message' */
__MP uint8_T PC_blinker;               /* '<S172>/Read CAN Message' */
__MP uint8_T PC_gear;                  /* '<S172>/Read CAN Message' */
__MP uint8_T PC_handBrake;             /* '<S172>/Read CAN Message' */
__MP uint8_T PC_headlight;             /* '<S172>/Read CAN Message' */
__MP uint8_T PC_mode;                  /* '<S172>/Read CAN Message' */
__MP uint8_T PC_wiper;                 /* '<S172>/Read CAN Message' */
__MP real32_T PDS_BoardTemp;           /* '<S21>/Read CAN Message1' */
__MP real32_T PDS_CH10Current;         /* '<S18>/Read CAN Message4' */
__MP real32_T PDS_CH1Current;          /* '<S20>/Read CAN Message2' */
__MP real32_T PDS_CH2Current;          /* '<S20>/Read CAN Message2' */
__MP real32_T PDS_CH3Current;          /* '<S20>/Read CAN Message2' */
__MP real32_T PDS_CH4Current;          /* '<S20>/Read CAN Message2' */
__MP real32_T PDS_CH5Current;          /* '<S19>/Read CAN Message3' */
__MP real32_T PDS_CH6Current;          /* '<S19>/Read CAN Message3' */
__MP real32_T PDS_CH7Current;          /* '<S19>/Read CAN Message3' */
__MP real32_T PDS_CH8Current;          /* '<S19>/Read CAN Message3' */
__MP real32_T PDS_CH9Current;          /* '<S18>/Read CAN Message4' */
__MP uint8_T PDS_Errors;               /* '<S17>/Read CAN Message' */
__MP real32_T PDS_InputCurrent;        /* '<S21>/Read CAN Message1' */
__MP real32_T PDS_InputVoltage;        /* '<S21>/Read CAN Message1' */
__MP uint8_T PDS_Status1;              /* '<S17>/Read CAN Message' */
__MP uint8_T PDS_Status10;             /* '<S17>/Read CAN Message' */
__MP uint8_T PDS_Status2;              /* '<S17>/Read CAN Message' */
__MP uint8_T PDS_Status3;              /* '<S17>/Read CAN Message' */
__MP uint8_T PDS_Status4;              /* '<S17>/Read CAN Message' */
__MP uint8_T PDS_Status5;              /* '<S17>/Read CAN Message' */
__MP uint8_T PDS_Status6;              /* '<S17>/Read CAN Message' */
__MP uint8_T PDS_Status7;              /* '<S17>/Read CAN Message' */
__MP uint8_T PDS_Status8;              /* '<S17>/Read CAN Message' */
__MP uint8_T PDS_Status9;              /* '<S17>/Read CAN Message' */
__MP boolean_T PwrM_flgKeyOnDelay;     /* '<S425>/debounce' */
__MP boolean_T PwrM_flgKeyOnRaw;       /* '<S418>/Switch' */
__MP real32_T SetACCOvrMsr;            /* '<S178>/Switch' */
__MP real32_T Set_Brake_PosOvrMsr;     /* '<S448>/Switch' */
__MP real32_T Set_GasOvrMsr;           /* '<S470>/Switch' */
__MP real32_T Set_GearEnableOvrMsr;    /* '<S227>/Switch' */
__MP uint8_T Set_GearOvrMsr;           /* '<S230>/Switch' */
__MP real32_T Steering_Angle;          /* '<S110>/Product' */
__MP real32_T Steering_Angle_Speed;    /* '<S110>/Product1' */
__MP real32_T THROTTLE_CurrentPedalPos;/* '<S16>/Read CAN Message' */
__MP real32_T THROTTLE_ECUTimeout;     /* '<S16>/Read CAN Message' */
__MP real32_T THROTTLE_PedalConnectionError;/* '<S16>/Read CAN Message' */
__MP real32_T debug_CompensationPID_out;/* '<S300>/Saturation' */
__MP boolean_T debug_EPAS_ECU_reset;   /* '<S195>/Chart' */
__MP uint8_T debug_EPASmode;           /* '<S195>/Chart' */
__MP real32_T debug_EPASsetsteer;      /* '<S195>/Chart' */
__MP real32_T debug_EPASspeedlimit;    /* '<S195>/Chart' */
__MP boolean_T debug_Errors;           /* '<S198>/OR' */
__MP real32_T debug_Fr_request;        /* '<S246>/Sum' */
__MP real32_T debug_GateTorquelimit;   /* '<S196>/Chart' */
__MP real32_T debug_Gatesetsteer;      /* '<S196>/Chart' */
__MP boolean_T debug_Mode;             /* '<S198>/Chart' */
__MP boolean_T debug_PCheardbeatOvrMsr;/* '<S403>/Switch' */
__MP real32_T debug_filtered_ACC;      /* '<S249>/Moving Average2' */
__MP boolean_T debug_otonomDisableOvrMsr;/* '<S402>/Switch' */
__MP boolean_T debug_otonomEnableOvrMsr;/* '<S401>/Switch' */
__MP real32_T debug_set_brake;         /* '<S246>/Switch2' */
__MP boolean_T debug_stopmode;         /* '<S247>/Chart1' */
__MP real32_T gear_cnt;                /* '<S229>/Data Type Conversion2' */

#define POP__MP
#include "EcoSectionDef.h"

/* Block signals (default storage) */
B B_n;

/* Block states (default storage) */
DW DW_l;

/* Previous zero-crossings (trigger) states */
PrevZCX PrevZCX_p;

/* Real-time model */
RT_MODEL M_;
RT_MODEL *const M = &M_;
extern const real_T rtCP_pooled_BaPzFvwcG3vF[21];
extern const real_T rtCP_pooled_QkvJEdBo1OP0[21];
extern const real32_T rtCP_pooled_r2WK58RWNLot[4];
extern const real32_T rtCP_pooled_GM7ktyKX6RQC[4];
extern const real32_T rtCP_pooled_6F8ZDledXhTe[28];
extern const real32_T rtCP_pooled_A03rAal5NiYk[28];
extern const real32_T rtCP_pooled_f8ctJKsXoJSi[6];
extern const real32_T rtCP_pooled_N87o8IFiLF1E[6];
extern const real32_T rtCP_pooled_ljL04Oc4Io4G[6];

#define rtCP_uDLookupTable_tableData   rtCP_pooled_BaPzFvwcG3vF  /* Expression: [0 7 8 9 10 11 12 15 20 25 30 35 40 45 50 55 60 65 70 75 80]
                                                                  * Referenced by: '<S443>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data    rtCP_pooled_QkvJEdBo1OP0  /* Expression: [0 1.6 2.4 4 5.6 6.8 8 12.4 18.8 26 32.4 39 46 53.2 59.6 66.8 73.6 80.4 87.2 94 100]
                                                                  * Referenced by: '<S443>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_tableData_b rtCP_pooled_r2WK58RWNLot  /* Computed Parameter: rtCP_uDLookupTable_tableData_b
                                                                  * Referenced by: '<S253>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_d  rtCP_pooled_GM7ktyKX6RQC  /* Computed Parameter: rtCP_uDLookupTable_bp01Data_d
                                                                  * Referenced by: '<S253>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_tableData_j rtCP_pooled_6F8ZDledXhTe  /* Computed Parameter: rtCP_uDLookupTable_tableData_j
                                                                  * Referenced by: '<S235>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_k  rtCP_pooled_A03rAal5NiYk  /* Computed Parameter: rtCP_uDLookupTable_bp01Data_k
                                                                  * Referenced by: '<S235>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_tableData_bp rtCP_pooled_A03rAal5NiYk /* Computed Parameter: rtCP_uDLookupTable_tableData_bp
                                                                  * Referenced by: '<S479>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_c  rtCP_pooled_6F8ZDledXhTe  /* Computed Parameter: rtCP_uDLookupTable_bp01Data_c
                                                                  * Referenced by: '<S479>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_tableData_e rtCP_pooled_6F8ZDledXhTe  /* Computed Parameter: rtCP_uDLookupTable_tableData_e
                                                                  * Referenced by: '<S241>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_l  rtCP_pooled_A03rAal5NiYk  /* Computed Parameter: rtCP_uDLookupTable_bp01Data_l
                                                                  * Referenced by: '<S241>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_tableData_l rtCP_pooled_f8ctJKsXoJSi  /* Computed Parameter: rtCP_uDLookupTable_tableData_l
                                                                  * Referenced by: '<S246>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_ly rtCP_pooled_N87o8IFiLF1E  /* Computed Parameter: rtCP_uDLookupTable_bp01Data_ly
                                                                  * Referenced by: '<S246>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_tableData_m rtCP_pooled_ljL04Oc4Io4G  /* Computed Parameter: rtCP_uDLookupTable_tableData_m
                                                                  * Referenced by: '<S261>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_d0 rtCP_pooled_N87o8IFiLF1E  /* Computed Parameter: rtCP_uDLookupTable_bp01Data_d0
                                                                  * Referenced by: '<S261>/1-D Lookup Table'
                                                                  */

void Ecotron_step0(void);
void Ecotron_step1(void);
void Ecotron_step2(void);
void Ecotron_step3(void);
void Ecotron_step4(void);
void Ecotron_step5(void);
void Ecotron_step6(void);
void Ecotron_step7(void);
void Ecotron_step8(void);

/* Forward declaration for local functions */
static void init(void);
static void SystemCore_release(dsp_simulink_MovingAverage *obj);
static void SystemCore_delete(dsp_simulink_MovingAverage *obj);
static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingAverage *obj);
void flData2SigCnn1U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x400_0_3_1U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*------------------Float32 signal local variables definition------------------*/
  real32_T tempReal32= 0;

  /*------------------Float32 signal local variables definition------------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_D)) {
    flgDrtSlt0x400_0_3_1U= 0;
  } else {
    flgDrtSlt0x400_0_3_1U= F_Servece_CAN_ReceiveDirect(&SvcCANDrtSlt0x400_0_3_1U,
      &messageObj);
  }

  B_n.ReadCANMessage_o1= flgDrtSlt0x400_0_3_1U;
  if (1==flgDrtSlt0x400_0_3_1U) {
    cntDrtSlt0x400_0_3_1U= cntDrtSlt0x400_0_3_1U+1;
    B_n.ReadCANMessage_o2= cntDrtSlt0x400_0_3_1U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 2--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:32U byteOrder:LITTLEENDIAN(0U) dataType:uint32_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint32_T)(
        ((uint32_T)(dataPtr_tmp[0] ) )
        | ((uint32_T)(dataPtr_tmp[1] ) <<8U )
        | ((uint32_T)(dataPtr_tmp[2] ) <<16U )
        | ((uint32_T)(dataPtr_tmp[3] ) <<24U )
        );
      tempReal32= *((real32_T*)(&uint32_temp));
      PC_SetLongAcc= (real32_T)tempReal32;
    }

    {
      /*--Order:3 startBit:32U length:32U byteOrder:LITTLEENDIAN(0U) dataType:uint32_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint32_T)(
        ((uint32_T)(dataPtr_tmp[4] ) )
        | ((uint32_T)(dataPtr_tmp[5] ) <<8U )
        | ((uint32_T)(dataPtr_tmp[6] ) <<16U )
        | ((uint32_T)(dataPtr_tmp[7] ) <<24U )
        );
      tempReal32= *((real32_T*)(&uint32_temp));
      PC_SetLimitVel= (real32_T)tempReal32;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn2U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0xB5_0_1_2U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0xB5_0_1_2U= 0;
  } else {
    flgDrtSlt0xB5_0_1_2U= F_Servece_CAN_ReceiveDirect(&SvcCANDrtSlt0xB5_0_1_2U,
      &messageObj);
  }

  B_n.ReadCANMessage_o1_l= flgDrtSlt0xB5_0_1_2U;
  if (1==flgDrtSlt0xB5_0_1_2U) {
    cntDrtSlt0xB5_0_1_2U= cntDrtSlt0xB5_0_1_2U+1;
    B_n.ReadCANMessage_o2_k= cntDrtSlt0xB5_0_1_2U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 9--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[0] ) )
        );
      B_n.Checksum= (uint32_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:8U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] & 0xF) )
        );
      B_n.Counter= (uint32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:12U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] & 0xF0) >>4U )
        );
      GOLF_CurrentGear= (uint8_T)uint32_temp;
    }

    {
      /*--Order:5 startBit:16U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[2] ) )
        );
      B_n.SwitchRelated1= (uint32_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:24U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[3] ) )
        );
      B_n.RandomSignal= (uint32_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:32U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[4] ) )
        );
      B_n.RandomSignal2= (uint32_T)uint32_temp;
    }

    {
      /*--Order:8 startBit:40U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[5] ) )
        );
      B_n.SwitchRelated2= (uint32_T)uint32_temp;
    }

    {
      /*--Order:9 startBit:48U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[6] ) )
        );
      B_n.NoIdea2= (uint32_T)uint32_temp;
    }

    {
      /*--Order:10 startBit:56U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[7] ) )
        );
      B_n.NoIdea3= (uint32_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn3U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0xA8_0_1_3U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0xA8_0_1_3U= 0;
  } else {
    flgDrtSlt0xA8_0_1_3U= F_Servece_CAN_ReceiveDirect(&SvcCANDrtSlt0xA8_0_1_3U,
      &messageObj);
  }

  B_n.ReadCANMessage_o1_n= flgDrtSlt0xA8_0_1_3U;
  if (1==flgDrtSlt0xA8_0_1_3U) {
    cntDrtSlt0xA8_0_1_3U= cntDrtSlt0xA8_0_1_3U+1;
    B_n.ReadCANMessage_o2_j= cntDrtSlt0xA8_0_1_3U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 8--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[0] ) )
        );
      B_n.rxMotor_12CRC= (uint32_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:8U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] & 0xF) )
        );
      B_n.rxMotor_12BZ= (uint32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:12U length:9U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:-509.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[1] & 0xF0) >>4U )
        | ((uint16_T)(dataPtr_tmp[2] & 0x1F) <<4U )
        );
      B_n.rxMO_MomNeg_available= (uint32_T)uint32_temp+(-509.0);
    }

    {
      /*--Order:5 startBit:21U length:9U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[2] & 0xE0) >>5U )
        | ((uint16_T)(dataPtr_tmp[3] & 0x3F) <<3U )
        );
      B_n.rxMO_MomLim_stat= (uint32_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:30U length:10U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:-509.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[3] & 0xC0) >>6U )
        | ((uint16_T)(dataPtr_tmp[4] ) <<2U )
        );
      B_n.rxMO_MomLim_dyn= (uint32_T)uint32_temp+(-509.0);
    }

    {
      /*--Order:7 startBit:40U length:7U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[5] & 0x7F) )
        );
      B_n.rxMO_Momentenintegral02= (uint32_T)uint32_temp;
    }

    {
      /*--Order:8 startBit:47U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[5] & 0x80) >>7U )
        );
      B_n.rxMO_QBitRotationSpeed_01= (uint32_T)uint32_temp;
    }

    {
      /*--Order:9 startBit:48U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:0.25 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[6] ) )
        | ((uint16_T)(dataPtr_tmp[7] ) <<8U )
        );
      GOLF_MotorRPM= (real32_T)uint32_temp*(0.25);
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn4U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x3BE_0_1_4U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0x3BE_0_1_4U= 0;
  } else {
    flgDrtSlt0x3BE_0_1_4U= F_Servece_CAN_ReceiveDirect(&SvcCANDrtSlt0x3BE_0_1_4U,
      &messageObj);
  }

  B_n.ReadCANMessage_o1_o= flgDrtSlt0x3BE_0_1_4U;
  if (1==flgDrtSlt0x3BE_0_1_4U) {
    cntDrtSlt0x3BE_0_1_4U= cntDrtSlt0x3BE_0_1_4U+1;
    B_n.ReadCANMessage_o2_f= cntDrtSlt0x3BE_0_1_4U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 31--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:12U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] & 0x30) >>4U )
        );
      B_n.rxMO_StartStoppStatus= (uint32_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:14U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x40) >>6U )
        );
      B_n.rxMO_StartStoppRestart= (uint32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:15U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x80) >>7U )
        );
      GOLF_StartStop= (uint8_T)uint32_temp;
    }

    {
      /*--Order:5 startBit:16U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[2] & 0x3) )
        );
      B_n.rxMO_FreigReku= (uint32_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:18U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x4) >>2U )
        );
      GOLF_KL75= (real32_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:19U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x8) >>3U )
        );
      B_n.rxMO_Kl50= (uint32_T)uint32_temp;
    }

    {
      /*--Order:8 startBit:20U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[2] & 0xF0) >>4U )
        );
      B_n.rxMO_Gearposition= (uint32_T)uint32_temp;
    }

    {
      /*--Order:9 startBit:24U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[3] & 0x3) )
        );
      B_n.rxMO_StartStoppDriverRequest= (uint32_T)uint32_temp;
    }

    {
      /*--Order:10 startBit:26U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x4) >>2U )
        );
      B_n.rxMO_HYBReadinesstoDrive= (uint32_T)uint32_temp;
    }

    {
      /*--Order:11 startBit:27U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x8) >>3U )
        );
      B_n.rxMO_ExtE_Fahrt_aktiv= (uint32_T)uint32_temp;
    }

    {
      /*--Order:12 startBit:28U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x10) >>4U )
        );
      B_n.rxMO_DriverBrake= (uint32_T)uint32_temp;
    }

    {
      /*--Order:13 startBit:29U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x20) >>5U )
        );
      B_n.rxMO_QBitDriver_Brake= (uint32_T)uint32_temp;
    }

    {
      /*--Order:14 startBit:30U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x40) >>6U )
        );
      B_n.rxMO_BLS= (uint32_T)uint32_temp;
    }

    {
      /*--Order:15 startBit:31U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x80) >>7U )
        );
      B_n.rxMO_ConsistencyBrakePedal= (uint32_T)uint32_temp;
    }

    {
      /*--Order:16 startBit:32U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x1) )
        );
      B_n.rxMO_TimeoutESP= (uint32_T)uint32_temp;
    }

    {
      /*--Order:17 startBit:33U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[4] & 0x6) >>1U )
        );
      B_n.rxMO_KlimaEingr= (uint32_T)uint32_temp;
    }

    {
      /*--Order:18 startBit:35U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x8) >>3U )
        );
      B_n.rxMO_AusspAnlass= (uint32_T)uint32_temp;
    }

    {
      /*--Order:19 startBit:36U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x10) >>4U )
        );
      B_n.rxMO_FreigAnlass= (uint32_T)uint32_temp;
    }

    {
      /*--Order:20 startBit:37U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x20) >>5U )
        );
      B_n.rxMO_KupplSchalter= (uint32_T)uint32_temp;
    }

    {
      /*--Order:21 startBit:38U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x40) >>6U )
        );
      B_n.rxMO_Interlock= (uint32_T)uint32_temp;
    }

    {
      /*--Order:22 startBit:39U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x80) >>7U )
        );
      B_n.rxMO_MotorLaeuft= (uint32_T)uint32_temp;
    }

    {
      /*--Order:23 startBit:40U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[5] & 0x1) )
        );
      B_n.rxMO_Kickdown= (uint32_T)uint32_temp;
    }

    {
      /*--Order:24 startBit:41U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[5] & 0x2) >>1U )
        );
      B_n.rxMO_StatusZylabschalt_01= (uint32_T)uint32_temp;
    }

    {
      /*--Order:25 startBit:42U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[5] & 0xC) >>2U )
        );
      B_n.rxMO_EKlKomLeiRed= (uint32_T)uint32_temp;
    }

    {
      /*--Order:26 startBit:44U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[5] & 0x10) >>4U )
        );
      B_n.rxMO_HandshakeSTH= (uint32_T)uint32_temp;
    }

    {
      /*--Order:27 startBit:45U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[5] & 0x20) >>5U )
        );
      B_n.rxMO_BKVLowPressureWarning= (uint32_T)uint32_temp;
    }

    {
      /*--Order:28 startBit:46U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[5] & 0x40) >>6U )
        );
      B_n.rxMO_FreigabeSegeln= (uint32_T)uint32_temp;
    }

    {
      /*--Order:29 startBit:47U length:3U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[5] & 0x80) >>7U )
        | ((uint8_T)(dataPtr_tmp[6] & 0x3) <<1U )
        );
      B_n.rxMO_PTCStatus= (uint32_T)uint32_temp;
    }

    {
      /*--Order:30 startBit:50U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[6] & 0x4) >>2U )
        );
      B_n.rxMO_QBitGearposition= (uint32_T)uint32_temp;
    }

    {
      /*--Order:31 startBit:51U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[6] & 0x8) >>3U )
        );
      B_n.rxMO_GearPositionSignal_Source= (uint32_T)uint32_temp;
    }

    {
      /*--Order:32 startBit:52U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[6] & 0x10) >>4U )
        );
      B_n.rxMO_RemotestartBetrieb= (uint32_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn5U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x420_0_2_5U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_C)) {
    flgDrtSlt0x420_0_2_5U= 0;
  } else {
    flgDrtSlt0x420_0_2_5U= F_Servece_CAN_ReceiveDirect(&SvcCANDrtSlt0x420_0_2_5U,
      &messageObj);
  }

  B_n.ReadCANMessage_o1_os= flgDrtSlt0x420_0_2_5U;
  if (1==flgDrtSlt0x420_0_2_5U) {
    cntDrtSlt0x420_0_2_5U= cntDrtSlt0x420_0_2_5U+1;
    B_n.ReadCANMessage_o2_a= cntDrtSlt0x420_0_2_5U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 11--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:16U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[2] & 0xF) )
        );
      PDS_Status1= (uint8_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:20U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[2] & 0xF0) >>4U )
        );
      PDS_Status2= (uint8_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:24U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[3] & 0xF) )
        );
      PDS_Status3= (uint8_T)uint32_temp;
    }

    {
      /*--Order:5 startBit:28U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[3] & 0xF0) >>4U )
        );
      PDS_Status4= (uint8_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:32U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[4] & 0xF) )
        );
      PDS_Status5= (uint8_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:36U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[4] & 0xF0) >>4U )
        );
      PDS_Status6= (uint8_T)uint32_temp;
    }

    {
      /*--Order:8 startBit:40U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[5] & 0xF) )
        );
      PDS_Status7= (uint8_T)uint32_temp;
    }

    {
      /*--Order:9 startBit:44U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[5] & 0xF0) >>4U )
        );
      PDS_Status8= (uint8_T)uint32_temp;
    }

    {
      /*--Order:10 startBit:48U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[6] & 0xF) )
        );
      PDS_Status9= (uint8_T)uint32_temp;
    }

    {
      /*--Order:11 startBit:52U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[6] & 0xF0) >>4U )
        );
      PDS_Status10= (uint8_T)uint32_temp;
    }

    {
      /*--Order:12 startBit:56U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[7] ) )
        );
      PDS_Errors= (uint8_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn6U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x43C_0_2_6U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*------------------Signed signal local variables definition------------------*/
  int32_T int32_temp= 0;

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_C)) {
    flgDrtSlt0x43C_0_2_6U= 0;
  } else {
    flgDrtSlt0x43C_0_2_6U= F_Servece_CAN_ReceiveDirect(&SvcCANDrtSlt0x43C_0_2_6U,
      &messageObj);
  }

  B_n.ReadCANMessage1_o1= flgDrtSlt0x43C_0_2_6U;
  if (1==flgDrtSlt0x43C_0_2_6U) {
    cntDrtSlt0x43C_0_2_6U= cntDrtSlt0x43C_0_2_6U+1;
    B_n.ReadCANMessage1_o2= cntDrtSlt0x43C_0_2_6U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 3--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:16U byteOrder:LITTLEENDIAN(0U) dataType:int16_T--*/
      /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int16_T)(
        ((int16_T)(dataPtr_tmp[0] ) )
        | ((int16_T)(dataPtr_tmp[1] ) <<8U )
        );

      /* SignExtend signalSize:16U*/
      //fHex:65535U
      //fHex:0xFFFF
      if ((int32_temp & (1 << 15U)) !=0 ) {
        int32_temp |= ~0xFFFF;
      }

      PDS_BoardTemp= (real32_T)int32_temp*(0.01);
    }

    {
      /*--Order:3 startBit:16U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[2] ) )
        | ((uint16_T)(dataPtr_tmp[3] ) <<8U )
        );
      PDS_InputVoltage= (real32_T)uint32_temp*(0.01);
    }

    {
      /*--Order:4 startBit:32U length:16U byteOrder:LITTLEENDIAN(0U) dataType:int16_T--*/
      /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int16_T)(
        ((int16_T)(dataPtr_tmp[4] ) )
        | ((int16_T)(dataPtr_tmp[5] ) <<8U )
        );

      /* SignExtend signalSize:16U*/
      //fHex:65535U
      //fHex:0xFFFF
      if ((int32_temp & (1 << 15U)) !=0 ) {
        int32_temp |= ~0xFFFF;
      }

      PDS_InputCurrent= (real32_T)int32_temp*(0.01);
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn7U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x475_0_2_7U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_C)) {
    flgDrtSlt0x475_0_2_7U= 0;
  } else {
    flgDrtSlt0x475_0_2_7U= F_Servece_CAN_ReceiveDirect(&SvcCANDrtSlt0x475_0_2_7U,
      &messageObj);
  }

  B_n.ReadCANMessage_o1_p= flgDrtSlt0x475_0_2_7U;
  if (1==flgDrtSlt0x475_0_2_7U) {
    cntDrtSlt0x475_0_2_7U= cntDrtSlt0x475_0_2_7U+1;
    B_n.ReadCANMessage_o2_jp= cntDrtSlt0x475_0_2_7U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 3--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[0] ) )
        | ((uint16_T)(dataPtr_tmp[1] ) <<8U )
        );
      THROTTLE_CurrentPedalPos= (real32_T)uint32_temp*(0.01);
    }

    {
      /*--Order:3 startBit:16U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x1) )
        );
      THROTTLE_ECUTimeout= (real32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:17U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x2) >>1U )
        );
      THROTTLE_PedalConnectionError= (real32_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn8U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x294_0_2_8U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_C)) {
    flgDrtSlt0x294_0_2_8U= 0;
  } else {
    flgDrtSlt0x294_0_2_8U= F_Servece_CAN_ReceiveDirect(&SvcCANDrtSlt0x294_0_2_8U,
      &messageObj);
  }

  B_n.ReadCANMessage3_o1= flgDrtSlt0x294_0_2_8U;
  if (1==flgDrtSlt0x294_0_2_8U) {
    cntDrtSlt0x294_0_2_8U= cntDrtSlt0x294_0_2_8U+1;
    B_n.ReadCANMessage3_o2= cntDrtSlt0x294_0_2_8U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 7--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x1) )
        );
      EPAS_MotorConnection= (boolean_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:1U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x2) >>1U )
        );
      EPAS_OverCurrent= (boolean_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:2U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x4) >>2U )
        );
      EPAS_AngleSensorConnection= (boolean_T)uint32_temp;
    }

    {
      /*--Order:5 startBit:3U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x8) >>3U )
        );
      EPAS_DriverIntervention= (boolean_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:4U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x10) >>4U )
        );
      EPAS_ECUReset= (boolean_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:5U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x20) >>5U )
        );
      EPAS_UnderVoltage= (boolean_T)uint32_temp;
    }

    {
      /*--Order:8 startBit:8U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] ) )
        );
      B_n.RBF_unused= (uint32_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn9U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x312_0_2_9U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_C)) {
    flgDrtSlt0x312_0_2_9U= 0;
  } else {
    flgDrtSlt0x312_0_2_9U= F_Servece_CAN_ReceiveDirect(&SvcCANDrtSlt0x312_0_2_9U,
      &messageObj);
  }

  B_n.ReadCANMessage3_o1_f= flgDrtSlt0x312_0_2_9U;
  if (1==flgDrtSlt0x312_0_2_9U) {
    cntDrtSlt0x312_0_2_9U= cntDrtSlt0x312_0_2_9U+1;
    B_n.ReadCANMessage3_o2_m= cntDrtSlt0x312_0_2_9U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 8--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x1) )
        );
      BBW_MotorConnection= (boolean_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:1U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x2) >>1U )
        );
      BBW_OverCurrent= (boolean_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:2U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x4) >>2U )
        );
      BBW_AngleSensorConnection= (boolean_T)uint32_temp;
    }

    {
      /*--Order:5 startBit:3U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x8) >>3U )
        );
      BBW_DriverIntervention= (boolean_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:4U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x10) >>4U )
        );
      BBW_ECUReset= (boolean_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:5U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x20) >>5U )
        );
      BBW_UnderVoltage= (boolean_T)uint32_temp;
    }

    {
      /*--Order:8 startBit:6U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x40) >>6U )
        );
      BBW_CalibrationErr= (boolean_T)uint32_temp;
    }

    {
      /*--Order:9 startBit:7U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x80) >>7U )
        );
      BBW_OnCalibration= (boolean_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn10U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x310_0_2_10U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*------------------Float32 signal local variables definition------------------*/
  real32_T tempReal32= 0;

  /*------------------Float32 signal local variables definition------------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_C)) {
    flgDrtSlt0x310_0_2_10U= 0;
  } else {
    flgDrtSlt0x310_0_2_10U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x310_0_2_10U, &messageObj);
  }

  B_n.ReadCANMessage2_o1= flgDrtSlt0x310_0_2_10U;
  if (1==flgDrtSlt0x310_0_2_10U) {
    cntDrtSlt0x310_0_2_10U= cntDrtSlt0x310_0_2_10U+1;
    B_n.ReadCANMessage2_o2= cntDrtSlt0x310_0_2_10U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 2--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:32U byteOrder:LITTLEENDIAN(0U) dataType:uint32_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint32_T)(
        ((uint32_T)(dataPtr_tmp[0] ) )
        | ((uint32_T)(dataPtr_tmp[1] ) <<8U )
        | ((uint32_T)(dataPtr_tmp[2] ) <<16U )
        | ((uint32_T)(dataPtr_tmp[3] ) <<24U )
        );
      tempReal32= *((real32_T*)(&uint32_temp));
      BBW_ReferenceBrakePos= (real32_T)tempReal32;
    }

    {
      /*--Order:3 startBit:32U length:32U byteOrder:LITTLEENDIAN(0U) dataType:uint32_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint32_T)(
        ((uint32_T)(dataPtr_tmp[4] ) )
        | ((uint32_T)(dataPtr_tmp[5] ) <<8U )
        | ((uint32_T)(dataPtr_tmp[6] ) <<16U )
        | ((uint32_T)(dataPtr_tmp[7] ) <<24U )
        );
      tempReal32= *((real32_T*)(&uint32_temp));
      BBW_BrakePos= (real32_T)tempReal32;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn11U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x311_0_2_11U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*------------------Signed signal local variables definition------------------*/
  int32_T int32_temp= 0;

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_C)) {
    flgDrtSlt0x311_0_2_11U= 0;
  } else {
    flgDrtSlt0x311_0_2_11U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x311_0_2_11U, &messageObj);
  }

  B_n.ReadCANMessage3_o1_fl= flgDrtSlt0x311_0_2_11U;
  if (1==flgDrtSlt0x311_0_2_11U) {
    cntDrtSlt0x311_0_2_11U= cntDrtSlt0x311_0_2_11U+1;
    B_n.ReadCANMessage3_o2_i= cntDrtSlt0x311_0_2_11U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 6--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:int8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int8_T)(
                            ((int8_T)(dataPtr_tmp[0] ) )
                            );

      /* SignExtend signalSize:8U*/
      //fHex:255U
      //fHex:0xFF
      if ((int32_temp & (1 << 7U)) !=0 ) {
        int32_temp |= ~0xFF;
      }

      BBW_MotorDuty= (real32_T)int32_temp;
    }

    {
      /*--Order:3 startBit:8U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] ) )
        );
      BBW_MotorCurrent= (real32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:16U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:0.15 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[2] ) )
        );
      BBW_MotorVoltage= (real32_T)uint32_temp*(0.15);
    }

    {
      /*--Order:5 startBit:24U length:8U byteOrder:LITTLEENDIAN(0U) dataType:int8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int8_T)(
                            ((int8_T)(dataPtr_tmp[3] ) )
                            );

      /* SignExtend signalSize:8U*/
      //fHex:255U
      //fHex:0xFF
      if ((int32_temp & (1 << 7U)) !=0 ) {
        int32_temp |= ~0xFF;
      }

      BBW_BoxTemp= (real32_T)int32_temp;
    }

    {
      /*--Order:6 startBit:32U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[4] ) )
        | ((uint16_T)(dataPtr_tmp[5] ) <<8U )
        );
      BBW_RawTorqueA= (real32_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:48U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[6] ) )
        | ((uint16_T)(dataPtr_tmp[7] ) <<8U )
        );
      BBW_RawTorqueB= (real32_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn12U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x290_0_2_12U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*------------------Float32 signal local variables definition------------------*/
  real32_T tempReal32= 0;

  /*------------------Float32 signal local variables definition------------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_C)) {
    flgDrtSlt0x290_0_2_12U= 0;
  } else {
    flgDrtSlt0x290_0_2_12U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x290_0_2_12U, &messageObj);
  }

  B_n.ReadCANMessage2_o1_j= flgDrtSlt0x290_0_2_12U;
  if (1==flgDrtSlt0x290_0_2_12U) {
    cntDrtSlt0x290_0_2_12U= cntDrtSlt0x290_0_2_12U+1;
    B_n.ReadCANMessage2_o2_h= cntDrtSlt0x290_0_2_12U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 2--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:32U byteOrder:LITTLEENDIAN(0U) dataType:uint32_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint32_T)(
        ((uint32_T)(dataPtr_tmp[0] ) )
        | ((uint32_T)(dataPtr_tmp[1] ) <<8U )
        | ((uint32_T)(dataPtr_tmp[2] ) <<16U )
        | ((uint32_T)(dataPtr_tmp[3] ) <<24U )
        );
      tempReal32= *((real32_T*)(&uint32_temp));
      EPAS_RefSteerPos= (real32_T)tempReal32;
    }

    {
      /*--Order:3 startBit:32U length:32U byteOrder:LITTLEENDIAN(0U) dataType:uint32_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint32_T)(
        ((uint32_T)(dataPtr_tmp[4] ) )
        | ((uint32_T)(dataPtr_tmp[5] ) <<8U )
        | ((uint32_T)(dataPtr_tmp[6] ) <<16U )
        | ((uint32_T)(dataPtr_tmp[7] ) <<24U )
        );
      tempReal32= *((real32_T*)(&uint32_temp));
      EPAS_ActualSteeringPos= (real32_T)tempReal32;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn13U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x292_0_2_13U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*------------------Signed signal local variables definition------------------*/
  int32_T int32_temp= 0;

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_C)) {
    flgDrtSlt0x292_0_2_13U= 0;
  } else {
    flgDrtSlt0x292_0_2_13U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x292_0_2_13U, &messageObj);
  }

  B_n.ReadCANMessage3_o1_p= flgDrtSlt0x292_0_2_13U;
  if (1==flgDrtSlt0x292_0_2_13U) {
    cntDrtSlt0x292_0_2_13U= cntDrtSlt0x292_0_2_13U+1;
    B_n.ReadCANMessage3_o2_a= cntDrtSlt0x292_0_2_13U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 6--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:int8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int8_T)(
                            ((int8_T)(dataPtr_tmp[0] ) )
                            );

      /* SignExtend signalSize:8U*/
      //fHex:255U
      //fHex:0xFF
      if ((int32_temp & (1 << 7U)) !=0 ) {
        int32_temp |= ~0xFF;
      }

      EPAS_MotorDuty= (real32_T)int32_temp;
    }

    {
      /*--Order:3 startBit:8U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] ) )
        );
      EPAS_MotorCurrent= (real32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:16U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:0.15 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[2] ) )
        );
      EPAS_MotorVoltage= (real32_T)uint32_temp*(0.15);
    }

    {
      /*--Order:5 startBit:24U length:8U byteOrder:LITTLEENDIAN(0U) dataType:int8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int8_T)(
                            ((int8_T)(dataPtr_tmp[3] ) )
                            );

      /* SignExtend signalSize:8U*/
      //fHex:255U
      //fHex:0xFF
      if ((int32_temp & (1 << 7U)) !=0 ) {
        int32_temp |= ~0xFF;
      }

      EPAS_BoxTemp= (real32_T)int32_temp;
    }

    {
      /*--Order:6 startBit:32U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[4] ) )
        | ((uint16_T)(dataPtr_tmp[5] ) <<8U )
        );
      EPAS_TorqueA= (real32_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:48U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[6] ) )
        | ((uint16_T)(dataPtr_tmp[7] ) <<8U )
        );
      EPAS_TorqueB= (real32_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn14U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x402_0_3_14U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_D)) {
    flgDrtSlt0x402_0_3_14U= 0;
  } else {
    flgDrtSlt0x402_0_3_14U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x402_0_3_14U, &messageObj);
  }

  B_n.ReadCANMessage_o1_la= flgDrtSlt0x402_0_3_14U;
  if (1==flgDrtSlt0x402_0_3_14U) {
    cntDrtSlt0x402_0_3_14U= cntDrtSlt0x402_0_3_14U+1;
    B_n.ReadCANMessage_o2_h= cntDrtSlt0x402_0_3_14U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 8--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[0] ) )
        );
      PC_blinker= (uint8_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:8U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] ) )
        );
      PC_headlight= (uint8_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:16U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[2] ) )
        );
      PC_wiper= (uint8_T)uint32_temp;
    }

    {
      /*--Order:5 startBit:24U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[3] ) )
        );
      PC_gear= (uint8_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:32U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[4] ) )
        );
      PC_mode= (uint8_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:40U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[5] ) )
        );
      PC_handBrake= (uint8_T)uint32_temp;
    }

    {
      /*--Order:8 startBit:48U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[6] ) )
        );
      B_n.PC_horn= (uint32_T)uint32_temp;
    }

    {
      /*--Order:9 startBit:56U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[7] ) )
        );
      PC_LongMode= (uint8_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn15U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x403_0_3_15U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*------------------Float32 signal local variables definition------------------*/
  real32_T tempReal32= 0;

  /*------------------Float32 signal local variables definition------------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_D)) {
    flgDrtSlt0x403_0_3_15U= 0;
  } else {
    flgDrtSlt0x403_0_3_15U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x403_0_3_15U, &messageObj);
  }

  B_n.ReadCANMessage_o1_j= flgDrtSlt0x403_0_3_15U;
  if (1==flgDrtSlt0x403_0_3_15U) {
    cntDrtSlt0x403_0_3_15U= cntDrtSlt0x403_0_3_15U+1;
    PC_FrontwheelMsg_cnt= cntDrtSlt0x403_0_3_15U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 2--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:32U byteOrder:LITTLEENDIAN(0U) dataType:uint32_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint32_T)(
        ((uint32_T)(dataPtr_tmp[0] ) )
        | ((uint32_T)(dataPtr_tmp[1] ) <<8U )
        | ((uint32_T)(dataPtr_tmp[2] ) <<16U )
        | ((uint32_T)(dataPtr_tmp[3] ) <<24U )
        );
      tempReal32= *((real32_T*)(&uint32_temp));
      PC_SetFrontWheelAngle= (real32_T)tempReal32;
    }

    {
      /*--Order:3 startBit:32U length:32U byteOrder:LITTLEENDIAN(0U) dataType:uint32_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint32_T)(
        ((uint32_T)(dataPtr_tmp[4] ) )
        | ((uint32_T)(dataPtr_tmp[5] ) <<8U )
        | ((uint32_T)(dataPtr_tmp[6] ) <<16U )
        | ((uint32_T)(dataPtr_tmp[7] ) <<24U )
        );
      tempReal32= *((real32_T*)(&uint32_temp));
      PC_SetFrontWheelAngel_Rate= (real32_T)tempReal32;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn16U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x401_0_3_16U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*------------------Float32 signal local variables definition------------------*/
  real32_T tempReal32= 0;

  /*------------------Float32 signal local variables definition------------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_D)) {
    flgDrtSlt0x401_0_3_16U= 0;
  } else {
    flgDrtSlt0x401_0_3_16U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x401_0_3_16U, &messageObj);
  }

  B_n.ReadCANMessage_o1_l1= flgDrtSlt0x401_0_3_16U;
  if (1==flgDrtSlt0x401_0_3_16U) {
    cntDrtSlt0x401_0_3_16U= cntDrtSlt0x401_0_3_16U+1;
    B_n.ReadCANMessage_o2_kh= cntDrtSlt0x401_0_3_16U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 2--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:32U byteOrder:LITTLEENDIAN(0U) dataType:uint32_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint32_T)(
        ((uint32_T)(dataPtr_tmp[0] ) )
        | ((uint32_T)(dataPtr_tmp[1] ) <<8U )
        | ((uint32_T)(dataPtr_tmp[2] ) <<16U )
        | ((uint32_T)(dataPtr_tmp[3] ) <<24U )
        );
      tempReal32= *((real32_T*)(&uint32_temp));
      PC_SetGasPos= (real32_T)tempReal32;
    }

    {
      /*--Order:3 startBit:32U length:32U byteOrder:LITTLEENDIAN(0U) dataType:uint32_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint32_T)(
        ((uint32_T)(dataPtr_tmp[4] ) )
        | ((uint32_T)(dataPtr_tmp[5] ) <<8U )
        | ((uint32_T)(dataPtr_tmp[6] ) <<16U )
        | ((uint32_T)(dataPtr_tmp[7] ) <<24U )
        );
      tempReal32= *((real32_T*)(&uint32_temp));
      PC_SetBrakePos= (real32_T)tempReal32;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn17U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x104_0_1_17U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0x104_0_1_17U= 0;
  } else {
    flgDrtSlt0x104_0_1_17U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x104_0_1_17U, &messageObj);
  }

  B_n.ReadCANMessage_o1_jy= flgDrtSlt0x104_0_1_17U;
  if (1==flgDrtSlt0x104_0_1_17U) {
    cntDrtSlt0x104_0_1_17U= cntDrtSlt0x104_0_1_17U+1;
    B_n.ReadCANMessage_o2_jn= cntDrtSlt0x104_0_1_17U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 17--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[0] ) )
        );
      B_n.rxEPB_01CRC= (uint32_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:8U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] & 0xF) )
        );
      B_n.rxEPB_01BZ= (uint32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:12U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x10) >>4U )
        );
      B_n.rxEPB_QBitLongitudinalAccelerat= (uint32_T)uint32_temp;
    }

    {
      /*--Order:5 startBit:13U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x20) >>5U )
        );
      B_n.rxEPB_QBitPedalTravel_Clutch= (uint32_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:14U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x40) >>6U )
        );
      B_n.rxEPB_BCM2Motor_Wakeup= (uint32_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:15U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x80) >>7U )
        );
      B_n.rxEPB_FreigVerzoeg_Anf= (uint32_T)uint32_temp;
    }

    {
      /*--Order:8 startBit:16U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:0.048 offset:-7.968 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[2] ) )
        );
      B_n.rxEPB_VerzoegAnf= (uint32_T)uint32_temp*(0.048)+(-7.968);
    }

    {
      /*--Order:9 startBit:24U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:-128.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[3] ) )
        );
      GOLF_LongitudinalAcceleration= (real32_T)uint32_temp+(-128.0);
    }

    {
      /*--Order:10 startBit:32U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:0.4 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[4] ) )
        );
      B_n.rxEPB_PedalTravelClutch= (uint32_T)uint32_temp*(0.4);
    }

    {
      /*--Order:11 startBit:48U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[6] & 0x1) )
        );
      B_n.rxEPB_StartUpRequest_Recognized= (uint32_T)uint32_temp;
    }

    {
      /*--Order:12 startBit:49U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[6] & 0x2) >>1U )
        );
      B_n.rxEPB_DAARandbed_erf= (uint32_T)uint32_temp;
    }

    {
      /*--Order:13 startBit:50U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[6] & 0xC) >>2U )
        );
      B_n.rxEPB_ErrorStatus= (uint32_T)uint32_temp;
    }

    {
      /*--Order:14 startBit:52U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[6] & 0x30) >>4U )
        );
      B_n.rxEPB_SwitchStatus= (uint32_T)uint32_temp;
    }

    {
      /*--Order:15 startBit:54U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[6] & 0x40) >>6U )
        );
      B_n.rxEPB_QBitSwitchStatus= (uint32_T)uint32_temp;
    }

    {
      /*--Order:16 startBit:55U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[6] & 0x80) >>7U )
        );
      B_n.rxEPB_ConsistencyACC= (uint32_T)uint32_temp;
    }

    {
      /*--Order:17 startBit:56U length:5U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[7] & 0x1F) )
        );
      B_n.rxEPB_Tension= (uint32_T)uint32_temp;
    }

    {
      /*--Order:18 startBit:61U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[7] & 0x60) >>5U )
        );
      GOLF_HandBrakeStatus= (real32_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn18U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0xB2_0_1_18U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0xB2_0_1_18U= 0;
  } else {
    flgDrtSlt0xB2_0_1_18U= F_Servece_CAN_ReceiveDirect(&SvcCANDrtSlt0xB2_0_1_18U,
      &messageObj);
  }

  B_n.ReadCANMessage_o1_k= flgDrtSlt0xB2_0_1_18U;
  if (1==flgDrtSlt0xB2_0_1_18U) {
    cntDrtSlt0xB2_0_1_18U= cntDrtSlt0xB2_0_1_18U+1;
    B_n.ReadCANMessage_o2_kq= cntDrtSlt0xB2_0_1_18U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 4--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:0.0075 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[0] ) )
        | ((uint16_T)(dataPtr_tmp[1] ) <<8U )
        );
      GOLF_BLWheelSpeed= (real32_T)uint32_temp*(0.0075);
    }

    {
      /*--Order:3 startBit:16U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:0.0075 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[2] ) )
        | ((uint16_T)(dataPtr_tmp[3] ) <<8U )
        );
      GOLF_BRWheelSpeed= (real32_T)uint32_temp*(0.0075);
    }

    {
      /*--Order:4 startBit:32U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:0.0075 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[4] ) )
        | ((uint16_T)(dataPtr_tmp[5] ) <<8U )
        );
      GOLF_FLWheelSpeed= (real32_T)uint32_temp*(0.0075);
    }

    {
      /*--Order:5 startBit:48U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:0.0075 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[6] ) )
        | ((uint16_T)(dataPtr_tmp[7] ) <<8U )
        );
      GOLF_FRWheelSpeed= (real32_T)uint32_temp*(0.0075);
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn19U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x65F_0_1_19U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0x65F_0_1_19U= 0;
  } else {
    flgDrtSlt0x65F_0_1_19U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x65F_0_1_19U, &messageObj);
  }

  B_n.ReadCANMessage_o1_f= flgDrtSlt0x65F_0_1_19U;
  if (1==flgDrtSlt0x65F_0_1_19U) {
    cntDrtSlt0x65F_0_1_19U= cntDrtSlt0x65F_0_1_19U+1;
    B_n.ReadCANMessage_o2_kj= cntDrtSlt0x65F_0_1_19U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 8--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:12U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x10) >>4U )
        );
      B_n.rxTSK_QBitPitch= (uint32_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:13U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x20) >>5U )
        );
      B_n.rxTSK_QBitVehicleMass= (uint32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:14U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] & 0xC0) >>6U )
        );
      B_n.rxMO_StartVoltage02= (uint32_T)uint32_temp;
    }

    {
      /*--Order:5 startBit:16U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x1) )
        );
      B_n.rxMO_DPFReg= (uint32_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:17U length:7U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[2] & 0xFE) >>1U )
        );
      B_n.rxMO_HeaetingcurrentEKAT= (uint32_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:24U length:6U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[3] & 0x3F) )
        );
      B_n.rxMO_HeaetingcurrentSCR= (uint32_T)uint32_temp;
    }

    {
      /*--Order:8 startBit:48U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:32.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[6] ) )
        );
      GOLF_rxVehiclemass= (uint32_T)uint32_temp*(32.0);
    }

    {
      /*--Order:9 startBit:56U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:0.8 offset:-101.6 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[7] ) )
        );
      GOLF_rxPitch= (real32_T)uint32_temp*(0.8)+(-101.6);
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn20U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0xA7_0_1_20U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0xA7_0_1_20U= 0;
  } else {
    flgDrtSlt0xA7_0_1_20U= F_Servece_CAN_ReceiveDirect(&SvcCANDrtSlt0xA7_0_1_20U,
      &messageObj);
  }

  B_n.ReadCANMessage_o1_oj= flgDrtSlt0xA7_0_1_20U;
  if (1==flgDrtSlt0xA7_0_1_20U) {
    cntDrtSlt0xA7_0_1_20U= cntDrtSlt0xA7_0_1_20U+1;
    B_n.ReadCANMessage_o2_o= cntDrtSlt0xA7_0_1_20U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 10--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[0] ) )
        );
      B_n.rxMotor_11CRC= (uint32_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:8U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] & 0xF) )
        );
      B_n.rxMotor_11BZ= (uint32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:12U length:10U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:-509.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[1] & 0xF0) >>4U )
        | ((uint16_T)(dataPtr_tmp[2] & 0x3F) <<4U )
        );
      GOLF_MotorTorque_raw= (real32_T)uint32_temp+(-509.0);
    }

    {
      /*--Order:5 startBit:22U length:10U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:-509.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[2] & 0xC0) >>6U )
        | ((uint16_T)(dataPtr_tmp[3] ) <<2U )
        );
      B_n.rxMO_MomTotal= (uint32_T)uint32_temp+(-509.0);
    }

    {
      /*--Order:6 startBit:32U length:10U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:-509.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[4] ) )
        | ((uint16_T)(dataPtr_tmp[5] & 0x3) <<8U )
        );
      B_n.rxMO_MomInertia_Total= (uint32_T)uint32_temp+(-509.0);
    }

    {
      /*--Order:7 startBit:42U length:10U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:-509.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[5] & 0xFC) >>2U )
        | ((uint16_T)(dataPtr_tmp[6] & 0xF) <<6U )
        );
      GOLF_MotorTorque_filtered= (real32_T)uint32_temp+(-509.0);
    }

    {
      /*--Order:8 startBit:52U length:9U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:-509.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[6] & 0xF0) >>4U )
        | ((uint16_T)(dataPtr_tmp[7] & 0x1F) <<4U )
        );
      B_n.rxMO_MomSchub= (uint32_T)uint32_temp+(-509.0);
    }

    {
      /*--Order:9 startBit:61U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[7] & 0x20) >>5U )
        );
      B_n.rxMO_StatusNormalOperation_01= (uint32_T)uint32_temp;
    }

    {
      /*--Order:10 startBit:62U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[7] & 0x40) >>6U )
        );
      B_n.rxMO_FirstInaccurateThreshold= (uint32_T)uint32_temp;
    }

    {
      /*--Order:11 startBit:63U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[7] & 0x80) >>7U )
        );
      B_n.rxMO_QBitMotormomente= (uint32_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn21U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x176_0_1_21U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0x176_0_1_21U= 0;
  } else {
    flgDrtSlt0x176_0_1_21U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x176_0_1_21U, &messageObj);
  }

  B_n.ReadCANMessage_o1_m= flgDrtSlt0x176_0_1_21U;
  if (1==flgDrtSlt0x176_0_1_21U) {
    cntDrtSlt0x176_0_1_21U= cntDrtSlt0x176_0_1_21U+1;
    B_n.ReadCANMessage_o2_i= cntDrtSlt0x176_0_1_21U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 1--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:40U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[5] ) )
        );
      GOLF_BrakePedalPos= (real32_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn22U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x65A_0_1_22U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0x65A_0_1_22U= 0;
  } else {
    flgDrtSlt0x65A_0_1_22U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x65A_0_1_22U, &messageObj);
  }

  B_n.ReadCANMessage1_o1_h= flgDrtSlt0x65A_0_1_22U;
  if (1==flgDrtSlt0x65A_0_1_22U) {
    cntDrtSlt0x65A_0_1_22U= cntDrtSlt0x65A_0_1_22U+1;
    B_n.ReadCANMessage1_o2_n= cntDrtSlt0x65A_0_1_22U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 26--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:12U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x10) >>4U )
        );
      B_n.rxBCM_BrakePedalSensor= (uint32_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:13U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x20) >>5U )
        );
      B_n.rxBCM_BrakeFluidSensor= (uint32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:14U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x40) >>6U )
        );
      B_n.rxBCM1_LichtWarn= (uint32_T)uint32_temp;
    }

    {
      /*--Order:5 startBit:15U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x80) >>7U )
        );
      B_n.rxBCM_WashwaterSensor= (uint32_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:16U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x1) )
        );
      B_n.rxBCM_CoolantSensor= (uint32_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:17U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x2) >>1U )
        );
      B_n.rxBCM1_Kl15_HW_recognized= (uint32_T)uint32_temp;
    }

    {
      /*--Order:8 startBit:18U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x4) >>2U )
        );
      B_n.rxBCM_IceOffroad_Button= (uint32_T)uint32_temp;
    }

    {
      /*--Order:9 startBit:19U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x8) >>3U )
        );
      B_n.rxZZH_EndlageOben= (uint32_T)uint32_temp;
    }

    {
      /*--Order:10 startBit:20U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x10) >>4U )
        );
      B_n.rxZZH_EndlageUnten= (uint32_T)uint32_temp;
    }

    {
      /*--Order:11 startBit:21U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x20) >>5U )
        );
      B_n.rxZZH_EndlageUnplausibel= (uint32_T)uint32_temp;
    }

    {
      /*--Order:12 startBit:22U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x40) >>6U )
        );
      B_n.rxBCM2_EZSDepressed= (uint32_T)uint32_temp;
    }

    {
      /*--Order:13 startBit:23U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x80) >>7U )
        );
      B_n.rxBCM2_SSTDepressed= (uint32_T)uint32_temp;
    }

    {
      /*--Order:14 startBit:24U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x1) )
        );
      B_n.rxBCM_HybridStartStopp_Button= (uint32_T)uint32_temp;
    }

    {
      /*--Order:15 startBit:25U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x2) >>1U )
        );
      B_n.rxBCM1_WarnblinkButton= (boolean_T)uint32_temp;
    }

    {
      /*--Order:16 startBit:26U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x4) >>2U )
        );
      B_n.rxBCM1_ValetParking_Button= (uint32_T)uint32_temp;
    }

    {
      /*--Order:17 startBit:27U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x8) >>3U )
        );
      B_n.rxBCM_RemotestartBetrieb= (uint32_T)uint32_temp;
    }

    {
      /*--Order:18 startBit:28U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x10) >>4U )
        );
      B_n.rxBCM1_HSKButton= (uint32_T)uint32_temp;
    }

    {
      /*--Order:19 startBit:29U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x20) >>5U )
        );
      B_n.rxBCM1_RearBlindButton= (uint32_T)uint32_temp;
    }

    {
      /*--Order:20 startBit:30U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x40) >>6U )
        );
      B_n.rxBCM1_ReversingLightSchalter= (uint32_T)uint32_temp;
    }

    {
      /*--Order:21 startBit:31U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x80) >>7U )
        );
      B_n.rxBCM1_MHSchalter= (uint32_T)uint32_temp;
    }

    {
      /*--Order:22 startBit:32U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x1) )
        );
      B_n.rxBCM1_MHWIV_Schalter= (uint32_T)uint32_temp;
    }

    {
      /*--Order:23 startBit:33U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x2) >>1U )
        );
      B_n.rxBCM_EcoCharisma_Taste= (uint32_T)uint32_temp;
    }

    {
      /*--Order:24 startBit:34U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[4] & 0xC) >>2U )
        );
      B_n.rxBCM_Thermomanagement= (uint32_T)uint32_temp;
    }

    {
      /*--Order:25 startBit:36U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x10) >>4U )
        );
      B_n.rxBCM_ThermomanagementError= (uint32_T)uint32_temp;
    }

    {
      /*--Order:26 startBit:37U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x20) >>5U )
        );
      B_n.rxBCM_ThermomanagementValid= (uint32_T)uint32_temp;
    }

    {
      /*--Order:27 startBit:38U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[4] & 0xC0) >>6U )
        );
      B_n.rxBCM1_LichtwarnTexte= (uint32_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flSig2DataCnn23U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/
  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*************************************CAN message parameter setting(id,extended,length,remote)******************************/
  messageObj.id= 0xB5;
  messageObj.extended= 0;
  messageObj.length= 8;
  messageObj.remote= 0;

  /*************************************Clear data****************************************************************************/
  for (i=0;i<8;i++) {
    dataPtr_tmp[i]= 0;
  }

  /****************************************Start pack signals to data*********************************************************/
  /*-------------------------------------The number of signals is 9--------------------------------------------------------*/

  /**-----Before traversing all signals------**/
  /*------search for multiplexor signal---------------------*/
  /**------After traversing all signals------**/

  /**-----Before traversing all signals------**/
  /*------search for standard and multiplexed signals------*/

  /*--Order:0 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (11.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (11.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(11.0);
  }

  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[0]);

  /*--Order:1 startBit:8U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (9.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (9.0 > 15.0) {
    uint32_temp = (uint8_T)15U;
  } else {
    uint32_temp= (uint8_T)(9.0);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xF))|dataPtr_tmp[1]);

  /*--Order:2 startBit:12U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (1.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (1.0 > 15.0) {
    uint32_temp = (uint8_T)15U;
  } else {
    uint32_temp= (uint8_T)(1.0);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xF)<<4U)|dataPtr_tmp[1]);

  /*--Order:3 startBit:16U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (150.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (150.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(150.0);
  }

  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[2]);

  /*--Order:4 startBit:24U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (243.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (243.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(243.0);
  }

  dataPtr_tmp[3]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[3]);

  /*--Order:5 startBit:32U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (61.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (61.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(61.0);
  }

  dataPtr_tmp[4]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[4]);

  /*--Order:6 startBit:40U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (82.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (82.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(82.0);
  }

  dataPtr_tmp[5]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[5]);

  /*--Order:7 startBit:48U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (6.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (6.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(6.0);
  }

  dataPtr_tmp[6]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[6]);

  /*--Order:8 startBit:56U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (0.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (0.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(0.0);
  }

  dataPtr_tmp[7]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[7]);

  /**------After traversing all signals------**/
  /***********************************Send CAN message*************************************************************************/
  if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_B)) {
    F_Servece_CAN_Transmit(CAN_CTRL_B, &messageObj);
  }
}

void flSig2DataCnn24U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/
  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*************************************CAN message parameter setting(id,extended,length,remote)******************************/
  messageObj.id= 0xB5;
  messageObj.extended= 0;
  messageObj.length= 8;
  messageObj.remote= 0;

  /*************************************Clear data****************************************************************************/
  for (i=0;i<8;i++) {
    dataPtr_tmp[i]= 0;
  }

  /****************************************Start pack signals to data*********************************************************/
  /*-------------------------------------The number of signals is 9--------------------------------------------------------*/

  /**-----Before traversing all signals------**/
  /*------search for multiplexor signal---------------------*/
  /**------After traversing all signals------**/

  /**-----Before traversing all signals------**/
  /*------search for standard and multiplexed signals------*/

  /*--Order:0 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (53.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (53.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(53.0);
  }

  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[0]);

  /*--Order:1 startBit:8U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (14.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (14.0 > 15.0) {
    uint32_temp = (uint8_T)15U;
  } else {
    uint32_temp= (uint8_T)(14.0);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xF))|dataPtr_tmp[1]);

  /*--Order:2 startBit:12U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (3.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (3.0 > 15.0) {
    uint32_temp = (uint8_T)15U;
  } else {
    uint32_temp= (uint8_T)(3.0);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xF)<<4U)|dataPtr_tmp[1]);

  /*--Order:3 startBit:16U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (150.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (150.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(150.0);
  }

  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[2]);

  /*--Order:4 startBit:24U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (161.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (161.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(161.0);
  }

  dataPtr_tmp[3]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[3]);

  /*--Order:5 startBit:32U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (61.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (61.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(61.0);
  }

  dataPtr_tmp[4]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[4]);

  /*--Order:6 startBit:40U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (82.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (82.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(82.0);
  }

  dataPtr_tmp[5]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[5]);

  /*--Order:7 startBit:48U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (6.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (6.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(6.0);
  }

  dataPtr_tmp[6]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[6]);

  /*--Order:8 startBit:56U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (0.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (0.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(0.0);
  }

  dataPtr_tmp[7]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[7]);

  /**------After traversing all signals------**/
  /***********************************Send CAN message*************************************************************************/
  if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_B)) {
    F_Servece_CAN_Transmit(CAN_CTRL_B, &messageObj);
  }
}

void flSig2DataCnn25U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/
  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*************************************CAN message parameter setting(id,extended,length,remote)******************************/
  messageObj.id= 0xB5;
  messageObj.extended= 0;
  messageObj.length= 8;
  messageObj.remote= 0;

  /*************************************Clear data****************************************************************************/
  for (i=0;i<8;i++) {
    dataPtr_tmp[i]= 0;
  }

  /****************************************Start pack signals to data*********************************************************/
  /*-------------------------------------The number of signals is 9--------------------------------------------------------*/

  /**-----Before traversing all signals------**/
  /*------search for multiplexor signal---------------------*/
  /**------After traversing all signals------**/

  /**-----Before traversing all signals------**/
  /*------search for standard and multiplexed signals------*/

  /*--Order:0 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (144.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (144.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(144.0);
  }

  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[0]);

  /*--Order:1 startBit:8U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (10.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (10.0 > 15.0) {
    uint32_temp = (uint8_T)15U;
  } else {
    uint32_temp= (uint8_T)(10.0);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xF))|dataPtr_tmp[1]);

  /*--Order:2 startBit:12U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (4.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (4.0 > 15.0) {
    uint32_temp = (uint8_T)15U;
  } else {
    uint32_temp= (uint8_T)(4.0);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xF)<<4U)|dataPtr_tmp[1]);

  /*--Order:3 startBit:16U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (105.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (105.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(105.0);
  }

  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[2]);

  /*--Order:4 startBit:24U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (0.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (0.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(0.0);
  }

  dataPtr_tmp[3]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[3]);

  /*--Order:5 startBit:32U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (60.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (60.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(60.0);
  }

  dataPtr_tmp[4]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[4]);

  /*--Order:6 startBit:40U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (98.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (98.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(98.0);
  }

  dataPtr_tmp[5]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[5]);

  /*--Order:7 startBit:48U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (6.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (6.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(6.0);
  }

  dataPtr_tmp[6]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[6]);

  /*--Order:8 startBit:56U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (0.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (0.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(0.0);
  }

  dataPtr_tmp[7]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[7]);

  /**------After traversing all signals------**/
  /***********************************Send CAN message*************************************************************************/
  if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_B)) {
    F_Servece_CAN_Transmit(CAN_CTRL_B, &messageObj);
  }
}

void flSig2DataCnn26U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/
  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*************************************CAN message parameter setting(id,extended,length,remote)******************************/
  messageObj.id= 0xB5;
  messageObj.extended= 0;
  messageObj.length= 8;
  messageObj.remote= 0;

  /*************************************Clear data****************************************************************************/
  for (i=0;i<8;i++) {
    dataPtr_tmp[i]= 0;
  }

  /****************************************Start pack signals to data*********************************************************/
  /*-------------------------------------The number of signals is 9--------------------------------------------------------*/

  /**-----Before traversing all signals------**/
  /*------search for multiplexor signal---------------------*/
  /**------After traversing all signals------**/

  /**-----Before traversing all signals------**/
  /*------search for standard and multiplexed signals------*/

  /*--Order:0 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (4.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (4.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(4.0);
  }

  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[0]);

  /*--Order:1 startBit:8U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (1.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (1.0 > 15.0) {
    uint32_temp = (uint8_T)15U;
  } else {
    uint32_temp= (uint8_T)(1.0);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xF))|dataPtr_tmp[1]);

  /*--Order:2 startBit:12U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (3.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (3.0 > 15.0) {
    uint32_temp = (uint8_T)15U;
  } else {
    uint32_temp= (uint8_T)(3.0);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xF)<<4U)|dataPtr_tmp[1]);

  /*--Order:3 startBit:16U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (105.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (105.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(105.0);
  }

  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[2]);

  /*--Order:4 startBit:24U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (0.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (0.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(0.0);
  }

  dataPtr_tmp[3]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[3]);

  /*--Order:5 startBit:32U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (60.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (60.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(60.0);
  }

  dataPtr_tmp[4]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[4]);

  /*--Order:6 startBit:40U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (114.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (114.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(114.0);
  }

  dataPtr_tmp[5]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[5]);

  /*--Order:7 startBit:48U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (6.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (6.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(6.0);
  }

  dataPtr_tmp[6]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[6]);

  /*--Order:8 startBit:56U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (0.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (0.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(0.0);
  }

  dataPtr_tmp[7]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[7]);

  /**------After traversing all signals------**/
  /***********************************Send CAN message*************************************************************************/
  if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_B)) {
    F_Servece_CAN_Transmit(CAN_CTRL_B, &messageObj);
  }
}

void flSig2DataCnn27U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/
  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*************************************CAN message parameter setting(id,extended,length,remote)******************************/
  messageObj.id= 0xB5;
  messageObj.extended= 0;
  messageObj.length= 8;
  messageObj.remote= 0;

  /*************************************Clear data****************************************************************************/
  for (i=0;i<8;i++) {
    dataPtr_tmp[i]= 0;
  }

  /****************************************Start pack signals to data*********************************************************/
  /*-------------------------------------The number of signals is 9--------------------------------------------------------*/

  /**-----Before traversing all signals------**/
  /*------search for multiplexor signal---------------------*/
  /**------After traversing all signals------**/

  /**-----Before traversing all signals------**/
  /*------search for standard and multiplexed signals------*/

  /*--Order:0 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (171.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (171.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(171.0);
  }

  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[0]);

  /*--Order:1 startBit:8U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (0.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (0.0 > 15.0) {
    uint32_temp = (uint8_T)15U;
  } else {
    uint32_temp= (uint8_T)(0.0);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xF))|dataPtr_tmp[1]);

  /*--Order:2 startBit:12U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (2.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (2.0 > 15.0) {
    uint32_temp = (uint8_T)15U;
  } else {
    uint32_temp= (uint8_T)(2.0);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xF)<<4U)|dataPtr_tmp[1]);

  /*--Order:3 startBit:16U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (150.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (150.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(150.0);
  }

  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[2]);

  /*--Order:4 startBit:24U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (63.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (63.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(63.0);
  }

  dataPtr_tmp[3]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[3]);

  /*--Order:5 startBit:32U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (61.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (61.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(61.0);
  }

  dataPtr_tmp[4]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[4]);

  /*--Order:6 startBit:40U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (98.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (98.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(98.0);
  }

  dataPtr_tmp[5]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[5]);

  /*--Order:7 startBit:48U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (6.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (6.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(6.0);
  }

  dataPtr_tmp[6]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[6]);

  /*--Order:8 startBit:56U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (0.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (0.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(0.0);
  }

  dataPtr_tmp[7]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[7]);

  /**------After traversing all signals------**/
  /***********************************Send CAN message*************************************************************************/
  if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_B)) {
    F_Servece_CAN_Transmit(CAN_CTRL_B, &messageObj);
  }
}

void flSig2DataCnn28U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/
  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*************************************CAN message parameter setting(id,extended,length,remote)******************************/
  messageObj.id= 0xB5;
  messageObj.extended= 0;
  messageObj.length= 8;
  messageObj.remote= 0;

  /*************************************Clear data****************************************************************************/
  for (i=0;i<8;i++) {
    dataPtr_tmp[i]= 0;
  }

  /****************************************Start pack signals to data*********************************************************/
  /*-------------------------------------The number of signals is 9--------------------------------------------------------*/

  /**-----Before traversing all signals------**/
  /*------search for multiplexor signal---------------------*/
  /**------After traversing all signals------**/

  /**-----Before traversing all signals------**/
  /*------search for standard and multiplexed signals------*/

  /*--Order:0 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (228.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (228.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(228.0);
  }

  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[0]);

  /*--Order:1 startBit:8U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (10.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (10.0 > 15.0) {
    uint32_temp = (uint8_T)15U;
  } else {
    uint32_temp= (uint8_T)(10.0);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xF))|dataPtr_tmp[1]);

  /*--Order:2 startBit:12U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (1.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (1.0 > 15.0) {
    uint32_temp = (uint8_T)15U;
  } else {
    uint32_temp= (uint8_T)(1.0);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xF)<<4U)|dataPtr_tmp[1]);

  /*--Order:3 startBit:16U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (105.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (105.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(105.0);
  }

  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[2]);

  /*--Order:4 startBit:24U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (0.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (0.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(0.0);
  }

  dataPtr_tmp[3]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[3]);

  /*--Order:5 startBit:32U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (60.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (60.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(60.0);
  }

  dataPtr_tmp[4]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[4]);

  /*--Order:6 startBit:40U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (98.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (98.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(98.0);
  }

  dataPtr_tmp[5]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[5]);

  /*--Order:7 startBit:48U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (6.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (6.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(6.0);
  }

  dataPtr_tmp[6]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[6]);

  /*--Order:8 startBit:56U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (0.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (0.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(0.0);
  }

  dataPtr_tmp[7]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[7]);

  /**------After traversing all signals------**/
  /***********************************Send CAN message*************************************************************************/
  if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_B)) {
    F_Servece_CAN_Transmit(CAN_CTRL_B, &messageObj);
  }
}

void flData2SigCnn29U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x3DB_0_1_29U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0x3DB_0_1_29U= 0;
  } else {
    flgDrtSlt0x3DB_0_1_29U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x3DB_0_1_29U, &messageObj);
  }

  B_n.ReadCANMessage_o1_fa= flgDrtSlt0x3DB_0_1_29U;
  if (1==flgDrtSlt0x3DB_0_1_29U) {
    cntDrtSlt0x3DB_0_1_29U= cntDrtSlt0x3DB_0_1_29U+1;
    B_n.ReadCANMessage_o2_l= cntDrtSlt0x3DB_0_1_29U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 31--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x1) )
        );
      B_n.rxBCM_01Alt= (uint32_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:1U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x2) >>1U )
        );
      B_n.rxSMLS_01Alt= (uint32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:2U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x4) >>2U )
        );
      B_n.rxZV_02Alt= (uint32_T)uint32_temp;
    }

    {
      /*--Order:5 startBit:3U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x8) >>3U )
        );
      B_n.rxWischer_01Alt= (uint32_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:4U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x10) >>4U )
        );
      B_n.rxAnhaenger_01Alt= (uint32_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:5U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x20) >>5U )
        );
      B_n.rxKlima_Sensor02_alt= (uint32_T)uint32_temp;
    }

    {
      /*--Order:8 startBit:6U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x40) >>6U )
        );
      B_n.rxVSG_01Alt= (uint32_T)uint32_temp;
    }

    {
      /*--Order:9 startBit:7U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[0] & 0x80) >>7U )
        );
      B_n.rxKlima_01Alt= (uint32_T)uint32_temp;
    }

    {
      /*--Order:10 startBit:8U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x1) )
        );
      B_n.rxWFS_01Alt= (uint32_T)uint32_temp;
    }

    {
      /*--Order:11 startBit:9U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x2) >>1U )
        );
      B_n.rxLicht_Anf01_alt= (uint32_T)uint32_temp;
    }

    {
      /*--Order:12 startBit:20U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x10) >>4U )
        );
      B_n.rxZV_HFSOffen= (uint32_T)uint32_temp;
    }

    {
      /*--Order:13 startBit:21U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x20) >>5U )
        );
      B_n.rxZV_HBFSOffen= (uint32_T)uint32_temp;
    }

    {
      /*--Order:14 startBit:22U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x40) >>6U )
        );
      B_n.rxVS_VDOffen_ver= (uint32_T)uint32_temp;
    }

    {
      /*--Order:15 startBit:23U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x80) >>7U )
        );
      B_n.rxVS_VDZu_ver= (uint32_T)uint32_temp;
    }

    {
      /*--Order:16 startBit:24U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x1) )
        );
      B_n.rxZV_BTOffen= (uint32_T)uint32_temp;
    }

    {
      /*--Order:17 startBit:25U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x2) >>1U )
        );
      B_n.rxBCM1_ReversingLightSwitch= (uint32_T)uint32_temp;
    }

    {
      /*--Order:18 startBit:26U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x4) >>2U )
        );
      B_n.rxZV_FTOffen= (uint32_T)uint32_temp;
    }

    {
      /*--Order:19 startBit:27U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x8) >>3U )
        );
      B_n.rxWiper_FrontActive= (uint32_T)uint32_temp;
    }

    {
      /*--Order:20 startBit:28U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x10) >>4U )
        );
      B_n.rxAAG_FollowersRecognized= (uint32_T)uint32_temp;
    }

    {
      /*--Order:21 startBit:29U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x20) >>5U )
        );
      B_n.rxBCM1_MHSchalter_j= (uint32_T)uint32_temp;
    }

    {
      /*--Order:22 startBit:30U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x40) >>6U )
        );
      B_n.rxZV_HDOffen= (uint32_T)uint32_temp;
    }

    {
      /*--Order:23 startBit:31U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x80) >>7U )
        );
      B_n.rxWash_frontActive= (uint32_T)uint32_temp;
    }

    {
      /*--Order:24 startBit:32U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[4] & 0x3) )
        );
      B_n.rxKL_Thermomanagement= (uint32_T)uint32_temp;
    }

    {
      /*--Order:25 startBit:34U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[4] & 0x3C) >>2U )
        );
      B_n.rxWFS_DrivingAuthorization_Key= (uint32_T)uint32_temp;
    }

    {
      /*--Order:26 startBit:38U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x40) >>6U )
        );
      B_n.rxBCM1_RFahrlichtFzg_Anf= (uint32_T)uint32_temp;
    }

    {
      /*--Order:27 startBit:39U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x80) >>7U )
        );
      B_n.rxBCM1_RFahrlichtAhg_Anf= (uint32_T)uint32_temp;
    }

    {
      /*--Order:28 startBit:49U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[6] & 0x2) >>1U )
        );
      GOLF_HighBeam= (real32_T)uint32_temp;
    }

    {
      /*--Order:29 startBit:50U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[6] & 0x4) >>2U )
        );
      GOLF_BlinkerLeft= (real32_T)uint32_temp;
    }

    {
      /*--Order:30 startBit:51U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[6] & 0x8) >>3U )
        );
      GOLF_BlinkerRight= (real32_T)uint32_temp;
    }

    {
      /*--Order:31 startBit:52U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[6] & 0xF0) >>4U )
        );
      B_n.rxBCM1_OBDFStatus_ATemp= (uint32_T)uint32_temp;
    }

    {
      /*--Order:32 startBit:56U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:0.5 offset:-50.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[7] ) )
        );
      B_n.rxBCM1_OutsideTemp_Approximate= (uint32_T)uint32_temp*(0.5)+(-50.0);
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn30U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x86_0_1_30U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0x86_0_1_30U= 0;
  } else {
    flgDrtSlt0x86_0_1_30U= F_Servece_CAN_ReceiveDirect(&SvcCANDrtSlt0x86_0_1_30U,
      &messageObj);
  }

  B_n.ReadCANMessage_o1_kz= flgDrtSlt0x86_0_1_30U;
  if (1==flgDrtSlt0x86_0_1_30U) {
    cntDrtSlt0x86_0_1_30U= cntDrtSlt0x86_0_1_30U+1;
    B_n.ReadCANMessage_o2_ic= cntDrtSlt0x86_0_1_30U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 10--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[0] ) )
        );
      B_n.LWI_CHECKSUM= (uint32_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:8U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] & 0xF) )
        );
      B_n.LWI_COUNTER= (uint32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:12U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x10) >>4U )
        );
      B_n.LWI_LWISensorstatus= (uint32_T)uint32_temp;
    }

    {
      /*--Order:5 startBit:13U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x20) >>5U )
        );
      B_n.LWI_LWIQBit_Sub_Daten= (uint32_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:15U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x80) >>7U )
        );
      GOLF_LWIQbit_SteeringWheelAngle= (real32_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:16U length:13U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:0.1 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[2] ) )
        | ((uint16_T)(dataPtr_tmp[3] & 0x1F) <<8U )
        );
      GOLF_LWI_SteeringWheelAngle= (real32_T)uint32_temp*(0.1);
    }

    {
      /*--Order:8 startBit:29U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x20) >>5U )
        );
      GOLF_LWIVZ_SteeringWheelAngle= (real32_T)uint32_temp;
    }

    {
      /*--Order:9 startBit:30U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x40) >>6U )
        );
      GOLF_LWIVZ_SteeringWheelAngle_Speed= (real32_T)uint32_temp;
    }

    {
      /*--Order:10 startBit:31U length:9U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:5.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[3] & 0x80) >>7U )
        | ((uint16_T)(dataPtr_tmp[4] ) <<1U )
        );
      GOLF_LWI_SteeringWheelAngle_Speed= (real32_T)uint32_temp*(5.0);
    }

    {
      /*--Order:11 startBit:40U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[5] ) )
        | ((uint16_T)(dataPtr_tmp[6] ) <<8U )
        );
      B_n.LWI_LWISub_Daten= (uint32_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn31U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x6B7_0_1_31U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0x6B7_0_1_31U= 0;
  } else {
    flgDrtSlt0x6B7_0_1_31U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x6B7_0_1_31U, &messageObj);
  }

  B_n.ReadCANMessage1_o1_d= flgDrtSlt0x6B7_0_1_31U;
  if (1==flgDrtSlt0x6B7_0_1_31U) {
    cntDrtSlt0x6B7_0_1_31U= cntDrtSlt0x6B7_0_1_31U+1;
    B_n.ReadCANMessage1_o2_i= cntDrtSlt0x6B7_0_1_31U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 6--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:20U byteOrder:LITTLEENDIAN(0U) dataType:uint32_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint32_T)(
        ((uint32_T)(dataPtr_tmp[0] ) )
        | ((uint32_T)(dataPtr_tmp[1] ) <<8U )
        | ((uint32_T)(dataPtr_tmp[2] & 0xF) <<16U )
        );
      B_n.rxKBI_Kilometerstand= (uint32_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:20U length:17U byteOrder:LITTLEENDIAN(0U) dataType:uint32_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint32_T)(
        ((uint32_T)(dataPtr_tmp[2] & 0xF0) >>4U )
        | ((uint32_T)(dataPtr_tmp[3] ) <<4U )
        | ((uint32_T)(dataPtr_tmp[4] & 0x1F) <<12U )
        );
      B_n.rxKBI_Standzeit02= (uint32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:40U length:7U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[5] & 0x7F) )
        );
      GOLF_Fuel= (real32_T)uint32_temp;
    }

    {
      /*--Order:5 startBit:47U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[5] & 0x80) >>7U )
        );
      B_n.rxKBI_FStatusTank= (uint32_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:55U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[6] & 0x80) >>7U )
        );
      B_n.rxKBI_QBitAussen_Temp_gef= (uint32_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:56U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:0.5 offset:-50.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[7] ) )
        );
      B_n.rxKBI_AussenTemp_gef= (uint32_T)uint32_temp*(0.5)+(-50.0);
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn32U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x121_0_1_32U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0x121_0_1_32U= 0;
  } else {
    flgDrtSlt0x121_0_1_32U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x121_0_1_32U, &messageObj);
  }

  B_n.ReadCANMessage_o1_or= flgDrtSlt0x121_0_1_32U;
  if (1==flgDrtSlt0x121_0_1_32U) {
    cntDrtSlt0x121_0_1_32U= cntDrtSlt0x121_0_1_32U+1;
    B_n.ReadCANMessage_o2_ke= cntDrtSlt0x121_0_1_32U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 11--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[0] ) )
        );
      B_n.rxCHECKSUM= (uint32_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:8U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] & 0xF) )
        );
      B_n.rxCOUNTER= (uint32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:12U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:0.4 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] & 0xF0) >>4U )
        | ((uint8_T)(dataPtr_tmp[2] & 0xF) <<4U )
        );
      GOLF_AcceleratorRawValur= (real32_T)uint32_temp*(0.4);
    }

    {
      /*--Order:5 startBit:20U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[2] & 0x10) >>4U )
        );
      B_n.rxMO_QBitAcceleratorPedalValue_= (uint32_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:21U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:25.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[2] & 0xE0) >>5U )
        | ((uint8_T)(dataPtr_tmp[3] & 0x1F) <<3U )
        );
      B_n.rxMO_AcceleratorPedalGradient= (uint32_T)uint32_temp*(25.0);
    }

    {
      /*--Order:7 startBit:29U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x20) >>5U )
        );
      B_n.rxMO_SigAcceleratorPedalGradien= (uint32_T)uint32_temp;
    }

    {
      /*--Order:8 startBit:30U length:6U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:18.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[3] & 0xC0) >>6U )
        | ((uint8_T)(dataPtr_tmp[4] & 0xF) <<2U )
        );
      B_n.rxMO_relManifoldPressure= (uint32_T)uint32_temp*(18.0);
    }

    {
      /*--Order:9 startBit:36U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x10) >>4U )
        );
      B_n.rxMO_relManifoldPressure_gem_er= (uint32_T)uint32_temp;
    }

    {
      /*--Order:10 startBit:37U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x20) >>5U )
        );
      B_n.rxMO_MomentIm_Neutral= (uint32_T)uint32_temp;
    }

    {
      /*--Order:11 startBit:38U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x40) >>6U )
        );
      B_n.rxMO_FuelCutOff= (uint32_T)uint32_temp;
    }

    {
      /*--Order:12 startBit:40U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:10.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[5] ) )
        );
      B_n.rxMO_TargetSpeed_Idle= (uint32_T)uint32_temp*(10.0);
    }

    /**------After traversing all signals------**/
  }
}

void flSig2DataCnn33U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/
  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*************************************CAN message parameter setting(id,extended,length,remote)******************************/
  messageObj.id= 0x410;
  messageObj.extended= 0;
  messageObj.length= 2;
  messageObj.remote= 0;

  /*************************************Clear data****************************************************************************/
  for (i=0;i<2;i++) {
    dataPtr_tmp[i]= 0;
  }

  /****************************************Start pack signals to data*********************************************************/
  /*-------------------------------------The number of signals is 2--------------------------------------------------------*/

  /**-----Before traversing all signals------**/
  /*------search for multiplexor signal---------------------*/
  /**------After traversing all signals------**/

  /**-----Before traversing all signals------**/
  /*------search for standard and multiplexed signals------*/

  /*--Order:0 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (B_n.Channel < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (B_n.Channel > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(B_n.Channel);
  }

  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[0]);

  /*--Order:1 startBit:8U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (B_n.Onoff < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (B_n.Onoff > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(B_n.Onoff);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[1]);

  /**------After traversing all signals------**/
  /***********************************Send CAN message*************************************************************************/
  if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_C)) {
    F_Servece_CAN_Transmit(CAN_CTRL_C, &messageObj);
  }
}

void flData2SigCnn34U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x42C_0_2_34U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*------------------Signed signal local variables definition------------------*/
  int32_T int32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_C)) {
    flgDrtSlt0x42C_0_2_34U= 0;
  } else {
    flgDrtSlt0x42C_0_2_34U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x42C_0_2_34U, &messageObj);
  }

  B_n.ReadCANMessage4_o1= flgDrtSlt0x42C_0_2_34U;
  if (1==flgDrtSlt0x42C_0_2_34U) {
    cntDrtSlt0x42C_0_2_34U= cntDrtSlt0x42C_0_2_34U+1;
    B_n.ReadCANMessage4_o2= cntDrtSlt0x42C_0_2_34U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 2--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:16U byteOrder:LITTLEENDIAN(0U) dataType:int16_T--*/
      /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int16_T)(
        ((int16_T)(dataPtr_tmp[0] ) )
        | ((int16_T)(dataPtr_tmp[1] ) <<8U )
        );

      /* SignExtend signalSize:16U*/
      //fHex:65535U
      //fHex:0xFFFF
      if ((int32_temp & (1 << 15U)) !=0 ) {
        int32_temp |= ~0xFFFF;
      }

      PDS_CH9Current= (real32_T)int32_temp*(0.01);
    }

    {
      /*--Order:3 startBit:16U length:16U byteOrder:LITTLEENDIAN(0U) dataType:int16_T--*/
      /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int16_T)(
        ((int16_T)(dataPtr_tmp[2] ) )
        | ((int16_T)(dataPtr_tmp[3] ) <<8U )
        );

      /* SignExtend signalSize:16U*/
      //fHex:65535U
      //fHex:0xFFFF
      if ((int32_temp & (1 << 15U)) !=0 ) {
        int32_temp |= ~0xFFFF;
      }

      PDS_CH10Current= (real32_T)int32_temp*(0.01);
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn35U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x428_0_2_35U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*------------------Signed signal local variables definition------------------*/
  int32_T int32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_C)) {
    flgDrtSlt0x428_0_2_35U= 0;
  } else {
    flgDrtSlt0x428_0_2_35U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x428_0_2_35U, &messageObj);
  }

  B_n.ReadCANMessage3_o1_l= flgDrtSlt0x428_0_2_35U;
  if (1==flgDrtSlt0x428_0_2_35U) {
    cntDrtSlt0x428_0_2_35U= cntDrtSlt0x428_0_2_35U+1;
    B_n.ReadCANMessage3_o2_f= cntDrtSlt0x428_0_2_35U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 4--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:16U byteOrder:LITTLEENDIAN(0U) dataType:int16_T--*/
      /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int16_T)(
        ((int16_T)(dataPtr_tmp[0] ) )
        | ((int16_T)(dataPtr_tmp[1] ) <<8U )
        );

      /* SignExtend signalSize:16U*/
      //fHex:65535U
      //fHex:0xFFFF
      if ((int32_temp & (1 << 15U)) !=0 ) {
        int32_temp |= ~0xFFFF;
      }

      PDS_CH5Current= (real32_T)int32_temp*(0.01);
    }

    {
      /*--Order:3 startBit:16U length:16U byteOrder:LITTLEENDIAN(0U) dataType:int16_T--*/
      /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int16_T)(
        ((int16_T)(dataPtr_tmp[2] ) )
        | ((int16_T)(dataPtr_tmp[3] ) <<8U )
        );

      /* SignExtend signalSize:16U*/
      //fHex:65535U
      //fHex:0xFFFF
      if ((int32_temp & (1 << 15U)) !=0 ) {
        int32_temp |= ~0xFFFF;
      }

      PDS_CH6Current= (real32_T)int32_temp*(0.01);
    }

    {
      /*--Order:4 startBit:32U length:16U byteOrder:LITTLEENDIAN(0U) dataType:int16_T--*/
      /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int16_T)(
        ((int16_T)(dataPtr_tmp[4] ) )
        | ((int16_T)(dataPtr_tmp[5] ) <<8U )
        );

      /* SignExtend signalSize:16U*/
      //fHex:65535U
      //fHex:0xFFFF
      if ((int32_temp & (1 << 15U)) !=0 ) {
        int32_temp |= ~0xFFFF;
      }

      PDS_CH7Current= (real32_T)int32_temp*(0.01);
    }

    {
      /*--Order:5 startBit:48U length:16U byteOrder:LITTLEENDIAN(0U) dataType:int16_T--*/
      /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int16_T)(
        ((int16_T)(dataPtr_tmp[6] ) )
        | ((int16_T)(dataPtr_tmp[7] ) <<8U )
        );

      /* SignExtend signalSize:16U*/
      //fHex:65535U
      //fHex:0xFFFF
      if ((int32_temp & (1 << 15U)) !=0 ) {
        int32_temp |= ~0xFFFF;
      }

      PDS_CH8Current= (real32_T)int32_temp*(0.01);
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn36U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x424_0_2_36U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*------------------Signed signal local variables definition------------------*/
  int32_T int32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_C)) {
    flgDrtSlt0x424_0_2_36U= 0;
  } else {
    flgDrtSlt0x424_0_2_36U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x424_0_2_36U, &messageObj);
  }

  B_n.ReadCANMessage2_o1_a= flgDrtSlt0x424_0_2_36U;
  if (1==flgDrtSlt0x424_0_2_36U) {
    cntDrtSlt0x424_0_2_36U= cntDrtSlt0x424_0_2_36U+1;
    B_n.ReadCANMessage2_o2_g= cntDrtSlt0x424_0_2_36U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 4--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:16U byteOrder:LITTLEENDIAN(0U) dataType:int16_T--*/
      /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int16_T)(
        ((int16_T)(dataPtr_tmp[0] ) )
        | ((int16_T)(dataPtr_tmp[1] ) <<8U )
        );

      /* SignExtend signalSize:16U*/
      //fHex:65535U
      //fHex:0xFFFF
      if ((int32_temp & (1 << 15U)) !=0 ) {
        int32_temp |= ~0xFFFF;
      }

      PDS_CH1Current= (real32_T)int32_temp*(0.01);
    }

    {
      /*--Order:3 startBit:16U length:16U byteOrder:LITTLEENDIAN(0U) dataType:int16_T--*/
      /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int16_T)(
        ((int16_T)(dataPtr_tmp[2] ) )
        | ((int16_T)(dataPtr_tmp[3] ) <<8U )
        );

      /* SignExtend signalSize:16U*/
      //fHex:65535U
      //fHex:0xFFFF
      if ((int32_temp & (1 << 15U)) !=0 ) {
        int32_temp |= ~0xFFFF;
      }

      PDS_CH2Current= (real32_T)int32_temp*(0.01);
    }

    {
      /*--Order:4 startBit:32U length:16U byteOrder:LITTLEENDIAN(0U) dataType:int16_T--*/
      /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int16_T)(
        ((int16_T)(dataPtr_tmp[4] ) )
        | ((int16_T)(dataPtr_tmp[5] ) <<8U )
        );

      /* SignExtend signalSize:16U*/
      //fHex:65535U
      //fHex:0xFFFF
      if ((int32_temp & (1 << 15U)) !=0 ) {
        int32_temp |= ~0xFFFF;
      }

      PDS_CH3Current= (real32_T)int32_temp*(0.01);
    }

    {
      /*--Order:5 startBit:48U length:16U byteOrder:LITTLEENDIAN(0U) dataType:int16_T--*/
      /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      int32_temp = (int16_T)(
        ((int16_T)(dataPtr_tmp[6] ) )
        | ((int16_T)(dataPtr_tmp[7] ) <<8U )
        );

      /* SignExtend signalSize:16U*/
      //fHex:65535U
      //fHex:0xFFFF
      if ((int32_temp & (1 << 15U)) !=0 ) {
        int32_temp |= ~0xFFFF;
      }

      PDS_CH4Current= (real32_T)int32_temp*(0.01);
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn37U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x421_0_2_37U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_C)) {
    flgDrtSlt0x421_0_2_37U= 0;
  } else {
    flgDrtSlt0x421_0_2_37U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x421_0_2_37U, &messageObj);
  }

  B_n.ReadCANMessage5_o1= flgDrtSlt0x421_0_2_37U;
  if (1==flgDrtSlt0x421_0_2_37U) {
    cntDrtSlt0x421_0_2_37U= cntDrtSlt0x421_0_2_37U+1;
    B_n.ReadCANMessage5_o2= cntDrtSlt0x421_0_2_37U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 4--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[0] ) )
        | ((uint16_T)(dataPtr_tmp[1] ) <<8U )
        );
      B_n.rxParallel_Group1= (uint32_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:16U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[2] ) )
        | ((uint16_T)(dataPtr_tmp[3] ) <<8U )
        );
      B_n.rxParallel_Group2= (uint32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:32U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[4] ) )
        | ((uint16_T)(dataPtr_tmp[5] ) <<8U )
        );
      B_n.rxParallel_Group3= (uint32_T)uint32_temp;
    }

    {
      /*--Order:5 startBit:48U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[6] ) )
        | ((uint16_T)(dataPtr_tmp[7] ) <<8U )
        );
      B_n.rxParallel_Group4= (uint32_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn38U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x106_0_1_38U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0x106_0_1_38U= 0;
  } else {
    flgDrtSlt0x106_0_1_38U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x106_0_1_38U, &messageObj);
  }

  B_n.ReadCANMessage_o1_b= flgDrtSlt0x106_0_1_38U;
  if (1==flgDrtSlt0x106_0_1_38U) {
    cntDrtSlt0x106_0_1_38U= cntDrtSlt0x106_0_1_38U+1;
    B_n.ReadCANMessage_o2_n= cntDrtSlt0x106_0_1_38U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 35--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[0] ) )
        );
      B_n.rxCHECKSUM_o= (uint32_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:8U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] & 0xF) )
        );
      B_n.rxCOUNTER_k= (uint32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:12U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x10) >>4U )
        );
      B_n.rxESP_QBitBrakePressure= (uint32_T)uint32_temp;
    }

    {
      /*--Order:5 startBit:13U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x20) >>5U )
        );
      B_n.rxESP_QBitDriver_Brake= (uint32_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:14U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] & 0xC0) >>6U )
        );
      B_n.rxESP_NegativePressure_Threshol= (uint32_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:16U length:10U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:0.3 offset:-30.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[2] ) )
        | ((uint16_T)(dataPtr_tmp[3] & 0x3) <<8U )
        );
      GOLF_rxESPBrakePressure= (real32_T)uint32_temp*(0.3)+(-30.0);
    }

    {
      /*--Order:8 startBit:26U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x4) >>2U )
        );
      B_n.rxESP_DriverBrake= (uint32_T)uint32_temp;
    }

    {
      /*--Order:9 startBit:27U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x8) >>3U )
        );
      B_n.rxESP_VerzTSK_aktiv= (uint32_T)uint32_temp;
    }

    {
      /*--Order:10 startBit:28U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x10) >>4U )
        );
      B_n.rxESP_SteeringInterventionADS= (uint32_T)uint32_temp;
    }

    {
      /*--Order:11 startBit:29U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x20) >>5U )
        );
      B_n.rxESP_ConsistencyTSK= (uint32_T)uint32_temp;
    }

    {
      /*--Order:12 startBit:30U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x40) >>6U )
        );
      B_n.rxESP_BrakePressureAWV2= (uint32_T)uint32_temp;
    }

    {
      /*--Order:13 startBit:31U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[3] & 0x80) >>7U )
        );
      B_n.rxESP_ConsistencyAWV2= (uint32_T)uint32_temp;
    }

    {
      /*--Order:14 startBit:32U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x1) )
        );
      B_n.rxECD_Error= (uint32_T)uint32_temp;
    }

    {
      /*--Order:15 startBit:33U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x2) >>1U )
        );
      B_n.rxECD_notAvailable= (uint32_T)uint32_temp;
    }

    {
      /*--Order:16 startBit:34U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x4) >>2U )
        );
      B_n.rxESP_StatusBrakeTemp= (uint32_T)uint32_temp;
    }

    {
      /*--Order:17 startBit:35U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x8) >>3U )
        );
      B_n.rxESP_AutoholdStandby= (uint32_T)uint32_temp;
    }

    {
      /*--Order:18 startBit:36U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x10) >>4U )
        );
      B_n.rxESP_HDCStandby= (uint32_T)uint32_temp;
    }

    {
      /*--Order:19 startBit:37U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x20) >>5U )
        );
      B_n.rxESP_HBAAktiv= (uint32_T)uint32_temp;
    }

    {
      /*--Order:20 startBit:38U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x40) >>6U )
        );
      B_n.rxESP_PrefillTriggered= (uint32_T)uint32_temp;
    }

    {
      /*--Order:21 startBit:39U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x80) >>7U )
        );
      B_n.rxESP_ReverseTravelRecognized= (uint32_T)uint32_temp;
    }

    {
      /*--Order:22 startBit:40U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[5] & 0x1) )
        );
      B_n.rxESP_StatusTractionHelp= (uint32_T)uint32_temp;
    }

    {
      /*--Order:23 startBit:41U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[5] & 0x2) >>1U )
        );
      B_n.rxESP_HDCAktiv= (uint32_T)uint32_temp;
    }

    {
      /*--Order:24 startBit:42U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[5] & 0xC) >>2U )
        );
      B_n.rxESP_StartStoppInfo= (uint32_T)uint32_temp;
    }

    {
      /*--Order:25 startBit:44U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[5] & 0x10) >>4U )
        );
      B_n.rxESP_InterventionHL= (uint32_T)uint32_temp;
    }

    {
      /*--Order:26 startBit:45U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[5] & 0x20) >>5U )
        );
      B_n.rxESP_InterventionHR= (uint32_T)uint32_temp;
    }

    {
      /*--Order:27 startBit:46U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[5] & 0x40) >>6U )
        );
      B_n.rxESP_InterventionVL= (uint32_T)uint32_temp;
    }

    {
      /*--Order:28 startBit:47U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[5] & 0x80) >>7U )
        );
      B_n.rxESP_InterventionVR= (uint32_T)uint32_temp;
    }

    {
      /*--Order:29 startBit:48U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:4.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[6] ) )
        );
      B_n.rxESP_BKVVacuum= (uint32_T)uint32_temp*(4.0);
    }

    {
      /*--Order:30 startBit:56U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[7] & 0x1) )
        );
      B_n.rxESP_AutoholdAktiv= (uint32_T)uint32_temp;
    }

    {
      /*--Order:31 startBit:57U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[7] & 0x2) >>1U )
        );
      B_n.rxESP_FStatusTractionHelp= (uint32_T)uint32_temp;
    }

    {
      /*--Order:32 startBit:58U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[7] & 0x4) >>2U )
        );
      B_n.rxESP_VerzEPB_aktiv= (uint32_T)uint32_temp;
    }

    {
      /*--Order:33 startBit:59U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[7] & 0x8) >>3U )
        );
      B_n.rxECD_BrakeLight= (uint32_T)uint32_temp;
    }

    {
      /*--Order:34 startBit:60U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[7] & 0x10) >>4U )
        );
      B_n.rxESP_VerzoegEPB_verf= (uint32_T)uint32_temp;
    }

    {
      /*--Order:35 startBit:61U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[7] & 0x20) >>5U )
        );
      B_n.rxESP_StatusBrakePressure= (uint32_T)uint32_temp;
    }

    {
      /*--Order:36 startBit:62U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[7] & 0xC0) >>6U )
        );
      B_n.rxESP_RequirementEPB= (uint32_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn39U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0x101_0_1_39U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0x101_0_1_39U= 0;
  } else {
    flgDrtSlt0x101_0_1_39U= F_Servece_CAN_ReceiveDirect
      (&SvcCANDrtSlt0x101_0_1_39U, &messageObj);
  }

  B_n.ReadCANMessage_o1_o5= flgDrtSlt0x101_0_1_39U;
  if (1==flgDrtSlt0x101_0_1_39U) {
    cntDrtSlt0x101_0_1_39U= cntDrtSlt0x101_0_1_39U+1;
    B_n.ReadCANMessage_o2_ik= cntDrtSlt0x101_0_1_39U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 16--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[0] ) )
        );
      B_n.rxESP_02CRC= (uint32_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:8U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] & 0xF) )
        );
      B_n.rxESP_02BZ= (uint32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:12U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x10) >>4U )
        );
      B_n.rxESP_QBitYawRate= (uint32_T)uint32_temp;
    }

    {
      /*--Order:5 startBit:13U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x20) >>5U )
        );
      B_n.rxESP_QBitLongitudinalAccelerat= (uint32_T)uint32_temp;
    }

    {
      /*--Order:6 startBit:14U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x40) >>6U )
        );
      B_n.rxESP_QBitLateral= (uint32_T)uint32_temp;
    }

    {
      /*--Order:7 startBit:15U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[1] & 0x80) >>7U )
        );
      B_n.rxESP_Standstillflag= (uint32_T)uint32_temp;
    }

    {
      /*--Order:8 startBit:16U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:0.01 offset:-1.27 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[2] ) )
        );
      B_n.rxESP_LateralAcceleration= (uint32_T)uint32_temp*(0.01)+(-1.27);
    }

    {
      /*--Order:9 startBit:24U length:10U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:0.03125 offset:-16.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[3] ) )
        | ((uint16_T)(dataPtr_tmp[4] & 0x3) <<8U )
        );
      GOLF_rxACC= (real32_T)uint32_temp*(0.03125)+(-16.0);
    }

    {
      /*--Order:10 startBit:34U length:5U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:0.1 offset:-1.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[4] & 0x7C) >>2U )
        );
      B_n.rxESP_VerteilWankmom= (uint32_T)uint32_temp*(0.1)+(-1.0);
    }

    {
      /*--Order:11 startBit:39U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[4] & 0x80) >>7U )
        );
      B_n.rxESP_QBitAnf_Vert_Wank= (uint32_T)uint32_temp;
    }

    {
      /*--Order:12 startBit:40U length:14U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[5] ) )
        | ((uint16_T)(dataPtr_tmp[6] & 0x3F) <<8U )
        );
      B_n.rxESP_YawRate= (uint32_T)uint32_temp*(0.01);
    }

    {
      /*--Order:13 startBit:54U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[6] & 0x40) >>6U )
        );
      B_n.rxESP_VZYawRate= (uint32_T)uint32_temp;
    }

    {
      /*--Order:14 startBit:55U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[6] & 0x80) >>7U )
        );
      B_n.rxESP_EmergencyBrakeIndicator= (uint32_T)uint32_temp;
    }

    {
      /*--Order:15 startBit:56U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[7] & 0x1) )
        );
      B_n.rxESP_StartVoltage= (uint32_T)uint32_temp;
    }

    {
      /*--Order:16 startBit:57U length:3U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[7] & 0xE) >>1U )
        );
      B_n.rxESP_PLACancellation= (uint32_T)uint32_temp;
    }

    {
      /*--Order:17 startBit:60U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[7] & 0xF0) >>4U )
        );
      B_n.rxESP_StatusESP_PLA= (uint32_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flData2SigCnn40U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T flgDrtSlt0xAD_0_1_40U= 0;
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*********************************Read  data from CAN************************************************************************/
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    flgDrtSlt0xAD_0_1_40U= 0;
  } else {
    flgDrtSlt0xAD_0_1_40U= F_Servece_CAN_ReceiveDirect(&SvcCANDrtSlt0xAD_0_1_40U,
      &messageObj);
  }

  B_n.ReadCANMessage_o1_e= flgDrtSlt0xAD_0_1_40U;
  if (1==flgDrtSlt0xAD_0_1_40U) {
    cntDrtSlt0xAD_0_1_40U= cntDrtSlt0xAD_0_1_40U+1;
    B_n.ReadCANMessage_o2_lq= cntDrtSlt0xAD_0_1_40U;

    /*********************************Start unpack data to signals***************************************************************/
    /*-------------------------------------The number of signals is 12--------------------------------------------------------*/
    /**-----Before traversing all signals------**/
    /*------search for multiplexor signal---------------------*/
    /**------After traversing all signals------**/
    /**-----Before traversing all signals------**/
    /*------search for standard and multiplexed signals------*/
    {
      /*--Order:2 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[0] ) )
        );
      B_n.rxCHECKSUM_e= (uint32_T)uint32_temp;
    }

    {
      /*--Order:3 startBit:8U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[1] & 0xF) )
        );
      B_n.rxCOUNTERXX= (uint32_T)uint32_temp;
    }

    {
      /*--Order:4 startBit:12U length:10U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:-509.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[1] & 0xF0) >>4U )
        | ((uint16_T)(dataPtr_tmp[2] & 0x3F) <<4U )
        );
      B_n.rxGE_MMomSoll_02= (uint32_T)uint32_temp+(-509.0);
    }

    {
      /*--Order:5 startBit:22U length:10U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:1.0 offset:-509.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[2] & 0xC0) >>6U )
        | ((uint16_T)(dataPtr_tmp[3] ) <<2U )
        );
      B_n.rxGE_MMomHold_02= (uint32_T)uint32_temp+(-509.0);
    }

    {
      /*--Order:6 startBit:32U length:10U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
      /*--slope:0.1 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint16_T)(
        ((uint16_T)(dataPtr_tmp[4] ) )
        | ((uint16_T)(dataPtr_tmp[5] & 0x3) <<8U )
        );
      B_n.rxGE_Uefkt= (uint32_T)uint32_temp*(0.1);
    }

    {
      /*--Order:7 startBit:42U length:5U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[5] & 0x7C) >>2U )
        );
      B_n.rxGE_SpeedLevel= (uint32_T)uint32_temp;
    }

    {
      /*--Order:8 startBit:47U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[5] & 0x80) >>7U )
        );
      B_n.rxGE_SwitchingProcess= (uint32_T)uint32_temp;
    }

    {
      /*--Order:9 startBit:54U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[6] & 0xC0) >>6U )
        );
      B_n.rxGE_StatusCoupling= (uint32_T)uint32_temp;
    }

    {
      /*--Order:10 startBit:56U length:2U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[7] & 0x3) )
        );
      B_n.rxGE_MMomStatus= (uint32_T)uint32_temp;
    }

    {
      /*--Order:11 startBit:58U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[7] & 0x4) >>2U )
        );
      B_n.rxGE_ReleasedMMom_Hold= (uint32_T)uint32_temp;
    }

    {
      /*--Order:12 startBit:59U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (boolean_T)(
        ((boolean_T)(dataPtr_tmp[7] & 0x8) >>3U )
        );
      B_n.rxGE_BanFadingOut= (uint32_T)uint32_temp;
    }

    {
      /*--Order:13 startBit:60U length:4U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
      /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/
      uint32_temp = (uint8_T)(
        ((uint8_T)(dataPtr_tmp[7] & 0xF0) >>4U )
        );
      B_n.rxGE_TargetWalk_m= (real32_T)uint32_temp;
    }

    /**------After traversing all signals------**/
  }
}

void flSig2DataCnn43U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/
  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*------------------Signed signal local variables definition------------------*/
  int32_T int32_temp= 0;

  /*------------------Float32 signal local variables definition------------------*/
  real32_T tempReal32= 0;

  /*************************************CAN message parameter setting(id,extended,length,remote)******************************/
  messageObj.id= 0x313;
  messageObj.extended= 0;
  messageObj.length= 8;
  messageObj.remote= 0;

  /*************************************Clear data****************************************************************************/
  for (i=0;i<8;i++) {
    dataPtr_tmp[i]= 0;
  }

  /****************************************Start pack signals to data*********************************************************/
  /*-------------------------------------The number of signals is 5--------------------------------------------------------*/

  /**-----Before traversing all signals------**/
  /*------search for multiplexor signal---------------------*/
  /**------After traversing all signals------**/

  /**-----Before traversing all signals------**/
  /*------search for standard and multiplexed signals------*/

  /*--Order:0 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (Brake_ControlMode < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (Brake_ControlMode > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(Brake_ControlMode);
  }

  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[0]);

  /*--Order:1 startBit:8U length:8U byteOrder:LITTLEENDIAN(0U) dataType:int8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:1U-*/
  if (Brake_SetDuty > 127.0) {
    int32_temp = (int8_T)127;
  } else {
    int32_temp= (int8_T)(Brake_SetDuty);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((int32_temp & 0xFF))|dataPtr_tmp[1]);

  /*--Order:2 startBit:16U length:32U byteOrder:LITTLEENDIAN(0U) dataType:float--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:2U-*/
  tempReal32= (real32_T)(B_n.Set_Brake_PosOvrMsr_d);
  uint32_temp= *((uint32_T*)(&tempReal32));
  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[2]);
  dataPtr_tmp[3]= (uint8_T)((uint8_T)((uint32_temp & 0xFF00)>>8U)|dataPtr_tmp[3]);
  dataPtr_tmp[4]= (uint8_T)((uint8_T)((uint32_temp & 0xFF0000)>>16U)|
    dataPtr_tmp[4]);
  dataPtr_tmp[5]= (uint8_T)((uint8_T)((uint32_temp & 0xFF000000)>>24U)|
    dataPtr_tmp[5]);

  /*--Order:3 startBit:48U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (uint8_T)(B_n.Brake_ResetOvrMsr_c);
  dataPtr_tmp[6]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[6]);

  /*--Order:4 startBit:56U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (B_n.BrakeCalibCMD < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (B_n.BrakeCalibCMD > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(B_n.BrakeCalibCMD);
  }

  dataPtr_tmp[7]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[7]);

  /**------After traversing all signals------**/
  /***********************************Send CAN message*************************************************************************/
  if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_C)) {
    F_Servece_CAN_Transmit(CAN_CTRL_C, &messageObj);
  }
}

void flSig2DataCnn44U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/
  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*************************************CAN message parameter setting(id,extended,length,remote)******************************/
  messageObj.id= 0x474;
  messageObj.extended= 0;
  messageObj.length= 3;
  messageObj.remote= 0;

  /*************************************Clear data****************************************************************************/
  for (i=0;i<3;i++) {
    dataPtr_tmp[i]= 0;
  }

  /****************************************Start pack signals to data*********************************************************/
  /*-------------------------------------The number of signals is 2--------------------------------------------------------*/

  /**-----Before traversing all signals------**/
  /*------search for multiplexor signal---------------------*/
  /**------After traversing all signals------**/

  /**-----Before traversing all signals------**/
  /*------search for standard and multiplexed signals------*/

  /*--Order:0 startBit:0U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
  /*--slope:0.01 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (B_n.Set_GasOvrMsr_a < 0.0) {
    uint32_temp = (uint16_T)0;
  } else if (B_n.Set_GasOvrMsr_a > 655.35) {
    uint32_temp = (uint16_T)65535U;
  } else {
    uint32_temp= (uint16_T)(B_n.Set_GasOvrMsr_a/(0.01));
  }

  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[0]);
  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xFF00)>>8U)|dataPtr_tmp[1]);

  /*--Order:1 startBit:16U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (B_n.Activate_ThrottleControllerOvrM < 0.0) {
    uint32_temp = (boolean_T)0;
  } else if (B_n.Activate_ThrottleControllerOvrM > 1.0) {
    uint32_temp = (boolean_T)1U;
  } else {
    uint32_temp= (boolean_T)(B_n.Activate_ThrottleControllerOvrM);
  }

  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0x1))|dataPtr_tmp[2]);

  /**------After traversing all signals------**/
  /***********************************Send CAN message*************************************************************************/
  if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_C)) {
    F_Servece_CAN_Transmit(CAN_CTRL_C, &messageObj);
  }
}

void flSig2DataCnn45U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/
  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*************************************CAN message parameter setting(id,extended,length,remote)******************************/
  messageObj.id= 0x414;
  messageObj.extended= 0;
  messageObj.length= 8;
  messageObj.remote= 0;

  /*************************************Clear data****************************************************************************/
  for (i=0;i<8;i++) {
    dataPtr_tmp[i]= 0;
  }

  /****************************************Start pack signals to data*********************************************************/
  /*-------------------------------------The number of signals is 3--------------------------------------------------------*/

  /**-----Before traversing all signals------**/
  /*------search for multiplexor signal---------------------*/
  /**------After traversing all signals------**/

  /**-----Before traversing all signals------**/
  /*------search for standard and multiplexed signals------*/

  /*--Order:0 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (1.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (1.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(1.0);
  }

  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[0]);

  /*--Order:1 startBit:8U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (B_n.GOLF_MotorRPM_m < 0.0) {
    uint32_temp = (uint16_T)0;
  } else if (B_n.GOLF_MotorRPM_m > 65535.0) {
    uint32_temp = (uint16_T)65535U;
  } else {
    uint32_temp= (uint16_T)(B_n.GOLF_MotorRPM_m);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[1]);
  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0xFF00)>>8U)|dataPtr_tmp[2]);

  /*--Order:2 startBit:24U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (B_n.GOLF_KL75_ox < 0.0) {
    uint32_temp = (boolean_T)0;
  } else if (B_n.GOLF_KL75_ox > 1.0) {
    uint32_temp = (boolean_T)1U;
  } else {
    uint32_temp= (boolean_T)(B_n.GOLF_KL75_ox);
  }

  dataPtr_tmp[3]= (uint8_T)((uint8_T)((uint32_temp & 0x1))|dataPtr_tmp[3]);

  /**------After traversing all signals------**/
  /***********************************Send CAN message*************************************************************************/
  if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_D)) {
    F_Servece_CAN_Transmit(CAN_CTRL_D, &messageObj);
  }
}

void flSig2DataCnn46U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/
  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*************************************CAN message parameter setting(id,extended,length,remote)******************************/
  messageObj.id= 0x413;
  messageObj.extended= 0;
  messageObj.length= 8;
  messageObj.remote= 0;

  /*************************************Clear data****************************************************************************/
  for (i=0;i<8;i++) {
    dataPtr_tmp[i]= 0;
  }

  /****************************************Start pack signals to data*********************************************************/
  /*-------------------------------------The number of signals is 8--------------------------------------------------------*/

  /**-----Before traversing all signals------**/
  /*------search for multiplexor signal---------------------*/
  /**------After traversing all signals------**/

  /**-----Before traversing all signals------**/
  /*------search for standard and multiplexed signals------*/

  /*--Order:0 startBit:0U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.EPAS_DriverIntervention_overrid);
  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0x1))|dataPtr_tmp[0]);

  /*--Order:1 startBit:1U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.BBW_DriverIntervention_c);
  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0x1)<<1U)|dataPtr_tmp[0]);

  /*--Order:2 startBit:2U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.GasPedalintervention);
  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0x1)<<2U)|dataPtr_tmp[0]);

  /*--Order:3 startBit:8U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (1.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (1.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(1.0);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[1]);

  /*--Order:4 startBit:16U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (1.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (1.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(1.0);
  }

  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[2]);

  /*--Order:5 startBit:24U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (B_n.GOLF_AcceleratorRawValur_j < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (B_n.GOLF_AcceleratorRawValur_j > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(B_n.GOLF_AcceleratorRawValur_j);
  }

  dataPtr_tmp[3]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[3]);

  /*--Order:6 startBit:32U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (B_n.GOLF_BrakePedalPos_j < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (B_n.GOLF_BrakePedalPos_j > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(B_n.GOLF_BrakePedalPos_j);
  }

  dataPtr_tmp[4]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[4]);

  /*--Order:7 startBit:40U length:16U byteOrder:LITTLEENDIAN(0U) dataType:uint16_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (B_n.Steering_Angle_o < 0.0) {
    uint32_temp = (uint16_T)0;
  } else if (B_n.Steering_Angle_o > 65535.0) {
    uint32_temp = (uint16_T)65535U;
  } else {
    uint32_temp= (uint16_T)(B_n.Steering_Angle_o);
  }

  dataPtr_tmp[5]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[5]);
  dataPtr_tmp[6]= (uint8_T)((uint8_T)((uint32_temp & 0xFF00)>>8U)|dataPtr_tmp[6]);

  /**------After traversing all signals------**/
  /***********************************Send CAN message*************************************************************************/
  if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_D)) {
    F_Servece_CAN_Transmit(CAN_CTRL_D, &messageObj);
  }
}

void flSig2DataCnn47U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/
  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*************************************CAN message parameter setting(id,extended,length,remote)******************************/
  messageObj.id= 0x412;
  messageObj.extended= 0;
  messageObj.length= 8;
  messageObj.remote= 0;

  /*************************************Clear data****************************************************************************/
  for (i=0;i<8;i++) {
    dataPtr_tmp[i]= 0;
  }

  /****************************************Start pack signals to data*********************************************************/
  /*-------------------------------------The number of signals is 8--------------------------------------------------------*/

  /**-----Before traversing all signals------**/
  /*------search for multiplexor signal---------------------*/
  /**------After traversing all signals------**/

  /**-----Before traversing all signals------**/
  /*------search for standard and multiplexed signals------*/

  /*--Order:0 startBit:0U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (B_n.GOLF_Fuel_d < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (B_n.GOLF_Fuel_d > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(B_n.GOLF_Fuel_d);
  }

  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[0]);

  /*--Order:1 startBit:8U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (B_n.TmpRTBAtSendCANMessage2Inport2 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (B_n.TmpRTBAtSendCANMessage2Inport2 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(B_n.TmpRTBAtSendCANMessage2Inport2);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[1]);

  /*--Order:2 startBit:16U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (B_n.GOLF_HighBeam_i < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (B_n.GOLF_HighBeam_i > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(B_n.GOLF_HighBeam_i);
  }

  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[2]);

  /*--Order:3 startBit:24U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (1.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (1.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(1.0);
  }

  dataPtr_tmp[3]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[3]);

  /*--Order:4 startBit:32U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (uint8_T)(B_n.GOLF_CurrentGear_c);
  dataPtr_tmp[4]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[4]);

  /*--Order:5 startBit:40U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (uint8_T)(B_n.mode);
  dataPtr_tmp[5]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[5]);

  /*--Order:6 startBit:48U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (B_n.GOLF_HandBrakeStatus_g < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (B_n.GOLF_HandBrakeStatus_g > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(B_n.GOLF_HandBrakeStatus_g);
  }

  dataPtr_tmp[6]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[6]);

  /*--Order:7 startBit:56U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (1.0 < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (1.0 > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(1.0);
  }

  dataPtr_tmp[7]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[7]);

  /**------After traversing all signals------**/
  /***********************************Send CAN message*************************************************************************/
  if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_D)) {
    F_Servece_CAN_Transmit(CAN_CTRL_D, &messageObj);
  }
}

void flSig2DataCnn48U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/
  /*------------------Float32 signal local variables definition------------------*/
  real32_T tempReal32= 0;

  /*------------------Float32 signal local variables definition------------------*/
  uint32_T uint32_temp= 0;

  /*************************************CAN message parameter setting(id,extended,length,remote)******************************/
  messageObj.id= 0x411;
  messageObj.extended= 0;
  messageObj.length= 8;
  messageObj.remote= 0;

  /*************************************Clear data****************************************************************************/
  for (i=0;i<8;i++) {
    dataPtr_tmp[i]= 0;
  }

  /****************************************Start pack signals to data*********************************************************/
  /*-------------------------------------The number of signals is 2--------------------------------------------------------*/

  /**-----Before traversing all signals------**/
  /*------search for multiplexor signal---------------------*/
  /**------After traversing all signals------**/

  /**-----Before traversing all signals------**/
  /*------search for standard and multiplexed signals------*/

  /*--Order:0 startBit:0U length:32U byteOrder:LITTLEENDIAN(0U) dataType:float--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:2U-*/
  tempReal32= (real32_T)(B_n.TmpRTBAtSendCANMessage3Inport1);
  uint32_temp= *((uint32_T*)(&tempReal32));
  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[0]);
  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0xFF00)>>8U)|dataPtr_tmp[1]);
  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0xFF0000)>>16U)|
    dataPtr_tmp[2]);
  dataPtr_tmp[3]= (uint8_T)((uint8_T)((uint32_temp & 0xFF000000)>>24U)|
    dataPtr_tmp[3]);

  /*--Order:1 startBit:32U length:32U byteOrder:LITTLEENDIAN(0U) dataType:float--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:2U-*/
  tempReal32= (real32_T)(B_n.TmpRTBAtSendCANMessage3Inport2);
  uint32_temp= *((uint32_T*)(&tempReal32));
  dataPtr_tmp[4]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[4]);
  dataPtr_tmp[5]= (uint8_T)((uint8_T)((uint32_temp & 0xFF00)>>8U)|dataPtr_tmp[5]);
  dataPtr_tmp[6]= (uint8_T)((uint8_T)((uint32_temp & 0xFF0000)>>16U)|
    dataPtr_tmp[6]);
  dataPtr_tmp[7]= (uint8_T)((uint8_T)((uint32_temp & 0xFF000000)>>24U)|
    dataPtr_tmp[7]);

  /**------After traversing all signals------**/
  /***********************************Send CAN message*************************************************************************/
  if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_D)) {
    F_Servece_CAN_Transmit(CAN_CTRL_D, &messageObj);
  }
}

void flSig2DataCnn49U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/
  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*************************************CAN message parameter setting(id,extended,length,remote)******************************/
  messageObj.id= 0x415;
  messageObj.extended= 0;
  messageObj.length= 8;
  messageObj.remote= 0;

  /*************************************Clear data****************************************************************************/
  for (i=0;i<8;i++) {
    dataPtr_tmp[i]= 0;
  }

  /****************************************Start pack signals to data*********************************************************/
  /*-------------------------------------The number of signals is 14--------------------------------------------------------*/

  /**-----Before traversing all signals------**/
  /*------search for multiplexor signal---------------------*/
  /**------After traversing all signals------**/

  /**-----Before traversing all signals------**/
  /*------search for standard and multiplexed signals------*/

  /*--Order:0 startBit:0U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.isMotorRunning);
  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0x1))|dataPtr_tmp[0]);

  /*--Order:1 startBit:1U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.Kl75);
  dataPtr_tmp[0]= (uint8_T)((uint8_T)((uint32_temp & 0x1)<<1U)|dataPtr_tmp[0]);

  /*--Order:2 startBit:8U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.PDS_HeartbeatErr);
  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0x1))|dataPtr_tmp[1]);

  /*--Order:3 startBit:9U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.PDS_BUSErr);
  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0x1)<<1U)|dataPtr_tmp[1]);

  /*--Order:4 startBit:10U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.BywirePowerErr);
  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0x1)<<2U)|dataPtr_tmp[1]);

  /*--Order:5 startBit:11U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.EPASPowerErr);
  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0x1)<<3U)|dataPtr_tmp[1]);

  /*--Order:6 startBit:12U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.BrakePowerErr);
  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0x1)<<4U)|dataPtr_tmp[1]);

  /*--Order:7 startBit:13U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.Throttle_ECU_HeartbeatErr);
  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0x1)<<5U)|dataPtr_tmp[1]);

  /*--Order:8 startBit:14U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (1.0 < 0.0) {
    uint32_temp = (boolean_T)0;
  } else if (1.0 > 1.0) {
    uint32_temp = (boolean_T)1U;
  } else {
    uint32_temp= (boolean_T)(1.0);
  }

  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0x1)<<6U)|dataPtr_tmp[1]);

  /*--Order:9 startBit:15U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.EPAS_SystemErr_g);
  dataPtr_tmp[1]= (uint8_T)((uint8_T)((uint32_temp & 0x1)<<7U)|dataPtr_tmp[1]);

  /*--Order:10 startBit:16U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.EPAS_HeartbeatErr_m);
  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0x1))|dataPtr_tmp[2]);

  /*--Order:11 startBit:17U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.Brake_SystemErr_n);
  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0x1)<<1U)|dataPtr_tmp[2]);

  /*--Order:12 startBit:18U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.Brake_HeartBeatErr_d);
  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0x1)<<2U)|dataPtr_tmp[2]);

  /*--Order:13 startBit:19U length:1U byteOrder:LITTLEENDIAN(0U) dataType:boolean_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (boolean_T)(B_n.PC_HeartBeatErr);
  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0x1)<<3U)|dataPtr_tmp[2]);

  /**------After traversing all signals------**/
  /***********************************Send CAN message*************************************************************************/
  if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_D)) {
    F_Servece_CAN_Transmit(CAN_CTRL_D, &messageObj);
  }
}

void flSig2DataCnn50U()
{
  /*********************************Local variables definition part1**********************************************************/
  uint8_T i;
  CANMsgElement_t messageObj;
  uint8_T *dataPtr_tmp= &(messageObj.data[0]);

  /*********************************Local variables definition part2**********************************************************/
  /*------------------Signed signal local variables definition------------------*/
  int32_T int32_temp= 0;

  /*----------------Unsigned signal local variables definition----------------*/
  uint32_T uint32_temp= 0;

  /*************************************CAN message parameter setting(id,extended,length,remote)******************************/
  messageObj.id= 0x350;
  messageObj.extended= 0;
  messageObj.length= 8;
  messageObj.remote= 0;

  /*************************************Clear data****************************************************************************/
  for (i=0;i<8;i++) {
    dataPtr_tmp[i]= 0;
  }

  /****************************************Start pack signals to data*********************************************************/
  /*-------------------------------------The number of signals is 3--------------------------------------------------------*/

  /**-----Before traversing all signals------**/
  /*------search for multiplexor signal---------------------*/
  /**------After traversing all signals------**/

  /**-----Before traversing all signals------**/
  /*------search for standard and multiplexed signals------*/

  /*--Order:0 startBit:0U length:16U byteOrder:LITTLEENDIAN(0U) dataType:int16_T--*/
  /*--slope:0.02 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:1U-*/
  if (B_n.debug_Gatesetsteer_j < -655.36) {
    int32_temp = (int16_T)-32768;
  } else if (B_n.debug_Gatesetsteer_j > 655.34) {
    int32_temp = (int16_T)32767;
  } else {
    int32_temp= (int16_T)(B_n.debug_Gatesetsteer_j/(0.02));
  }

  dataPtr_tmp[0]= (uint8_T)((uint8_T)((int32_temp & 0xFF))|dataPtr_tmp[0]);
  dataPtr_tmp[1]= (uint8_T)((uint8_T)((int32_temp & 0xFF00)>>8U)|dataPtr_tmp[1]);

  /*--Order:1 startBit:16U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  if (B_n.debug_GateTorquelimit_e < 0.0) {
    uint32_temp = (uint8_T)0;
  } else if (B_n.debug_GateTorquelimit_e > 255.0) {
    uint32_temp = (uint8_T)255U;
  } else {
    uint32_temp= (uint8_T)(B_n.debug_GateTorquelimit_e);
  }

  dataPtr_tmp[2]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[2]);

  /*--Order:2 startBit:24U length:8U byteOrder:LITTLEENDIAN(0U) dataType:uint8_T--*/
  /*--slope:1.0 offset:0.0 multiplex_type:0U multiplex_value:0U--*/

  /*-dataRawType:0U-*/
  uint32_temp= (uint8_T)(B_n.mode_a);
  dataPtr_tmp[3]= (uint8_T)((uint8_T)((uint32_temp & 0xFF))|dataPtr_tmp[3]);

  /**------After traversing all signals------**/
  /***********************************Send CAN message*************************************************************************/
  if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_C)) {
    F_Servece_CAN_Transmit(CAN_CTRL_C, &messageObj);
  }
}

/* Function for Chart: '<S229>/Chart1' */
static void init(void)
{
  B_n.PtoNTrigger = 0.0;
  B_n.PtoDTrigger = 0.0;
  B_n.RtoNTrigger = 0.0;
  B_n.NtoRTrigger = 0.0;
  B_n.NtoDTrigger = 0.0;
  B_n.DtoNTrigger = 0.0;
  if (B_n.ReadCANMessage_o1_l && (Set_GearOvrMsr != GOLF_CurrentGear) &&
      (Set_GearOvrMsr != 1) && (Set_GearEnableOvrMsr == 1.0F)) {
    if ((GOLF_CurrentGear == 3) && (Set_GearOvrMsr == 2)) {
      DW_l.is_c1_Ecotron = IN_high3;
      DW_l.temporalCounter_i1_n = 0U;
      B_n.NtoRTrigger = 1.0;
      B_n.cnt++;
    } else if ((GOLF_CurrentGear == 1) && (Set_GearOvrMsr == 4)) {
      DW_l.is_c1_Ecotron = IN_high1;
      DW_l.temporalCounter_i1_n = 0U;
      B_n.PtoDTrigger = 1.0;
      B_n.cnt++;
    } else if ((GOLF_CurrentGear == 1) && ((Set_GearOvrMsr == 3) ||
                (Set_GearOvrMsr == 2))) {
      DW_l.is_c1_Ecotron = IN_high;
      DW_l.temporalCounter_i1_n = 0U;
      B_n.PtoNTrigger = 1.0;
      B_n.cnt++;
    } else if ((GOLF_CurrentGear == 2) && ((Set_GearOvrMsr == 3) ||
                (Set_GearOvrMsr == 4))) {
      DW_l.is_c1_Ecotron = IN_high2;
      DW_l.temporalCounter_i1_n = 0U;
      B_n.RtoNTrigger = 1.0;
      B_n.cnt++;
    } else if ((GOLF_CurrentGear == 3) && (Set_GearOvrMsr == 4)) {
      DW_l.is_c1_Ecotron = IN_high4;
      DW_l.temporalCounter_i1_n = 0U;
      B_n.NtoDTrigger = 1.0;
      B_n.cnt++;
    } else {
      if ((GOLF_CurrentGear == 4) && ((Set_GearOvrMsr == 2) || (Set_GearOvrMsr ==
            3))) {
        DW_l.is_c1_Ecotron = IN_high5;
        DW_l.temporalCounter_i1_n = 0U;
        B_n.DtoNTrigger = 1.0;
        B_n.cnt++;
      }
    }
  }
}

static void SystemCore_release(dsp_simulink_MovingAverage *obj)
{
  e_dsp_private_SlidingWindowAver *obj_0;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    obj_0 = obj->pStatistic;
    if (obj_0->isInitialized == 1) {
      obj_0->isInitialized = 2;
    }

    obj->NumChannels = -1;
  }
}

static void SystemCore_delete(dsp_simulink_MovingAverage *obj)
{
  SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingAverage *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    SystemCore_delete(obj);
  }
}

/* Model step function for TID0 */
void Ecotron_step0(void)               /* Sample time: [0.001s, 0.0s] */
{
  real32_T cumRevIndex;
  real32_T csum;
  real32_T csumrev[199];
  real32_T z;
  real32_T Divide;
  int32_T Output;
  real32_T ms;
  int32_T output;
  boolean_T Compare_f2;
  boolean_T PC_timeout;
  boolean_T LogicalOperator1_b;
  boolean_T LogicalOperator1_e;
  boolean_T Compare_pa;
  boolean_T EPAS_SystemErr;
  boolean_T EPAS_HeartbeatErr;
  boolean_T Brake_SystemErr;
  boolean_T Brake_HeartBeatErr;
  ZCEventType zcEvent;
  real_T tmp;
  real32_T Multiply1_tmp;

  /* Update the flag to indicate when data transfers from
   *  Sample time: [0.001s, 0.0s] to Sample time: [0.01s, 0.0s]  */
  (M->Timing.RateInteraction.TID0_2)++;
  if ((M->Timing.RateInteraction.TID0_2) > 9) {
    M->Timing.RateInteraction.TID0_2 = 0;
  }

  /* Update the flag to indicate when data transfers from
   *  Sample time: [0.001s, 0.0s] to Sample time: [0.1s, 0.0s]  */
  (M->Timing.RateInteraction.TID0_5)++;
  if ((M->Timing.RateInteraction.TID0_5) > 99) {
    M->Timing.RateInteraction.TID0_5 = 0;
  }

  /* Update the flag to indicate when data transfers from
   *  Sample time: [0.001s, 0.0s] to Sample time: [0.5s, 0.0s]  */
  (M->Timing.RateInteraction.TID0_7)++;
  if ((M->Timing.RateInteraction.TID0_7) > 499) {
    M->Timing.RateInteraction.TID0_7 = 0;
  }

  /* End of Outputs for S-Function (EcoCoder_Task): '<S4>/Task_Call' */

  /* RateTransition generated from: '<S448>/Switch' */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    B_n.TmpRTBAtSwitchInport1 = DW_l.TmpRTBAtSwitchInport1_Buffer0;

    /* RateTransition generated from: '<S448>/Switch' */
    B_n.TmpRTBAtSwitchInport2 = DW_l.TmpRTBAtSwitchInport2_Buffer0;
  }

  /* End of RateTransition generated from: '<S448>/Switch' */

  /* S-Function (ecodoer_readMsg_float): '<S170>/Read CAN Message' */
  flData2SigCnn1U();

  /* Switch: '<S178>/Switch' incorporates:
   *  Constant: '<S178>/calibration'
   *  Constant: '<S178>/override'
   */
  if (SetACCOvrEn_val) {
    SetACCOvrMsr = SetACCOvrCal_val;
  } else {
    SetACCOvrMsr = PC_SetLongAcc;
  }

  /* End of Switch: '<S178>/Switch' */

  /* S-Function (ecodoer_readMsg_float): '<S115>/Read CAN Message' */
  flData2SigCnn2U();

  /* S-Function (ecodoer_readMsg_float): '<S112>/Read CAN Message' */
  flData2SigCnn3U();

  /* S-Function (ecodoer_readMsg_float): '<S113>/Read CAN Message' */
  flData2SigCnn4U();

  /* Logic: '<S204>/OR1' incorporates:
   *  Constant: '<S204>/RPM'
   *  Constant: '<S224>/Constant'
   *  RelationalOperator: '<S204>/Relational Operator'
   *  RelationalOperator: '<S224>/Compare'
   */
  Diag_isMotorrunning = ((600.0F <= GOLF_MotorRPM) || (GOLF_StartStop > 0));

  /* RateTransition generated from: '<S204>/OR' */
  if (M->Timing.RateInteraction.TID0_5 == 1) {
    B_n.TmpRTBAtORInport3 = DW_l.TmpRTBAtORInport3_Buffer0;
  }

  /* End of RateTransition generated from: '<S204>/OR' */

  /* Logic: '<S204>/OR' */
  Diag_KL75 = (Diag_isMotorrunning || (GOLF_KL75 != 0.0F) ||
               (B_n.TmpRTBAtORInport3 != 0.0F));

  /* S-Function (ecodoer_readMsg_float): '<S17>/Read CAN Message' */
  flData2SigCnn5U();

  /* RateTransition generated from: '<S23>/Relational Operator' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    B_n.TmpRTBAtRelationalOperatorInpor = DW_l.TmpRTBAtRelationalOperatorInpor;
  }

  /* End of RateTransition generated from: '<S23>/Relational Operator' */

  /* S-Function (ecodoer_readMsg_float): '<S21>/Read CAN Message1' */
  flData2SigCnn6U();

  /* RateTransition generated from: '<S48>/Relational Operator' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    B_n.TmpRTBAtRelationalOperatorInp_c = DW_l.TmpRTBAtRelationalOperatorInp_j;
  }

  /* End of RateTransition generated from: '<S48>/Relational Operator' */

  /* Logic: '<S202>/OR' incorporates:
   *  RelationalOperator: '<S23>/Relational Operator'
   *  RelationalOperator: '<S48>/Relational Operator'
   */
  Diag_PDS_HeartbeatErr = ((B_n.ReadCANMessage_o2_a ==
    B_n.TmpRTBAtRelationalOperatorInpor) || (B_n.ReadCANMessage1_o2 ==
    B_n.TmpRTBAtRelationalOperatorInp_c));

  /* RelationalOperator: '<S206>/Compare' incorporates:
   *  Constant: '<S206>/Constant'
   */
  Diag_PDS_BUSErr = (PDS_Errors > 0);

  /* Logic: '<S202>/OR1' incorporates:
   *  Constant: '<S207>/Constant'
   *  Constant: '<S209>/Constant'
   *  RelationalOperator: '<S207>/Compare'
   *  RelationalOperator: '<S209>/Compare'
   */
  Diag_By_wirePowerErr = ((PDS_Status6 != 1) && (PDS_Status6 != 2));

  /* Logic: '<S202>/OR6' incorporates:
   *  Constant: '<S210>/Constant'
   *  Constant: '<S211>/Constant'
   *  Constant: '<S212>/Constant'
   *  Constant: '<S213>/Constant'
   *  Logic: '<S202>/OR2'
   *  Logic: '<S202>/OR3'
   *  RelationalOperator: '<S210>/Compare'
   *  RelationalOperator: '<S211>/Compare'
   *  RelationalOperator: '<S212>/Compare'
   *  RelationalOperator: '<S213>/Compare'
   */
  Diag_EPASPowerErr = (((PDS_Status7 != 1) && (PDS_Status7 != 2)) ||
                       ((PDS_Status8 != 1) && (PDS_Status8 != 2)));

  /* Logic: '<S202>/OR7' incorporates:
   *  Constant: '<S208>/Constant'
   *  Constant: '<S214>/Constant'
   *  Constant: '<S215>/Constant'
   *  Constant: '<S216>/Constant'
   *  Logic: '<S202>/OR4'
   *  Logic: '<S202>/OR5'
   *  RelationalOperator: '<S208>/Compare'
   *  RelationalOperator: '<S214>/Compare'
   *  RelationalOperator: '<S215>/Compare'
   *  RelationalOperator: '<S216>/Compare'
   */
  Diag_BrakePowerErr = (((PDS_Status9 != 1) && (PDS_Status9 != 2)) ||
                        ((PDS_Status10 != 1) && (PDS_Status10 != 2)));

  /* S-Function (ecodoer_readMsg_float): '<S16>/Read CAN Message' */
  flData2SigCnn7U();

  /* RelationalOperator: '<S222>/Compare' incorporates:
   *  Constant: '<S222>/Constant'
   */
  Compare_pa = (THROTTLE_CurrentPedalPos > 5.0F);

  /* S-Function (ecodoer_readMsg_float): '<S77>/Read CAN Message3' */
  flData2SigCnn8U();

  /* Logic: '<S201>/OR' */
  EPAS_SystemErr = (EPAS_UnderVoltage || EPAS_OverCurrent);

  /* S-Function (ecodoer_readMsg_float): '<S55>/Read CAN Message3' */
  flData2SigCnn9U();

  /* Logic: '<S200>/OR' */
  Brake_SystemErr = (BBW_UnderVoltage || BBW_OverCurrent);

  /* Switch: '<S88>/Switch' incorporates:
   *  Constant: '<S88>/calibration'
   *  Constant: '<S88>/override'
   */
  if (EPAS_DriverIntervention_overrideOvrEn_val) {
    EPAS_DriverIntervention_overrideOvrMsr =
      EPAS_DriverIntervention_overrideOvrCal_val;
  } else {
    EPAS_DriverIntervention_overrideOvrMsr = EPAS_DriverIntervention;
  }

  /* End of Switch: '<S88>/Switch' */

  /* Outputs for Atomic SubSystem: '<S198>/Rising Edge2' */
  /* Logic: '<S408>/Logical Operator1' incorporates:
   *  UnitDelay: '<S408>/Unit Delay'
   */
  LogicalOperator1_e = !DW_l.UnitDelay_DSTATE_n;

  /* Update for UnitDelay: '<S408>/Unit Delay' */
  DW_l.UnitDelay_DSTATE_n = EPAS_DriverIntervention_overrideOvrMsr;

  /* End of Outputs for SubSystem: '<S198>/Rising Edge2' */

  /* Outputs for Atomic SubSystem: '<S198>/Rising Edge1' */
  /* Logic: '<S407>/Logical Operator1' incorporates:
   *  UnitDelay: '<S407>/Unit Delay'
   */
  LogicalOperator1_b = !DW_l.UnitDelay_DSTATE_f4;

  /* Update for UnitDelay: '<S407>/Unit Delay' */
  DW_l.UnitDelay_DSTATE_f4 = BBW_DriverIntervention;

  /* End of Outputs for SubSystem: '<S198>/Rising Edge1' */

  /* S-Function (ecodoer_readMsg_float): '<S53>/Read CAN Message2' */
  flData2SigCnn10U();

  /* RateTransition generated from: '<S56>/Relational Operator' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    B_n.TmpRTBAtRelationalOperatorIn_ch = DW_l.TmpRTBAtRelationalOperatorIn_js;
  }

  /* End of RateTransition generated from: '<S56>/Relational Operator' */

  /* S-Function (ecodoer_readMsg_float): '<S54>/Read CAN Message3' */
  flData2SigCnn11U();

  /* RateTransition generated from: '<S59>/Relational Operator' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    B_n.TmpRTBAtRelationalOperatorI_chc = DW_l.TmpRTBAtRelationalOperatorI_jsf;
  }

  /* End of RateTransition generated from: '<S59>/Relational Operator' */

  /* RateTransition generated from: '<S66>/Relational Operator' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    B_n.TmpRTBAtRelationalOperator_chcx = DW_l.TmpRTBAtRelationalOperator_jsfr;
  }

  /* End of RateTransition generated from: '<S66>/Relational Operator' */

  /* Logic: '<S200>/OR1' incorporates:
   *  RelationalOperator: '<S56>/Relational Operator'
   *  RelationalOperator: '<S59>/Relational Operator'
   *  RelationalOperator: '<S66>/Relational Operator'
   */
  Brake_HeartBeatErr = ((B_n.ReadCANMessage2_o2 ==
    B_n.TmpRTBAtRelationalOperatorIn_ch) || (B_n.ReadCANMessage3_o2_i ==
    B_n.TmpRTBAtRelationalOperatorI_chc) || (B_n.ReadCANMessage3_o2_m ==
    B_n.TmpRTBAtRelationalOperator_chcx));

  /* S-Function (ecodoer_readMsg_float): '<S75>/Read CAN Message2' */
  flData2SigCnn12U();

  /* RateTransition generated from: '<S78>/Relational Operator' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    B_n.TmpRTBAtRelationalOperato_chcxw = DW_l.TmpRTBAtRelationalOperato_jsfrz;
  }

  /* End of RateTransition generated from: '<S78>/Relational Operator' */

  /* S-Function (ecodoer_readMsg_float): '<S76>/Read CAN Message3' */
  flData2SigCnn13U();

  /* RateTransition generated from: '<S81>/Relational Operator' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    B_n.TmpRTBAtRelationalOperat_chcxwz = DW_l.TmpRTBAtRelationalOperat_jsfrzw;
  }

  /* End of RateTransition generated from: '<S81>/Relational Operator' */

  /* RateTransition generated from: '<S89>/Relational Operator' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    B_n.TmpRTBAtRelationalOpera_chcxwz4 = DW_l.TmpRTBAtRelationalOpera_jsfrzwg;
  }

  /* End of RateTransition generated from: '<S89>/Relational Operator' */

  /* Logic: '<S201>/OR1' incorporates:
   *  RelationalOperator: '<S78>/Relational Operator'
   *  RelationalOperator: '<S81>/Relational Operator'
   *  RelationalOperator: '<S89>/Relational Operator'
   */
  EPAS_HeartbeatErr = ((B_n.ReadCANMessage2_o2_h ==
                        B_n.TmpRTBAtRelationalOperato_chcxw) ||
                       (B_n.ReadCANMessage3_o2_a ==
                        B_n.TmpRTBAtRelationalOperat_chcxwz) ||
                       (B_n.ReadCANMessage3_o2 ==
                        B_n.TmpRTBAtRelationalOpera_chcxwz4));

  /* S-Function (ecodoer_readMsg_float): '<S172>/Read CAN Message' */
  flData2SigCnn14U();

  /* RateTransition generated from: '<S185>/Relational Operator' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    B_n.TmpRTBAtRelationalOper_chcxwz4u = DW_l.TmpRTBAtRelationalOper_jsfrzwgr;
  }

  /* End of RateTransition generated from: '<S185>/Relational Operator' */

  /* RelationalOperator: '<S185>/Relational Operator' */
  Compare_f2 = (B_n.ReadCANMessage_o2_h == B_n.TmpRTBAtRelationalOper_chcxwz4u);

  /* S-Function (ecodoer_readMsg_float): '<S169>/Read CAN Message' */
  flData2SigCnn15U();

  /* RateTransition generated from: '<S173>/Relational Operator' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    B_n.TmpRTBAtRelationalOpe_chcxwz4uq = DW_l.TmpRTBAtRelationalOpe_jsfrzwgrs;
  }

  /* End of RateTransition generated from: '<S173>/Relational Operator' */

  /* RateTransition generated from: '<S179>/Relational Operator' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    B_n.TmpRTBAtRelationalOp_chcxwz4uqi = DW_l.TmpRTBAtRelationalOp_jsfrzwgrs5;
  }

  /* End of RateTransition generated from: '<S179>/Relational Operator' */

  /* S-Function (ecodoer_readMsg_float): '<S171>/Read CAN Message' */
  flData2SigCnn16U();

  /* RateTransition generated from: '<S182>/Relational Operator' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    B_n.TmpRTBAtRelationalO_chcxwz4uqit = DW_l.TmpRTBAtRelationalO_jsfrzwgrs54;
  }

  /* End of RateTransition generated from: '<S182>/Relational Operator' */

  /* Logic: '<S205>/OR' incorporates:
   *  Logic: '<S205>/AND'
   *  RelationalOperator: '<S173>/Relational Operator'
   *  RelationalOperator: '<S179>/Relational Operator'
   *  RelationalOperator: '<S182>/Relational Operator'
   */
  PC_timeout = (Compare_f2 || (PC_FrontwheelMsg_cnt ==
    B_n.TmpRTBAtRelationalOpe_chcxwz4uq) || ((B_n.ReadCANMessage_o2 ==
    B_n.TmpRTBAtRelationalOp_chcxwz4uqi) && (B_n.ReadCANMessage_o2_kh ==
    B_n.TmpRTBAtRelationalO_chcxwz4uqit)));

  /* Switch: '<S403>/Switch' incorporates:
   *  Constant: '<S403>/calibration'
   *  Constant: '<S403>/override'
   */
  if (debug_PCheardbeatOvrEn_val) {
    debug_PCheardbeatOvrMsr = debug_PCheardbeatOvrCal_val;
  } else {
    debug_PCheardbeatOvrMsr = PC_timeout;
  }

  /* End of Switch: '<S403>/Switch' */

  /* Outputs for Atomic SubSystem: '<S198>/Rising Edge2' */
  /* Outputs for Atomic SubSystem: '<S198>/Rising Edge1' */
  /* Logic: '<S198>/OR' incorporates:
   *  Logic: '<S198>/NOT'
   *  Logic: '<S198>/NOT1'
   *  Logic: '<S407>/Logical Operator'
   *  Logic: '<S408>/Logical Operator'
   */
  debug_Errors = ((!Diag_isMotorrunning) || (!Diag_KL75) ||
                  Diag_PDS_HeartbeatErr || Diag_PDS_BUSErr ||
                  Diag_By_wirePowerErr || Diag_EPASPowerErr ||
                  Diag_BrakePowerErr || Compare_pa || EPAS_SystemErr ||
                  Brake_SystemErr || (EPAS_DriverIntervention_overrideOvrMsr &&
    LogicalOperator1_e) || (BBW_DriverIntervention && LogicalOperator1_b) ||
                  Brake_HeartBeatErr || EPAS_HeartbeatErr ||
                  debug_PCheardbeatOvrMsr);

  /* End of Outputs for SubSystem: '<S198>/Rising Edge1' */
  /* End of Outputs for SubSystem: '<S198>/Rising Edge2' */

  /* RelationalOperator: '<S405>/Compare' incorporates:
   *  Constant: '<S405>/Constant'
   */
  LogicalOperator1_e = (PC_mode == 1);

  /* Outputs for Atomic SubSystem: '<S198>/Rising Edge3' */
  /* Logic: '<S409>/Logical Operator1' incorporates:
   *  UnitDelay: '<S409>/Unit Delay'
   */
  LogicalOperator1_b = !DW_l.UnitDelay_DSTATE_f;

  /* Update for UnitDelay: '<S409>/Unit Delay' */
  DW_l.UnitDelay_DSTATE_f = LogicalOperator1_e;

  /* End of Outputs for SubSystem: '<S198>/Rising Edge3' */

  /* Switch: '<S401>/Switch' incorporates:
   *  Constant: '<S401>/calibration'
   *  Constant: '<S401>/override'
   *  Logic: '<S409>/Logical Operator'
   */
  if (debug_otonomEnableOvrEn_val) {
    debug_otonomEnableOvrMsr = debug_otonomEnableOvrCal_val;
  } else {
    /* Outputs for Atomic SubSystem: '<S198>/Rising Edge3' */
    debug_otonomEnableOvrMsr = (LogicalOperator1_e && LogicalOperator1_b);

    /* End of Outputs for SubSystem: '<S198>/Rising Edge3' */
  }

  /* End of Switch: '<S401>/Switch' */

  /* Switch: '<S402>/Switch' incorporates:
   *  Constant: '<S402>/calibration'
   *  Constant: '<S402>/override'
   *  Constant: '<S406>/Constant'
   *  RelationalOperator: '<S406>/Compare'
   */
  if (debug_otonomDisableOvrEn_val) {
    debug_otonomDisableOvrMsr = debug_otonomDisableOvrCal_val;
  } else {
    debug_otonomDisableOvrMsr = (PC_mode != 1);
  }

  /* End of Switch: '<S402>/Switch' */

  /* S-Function (ecodoer_readMsg_float): '<S103>/Read CAN Message' */
  flData2SigCnn17U();

  /* Chart: '<S198>/Chart' */
  if (DW_l.is_active_c6_Ecotron == 0U) {
    DW_l.is_active_c6_Ecotron = 1U;
    DW_l.is_c6_Ecotron = IN_Manual_g;
    debug_Mode = false;
  } else if (DW_l.is_c6_Ecotron == IN_Autonomous) {
    debug_Mode = true;
    if (debug_Errors || debug_otonomDisableOvrMsr) {
      DW_l.is_c6_Ecotron = IN_Manual_g;
      debug_Mode = false;
    }
  } else {
    /* case IN_Manual: */
    debug_Mode = false;
    if (debug_otonomEnableOvrMsr && (!debug_otonomDisableOvrMsr) &&
        (!debug_Errors) && (GOLF_HandBrakeStatus > 0.5F)) {
      DW_l.is_c6_Ecotron = IN_Autonomous;
      debug_Mode = true;
    }
  }

  /* End of Chart: '<S198>/Chart' */

  /* S-Function (ecodoer_readMsg_float): '<S116>/Read CAN Message' */
  flData2SigCnn18U();

  /* Gain: '<S248>/Multiply1' incorporates:
   *  Gain: '<S248>/Multiply'
   *  Gain: '<S480>/Multiply1'
   *  Sum: '<S248>/Sum'
   */
  Multiply1_tmp = (GOLF_BLWheelSpeed + GOLF_BRWheelSpeed) * 0.5F * 0.277777791F;

  /* Chart: '<S247>/Chart1' incorporates:
   *  Gain: '<S248>/Multiply1'
   */
  if (DW_l.is_active_c8_Ecotron == 0U) {
    DW_l.is_active_c8_Ecotron = 1U;
    DW_l.is_c8_Ecotron = IN_StopMode;
    debug_stopmode = true;
  } else if (DW_l.is_c8_Ecotron == IN_Move) {
    debug_stopmode = false;
    if (((Multiply1_tmp < 0.1) && (SetACCOvrMsr < -0.05)) || (GOLF_CurrentGear ==
         1) || (!debug_Mode)) {
      DW_l.is_c8_Ecotron = IN_StopMode;
      debug_stopmode = true;
    }
  } else {
    /* case IN_StopMode: */
    debug_stopmode = true;
    if ((SetACCOvrMsr > 0.05) && ((GOLF_CurrentGear == 2) || (GOLF_CurrentGear ==
          4))) {
      DW_l.is_c8_Ecotron = IN_Move;
      debug_stopmode = false;
    }
  }

  /* End of Chart: '<S247>/Chart1' */

  /* RateTransition generated from: '<S246>/Switch2' */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    B_n.TmpRTBAtSwitch2Inport1 = DW_l.TmpRTBAtSwitch2Inport1_Buffer0;
  }

  /* End of RateTransition generated from: '<S246>/Switch2' */

  /* MATLABSystem: '<S249>/Moving Average1' incorporates:
   *  Gain: '<S248>/Multiply1'
   */
  if (DW_l.obj.TunablePropsChanged) {
    DW_l.obj.TunablePropsChanged = false;
  }

  if (DW_l.obj.pStatistic->isInitialized != 1) {
    DW_l.obj.pStatistic->isSetupComplete = false;
    DW_l.obj.pStatistic->isInitialized = 1;
    DW_l.obj.pStatistic->pCumSum = 0.0F;
    DW_l.obj.pStatistic->pCumRevIndex = 1.0F;
    DW_l.obj.pStatistic->isSetupComplete = true;
    DW_l.obj.pStatistic->pCumSum = 0.0F;
    memset(&DW_l.obj.pStatistic->pCumSumRev[0], 0, 199U * sizeof(real32_T));
    DW_l.obj.pStatistic->pCumRevIndex = 1.0F;
  }

  cumRevIndex = DW_l.obj.pStatistic->pCumRevIndex;
  csum = DW_l.obj.pStatistic->pCumSum;
  for (Output = 0; Output < 199; Output++) {
    csumrev[Output] = DW_l.obj.pStatistic->pCumSumRev[Output];
  }

  csum += Multiply1_tmp;
  Output = (int32_T)cumRevIndex - 1;
  z = csumrev[Output] + csum;
  csumrev[Output] = Multiply1_tmp;
  if (cumRevIndex != 199.0F) {
    cumRevIndex++;
  } else {
    cumRevIndex = 1.0F;
    csum = 0.0F;
    for (Output = 197; Output >= 0; Output--) {
      csumrev[Output] += csumrev[Output + 1];
    }
  }

  DW_l.obj.pStatistic->pCumSum = csum;
  for (Output = 0; Output < 199; Output++) {
    DW_l.obj.pStatistic->pCumSumRev[Output] = csumrev[Output];
  }

  DW_l.obj.pStatistic->pCumRevIndex = cumRevIndex;
  ms = z / 200.0F;

  /* End of MATLABSystem: '<S249>/Moving Average1' */

  /* Product: '<S263>/Divide' incorporates:
   *  Constant: '<S263>/Constant'
   *  Sum: '<S263>/Subtract'
   *  UnitDelay: '<S263>/Unit Delay'
   */
  Divide = (ms - DW_l.UnitDelay_DSTATE_l) / 0.001F;

  /* MATLABSystem: '<S249>/Moving Average2' */
  if (DW_l.obj_k.TunablePropsChanged) {
    DW_l.obj_k.TunablePropsChanged = false;
  }

  if (DW_l.obj_k.pStatistic->isInitialized != 1) {
    DW_l.obj_k.pStatistic->isSetupComplete = false;
    DW_l.obj_k.pStatistic->isInitialized = 1;
    DW_l.obj_k.pStatistic->pCumSum = 0.0F;
    DW_l.obj_k.pStatistic->pCumRevIndex = 1.0F;
    DW_l.obj_k.pStatistic->isSetupComplete = true;
    DW_l.obj_k.pStatistic->pCumSum = 0.0F;
    memset(&DW_l.obj_k.pStatistic->pCumSumRev[0], 0, 199U * sizeof(real32_T));
    DW_l.obj_k.pStatistic->pCumRevIndex = 1.0F;
  }

  cumRevIndex = DW_l.obj_k.pStatistic->pCumRevIndex;
  csum = DW_l.obj_k.pStatistic->pCumSum;
  for (Output = 0; Output < 199; Output++) {
    csumrev[Output] = DW_l.obj_k.pStatistic->pCumSumRev[Output];
  }

  csum += Divide;
  Output = (int32_T)cumRevIndex - 1;
  z = csumrev[Output] + csum;
  csumrev[Output] = Divide;
  if (cumRevIndex != 199.0F) {
    cumRevIndex++;
  } else {
    cumRevIndex = 1.0F;
    csum = 0.0F;
    for (Output = 197; Output >= 0; Output--) {
      csumrev[Output] += csumrev[Output + 1];
    }
  }

  DW_l.obj_k.pStatistic->pCumSum = csum;
  for (Output = 0; Output < 199; Output++) {
    DW_l.obj_k.pStatistic->pCumSumRev[Output] = csumrev[Output];
  }

  DW_l.obj_k.pStatistic->pCumRevIndex = cumRevIndex;
  debug_filtered_ACC = z / 200.0F;

  /* End of MATLABSystem: '<S249>/Moving Average2' */

  /* Sum: '<S246>/Sum1' */
  cumRevIndex = SetACCOvrMsr - debug_filtered_ACC;

  /* DiscreteIntegrator: '<S293>/Integrator' */
  if ((debug_stopmode && (DW_l.Integrator_PrevResetState <= 0)) ||
      ((!debug_stopmode) && (DW_l.Integrator_PrevResetState == 1))) {
    DW_l.Integrator_DSTATE_c = 0.0F;
  }

  /* Sum: '<S302>/Sum' incorporates:
   *  Constant: '<S246>/Read Calibration'
   *  DiscreteIntegrator: '<S293>/Integrator'
   *  Product: '<S298>/PProd Out'
   */
  csum = cumRevIndex * Compensation_P + DW_l.Integrator_DSTATE_c;

  /* Saturate: '<S300>/Saturation' */
  if (csum > 300.0F) {
    debug_CompensationPID_out = 300.0F;
  } else if (csum < -300.0F) {
    debug_CompensationPID_out = -300.0F;
  } else {
    debug_CompensationPID_out = csum;
  }

  /* End of Saturate: '<S300>/Saturation' */

  /* S-Function (ecodoer_readMsg_float): '<S108>/Read CAN Message' */
  flData2SigCnn19U();

  /* S-Function (ecodoer_readMsg_float): '<S111>/Read CAN Message' */
  flData2SigCnn20U();

  /* RateTransition generated from: '<S261>/Product' */
  if (M->Timing.RateInteraction.TID0_5 == 1) {
    B_n.TmpRTBAtProductInport2 = DW_l.TmpRTBAtProductInport2_Buffer0;
  }

  /* End of RateTransition generated from: '<S261>/Product' */

  /* Product: '<S261>/Product' */
  z = GOLF_MotorTorque_filtered * B_n.TmpRTBAtProductInport2;

  /* Saturate: '<S261>/Saturation' */
  if (z < 0.0F) {
  } else {
    z = 0.0F;
  }

  /* End of Saturate: '<S261>/Saturation' */

  /* Sum: '<S246>/Sum' incorporates:
   *  Constant: '<S262>/Constant'
   *  Gain: '<S248>/Multiply1'
   *  Gain: '<S262>/Gain'
   *  Lookup_n-D: '<S253>/1-D Lookup Table'
   *  Product: '<S246>/Product'
   *  Product: '<S262>/Product'
   */
  debug_Fr_request = ((real32_T)(0.01F * GOLF_rxPitch * (real32_T)
    GOLF_rxVehiclemass * 9.81) + ((debug_CompensationPID_out + look1_iflf_binlx
    (Multiply1_tmp, rtCP_uDLookupTable_bp01Data_d,
     rtCP_uDLookupTable_tableData_b, 3U)) + SetACCOvrMsr * (real32_T)
    GOLF_rxVehiclemass)) + z;

  /* Switch: '<S246>/Switch2' incorporates:
   *  Constant: '<S246>/Constant2'
   *  Constant: '<S250>/Constant'
   *  RelationalOperator: '<S250>/Compare'
   */
  if (debug_Fr_request < 3.0F) {
    debug_set_brake = B_n.TmpRTBAtSwitch2Inport1;
  } else {
    debug_set_brake = 1.0F;
  }

  /* End of Switch: '<S246>/Switch2' */

  /* Switch: '<S448>/Switch' incorporates:
   *  Switch: '<S441>/Switch2'
   */
  if (B_n.TmpRTBAtSwitchInport2) {
    Set_Brake_PosOvrMsr = B_n.TmpRTBAtSwitchInport1;
  } else if (debug_Mode) {
    /* Switch: '<S246>/Switch' incorporates:
     *  Constant: '<S246>/Constant'
     *  Switch: '<S441>/Switch2'
     */
    if (debug_stopmode) {
      Set_Brake_PosOvrMsr = 50.0F;
    } else {
      Set_Brake_PosOvrMsr = debug_set_brake;
    }

    /* End of Switch: '<S246>/Switch' */
  } else {
    /* Switch: '<S441>/Switch2' incorporates:
     *  Constant: '<S441>/Constant6'
     */
    Set_Brake_PosOvrMsr = 0.0F;
  }

  /* End of Switch: '<S448>/Switch' */

  /* Chart: '<S195>/Chart' incorporates:
   *  Constant: '<S195>/Read Calibration'
   *  Lookup_n-D: '<S235>/1-D Lookup Table'
   */
  if (DW_l.temporalCounter_i1_jd < 31U) {
    DW_l.temporalCounter_i1_jd++;
  }

  if (DW_l.is_active_c2_Ecotron == 0U) {
    DW_l.is_active_c2_Ecotron = 1U;
    DW_l.is_c2_Ecotron = IN_Manual;
    debug_EPASmode = 2U;
    debug_EPASsetsteer = 0.0F;
    debug_EPASspeedlimit = 50.0F;
  } else {
    switch (DW_l.is_c2_Ecotron) {
     case IN_Manual:
      debug_EPASmode = 2U;
      if (debug_Mode) {
        DW_l.is_c2_Ecotron = IN_mod1;
        DW_l.temporalCounter_i1_jd = 0U;
        debug_EPASmode = 1U;
      }
      break;

     case IN_Otonom:
      debug_EPASmode = 0U;
      if (!debug_Mode) {
        DW_l.is_Otonom_f = IN_NO_ACTIVE_CHILD;
        DW_l.is_c2_Ecotron = IN_Manual;
        debug_EPASmode = 2U;
        debug_EPASsetsteer = 0.0F;
        debug_EPASspeedlimit = 50.0F;
      } else {
        debug_EPASsetsteer = look1_iflf_binlx(PC_SetFrontWheelAngle,
          rtCP_uDLookupTable_bp01Data_k, rtCP_uDLookupTable_tableData_j, 27U);
        if (DW_l.is_Otonom_f == IN_Fast) {
          if ((DW_l.temporalCounter_i1_jd >= 1U) && (debug_EPASspeedlimit <
               EPAS_MaxSpeed)) {
            DW_l.temporalCounter_i1_jd = 0U;
            debug_EPASspeedlimit = debug_EPASspeedlimit + 1.0F;
          }
        } else {
          /* case IN_Slow: */
          if (GOLF_BRWheelSpeed > 3.0F) {
            DW_l.is_Otonom_f = IN_Fast;
            DW_l.temporalCounter_i1_jd = 0U;
            debug_EPASspeedlimit = debug_EPASspeedlimit + 1.0F;
          }
        }
      }
      break;

     case IN_mod1:
      debug_EPASmode = 1U;
      if (DW_l.temporalCounter_i1_jd >= 10U) {
        DW_l.is_c2_Ecotron = IN_set;
        DW_l.temporalCounter_i1_jd = 0U;
        debug_EPAS_ECU_reset = true;
      } else {
        if (!debug_Mode) {
          DW_l.is_c2_Ecotron = IN_Manual;
          debug_EPASmode = 2U;
          debug_EPASsetsteer = 0.0F;
          debug_EPASspeedlimit = 50.0F;
        }
      }
      break;

     case IN_reset:
      debug_EPAS_ECU_reset = false;
      if (DW_l.temporalCounter_i1_jd >= 30U) {
        if (!EPAS_DriverIntervention_overrideOvrMsr) {
          DW_l.is_c2_Ecotron = IN_Otonom;
          debug_EPASmode = 0U;
          DW_l.is_Otonom_f = IN_Slow;
          debug_EPASspeedlimit = 50.0F;
        } else {
          if (!debug_Mode) {
            DW_l.is_c2_Ecotron = IN_Manual;
            debug_EPASmode = 2U;
            debug_EPASsetsteer = 0.0F;
            debug_EPASspeedlimit = 50.0F;
          }
        }
      }
      break;

     default:
      /* case IN_set: */
      debug_EPAS_ECU_reset = true;
      if (DW_l.temporalCounter_i1_jd >= 10U) {
        DW_l.is_c2_Ecotron = IN_reset;
        DW_l.temporalCounter_i1_jd = 0U;
        debug_EPAS_ECU_reset = false;
      }
      break;
    }
  }

  /* End of Chart: '<S195>/Chart' */

  /* Switch: '<S449>/Switch' incorporates:
   *  Constant: '<S449>/calibration'
   *  Constant: '<S449>/override'
   */
  if (Brake_ResetOvrEn_val) {
    Brake_ResetOvrMsr = Brake_ResetOvrCal_val;
  } else {
    Brake_ResetOvrMsr = (uint8_T)debug_EPAS_ECU_reset;
  }

  /* End of Switch: '<S449>/Switch' */

  /* S-Function (ecodoer_readMsg_float): '<S101>/Read CAN Message' */
  flData2SigCnn21U();

  /* Chart: '<S245>/Chart' */
  if (DW_l.is_active_c5_Ecotron == 0U) {
    DW_l.is_active_c5_Ecotron = 1U;
    DW_l.is_c5_Ecotron = IN_init_b;
    LogicalOperator1_e = false;
  } else if (DW_l.is_c5_Ecotron == IN_SetCalibCMD) {
    LogicalOperator1_e = true;
    if (BBW_OnCalibration) {
      DW_l.is_c5_Ecotron = IN_SetCalibCMD;
    } else {
      if ((!BBW_CalibrationErr) && (!BBW_OnCalibration)) {
        DW_l.is_c5_Ecotron = IN_init_b;
        LogicalOperator1_e = false;
      }
    }
  } else {
    /* case IN_init: */
    LogicalOperator1_e = false;
    if ((GOLF_BrakePedalPos < 3.0F) && Diag_isMotorrunning && BBW_CalibrationErr
        && (GOLF_FLWheelSpeed < 0.05)) {
      DW_l.is_c5_Ecotron = IN_SetCalibCMD;
      LogicalOperator1_e = true;
    }
  }

  /* End of Chart: '<S245>/Chart' */

  /* Switch: '<S399>/Switch' incorporates:
   *  Constant: '<S399>/calibration'
   *  Constant: '<S399>/override'
   */
  if (Brake_CalibCMDOvrEn_val) {
    Brake_CalibCMDOvrMsr = Brake_CalibCMDOvrCal_val;
  } else {
    Brake_CalibCMDOvrMsr = (real32_T)LogicalOperator1_e;
  }

  /* End of Switch: '<S399>/Switch' */

  /* RateTransition generated from: '<S441>/Send CAN Message 2' */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    DW_l.Brake_CalibCMDOvrMsr_Buffer = Brake_CalibCMDOvrMsr;

    /* RateTransition generated from: '<S441>/Send CAN Message 2' */
    DW_l.Brake_ResetOvrMsr_Buffer = Brake_ResetOvrMsr;

    /* RateTransition generated from: '<S441>/Send CAN Message 2' */
    DW_l.Set_Brake_PosOvrMsr_Buffer = Set_Brake_PosOvrMsr;
  }

  /* End of RateTransition generated from: '<S441>/Send CAN Message 2' */

  /* RelationalOperator: '<S459>/Compare' incorporates:
   *  Constant: '<S459>/Constant'
   */
  LogicalOperator1_e = (PC_blinker == 3);

  /* S-Function (ecodoer_readMsg_float): '<S100>/Read CAN Message1' */
  flData2SigCnn22U();

  /* Outputs for Atomic SubSystem: '<S100>/Rising Edge' */
  /* Logic: '<S117>/Logical Operator' incorporates:
   *  Logic: '<S117>/Logical Operator1'
   *  UnitDelay: '<S117>/Unit Delay'
   */
  LogicalOperator1_b = (B_n.rxBCM1_WarnblinkButton && (!DW_l.UnitDelay_DSTATE_o2));

  /* Update for UnitDelay: '<S117>/Unit Delay' */
  DW_l.UnitDelay_DSTATE_o2 = B_n.rxBCM1_WarnblinkButton;

  /* End of Outputs for SubSystem: '<S100>/Rising Edge' */

  /* Outputs for Triggered SubSystem: '<S100>/Subsystem' incorporates:
   *  TriggerPort: '<S118>/Trigger'
   */
  if (LogicalOperator1_b && (PrevZCX_p.Subsystem_Trig_ZCE_l != POS_ZCSIG)) {
    /* Switch: '<S118>/Switch' */
    GOLF_HazardLight = !GOLF_HazardLight;
  }

  PrevZCX_p.Subsystem_Trig_ZCE_l = LogicalOperator1_b;

  /* End of Outputs for SubSystem: '<S100>/Subsystem' */

  /* Chart: '<S442>/Chart' */
  if (DW_l.temporalCounter_i1_j < 511U) {
    DW_l.temporalCounter_i1_j++;
  }

  if (DW_l.is_active_c9_Ecotron == 0U) {
    DW_l.is_active_c9_Ecotron = 1U;
    DW_l.is_c9_Ecotron = IN_init_h;
    Output = 0;
  } else {
    switch (DW_l.is_c9_Ecotron) {
     case IN_HazardOFF:
      if ((!LogicalOperator1_e) && (!GOLF_HazardLight)) {
        DW_l.is_HazardOFF = IN_NO_ACTIVE_CHILD;
        DW_l.is_c9_Ecotron = IN_init_h;
        Output = 0;
      } else if (DW_l.is_HazardOFF == IN_Reset) {
        Output = 0;
        if ((DW_l.temporalCounter_i1_j >= 500U) && GOLF_HazardLight) {
          DW_l.is_HazardOFF = IN_Set;
          DW_l.temporalCounter_i1_j = 0U;
          Output = 1;
        }
      } else {
        /* case IN_Set: */
        Output = 1;
        if (DW_l.temporalCounter_i1_j >= 50U) {
          DW_l.is_HazardOFF = IN_Reset;
          DW_l.temporalCounter_i1_j = 0U;
          Output = 0;
        }
      }
      break;

     case IN_HazardON:
      if (LogicalOperator1_e && GOLF_HazardLight) {
        DW_l.is_HazardON = IN_NO_ACTIVE_CHILD;
        DW_l.is_c9_Ecotron = IN_init_h;
        Output = 0;
      } else if (DW_l.is_HazardON == IN_Reset) {
        Output = 0;
        if ((DW_l.temporalCounter_i1_j >= 500U) && (!GOLF_HazardLight)) {
          DW_l.is_HazardON = IN_Set;
          DW_l.temporalCounter_i1_j = 0U;
          Output = 1;
        }
      } else {
        /* case IN_Set: */
        Output = 1;
        if (DW_l.temporalCounter_i1_j >= 50U) {
          DW_l.is_HazardON = IN_Reset;
          DW_l.temporalCounter_i1_j = 0U;
          Output = 0;
        }
      }
      break;

     default:
      /* case IN_init: */
      Output = 0;
      if (LogicalOperator1_e && (!GOLF_HazardLight)) {
        DW_l.is_c9_Ecotron = IN_HazardON;
        DW_l.is_HazardON = IN_Set;
        DW_l.temporalCounter_i1_j = 0U;
        Output = 1;
      } else {
        if ((!LogicalOperator1_e) && GOLF_HazardLight) {
          DW_l.is_c9_Ecotron = IN_HazardOFF;
          DW_l.is_HazardOFF = IN_Set;
          DW_l.temporalCounter_i1_j = 0U;
          Output = 1;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S442>/Chart' */

  /* Logic: '<S463>/AND' incorporates:
   *  RelationalOperator: '<S465>/Compare'
   *  RelationalOperator: '<S466>/Compare'
   */
  Compare_f2 = (debug_Mode && (!Compare_f2));

  /* Switch: '<S450>/Switch' incorporates:
   *  Constant: '<S450>/calibration'
   *  Constant: '<S450>/override'
   *  Constant: '<S463>/Constant'
   *  Switch: '<S463>/Switch2'
   */
  if (Button_Hazard_LightOvrEn_val) {
    Button_Hazard_LightOvrMsr = Button_Hazard_LightOvrCal_val;
  } else if (Compare_f2) {
    /* Switch: '<S463>/Switch2' */
    Button_Hazard_LightOvrMsr = (Output != 0);
  } else {
    Button_Hazard_LightOvrMsr = false;
  }

  /* End of Switch: '<S450>/Switch' */

  /* S-Function (DIO_Out): '<S442>/Hazard_Light' */
  F_Abstr_HSO_SwitchSet(HSO08,Button_Hazard_LightOvrMsr);

  /* Switch: '<S454>/Switch' incorporates:
   *  Constant: '<S454>/calibration'
   *  Constant: '<S454>/override'
   *  Switch: '<S463>/Switch4'
   */
  if (Button_Headlight_FlasherOvrEn_val) {
    Button_Headlight_FlasherOvrMsr = Button_Headlight_FlasherOvrCal_val;
  } else if (Compare_f2) {
    /* Switch: '<S463>/Switch4' incorporates:
     *  Constant: '<S461>/Constant'
     *  RelationalOperator: '<S461>/Compare'
     */
    Button_Headlight_FlasherOvrMsr = (PC_headlight == 2);
  } else {
    /* Switch: '<S463>/Switch4' incorporates:
     *  Constant: '<S463>/Constant'
     */
    Button_Headlight_FlasherOvrMsr = false;
  }

  /* End of Switch: '<S454>/Switch' */

  /* S-Function (DIO_Out): '<S442>/HeadLight_Flasher' */
  F_Abstr_HSO_SwitchSet(HSO06,Button_Headlight_FlasherOvrMsr);

  /* Switch: '<S453>/Switch' incorporates:
   *  Constant: '<S453>/calibration'
   *  Constant: '<S453>/override'
   *  Switch: '<S463>/Switch3'
   */
  if (Button_HighBeamOvrEn_val) {
    Button_HighBeamOvrMsr = Button_HighBeamOvrCal_val;
  } else if (Compare_f2) {
    /* Switch: '<S463>/Switch3' incorporates:
     *  Constant: '<S460>/Constant'
     *  RelationalOperator: '<S460>/Compare'
     */
    Button_HighBeamOvrMsr = (PC_headlight == 1);
  } else {
    /* Switch: '<S463>/Switch3' incorporates:
     *  Constant: '<S463>/Constant'
     */
    Button_HighBeamOvrMsr = false;
  }

  /* End of Switch: '<S453>/Switch' */

  /* S-Function (DIO_Out): '<S442>/High_Beam' */
  F_Abstr_HSO_SwitchSet(HSO05,Button_HighBeamOvrMsr);

  /* Switch: '<S451>/Switch' incorporates:
   *  Constant: '<S451>/calibration'
   *  Constant: '<S451>/override'
   *  Switch: '<S463>/Switch'
   */
  if (Button_Left_BlinkerOvrEn_val) {
    Button_Left_BlinkerOvrMsr = Button_Left_BlinkerOvrCal_val;
  } else if (Compare_f2) {
    /* Switch: '<S463>/Switch' incorporates:
     *  Constant: '<S457>/Constant'
     *  RelationalOperator: '<S457>/Compare'
     */
    Button_Left_BlinkerOvrMsr = (PC_blinker == 1);
  } else {
    /* Switch: '<S463>/Switch' incorporates:
     *  Constant: '<S463>/Constant'
     */
    Button_Left_BlinkerOvrMsr = false;
  }

  /* End of Switch: '<S451>/Switch' */

  /* S-Function (DIO_Out): '<S442>/Left_Blinker' */
  F_Abstr_HSO_SwitchSet(HSO03,Button_Left_BlinkerOvrMsr);

  /* Switch: '<S452>/Switch' incorporates:
   *  Constant: '<S452>/calibration'
   *  Constant: '<S452>/override'
   *  Switch: '<S463>/Switch1'
   */
  if (Button_Right_BlinkerOvrEn_val) {
    Button_Right_BlinkerOvrMsr = Button_Right_BlinkerOvrCal_val;
  } else if (Compare_f2) {
    /* Switch: '<S463>/Switch1' incorporates:
     *  Constant: '<S458>/Constant'
     *  RelationalOperator: '<S458>/Compare'
     */
    Button_Right_BlinkerOvrMsr = (PC_blinker == 2);
  } else {
    /* Switch: '<S463>/Switch1' incorporates:
     *  Constant: '<S463>/Constant'
     */
    Button_Right_BlinkerOvrMsr = false;
  }

  /* End of Switch: '<S452>/Switch' */

  /* S-Function (DIO_Out): '<S442>/Right_Blinker' */
  F_Abstr_HSO_SwitchSet(HSO04,Button_Right_BlinkerOvrMsr);

  /* Outputs for Atomic SubSystem: '<S464>/Rising Edge' */
  /* Logic: '<S469>/Logical Operator' incorporates:
   *  Logic: '<S469>/Logical Operator1'
   *  UnitDelay: '<S469>/Unit Delay'
   */
  Compare_f2 = (debug_Mode && (!DW_l.UnitDelay_DSTATE_a));

  /* Update for UnitDelay: '<S469>/Unit Delay' */
  DW_l.UnitDelay_DSTATE_a = debug_Mode;

  /* End of Outputs for SubSystem: '<S464>/Rising Edge' */

  /* Outputs for Atomic SubSystem: '<S464>/Falling Edge' */
  /* Logic: '<S468>/Logical Operator' incorporates:
   *  Logic: '<S468>/Logical Operator1'
   *  UnitDelay: '<S468>/Unit Delay'
   */
  LogicalOperator1_e = ((!debug_Mode) && DW_l.UnitDelay_DSTATE_ls);

  /* Update for UnitDelay: '<S468>/Unit Delay' */
  DW_l.UnitDelay_DSTATE_ls = debug_Mode;

  /* End of Outputs for SubSystem: '<S464>/Falling Edge' */

  /* Chart: '<S464>/Chart' incorporates:
   *  Constant: '<S464>/Read Calibration'
   *  Constant: '<S464>/Read Calibration1'
   *  Constant: '<S464>/Read Calibration2'
   */
  if (DW_l.temporalCounter_i1 < MAX_uint32_T) {
    DW_l.temporalCounter_i1++;
  }

  if (DW_l.is_active_c14_Ecotron == 0U) {
    DW_l.is_active_c14_Ecotron = 1U;
    DW_l.is_c14_Ecotron = IN_NoBuzz;
    Buzz_controlOvrMsr = false;
  } else {
    switch (DW_l.is_c14_Ecotron) {
     case IN_FallingBuzz:
      if (DW_l.repeat_h >= 3.0) {
        DW_l.is_FallingBuzz = IN_NO_ACTIVE_CHILD;
        DW_l.is_c14_Ecotron = IN_NoBuzz;
        Buzz_controlOvrMsr = false;
      } else if (Compare_f2) {
        DW_l.is_FallingBuzz = IN_NO_ACTIVE_CHILD;
        DW_l.is_c14_Ecotron = IN_risingBuzz;
        DW_l.temporalCounter_i1 = 0U;
        Buzz_controlOvrMsr = true;
      } else if (DW_l.is_FallingBuzz == IN_OFF) {
        Buzz_controlOvrMsr = false;
        if ((DW_l.temporalCounter_i1 >= Buzz_falling_offduration) &&
            (DW_l.repeat_h < 3.0)) {
          DW_l.is_FallingBuzz = IN_ON;
          DW_l.temporalCounter_i1 = 0U;
          Buzz_controlOvrMsr = true;
        }
      } else {
        /* case IN_ON: */
        Buzz_controlOvrMsr = true;
        if (DW_l.temporalCounter_i1 >= Buzz_falling_duration) {
          DW_l.is_FallingBuzz = IN_OFF;
          DW_l.temporalCounter_i1 = 0U;
          Buzz_controlOvrMsr = false;
          DW_l.repeat_h++;
        }
      }
      break;

     case IN_NoBuzz:
      Buzz_controlOvrMsr = false;
      if (Compare_f2) {
        DW_l.is_c14_Ecotron = IN_risingBuzz;
        DW_l.temporalCounter_i1 = 0U;
        Buzz_controlOvrMsr = true;
      } else {
        if (LogicalOperator1_e) {
          DW_l.is_c14_Ecotron = IN_FallingBuzz;
          DW_l.repeat_h = 0.0;
          DW_l.is_FallingBuzz = IN_ON;
          DW_l.temporalCounter_i1 = 0U;
          Buzz_controlOvrMsr = true;
        }
      }
      break;

     default:
      /* case IN_risingBuzz: */
      Buzz_controlOvrMsr = true;
      if (DW_l.temporalCounter_i1 >= Buzz_rising_duration) {
        DW_l.is_c14_Ecotron = IN_NoBuzz;
        Buzz_controlOvrMsr = false;
      } else {
        if (LogicalOperator1_e) {
          DW_l.is_c14_Ecotron = IN_FallingBuzz;
          DW_l.repeat_h = 0.0;
          DW_l.is_FallingBuzz = IN_ON;
          DW_l.temporalCounter_i1 = 0U;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S464>/Chart' */

  /* Switch: '<S455>/Switch' incorporates:
   *  Constant: '<S455>/calibration'
   *  Constant: '<S455>/override'
   */
  if (Buzz_controlOvrEn_val) {
    Buzz_controlOvrMsr = Buzz_controlOvrCal_val;
  }

  /* End of Switch: '<S455>/Switch' */

  /* S-Function (DIO_Out): '<S442>/Switch Output' */
  F_Abstr_LSO_SwitchSet(LSO23,Buzz_controlOvrMsr);

  /* S-Function (DIO_Out): '<S462>/Start_Stop1' incorporates:
   *  Constant: '<S442>/Constant'
   */
  F_Abstr_HSO_SwitchSet(HSO01,false);

  /* RateTransition generated from: '<S246>/Switch1' */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    B_n.TmpRTBAtSwitch1Inport3 = DW_l.TmpRTBAtSwitch1Inport3_Buffer0;
  }

  /* End of RateTransition generated from: '<S246>/Switch1' */

  /* Switch: '<S470>/Switch' incorporates:
   *  Constant: '<S470>/calibration'
   *  Constant: '<S470>/override'
   *  Lookup_n-D: '<S443>/1-D Lookup Table'
   *  Switch: '<S246>/Switch1'
   */
  if (Set_GasOvrEn_val) {
    Set_GasOvrMsr = Set_GasOvrCal_val;
  } else {
    if (debug_stopmode) {
      /* Switch: '<S246>/Switch1' incorporates:
       *  Constant: '<S246>/Constant1'
       */
      tmp = 0.0;
    } else {
      /* Switch: '<S246>/Switch1' */
      tmp = B_n.TmpRTBAtSwitch1Inport3;
    }

    Set_GasOvrMsr = (real32_T)look1_binlx(tmp, rtCP_uDLookupTable_bp01Data,
      rtCP_uDLookupTable_tableData, 20U);
  }

  /* End of Switch: '<S470>/Switch' */

  /* Switch: '<S471>/Switch' incorporates:
   *  Constant: '<S471>/calibration'
   *  Constant: '<S471>/override'
   */
  if (Activate_ThrottleControllerOvrEn_val) {
    Activate_ThrottleControllerOvrMsr = Activate_ThrottleControllerOvrCal_val;
  } else {
    Activate_ThrottleControllerOvrMsr = (real32_T)debug_Mode;
  }

  /* End of Switch: '<S471>/Switch' */

  /* RateTransition generated from: '<S443>/Send CAN Message 1' */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    DW_l.Activate_ThrottleControllerOvrM = Activate_ThrottleControllerOvrMsr;

    /* RateTransition generated from: '<S443>/Send CAN Message 1' */
    DW_l.Set_GasOvrMsr_Buffer = Set_GasOvrMsr;
  }

  /* End of RateTransition generated from: '<S443>/Send CAN Message 1' */

  /* Switch: '<S230>/Switch' incorporates:
   *  Constant: '<S230>/calibration'
   *  Constant: '<S230>/override'
   *  Switch: '<S194>/Switch'
   */
  if (Set_GearOvrEn_val) {
    Set_GearOvrMsr = Set_GearOvrCal_val;
  } else if (GOLF_HandBrakeStatus > 0.5F) {
    /* Switch: '<S194>/Switch' incorporates:
     *  Constant: '<S194>/Constant'
     */
    Set_GearOvrMsr = 1U;
  } else {
    Set_GearOvrMsr = PC_gear;
  }

  /* End of Switch: '<S230>/Switch' */

  /* Switch: '<S227>/Switch' incorporates:
   *  Constant: '<S227>/calibration'
   *  Constant: '<S227>/override'
   */
  if (Set_GearEnableOvrEn_val) {
    Set_GearEnableOvrMsr = Set_GearEnableOvrCal_val;
  } else {
    Set_GearEnableOvrMsr = (real32_T)debug_Mode;
  }

  /* End of Switch: '<S227>/Switch' */

  /* Chart: '<S229>/Chart1' incorporates:
   *  Constant: '<S229>/Read Calibration16'
   *  Constant: '<S229>/Read Calibration17'
   *  Constant: '<S229>/Read Calibration18'
   *  Constant: '<S229>/Read Calibration19'
   */
  if (DW_l.temporalCounter_i1_n < MAX_uint32_T) {
    DW_l.temporalCounter_i1_n++;
  }

  if (DW_l.is_active_c1_Ecotron == 0U) {
    DW_l.is_active_c1_Ecotron = 1U;
    DW_l.is_c1_Ecotron = IN_init_d;
    B_n.cnt = 0.0;
    B_n.PtoNTrigger = 0.0;
    B_n.PtoDTrigger = 0.0;
    B_n.RtoNTrigger = 0.0;
    B_n.NtoRTrigger = 0.0;
    B_n.NtoDTrigger = 0.0;
    B_n.DtoNTrigger = 0.0;
  } else {
    switch (DW_l.is_c1_Ecotron) {
     case IN_high:
      B_n.PtoNTrigger = 1.0;
      if (DW_l.temporalCounter_i1_n >= interval2) {
        DW_l.is_c1_Ecotron = IN_low;
        DW_l.temporalCounter_i1_n = 0U;
        B_n.PtoNTrigger = 0.0;
      }
      break;

     case IN_high1:
      B_n.PtoDTrigger = 1.0;
      if (DW_l.temporalCounter_i1_n >= interval2) {
        DW_l.is_c1_Ecotron = IN_low1;
        DW_l.temporalCounter_i1_n = 0U;
        B_n.PtoDTrigger = 0.0;
      }
      break;

     case IN_high2:
      B_n.RtoNTrigger = 1.0;
      if (DW_l.temporalCounter_i1_n >= interval2) {
        DW_l.is_c1_Ecotron = IN_low2;
        DW_l.temporalCounter_i1_n = 0U;
        B_n.RtoNTrigger = 0.0;
      }
      break;

     case IN_high3:
      B_n.NtoRTrigger = 1.0;
      if (DW_l.temporalCounter_i1_n >= interval2) {
        DW_l.is_c1_Ecotron = IN_low3;
        DW_l.temporalCounter_i1_n = 0U;
        B_n.NtoRTrigger = 0.0;
      }
      break;

     case IN_high4:
      B_n.NtoDTrigger = 1.0;
      if (DW_l.temporalCounter_i1_n >= interval2) {
        DW_l.is_c1_Ecotron = IN_low4;
        DW_l.temporalCounter_i1_n = 0U;
        B_n.NtoDTrigger = 0.0;
      }
      break;

     case IN_high5:
      B_n.DtoNTrigger = 1.0;
      if (DW_l.temporalCounter_i1_n >= interval2) {
        DW_l.is_c1_Ecotron = IN_low5;
        DW_l.temporalCounter_i1_n = 0U;
        B_n.DtoNTrigger = 0.0;
      }
      break;

     case IN_init_d:
      init();
      break;

     case IN_low:
      B_n.PtoNTrigger = 0.0;
      if ((repeat <= B_n.cnt) && (DW_l.temporalCounter_i1_n >= Delay)) {
        DW_l.is_c1_Ecotron = IN_init_d;
        B_n.cnt = 0.0;
        B_n.PtoNTrigger = 0.0;
        B_n.PtoDTrigger = 0.0;
        B_n.RtoNTrigger = 0.0;
        B_n.NtoRTrigger = 0.0;
        B_n.NtoDTrigger = 0.0;
        B_n.DtoNTrigger = 0.0;
      } else {
        if (DW_l.temporalCounter_i1_n >= interval) {
          DW_l.is_c1_Ecotron = IN_high;
          DW_l.temporalCounter_i1_n = 0U;
          B_n.PtoNTrigger = 1.0;
          B_n.cnt++;
        }
      }
      break;

     case IN_low1:
      B_n.PtoDTrigger = 0.0;
      if ((repeat <= B_n.cnt) && (DW_l.temporalCounter_i1_n >= Delay)) {
        DW_l.is_c1_Ecotron = IN_init_d;
        B_n.cnt = 0.0;
        B_n.PtoNTrigger = 0.0;
        B_n.PtoDTrigger = 0.0;
        B_n.RtoNTrigger = 0.0;
        B_n.NtoRTrigger = 0.0;
        B_n.NtoDTrigger = 0.0;
        B_n.DtoNTrigger = 0.0;
      } else {
        if (DW_l.temporalCounter_i1_n >= interval) {
          DW_l.is_c1_Ecotron = IN_high1;
          DW_l.temporalCounter_i1_n = 0U;
          B_n.PtoDTrigger = 1.0;
          B_n.cnt++;
        }
      }
      break;

     case IN_low2:
      B_n.RtoNTrigger = 0.0;
      if ((repeat <= B_n.cnt) && (DW_l.temporalCounter_i1_n >= Delay)) {
        DW_l.is_c1_Ecotron = IN_init_d;
        B_n.cnt = 0.0;
        B_n.PtoNTrigger = 0.0;
        B_n.PtoDTrigger = 0.0;
        B_n.RtoNTrigger = 0.0;
        B_n.NtoRTrigger = 0.0;
        B_n.NtoDTrigger = 0.0;
        B_n.DtoNTrigger = 0.0;
      } else {
        if (DW_l.temporalCounter_i1_n >= interval) {
          DW_l.is_c1_Ecotron = IN_high2;
          DW_l.temporalCounter_i1_n = 0U;
          B_n.RtoNTrigger = 1.0;
          B_n.cnt++;
        }
      }
      break;

     case IN_low3:
      B_n.NtoRTrigger = 0.0;
      if ((repeat <= B_n.cnt) && (DW_l.temporalCounter_i1_n >= Delay)) {
        DW_l.is_c1_Ecotron = IN_init_d;
        B_n.cnt = 0.0;
        B_n.PtoNTrigger = 0.0;
        B_n.PtoDTrigger = 0.0;
        B_n.RtoNTrigger = 0.0;
        B_n.NtoRTrigger = 0.0;
        B_n.NtoDTrigger = 0.0;
        B_n.DtoNTrigger = 0.0;
      } else {
        if (DW_l.temporalCounter_i1_n >= interval) {
          DW_l.is_c1_Ecotron = IN_high3;
          DW_l.temporalCounter_i1_n = 0U;
          B_n.NtoRTrigger = 1.0;
          B_n.cnt++;
        }
      }
      break;

     case IN_low4:
      B_n.NtoDTrigger = 0.0;
      if ((repeat <= B_n.cnt) && (DW_l.temporalCounter_i1_n >= Delay)) {
        DW_l.is_c1_Ecotron = IN_init_d;
        B_n.cnt = 0.0;
        B_n.PtoNTrigger = 0.0;
        B_n.PtoDTrigger = 0.0;
        B_n.RtoNTrigger = 0.0;
        B_n.NtoRTrigger = 0.0;
        B_n.NtoDTrigger = 0.0;
        B_n.DtoNTrigger = 0.0;
      } else {
        if (DW_l.temporalCounter_i1_n >= interval) {
          DW_l.is_c1_Ecotron = IN_high4;
          DW_l.temporalCounter_i1_n = 0U;
          B_n.NtoDTrigger = 1.0;
          B_n.cnt++;
        }
      }
      break;

     default:
      /* case IN_low5: */
      B_n.DtoNTrigger = 0.0;
      if ((repeat <= B_n.cnt) && (DW_l.temporalCounter_i1_n >= Delay)) {
        DW_l.is_c1_Ecotron = IN_init_d;
        B_n.cnt = 0.0;
        B_n.PtoNTrigger = 0.0;
        B_n.PtoDTrigger = 0.0;
        B_n.RtoNTrigger = 0.0;
        B_n.NtoRTrigger = 0.0;
        B_n.NtoDTrigger = 0.0;
        B_n.DtoNTrigger = 0.0;
      } else {
        if (DW_l.temporalCounter_i1_n >= interval) {
          DW_l.is_c1_Ecotron = IN_high5;
          DW_l.temporalCounter_i1_n = 0U;
          B_n.DtoNTrigger = 1.0;
          B_n.cnt++;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S229>/Chart1' */

  /* Outputs for Enabled SubSystem: '<S444>/Drive ' incorporates:
   *  EnablePort: '<S472>/Enable'
   */
  if (B_n.PtoDTrigger > 0.0) {
    /* S-Function (ecodoer_sendMsg_float): '<S472>/Send CAN Message 1' incorporates:
     *  Constant: '<S472>/Constant'
     *  Constant: '<S472>/Constant1'
     *  Constant: '<S472>/Constant2'
     *  Constant: '<S472>/Constant3'
     *  Constant: '<S472>/Constant4'
     *  Constant: '<S472>/Constant5'
     *  Constant: '<S472>/Constant6'
     *  Constant: '<S472>/Constant7'
     *  Constant: '<S472>/Constant8'
     */
    flSig2DataCnn23U();
  }

  /* End of Outputs for SubSystem: '<S444>/Drive ' */

  /* Outputs for Enabled SubSystem: '<S444>/Neutral' incorporates:
   *  EnablePort: '<S473>/Enable'
   */
  if (B_n.NtoDTrigger > 0.0) {
    /* S-Function (ecodoer_sendMsg_float): '<S473>/Send CAN Message 1' incorporates:
     *  Constant: '<S473>/Constant'
     *  Constant: '<S473>/Constant1'
     *  Constant: '<S473>/Constant2'
     *  Constant: '<S473>/Constant3'
     *  Constant: '<S473>/Constant4'
     *  Constant: '<S473>/Constant5'
     *  Constant: '<S473>/Constant6'
     *  Constant: '<S473>/Constant7'
     *  Constant: '<S473>/Constant8'
     */
    flSig2DataCnn24U();
  }

  /* End of Outputs for SubSystem: '<S444>/Neutral' */

  /* Outputs for Triggered SubSystem: '<S444>/Reverse' incorporates:
   *  TriggerPort: '<S474>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&PrevZCX_p.Reverse_Trig_ZCE,
                     (B_n.DtoNTrigger));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (ecodoer_sendMsg_float): '<S474>/Send CAN Message 1' incorporates:
     *  Constant: '<S474>/Constant'
     *  Constant: '<S474>/Constant1'
     *  Constant: '<S474>/Constant2'
     *  Constant: '<S474>/Constant3'
     *  Constant: '<S474>/Constant4'
     *  Constant: '<S474>/Constant5'
     *  Constant: '<S474>/Constant6'
     *  Constant: '<S474>/Constant7'
     *  Constant: '<S474>/Constant8'
     */
    flSig2DataCnn25U();
  }

  /* End of Outputs for SubSystem: '<S444>/Reverse' */

  /* Outputs for Triggered SubSystem: '<S444>/Reverse1' incorporates:
   *  TriggerPort: '<S475>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&PrevZCX_p.Reverse1_Trig_ZCE,
                     (B_n.NtoRTrigger));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (ecodoer_sendMsg_float): '<S475>/Send CAN Message 1' incorporates:
     *  Constant: '<S475>/Constant'
     *  Constant: '<S475>/Constant1'
     *  Constant: '<S475>/Constant2'
     *  Constant: '<S475>/Constant3'
     *  Constant: '<S475>/Constant4'
     *  Constant: '<S475>/Constant5'
     *  Constant: '<S475>/Constant6'
     *  Constant: '<S475>/Constant7'
     *  Constant: '<S475>/Constant8'
     */
    flSig2DataCnn26U();
  }

  /* End of Outputs for SubSystem: '<S444>/Reverse1' */

  /* Outputs for Triggered SubSystem: '<S444>/Reverse2' incorporates:
   *  TriggerPort: '<S476>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&PrevZCX_p.Reverse2_Trig_ZCE,
                     (B_n.RtoNTrigger));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (ecodoer_sendMsg_float): '<S476>/Send CAN Message 1' incorporates:
     *  Constant: '<S476>/Constant'
     *  Constant: '<S476>/Constant1'
     *  Constant: '<S476>/Constant2'
     *  Constant: '<S476>/Constant3'
     *  Constant: '<S476>/Constant4'
     *  Constant: '<S476>/Constant5'
     *  Constant: '<S476>/Constant6'
     *  Constant: '<S476>/Constant7'
     *  Constant: '<S476>/Constant8'
     */
    flSig2DataCnn27U();
  }

  /* End of Outputs for SubSystem: '<S444>/Reverse2' */

  /* Outputs for Triggered SubSystem: '<S444>/Reverse3' incorporates:
   *  TriggerPort: '<S477>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&PrevZCX_p.Reverse3_Trig_ZCE,
                     (B_n.PtoNTrigger));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (ecodoer_sendMsg_float): '<S477>/Send CAN Message 1' incorporates:
     *  Constant: '<S477>/Constant'
     *  Constant: '<S477>/Constant1'
     *  Constant: '<S477>/Constant2'
     *  Constant: '<S477>/Constant3'
     *  Constant: '<S477>/Constant4'
     *  Constant: '<S477>/Constant5'
     *  Constant: '<S477>/Constant6'
     *  Constant: '<S477>/Constant7'
     *  Constant: '<S477>/Constant8'
     */
    flSig2DataCnn28U();
  }

  /* End of Outputs for SubSystem: '<S444>/Reverse3' */

  /* Chart: '<S229>/Chart' incorporates:
   *  Logic: '<S229>/AND'
   *  RelationalOperator: '<S228>/Compare'
   */
  if (DW_l.temporalCounter_i1_j3 < 255U) {
    DW_l.temporalCounter_i1_j3++;
  }

  if (DW_l.is_active_c7_Ecotron == 0U) {
    DW_l.is_active_c7_Ecotron = 1U;
    DW_l.is_c7_Ecotron = IN_init;
    B_n.Parktrigger = false;
  } else if (DW_l.is_c7_Ecotron == IN_init) {
    B_n.Parktrigger = false;
    if ((Set_GearOvrMsr != GOLF_CurrentGear) && (Set_GearOvrMsr == 1) &&
        ((Set_GearEnableOvrMsr != 0.0F) && debug_stopmode)) {
      DW_l.is_c7_Ecotron = IN_trigger;
      DW_l.temporalCounter_i1_j3 = 0U;
      B_n.Parktrigger = true;
    }
  } else {
    /* case IN_trigger: */
    B_n.Parktrigger = true;
    if (DW_l.temporalCounter_i1_j3 >= 250U) {
      DW_l.is_c7_Ecotron = IN_init;
      B_n.Parktrigger = false;
    }
  }

  /* End of Chart: '<S229>/Chart' */

  /* S-Function (DIO_Out): '<S444>/Switch Output' */
  F_Abstr_HSO_SwitchSet(HSO07,B_n.Parktrigger);

  /* RateTransition generated from: '<S445>/Send CAN Message 4' */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    DW_l.BrakePowerErr_Buffer = Diag_BrakePowerErr;

    /* RateTransition generated from: '<S445>/Send CAN Message 4' */
    DW_l.Brake_HeartBeatErr_Buffer = Brake_HeartBeatErr;

    /* RateTransition generated from: '<S445>/Send CAN Message 4' */
    DW_l.Brake_SystemErr_Buffer = Brake_SystemErr;

    /* RateTransition generated from: '<S445>/Send CAN Message 1' */
    DW_l.Brake_pedalPos_Buffer = GOLF_BrakePedalPos;

    /* RateTransition generated from: '<S445>/Send CAN Message 4' */
    DW_l.BywirePowerErr_Buffer = Diag_By_wirePowerErr;
  }

  /* End of RateTransition generated from: '<S445>/Send CAN Message 4' */

  /* S-Function (ecodoer_readMsg_float): '<S105>/Read CAN Message' */
  flData2SigCnn29U();

  /* Chart: '<S445>/Chart' */
  if (DW_l.is_active_c4_Ecotron == 0U) {
    DW_l.is_active_c4_Ecotron = 1U;
    DW_l.is_c4_Ecotron = IN_init_b;
    output = 0;
  } else {
    switch (DW_l.is_c4_Ecotron) {
     case IN_Hazard:
      output = 3;
      if (!GOLF_HazardLight) {
        DW_l.is_c4_Ecotron = IN_init_b;
        output = 0;
      } else if (GOLF_BlinkerLeft == 1.0F) {
        DW_l.is_c4_Ecotron = IN_left;
        output = 1;
      } else {
        if (GOLF_BlinkerRight == 1.0F) {
          DW_l.is_c4_Ecotron = IN_right;
          output = 2;
        }
      }
      break;

     case IN_init_b:
      output = 0;
      if (GOLF_BlinkerLeft == 1.0F) {
        DW_l.is_c4_Ecotron = IN_left;
        output = 1;
      } else if (GOLF_BlinkerRight == 1.0F) {
        DW_l.is_c4_Ecotron = IN_right;
        output = 2;
      } else {
        if (GOLF_HazardLight) {
          DW_l.is_c4_Ecotron = IN_Hazard;
          output = 3;
        }
      }
      break;

     case IN_left:
      output = 1;
      if (GOLF_BlinkerLeft == 0.0F) {
        DW_l.is_c4_Ecotron = IN_init_b;
        output = 0;
      } else {
        if (GOLF_BlinkerRight == 1.0F) {
          DW_l.is_c4_Ecotron = IN_right;
          output = 2;
        }
      }
      break;

     default:
      /* case IN_right: */
      output = 2;
      if (GOLF_BlinkerRight == 0.0F) {
        DW_l.is_c4_Ecotron = IN_init_b;
        output = 0;
      } else {
        if (GOLF_BlinkerLeft == 1.0F) {
          DW_l.is_c4_Ecotron = IN_left;
          output = 1;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S445>/Chart' */

  /* RateTransition generated from: '<S445>/Send CAN Message 4' */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    DW_l.EPASPowerErr_Buffer = Diag_EPASPowerErr;

    /* RateTransition generated from: '<S445>/Send CAN Message 1' */
    DW_l.EPAS_DriverIntervention_overrid =
      EPAS_DriverIntervention_overrideOvrMsr;

    /* RateTransition generated from: '<S445>/Send CAN Message 4' */
    DW_l.EPAS_HeartbeatErr_Buffer = EPAS_HeartbeatErr;

    /* RateTransition generated from: '<S445>/Send CAN Message 4' */
    DW_l.EPAS_SystemErr_Buffer = EPAS_SystemErr;

    /* RateTransition generated from: '<S445>/Send CAN Message 1' */
    DW_l.GasPedalintervention_Buffer = Compare_pa;

    /* RateTransition generated from: '<S445>/Send CAN Message 4' */
    DW_l.Kl75_Buffer = Diag_KL75;

    /* RateTransition generated from: '<S445>/Send CAN Message 2' */
    DW_l.NoIdea1_Buffer = GOLF_CurrentGear;

    /* RateTransition generated from: '<S445>/Send CAN Message 4' */
    DW_l.PC_timeout_Buffer = PC_timeout;

    /* RateTransition generated from: '<S445>/Send CAN Message 4' */
    DW_l.PDS_BUSErr_Buffer = Diag_PDS_BUSErr;

    /* RateTransition generated from: '<S445>/Send CAN Message 4' */
    DW_l.PDS_HeartbeatErr_Buffer = Diag_PDS_HeartbeatErr;

    /* RateTransition generated from: '<S445>/Send CAN Message 1' */
    DW_l.RBF_DriverIntervention_Buffer = BBW_DriverIntervention;
  }

  /* End of RateTransition generated from: '<S445>/Send CAN Message 4' */

  /* S-Function (ecodoer_readMsg_float): '<S110>/Read CAN Message' */
  flData2SigCnn30U();

  /* Switch: '<S110>/Switch' incorporates:
   *  Constant: '<S110>/Constant'
   *  Constant: '<S110>/Constant1'
   */
  if (GOLF_LWIVZ_SteeringWheelAngle > 0.5F) {
    Output = 1;
  } else {
    Output = -1;
  }

  /* End of Switch: '<S110>/Switch' */

  /* Product: '<S110>/Product' */
  Steering_Angle = (real32_T)Output * GOLF_LWI_SteeringWheelAngle;

  /* RateTransition generated from: '<S445>/Send CAN Message 1' */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    DW_l.Steering_Angle_Buffer = Steering_Angle;
  }

  /* End of RateTransition generated from: '<S445>/Send CAN Message 1' */

  /* RateTransition generated from: '<S96>/Relational Operator' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    B_n.TmpRTBAtRelational_chcxwz4uqitp = DW_l.TmpRTBAtRelational_jsfrzwgrs54s;
  }

  /* End of RateTransition generated from: '<S96>/Relational Operator' */

  /* RateTransition generated from: '<S445>/Send CAN Message 4' incorporates:
   *  Constant: '<S223>/Constant'
   *  RelationalOperator: '<S223>/Compare'
   *  RelationalOperator: '<S96>/Relational Operator'
   */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    DW_l.Throttle_ECU_HeartbeatErr_Buffe = (B_n.ReadCANMessage_o2_jp ==
      B_n.TmpRTBAtRelational_chcxwz4uqitp);

    /* RateTransition generated from: '<S445>/Send CAN Message 2' incorporates:
     *  Constant: '<S223>/Constant'
     *  RelationalOperator: '<S223>/Compare'
     *  RelationalOperator: '<S96>/Relational Operator'
     */
    DW_l.TmpRTBAtSendCANMessage2Inport2_ = output;
  }

  /* End of RateTransition generated from: '<S445>/Send CAN Message 4' */

  /* RateTransition generated from: '<S445>/Send CAN Message 3' */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    DW_l.TmpRTBAtSendCANMessage3Inport1_ = Multiply1_tmp;

    /* RateTransition generated from: '<S445>/Send CAN Message 3' incorporates:
     *  Lookup_n-D: '<S479>/1-D Lookup Table'
     */
    DW_l.TmpRTBAtSendCANMessage3Inport2_ = look1_iflf_binlx(Steering_Angle,
      rtCP_uDLookupTable_bp01Data_c, rtCP_uDLookupTable_tableData_bp, 27U);

    /* RateTransition generated from: '<S445>/Send CAN Message 2' */
    DW_l.autonomy_Enable_Buffer = debug_Mode;

    /* RateTransition generated from: '<S445>/Send CAN Message 4' */
    DW_l.isMotorRunning_Buffer = Diag_isMotorrunning;

    /* RateTransition generated from: '<S445>/Send CAN Message 2' */
    DW_l.rxBH_HighBeam_Buffer = GOLF_HighBeam;

    /* RateTransition generated from: '<S445>/Send CAN Message 2' */
    DW_l.rxEPB_Status_Buffer = GOLF_HandBrakeStatus;
  }

  /* End of RateTransition generated from: '<S445>/Send CAN Message 3' */

  /* S-Function (ecodoer_readMsg_float): '<S109>/Read CAN Message1' */
  flData2SigCnn31U();

  /* RateTransition generated from: '<S445>/Send CAN Message 2' */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    DW_l.rxKBI_InhaltTank_Buffer = GOLF_Fuel;
  }

  /* End of RateTransition generated from: '<S445>/Send CAN Message 2' */

  /* S-Function (ecodoer_readMsg_float): '<S114>/Read CAN Message' */
  flData2SigCnn32U();

  /* RateTransition generated from: '<S445>/Send CAN Message 1' */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    DW_l.rxMO_AcceleratorRawValue01_Buff = GOLF_AcceleratorRawValur;

    /* RateTransition generated from: '<S445>/Send CAN Message ' */
    DW_l.rxMO_Kl75_Buffer = GOLF_KL75;

    /* RateTransition generated from: '<S445>/Send CAN Message ' */
    DW_l.rxMO_RotationSpeed01_Buffer = GOLF_MotorRPM;
  }

  /* End of RateTransition generated from: '<S445>/Send CAN Message 1' */

  /* RelationalOperator: '<S413>/Compare' incorporates:
   *  Constant: '<S413>/Constant'
   */
  Compare_pa = (PDS_Status1 > 0);

  /* Outputs for Atomic SubSystem: '<S199>/Rising Edge' */
  /* Logic: '<S415>/Logical Operator' incorporates:
   *  Logic: '<S415>/Logical Operator1'
   *  UnitDelay: '<S415>/Unit Delay'
   */
  EPAS_SystemErr = (Compare_pa && (!DW_l.UnitDelay_DSTATE_ix));

  /* Update for UnitDelay: '<S415>/Unit Delay' */
  DW_l.UnitDelay_DSTATE_ix = Compare_pa;

  /* End of Outputs for SubSystem: '<S199>/Rising Edge' */

  /* Outputs for Atomic SubSystem: '<S199>/Falling Edge' */
  /* Logic: '<S414>/Logical Operator' incorporates:
   *  Logic: '<S414>/Logical Operator1'
   *  UnitDelay: '<S414>/Unit Delay'
   */
  Brake_SystemErr = ((!Compare_pa) && DW_l.UnitDelay_DSTATE_o);

  /* Update for UnitDelay: '<S414>/Unit Delay' */
  DW_l.UnitDelay_DSTATE_o = Compare_pa;

  /* End of Outputs for SubSystem: '<S199>/Falling Edge' */

  /* Chart: '<S199>/Chart' */
  if (DW_l.temporalCounter_i1_i < 511U) {
    DW_l.temporalCounter_i1_i++;
  }

  if (DW_l.is_active_c11_Ecotron == 0U) {
    DW_l.is_active_c11_Ecotron = 1U;
    DW_l.is_c11_Ecotron = IN_start;
    B_n.Channel = 0.0;
    B_n.Onoff = 0.0;
    B_n.Msgtrigger = 0.0;
  } else {
    switch (DW_l.is_c11_Ecotron) {
     case IN_Shutdown:
      if (EPAS_SystemErr) {
        if (DW_l.is_Shutdown == IN_DBW) {
          B_n.Msgtrigger = 0.0;
          DW_l.is_Shutdown = IN_NO_ACTIVE_CHILD;
        } else {
          DW_l.is_Shutdown = IN_NO_ACTIVE_CHILD;
        }

        DW_l.is_c11_Ecotron = IN_Startup;
        DW_l.is_Startup = IN_Modem;
        DW_l.temporalCounter_i1_i = 0U;
        B_n.Channel = 4.0;
        B_n.Onoff = 1.0;
        B_n.Msgtrigger = 1.0;
      } else {
        switch (DW_l.is_Shutdown) {
         case IN_Brake:
          B_n.Channel = 7.0;
          B_n.Onoff = 0.0;
          if (DW_l.temporalCounter_i1_i >= 200U) {
            DW_l.is_Shutdown = IN_DBW;
            B_n.Channel = 5.0;
            B_n.Onoff = 0.0;
            B_n.Msgtrigger = 1.0;
          } else {
            B_n.Msgtrigger = 0.0;
          }
          break;

         case IN_DBW:
          DW_l.is_Shutdown = IN_NO_ACTIVE_CHILD;
          DW_l.is_c11_Ecotron = IN_start;
          B_n.Channel = 0.0;
          B_n.Onoff = 0.0;
          B_n.Msgtrigger = 0.0;
          break;

         case IN_EPAS:
          B_n.Channel = 9.0;
          B_n.Onoff = 0.0;
          if (DW_l.temporalCounter_i1_i >= 200U) {
            DW_l.is_Shutdown = IN_Brake;
            DW_l.temporalCounter_i1_i = 0U;
            B_n.Channel = 7.0;
            B_n.Onoff = 0.0;
            B_n.Msgtrigger = 1.0;
          } else {
            B_n.Msgtrigger = 0.0;
          }
          break;

         case IN_GNSS:
          B_n.Channel = 2.0;
          B_n.Onoff = 0.0;
          if (DW_l.temporalCounter_i1_i >= 200U) {
            DW_l.is_Shutdown = IN_VLS128;
            DW_l.temporalCounter_i1_i = 0U;
            B_n.Channel = 3.0;
            B_n.Onoff = 0.0;
            B_n.Msgtrigger = 1.0;
          } else {
            B_n.Msgtrigger = 0.0;
          }
          break;

         case IN_LIDARS:
          B_n.Channel = 1.0;
          B_n.Onoff = 0.0;
          if (DW_l.temporalCounter_i1_i >= 200U) {
            DW_l.is_Shutdown = IN_EPAS;
            DW_l.temporalCounter_i1_i = 0U;
            B_n.Channel = 9.0;
            B_n.Onoff = 0.0;
            B_n.Msgtrigger = 1.0;
          } else {
            B_n.Msgtrigger = 0.0;
          }
          break;

         case IN_Modem:
          B_n.Channel = 4.0;
          B_n.Onoff = 0.0;
          if (DW_l.temporalCounter_i1_i >= 200U) {
            DW_l.is_Shutdown = IN_GNSS;
            DW_l.temporalCounter_i1_i = 0U;
            B_n.Channel = 2.0;
            B_n.Onoff = 0.0;
            B_n.Msgtrigger = 1.0;
          } else {
            B_n.Msgtrigger = 0.0;
          }
          break;

         default:
          /* case IN_VLS128: */
          B_n.Channel = 3.0;
          B_n.Onoff = 0.0;
          if (DW_l.temporalCounter_i1_i >= 200U) {
            DW_l.is_Shutdown = IN_LIDARS;
            DW_l.temporalCounter_i1_i = 0U;
            B_n.Channel = 1.0;
            B_n.Onoff = 0.0;
            B_n.Msgtrigger = 1.0;
          } else {
            B_n.Msgtrigger = 0.0;
          }
          break;
        }
      }
      break;

     case IN_Startup:
      if (Brake_SystemErr) {
        if (DW_l.is_Startup == IN_DBW) {
          B_n.Msgtrigger = 0.0;
          DW_l.is_Startup = IN_NO_ACTIVE_CHILD;
        } else {
          DW_l.is_Startup = IN_NO_ACTIVE_CHILD;
        }

        DW_l.is_c11_Ecotron = IN_Shutdown;
        DW_l.is_Shutdown = IN_Modem;
        DW_l.temporalCounter_i1_i = 0U;
        B_n.Channel = 4.0;
        B_n.Onoff = 0.0;
        B_n.Msgtrigger = 1.0;
      } else {
        switch (DW_l.is_Startup) {
         case IN_Brake:
          B_n.Channel = 7.0;
          B_n.Onoff = 1.0;
          if (DW_l.temporalCounter_i1_i >= 500U) {
            DW_l.is_Startup = IN_DBW;
            B_n.Channel = 5.0;
            B_n.Onoff = 1.0;
            B_n.Msgtrigger = 1.0;
          } else {
            B_n.Msgtrigger = 0.0;
          }
          break;

         case IN_DBW:
          DW_l.is_Startup = IN_NO_ACTIVE_CHILD;
          DW_l.is_c11_Ecotron = IN_start;
          B_n.Channel = 0.0;
          B_n.Onoff = 0.0;
          B_n.Msgtrigger = 0.0;
          break;

         case IN_EPAS:
          B_n.Channel = 9.0;
          B_n.Onoff = 1.0;
          if (DW_l.temporalCounter_i1_i >= 500U) {
            DW_l.is_Startup = IN_Brake;
            DW_l.temporalCounter_i1_i = 0U;
            B_n.Channel = 7.0;
            B_n.Onoff = 1.0;
            B_n.Msgtrigger = 1.0;
          } else {
            B_n.Msgtrigger = 0.0;
          }
          break;

         case IN_GNSS:
          B_n.Channel = 2.0;
          B_n.Onoff = 1.0;
          if (DW_l.temporalCounter_i1_i >= 500U) {
            DW_l.is_Startup = IN_VLS128;
            DW_l.temporalCounter_i1_i = 0U;
            B_n.Channel = 3.0;
            B_n.Onoff = 1.0;
            B_n.Msgtrigger = 1.0;
          } else {
            B_n.Msgtrigger = 0.0;
          }
          break;

         case IN_LIDARS:
          B_n.Channel = 1.0;
          B_n.Onoff = 1.0;
          if (DW_l.temporalCounter_i1_i >= 500U) {
            DW_l.is_Startup = IN_EPAS;
            DW_l.temporalCounter_i1_i = 0U;
            B_n.Channel = 9.0;
            B_n.Onoff = 1.0;
            B_n.Msgtrigger = 1.0;
          } else {
            B_n.Msgtrigger = 0.0;
          }
          break;

         case IN_Modem:
          B_n.Channel = 4.0;
          B_n.Onoff = 1.0;
          if (DW_l.temporalCounter_i1_i >= 200U) {
            DW_l.is_Startup = IN_GNSS;
            DW_l.temporalCounter_i1_i = 0U;
            B_n.Channel = 2.0;
            B_n.Onoff = 1.0;
            B_n.Msgtrigger = 1.0;
          } else {
            B_n.Msgtrigger = 0.0;
          }
          break;

         default:
          /* case IN_VLS128: */
          B_n.Channel = 3.0;
          B_n.Onoff = 1.0;
          if (DW_l.temporalCounter_i1_i >= 500U) {
            DW_l.is_Startup = IN_LIDARS;
            DW_l.temporalCounter_i1_i = 0U;
            B_n.Channel = 1.0;
            B_n.Onoff = 1.0;
            B_n.Msgtrigger = 1.0;
          } else {
            B_n.Msgtrigger = 0.0;
          }
          break;
        }
      }
      break;

     default:
      /* case IN_start: */
      B_n.Channel = 0.0;
      B_n.Onoff = 0.0;
      if (EPAS_SystemErr) {
        DW_l.is_c11_Ecotron = IN_Startup;
        DW_l.is_Startup = IN_Modem;
        DW_l.temporalCounter_i1_i = 0U;
        B_n.Channel = 4.0;
        B_n.Onoff = 1.0;
        B_n.Msgtrigger = 1.0;
      } else {
        if (Brake_SystemErr) {
          DW_l.is_c11_Ecotron = IN_Shutdown;
          DW_l.is_Shutdown = IN_Modem;
          DW_l.temporalCounter_i1_i = 0U;
          B_n.Channel = 4.0;
          B_n.Onoff = 0.0;
          B_n.Msgtrigger = 1.0;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S199>/Chart' */

  /* Outputs for Triggered SubSystem: '<S446>/Subsystem' incorporates:
   *  TriggerPort: '<S481>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&PrevZCX_p.Subsystem_Trig_ZCE,
                     (B_n.Msgtrigger));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (ecodoer_sendMsg_float): '<S481>/Send CAN Message ' */
    flSig2DataCnn33U();
  }

  /* End of Outputs for SubSystem: '<S446>/Subsystem' */

  /* RateTransition generated from: '<S447>/Send CAN Message 2' */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    DW_l.autonomy_Enable_Buffer_d = debug_Mode;
  }

  /* End of RateTransition generated from: '<S447>/Send CAN Message 2' */

  /* Chart: '<S196>/Chart' incorporates:
   *  Constant: '<S196>/Read Calibration1'
   *  Lookup_n-D: '<S241>/1-D Lookup Table'
   */
  if (DW_l.temporalCounter_i1_k < 15U) {
    DW_l.temporalCounter_i1_k++;
  }

  if (DW_l.is_active_c12_Ecotron == 0U) {
    DW_l.is_active_c12_Ecotron = 1U;
    DW_l.is_c12_Ecotron = IN_Manual;
    debug_Gatesetsteer = 0.0F;
    debug_GateTorquelimit = 50.0F;
  } else if (DW_l.is_c12_Ecotron == IN_Manual) {
    if (debug_Mode) {
      DW_l.is_c12_Ecotron = IN_Otonom;
      DW_l.is_Otonom = IN_Slow;
      debug_GateTorquelimit = 50.0F;
    }
  } else {
    /* case IN_Otonom: */
    if (!debug_Mode) {
      DW_l.is_Otonom = IN_NO_ACTIVE_CHILD;
      DW_l.is_c12_Ecotron = IN_Manual;
      debug_Gatesetsteer = 0.0F;
      debug_GateTorquelimit = 50.0F;
    } else {
      debug_Gatesetsteer = look1_iflf_binlx(PC_SetFrontWheelAngle,
        rtCP_uDLookupTable_bp01Data_l, rtCP_uDLookupTable_tableData_e, 27U);
      if (DW_l.is_Otonom == IN_Fast) {
        if ((DW_l.temporalCounter_i1_k >= 10U) && (debug_GateTorquelimit <
             EPAS_MaxTorque)) {
          DW_l.temporalCounter_i1_k = 0U;
          debug_GateTorquelimit = debug_GateTorquelimit + 1.0F;
        }
      } else {
        /* case IN_Slow: */
        if (GOLF_BRWheelSpeed > 3.0F) {
          DW_l.is_Otonom = IN_Fast;
          DW_l.temporalCounter_i1_k = 0U;
          debug_GateTorquelimit = debug_GateTorquelimit + 1.0F;
        }
      }
    }
  }

  /* End of Chart: '<S196>/Chart' */

  /* RateTransition generated from: '<S447>/Send CAN Message 2' */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    DW_l.debug_GateTorquelimit_Buffer = debug_GateTorquelimit;

    /* RateTransition generated from: '<S447>/Send CAN Message 2' */
    DW_l.debug_Gatesetsteer_Buffer = debug_Gatesetsteer;
  }

  /* End of RateTransition generated from: '<S447>/Send CAN Message 2' */

  /* RateTransition generated from: '<S23>/Delay1' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    DW_l.Cnt1_Buffer = B_n.ReadCANMessage_o2_a;
  }

  /* End of RateTransition generated from: '<S23>/Delay1' */

  /* S-Function (ecodoer_readMsg_float): '<S18>/Read CAN Message4' */
  flData2SigCnn34U();

  /* S-Function (ecodoer_readMsg_float): '<S19>/Read CAN Message3' */
  flData2SigCnn35U();

  /* S-Function (ecodoer_readMsg_float): '<S20>/Read CAN Message2' */
  flData2SigCnn36U();

  /* RateTransition generated from: '<S48>/Delay1' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    DW_l.Cnt1_Buffer_p = B_n.ReadCANMessage1_o2;
  }

  /* End of RateTransition generated from: '<S48>/Delay1' */

  /* S-Function (ecodoer_readMsg_float): '<S22>/Read CAN Message5' */
  flData2SigCnn37U();

  /* RateTransition generated from: '<S56>/Delay1' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    DW_l.Cnt1_Buffer_py = B_n.ReadCANMessage2_o2;

    /* RateTransition generated from: '<S59>/Delay1' */
    DW_l.Cnt1_Buffer_py0 = B_n.ReadCANMessage3_o2_i;

    /* RateTransition generated from: '<S66>/Delay1' */
    DW_l.Cnt1_Buffer_py0c = B_n.ReadCANMessage3_o2_m;

    /* RateTransition generated from: '<S78>/Delay1' */
    DW_l.Cnt1_Buffer_py0cy = B_n.ReadCANMessage2_o2_h;

    /* RateTransition generated from: '<S81>/Delay1' */
    DW_l.Cnt1_Buffer_py0cyt = B_n.ReadCANMessage3_o2_a;

    /* RateTransition generated from: '<S89>/Delay1' */
    DW_l.Cnt1_Buffer_py0cytz = B_n.ReadCANMessage3_o2;

    /* RateTransition generated from: '<S96>/Delay1' */
    DW_l.Cnt1_Buffer_py0cytzh = B_n.ReadCANMessage_o2_jp;
  }

  /* End of RateTransition generated from: '<S56>/Delay1' */

  /* S-Function (ecodoer_readMsg_float): '<S104>/Read CAN Message' */
  flData2SigCnn38U();

  /* S-Function (ecodoer_readMsg_float): '<S106>/Read CAN Message' */
  flData2SigCnn39U();

  /* S-Function (ecodoer_readMsg_float): '<S107>/Read CAN Message' */
  flData2SigCnn40U();

  /* RateTransition generated from: '<S107>/Delay' */
  if (M->Timing.RateInteraction.TID0_5 == 1) {
    DW_l.rxGE_TargetWalk_Buffer = B_n.rxGE_TargetWalk_m;
  }

  /* End of RateTransition generated from: '<S107>/Delay' */

  /* Product: '<S109>/Divide' incorporates:
   *  Constant: '<S109>/Constant'
   */
  GOLF_Fuel_ratio = (real32_T)(GOLF_Fuel / 50.0);

  /* Switch: '<S110>/Switch1' incorporates:
   *  Constant: '<S110>/Constant2'
   *  Constant: '<S110>/Constant3'
   */
  if (GOLF_LWIVZ_SteeringWheelAngle_Speed > 0.5F) {
    Output = 1;
  } else {
    Output = -1;
  }

  /* End of Switch: '<S110>/Switch1' */

  /* Product: '<S110>/Product1' */
  Steering_Angle_Speed = (real32_T)Output * GOLF_LWI_SteeringWheelAngle_Speed;

  /* S-Function (ecocoder_receive_msg): '<S102>/Receive CAN Message' */
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    B_n.ReceiveCANMessage_o1= 0;
  } else {
    B_n.ReceiveCANMessage_o1= F_ASW_CAN_Rx(&SvcCANDrtSlt0x176_0_1_41U, (ECO_BOOL
      *)&B_n.ReceiveCANMessage_o2, (ECO_BOOL *)&B_n.ReceiveCANMessage_o3,
      (ECO_U32 *)&B_n.ReceiveCANMessage_o4,(ECO_U08 *)&B_n.ReceiveCANMessage_o5,
      (ECO_U08 *)&B_n.ReceiveCANMessage_o6[0]);
  }

  /* Outputs for Triggered SubSystem: '<S102>/Subsystem2' incorporates:
   *  TriggerPort: '<S123>/Trigger'
   */
  if (B_n.ReceiveCANMessage_o1 && (PrevZCX_p.Subsystem2_Trig_ZCE != POS_ZCSIG))
  {
    /* S-Function (CAN_TxData): '<S123>/Send CAN Data' */
    if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_C)) {
      F_ASW_CAN_Tx(CAN_CTRL_C, 0, 0,374,8,(ECO_U08 *)(&B_n.ReceiveCANMessage_o6
        [0]));
    }
  }

  PrevZCX_p.Subsystem2_Trig_ZCE = B_n.ReceiveCANMessage_o1;

  /* End of Outputs for SubSystem: '<S102>/Subsystem2' */

  /* S-Function (ecocoder_receive_msg): '<S102>/Receive CAN Message1' */
  if (1==F_ASW_GetCANRxDisFlg(CAN_CTRL_B)) {
    B_n.ReceiveCANMessage1_o1= 0;
  } else {
    B_n.ReceiveCANMessage1_o1= F_ASW_CAN_Rx(&SvcCANDrtSlt0x86_0_1_42U, (ECO_BOOL
      *)&B_n.ReceiveCANMessage1_o2, (ECO_BOOL *)&B_n.ReceiveCANMessage1_o3,
      (ECO_U32 *)&B_n.ReceiveCANMessage1_o4,(ECO_U08 *)
      &B_n.ReceiveCANMessage1_o5,(ECO_U08 *)&B_n.ReceiveCANMessage1_o6[0]);
  }

  /* Outputs for Triggered SubSystem: '<S102>/Subsystem7' incorporates:
   *  TriggerPort: '<S124>/Trigger'
   */
  if (B_n.ReceiveCANMessage1_o1 && (PrevZCX_p.Subsystem7_Trig_ZCE != POS_ZCSIG))
  {
    /* S-Function (CAN_TxData): '<S124>/Send CAN Data' */
    if (1!=F_ASW_GetCANTxDisFlg(CAN_CTRL_C)) {
      F_ASW_CAN_Tx(CAN_CTRL_C, 0, 0,134,8,(ECO_U08 *)
                   (&B_n.ReceiveCANMessage1_o6[0]));
    }
  }

  PrevZCX_p.Subsystem7_Trig_ZCE = B_n.ReceiveCANMessage1_o1;

  /* End of Outputs for SubSystem: '<S102>/Subsystem7' */

  /* RateTransition generated from: '<S173>/Delay1' */
  if (M->Timing.RateInteraction.TID0_7 == 1) {
    DW_l.PC_FrontwheelMsg_cnt_Buffer = PC_FrontwheelMsg_cnt;

    /* RateTransition generated from: '<S173>/Delay2' */
    DW_l.PC_FrontwheelMsg_cnt1_Buffer = PC_FrontwheelMsg_cnt;

    /* RateTransition generated from: '<S173>/Delay3' */
    DW_l.PC_FrontwheelMsg_cnt2_Buffer = PC_FrontwheelMsg_cnt;

    /* RateTransition generated from: '<S179>/Delay1' */
    DW_l.Cnt1_Buffer_py0cytzhx = B_n.ReadCANMessage_o2;

    /* RateTransition generated from: '<S182>/Delay1' */
    DW_l.Cnt1_Buffer_py0cytzhx4 = B_n.ReadCANMessage_o2_kh;

    /* RateTransition generated from: '<S185>/Delay1' */
    DW_l.Cnt1_Buffer_py0cytzhx4s = B_n.ReadCANMessage_o2_h;
  }

  /* End of RateTransition generated from: '<S173>/Delay1' */

  /* RateTransition generated from: '<S204>/Delay' */
  if (M->Timing.RateInteraction.TID0_5 == 1) {
    DW_l.rxMO_Kl75_Buffer_n = GOLF_KL75;
  }

  /* End of RateTransition generated from: '<S204>/Delay' */

  /* DataTypeConversion: '<S229>/Data Type Conversion2' */
  gear_cnt = (real32_T)B_n.cnt;

  /* DeadZone: '<S286>/DeadZone' */
  if (csum > 300.0F) {
    csum -= 300.0F;
  } else if (csum >= -300.0F) {
    csum = 0.0F;
  } else {
    csum -= -300.0F;
  }

  /* End of DeadZone: '<S286>/DeadZone' */

  /* RelationalOperator: '<S286>/NotEqual' */
  Compare_pa = (0.0F != csum);

  /* Signum: '<S286>/SignPreSat' */
  if (csum < 0.0F) {
    csum = -1.0F;
  } else {
    if (csum > 0.0F) {
      csum = 1.0F;
    }
  }

  /* End of Signum: '<S286>/SignPreSat' */

  /* Product: '<S290>/IProd Out' incorporates:
   *  Constant: '<S246>/Read Calibration1'
   */
  cumRevIndex *= Compensation_I;

  /* RateTransition generated from: '<S246>/Product1' */
  if (M->Timing.RateInteraction.TID0_5 == 1) {
    B_n.TmpRTBAtProduct1Inport2 = DW_l.TmpRTBAtProduct1Inport2_Buffer0;
  }

  /* End of RateTransition generated from: '<S246>/Product1' */

  /* RateTransition generated from: '<S333>/UD' */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    DW_l.stopMode_Buffer = debug_stopmode;

    /* RateTransition generated from: '<S338>/Integrator' */
    DW_l.stopMode_Buffer_d = debug_stopmode;
  }

  /* End of RateTransition generated from: '<S333>/UD' */

  /* RateTransition generated from: '<S254>/Subtract1' incorporates:
   *  Constant: '<S252>/Constant'
   *  Product: '<S246>/Product1'
   *  Sum: '<S254>/Subtract1'
   */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    /* Saturate: '<S246>/Saturation' */
    if (debug_Fr_request > 3000.0F) {
      Multiply1_tmp = 3000.0F;
    } else if (debug_Fr_request < 0.0F) {
      Multiply1_tmp = 0.0F;
    } else {
      Multiply1_tmp = debug_Fr_request;
    }

    /* End of Saturate: '<S246>/Saturation' */
    DW_l.TmpRTBAtSubtract1Outport1_Buffe = 1.06 * B_n.TmpRTBAtProduct1Inport2 *
      Multiply1_tmp - GOLF_MotorTorque_raw;

    /* RateTransition generated from: '<S378>/UD' incorporates:
     *  Constant: '<S252>/Constant'
     *  Product: '<S246>/Product1'
     *  Sum: '<S254>/Subtract1'
     */
    DW_l.stopMode_Buffer_b = debug_stopmode;

    /* RateTransition generated from: '<S383>/Integrator' */
    DW_l.stopMode_Buffer_o = debug_stopmode;
  }

  /* End of RateTransition generated from: '<S254>/Subtract1' */

  /* RateTransition generated from: '<S255>/Subtract1' incorporates:
   *  Gain: '<S246>/Gain'
   *  Sum: '<S255>/Subtract1'
   */
  if (M->Timing.RateInteraction.TID0_2 == 1) {
    /* Saturate: '<S246>/Saturation1' */
    if (debug_Fr_request > 10.0F) {
      Multiply1_tmp = 10.0F;
    } else if (debug_Fr_request < -10000.0F) {
      Multiply1_tmp = -10000.0F;
    } else {
      Multiply1_tmp = debug_Fr_request;
    }

    /* End of Saturate: '<S246>/Saturation1' */
    DW_l.TmpRTBAtSubtract1Outport1_Buf_j = -0.0045454544F * Multiply1_tmp -
      GOLF_rxESPBrakePressure;
  }

  /* End of RateTransition generated from: '<S255>/Subtract1' */

  /* Outputs for Enabled SubSystem: '<Root>/Recover CAN Bus Off1' incorporates:
   *  EnablePort: '<S6>/Enable'
   */
  /* Constant: '<Root>/Read Calibration10' */
  if (CANB_recover > 0.0F) {
    /* S-Function (coder_sfun_can_recover_bus_offV2): '<S6>/CAN Recover Bus Off' */
#ifdef RECOVER_BUSOFF_FUNC_DEF

    F_Abstr_CAN_RecoverBusOff(CAN_CTRL_B);

#else

    F_CAN_RecoverBusOff(CAN_CTRL_B);

#endif

  }

  /* End of Constant: '<Root>/Read Calibration10' */
  /* End of Outputs for SubSystem: '<Root>/Recover CAN Bus Off1' */

  /* Outputs for Enabled SubSystem: '<Root>/Recover CAN Bus Off2' incorporates:
   *  EnablePort: '<S7>/Enable'
   */
  /* Constant: '<Root>/Read Calibration11' */
  if (CANC_recover > 0.0F) {
    /* S-Function (coder_sfun_can_recover_bus_offV2): '<S7>/CAN Recover Bus Off' */
#ifdef RECOVER_BUSOFF_FUNC_DEF

    F_Abstr_CAN_RecoverBusOff(CAN_CTRL_C);

#else

    F_CAN_RecoverBusOff(CAN_CTRL_C);

#endif

  }

  /* End of Constant: '<Root>/Read Calibration11' */
  /* End of Outputs for SubSystem: '<Root>/Recover CAN Bus Off2' */

  /* Outputs for Enabled SubSystem: '<Root>/Recover CAN Bus Off' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  /* Constant: '<Root>/Read Calibration9' */
  if (CANA_recover > 0.0F) {
    /* S-Function (coder_sfun_can_recover_bus_offV2): '<S5>/CAN Recover Bus Off' */
#ifdef RECOVER_BUSOFF_FUNC_DEF

    F_Abstr_CAN_RecoverBusOff(CAN_CTRL_A);

#else

    F_CAN_RecoverBusOff(CAN_CTRL_A);

#endif

  }

  /* End of Constant: '<Root>/Read Calibration9' */
  /* End of Outputs for SubSystem: '<Root>/Recover CAN Bus Off' */
  /* Update for UnitDelay: '<S263>/Unit Delay' */
  DW_l.UnitDelay_DSTATE_l = ms;

  /* Signum: '<S286>/SignPreIntegrator' */
  if (cumRevIndex < 0.0F) {
    ms = -1.0F;
  } else if (cumRevIndex > 0.0F) {
    ms = 1.0F;
  } else {
    ms = cumRevIndex;
  }

  /* End of Signum: '<S286>/SignPreIntegrator' */

  /* Switch: '<S286>/Switch' incorporates:
   *  Constant: '<S286>/Constant1'
   *  DataTypeConversion: '<S286>/DataTypeConv1'
   *  DataTypeConversion: '<S286>/DataTypeConv2'
   *  Logic: '<S286>/AND3'
   *  RelationalOperator: '<S286>/Equal1'
   */
  if (Compare_pa && ((int8_T)csum == (int8_T)ms)) {
    cumRevIndex = 0.0F;
  }

  /* End of Switch: '<S286>/Switch' */

  /* Update for DiscreteIntegrator: '<S293>/Integrator' */
  DW_l.Integrator_DSTATE_c += 0.001F * cumRevIndex;
  DW_l.Integrator_PrevResetState = (int8_T)debug_stopmode;
}

/* Model step function for TID1 */
void Ecotron_step1(void)               /* Sample time: [0.005s, 0.0s] */
{
  /* S-Function (EcoCoder_Task): '<S4>/Task_PwrOff' */

  /* -- Fcn-Call_0 -- */

  /* Output and update for function-call system: '<S4>/Power Off Management' */
  {
    boolean_T UnitDelay7;
    boolean_T UnitDelay1_p;
    real_T MinMax1_b;
    boolean_T LogicalOperator_o;
    boolean_T LogicalOperator1_e;
    uint32_T PowerOffManagement_ELAPS_T;
    uint32_T PowerOffManagement_ELAPS_T_tmp_;

    /* Outputs for Enabled SubSystem: '<S416>/KeyCycle' incorporates:
     *  EnablePort: '<S419>/Enable'
     */
    PowerOffManagement_ELAPS_T_tmp_ = M->Timing.clockTick1;

    /* End of Outputs for SubSystem: '<S416>/KeyCycle' */
    PowerOffManagement_ELAPS_T = PowerOffManagement_ELAPS_T_tmp_ -
      DW_l.PowerOffManagement_PREV_T;
    DW_l.PowerOffManagement_PREV_T = PowerOffManagement_ELAPS_T_tmp_;

    /* UnitDelay: '<S416>/Unit Delay7' */
    UnitDelay7 = DW_l.UnitDelay7_DSTATE;

    /* Logic: '<S425>/Logical Operator2' incorporates:
     *  Logic: '<S416>/Logical Operator'
     *  UnitDelay: '<S416>/Unit Delay7'
     */
    UnitDelay1_p = !DW_l.UnitDelay7_DSTATE;

    /* Switch: '<S438>/Switch' incorporates:
     *  Constant: '<S416>/Parameter'
     *  Logic: '<S425>/Logical Operator2'
     *  Logic: '<S425>/Logical Operator5'
     *  RelationalOperator: '<S425>/edge'
     *  Sum: '<S438>/Sum1'
     *  UnitDelay: '<S416>/Unit Delay7'
     *  UnitDelay: '<S425>/Unit Delay'
     *  UnitDelay: '<S438>/Unit Delay'
     */
    if ((DW_l.UnitDelay7_DSTATE != DW_l.UnitDelay_DSTATE_c) && UnitDelay1_p) {
      DW_l.UnitDelay_DSTATE = 0.5;
    } else {
      /* SampleTimeMath: '<S439>/sample time1'
       *
       * About '<S439>/sample time1':
       *  y = K where K = ( w * Ts )
       */
      MinMax1_b = (real_T)PowerOffManagement_ELAPS_T * 0.005;

      /* MinMax: '<S439>/MinMax' */
      if (0.001 > MinMax1_b) {
        MinMax1_b = 0.001;
      }

      /* End of MinMax: '<S439>/MinMax' */
      DW_l.UnitDelay_DSTATE -= MinMax1_b;
    }

    /* End of Switch: '<S438>/Switch' */

    /* MinMax: '<S438>/MinMax1' */
    if (0.5 < DW_l.UnitDelay_DSTATE) {
      DW_l.UnitDelay_DSTATE = 0.5;
    }

    /* End of MinMax: '<S438>/MinMax1' */

    /* MinMax: '<S438>/MinMax' */
    if (DW_l.UnitDelay_DSTATE > 0.0) {
    } else {
      DW_l.UnitDelay_DSTATE = 0.0;
    }

    /* End of MinMax: '<S438>/MinMax' */

    /* Switch: '<S425>/debounce' incorporates:
     *  Constant: '<S438>/Constant2'
     *  RelationalOperator: '<S438>/Relational Operator2'
     *  UnitDelay: '<S416>/Unit Delay7'
     *  UnitDelay: '<S425>/Unit Delay1'
     *  UnitDelay: '<S438>/Unit Delay'
     */
    if (DW_l.UnitDelay_DSTATE == 0.0) {
      PwrM_flgKeyOnDelay = DW_l.UnitDelay7_DSTATE;
    } else {
      PwrM_flgKeyOnDelay = DW_l.UnitDelay1_DSTATE;
    }

    /* End of Switch: '<S425>/debounce' */

    /* Outputs for Enabled SubSystem: '<S416>/KeyCycle' incorporates:
     *  EnablePort: '<S419>/Enable'
     */
    if (PwrM_flgKeyOnDelay) {
      PowerOffManagement_ELAPS_T = PowerOffManagement_ELAPS_T_tmp_ -
        DW_l.KeyCycle_PREV_T;
      DW_l.KeyCycle_PREV_T = PowerOffManagement_ELAPS_T_tmp_;

      /* Switch: '<S434>/Switch' incorporates:
       *  Constant: '<S416>/Parameter3'
       *  Logic: '<S432>/Logical Operator2'
       *  Logic: '<S432>/Logical Operator5'
       *  RelationalOperator: '<S432>/edge'
       *  Sum: '<S434>/Sum1'
       *  UnitDelay: '<S432>/Unit Delay'
       *  UnitDelay: '<S434>/Unit Delay'
       */
      if ((UnitDelay1_p != DW_l.UnitDelay_DSTATE_j) && (!UnitDelay1_p)) {
        MinMax1_b = 0.1;
      } else {
        /* SampleTimeMath: '<S435>/sample time1'
         *
         * About '<S435>/sample time1':
         *  y = K where K = ( w * Ts )
         */
        MinMax1_b = (real_T)PowerOffManagement_ELAPS_T * 0.005;

        /* MinMax: '<S435>/MinMax' */
        if (0.001 > MinMax1_b) {
          MinMax1_b = 0.001;
        }

        /* End of MinMax: '<S435>/MinMax' */
        MinMax1_b = DW_l.UnitDelay_DSTATE_h - MinMax1_b;
      }

      /* End of Switch: '<S434>/Switch' */

      /* MinMax: '<S434>/MinMax1' */
      if (0.1 < MinMax1_b) {
        MinMax1_b = 0.1;
      }

      /* End of MinMax: '<S434>/MinMax1' */

      /* MinMax: '<S434>/MinMax' */
      if (MinMax1_b > 0.0) {
        DW_l.UnitDelay_DSTATE_h = MinMax1_b;
      } else {
        DW_l.UnitDelay_DSTATE_h = 0.0;
      }

      /* End of MinMax: '<S434>/MinMax' */

      /* Switch: '<S432>/debounce' incorporates:
       *  Constant: '<S434>/Constant2'
       *  RelationalOperator: '<S434>/Relational Operator2'
       *  UnitDelay: '<S432>/Unit Delay1'
       *  UnitDelay: '<S434>/Unit Delay'
       */
      if (DW_l.UnitDelay_DSTATE_h == 0.0) {
        DW_l.UnitDelay1_DSTATE_nv = UnitDelay1_p;
      }

      /* End of Switch: '<S432>/debounce' */

      /* Switch: '<S436>/Switch' incorporates:
       *  Constant: '<S416>/Parameter2'
       *  Logic: '<S433>/Logical Operator5'
       *  RelationalOperator: '<S433>/edge'
       *  Sum: '<S436>/Sum1'
       *  UnitDelay: '<S433>/Unit Delay'
       *  UnitDelay: '<S436>/Unit Delay'
       */
      if ((UnitDelay1_p != DW_l.UnitDelay_DSTATE_jx) && UnitDelay1_p) {
        MinMax1_b = 0.1;
      } else {
        /* SampleTimeMath: '<S437>/sample time1'
         *
         * About '<S437>/sample time1':
         *  y = K where K = ( w * Ts )
         */
        MinMax1_b = (real_T)PowerOffManagement_ELAPS_T * 0.005;

        /* MinMax: '<S437>/MinMax' */
        if (0.001 > MinMax1_b) {
          MinMax1_b = 0.001;
        }

        /* End of MinMax: '<S437>/MinMax' */
        MinMax1_b = DW_l.UnitDelay_DSTATE_i - MinMax1_b;
      }

      /* End of Switch: '<S436>/Switch' */

      /* MinMax: '<S436>/MinMax1' */
      if (0.1 < MinMax1_b) {
        MinMax1_b = 0.1;
      }

      /* End of MinMax: '<S436>/MinMax1' */

      /* MinMax: '<S436>/MinMax' */
      if (MinMax1_b > 0.0) {
        DW_l.UnitDelay_DSTATE_i = MinMax1_b;
      } else {
        DW_l.UnitDelay_DSTATE_i = 0.0;
      }

      /* End of MinMax: '<S436>/MinMax' */

      /* Switch: '<S433>/debounce' incorporates:
       *  Constant: '<S436>/Constant2'
       *  RelationalOperator: '<S436>/Relational Operator2'
       *  UnitDelay: '<S433>/Unit Delay1'
       *  UnitDelay: '<S436>/Unit Delay'
       */
      if (DW_l.UnitDelay_DSTATE_i == 0.0) {
        DW_l.UnitDelay1_DSTATE_f = UnitDelay1_p;
      }

      /* End of Switch: '<S433>/debounce' */

      /* Outputs for Atomic SubSystem: '<S419>/ER_xxxx' */
      /* Logic: '<S428>/Logical Operator' incorporates:
       *  Logic: '<S428>/Logical Operator1'
       *  UnitDelay: '<S428>/Unit Delay'
       *  UnitDelay: '<S433>/Unit Delay1'
       */
      LogicalOperator_o = (DW_l.UnitDelay1_DSTATE_f && (!DW_l.UnitDelay_DSTATE_b));

      /* Update for UnitDelay: '<S428>/Unit Delay' incorporates:
       *  UnitDelay: '<S433>/Unit Delay1'
       */
      DW_l.UnitDelay_DSTATE_b = DW_l.UnitDelay1_DSTATE_f;

      /* End of Outputs for SubSystem: '<S419>/ER_xxxx' */

      /* Outputs for Atomic SubSystem: '<S419>/ER_xxxx1' */
      /* Logic: '<S429>/Logical Operator1' incorporates:
       *  UnitDelay: '<S429>/Unit Delay'
       */
      LogicalOperator1_e = !DW_l.UnitDelay_DSTATE_ij;

      /* Update for UnitDelay: '<S429>/Unit Delay' */
      DW_l.UnitDelay_DSTATE_ij = UnitDelay1_p;

      /* Outputs for Atomic SubSystem: '<S419>/RSFF_xxxx' */
      /* Switch: '<S430>/Switch' incorporates:
       *  Constant: '<S430>/Constant2'
       *  Logic: '<S429>/Logical Operator'
       *  Switch: '<S430>/Switch1'
       *  UnitDelay: '<S430>/Unit Delay1'
       */
      if (UnitDelay1_p && LogicalOperator1_e) {
        DW_l.UnitDelay1_DSTATE_g = false;
      } else {
        DW_l.UnitDelay1_DSTATE_g = (LogicalOperator_o ||
          DW_l.UnitDelay1_DSTATE_g);
      }

      /* End of Switch: '<S430>/Switch' */
      /* End of Outputs for SubSystem: '<S419>/RSFF_xxxx' */
      /* End of Outputs for SubSystem: '<S419>/ER_xxxx1' */

      /* Logic: '<S419>/LogicAND1' incorporates:
       *  Logic: '<S419>/LogicAND'
       *  Logic: '<S419>/LogicNOT'
       *  UnitDelay: '<S430>/Unit Delay1'
       *  UnitDelay: '<S432>/Unit Delay1'
       */
      B_n.LogicAND1 = ((!DW_l.UnitDelay1_DSTATE_nv) && DW_l.UnitDelay1_DSTATE_g);

      /* If: '<S419>/If2' */
      if (B_n.LogicAND1) {
        /* Outputs for IfAction SubSystem: '<S419>/Reset_Action' incorporates:
         *  ActionPort: '<S431>/Action Port'
         */
        /* S-Function (ResetSW): '<S431>/ResetSW' */
        if (true==B_n.LogicAND1) {
          F_Abstr_SoftReset();
        }

        /* End of Outputs for SubSystem: '<S419>/Reset_Action' */
      }

      /* End of If: '<S419>/If2' */

      /* Update for UnitDelay: '<S432>/Unit Delay' */
      DW_l.UnitDelay_DSTATE_j = UnitDelay1_p;

      /* Update for UnitDelay: '<S433>/Unit Delay' */
      DW_l.UnitDelay_DSTATE_jx = UnitDelay1_p;
    }

    /* End of Outputs for SubSystem: '<S416>/KeyCycle' */

    /* UnitDelay: '<S416>/Unit Delay1' */
    UnitDelay1_p = DW_l.UnitDelay1_DSTATE_n;

    /* Outputs for Triggered SubSystem: '<S416>/Shutdown Power' incorporates:
     *  TriggerPort: '<S420>/Trigger'
     */
    /* Logic: '<S416>/Logical Operator6' */
    LogicalOperator_o = !UnitDelay1_p;
    if (LogicalOperator_o && (PrevZCX_p.ShutdownPower_Trig_ZCE != ZERO_ZCSIG)) {
      /* S-Function (ecocoder_power_shutdwn): '<S420>/Shutdown Power' */
      F_TLF35584_Off();
    }

    PrevZCX_p.ShutdownPower_Trig_ZCE = UnitDelay1_p;

    /* End of Outputs for SubSystem: '<S416>/Shutdown Power' */

    /* Logic: '<S416>/Logical Operator2' incorporates:
     *  Logic: '<S416>/Logical Operator3'
     *  Logic: '<S416>/Logical Operator5'
     *  Logic: '<S416>/Logical Operator7'
     *  UnitDelay: '<S416>/Unit Delay3'
     *  UnitDelay: '<S416>/Unit Delay4'
     */
    LogicalOperator_o = ((!DW_l.UnitDelay3_DSTATE) && LogicalOperator_o &&
                         (!PwrM_flgKeyOnDelay) && (!DW_l.UnitDelay4_DSTATE));

    /* Outputs for Enabled SubSystem: '<S416>/Shutdown Power Hold' incorporates:
     *  EnablePort: '<S421>/Enable'
     */
    if (LogicalOperator_o) {
      /* S-Function (ecocoder_power_shutdwn): '<S421>/Shutdown Power' */
      F_TLF35584_Off();
    }

    /* End of Outputs for SubSystem: '<S416>/Shutdown Power Hold' */

    /* Outputs for Triggered SubSystem: '<S416>/Software Reset' incorporates:
     *  TriggerPort: '<S422>/Trigger'
     */
    if (PrevZCX_p.SoftwareReset_Trig_ZCE != ZERO_ZCSIG) {
      /* S-Function (ResetSW): '<S422>/ResetSW' incorporates:
       *  Constant: '<S422>/Constant'
       */
      if (true==true) {
        F_Abstr_SoftReset();
      }
    }

    PrevZCX_p.SoftwareReset_Trig_ZCE = 0U;

    /* End of Outputs for SubSystem: '<S416>/Software Reset' */

    /* Outputs for Triggered SubSystem: '<S416>/Store All NVM Data' incorporates:
     *  TriggerPort: '<S424>/Trigger'
     */
    if (PrevZCX_p.StoreAllNVMData_Trig_ZCE != ZERO_ZCSIG) {
      /* S-Function (WriteBackData): '<S424>/Store NVM Data1' incorporates:
       *  Constant: '<S424>/Constant'
       */
      if (true==true) {
        F_Abstr_MemRam2Nvm();
      }
    }

    PrevZCX_p.StoreAllNVMData_Trig_ZCE = 0U;

    /* End of Outputs for SubSystem: '<S416>/Store All NVM Data' */

    /* S-Function (DI_Key_In): '<S418>/SwitchInput_ReadKeyOn' */
    B_n.SwitchInput_ReadKeyOn= F_Abstr_DI_GetKeyValue(0.0039143865F,1.0F,1.0F);

    /* Switch: '<S418>/Switch' */
    PwrM_flgKeyOnRaw = B_n.SwitchInput_ReadKeyOn;

    /* Update for UnitDelay: '<S416>/Unit Delay7' */
    DW_l.UnitDelay7_DSTATE = PwrM_flgKeyOnRaw;

    /* Update for UnitDelay: '<S425>/Unit Delay' */
    DW_l.UnitDelay_DSTATE_c = UnitDelay7;

    /* Update for UnitDelay: '<S425>/Unit Delay1' */
    DW_l.UnitDelay1_DSTATE = PwrM_flgKeyOnDelay;

    /* Update for UnitDelay: '<S416>/Unit Delay1' */
    DW_l.UnitDelay1_DSTATE_n = PwrM_flgKeyOnDelay;

    /* Update for UnitDelay: '<S416>/Unit Delay3' */
    DW_l.UnitDelay3_DSTATE = UnitDelay1_p;

    /* Update for UnitDelay: '<S416>/Unit Delay4' incorporates:
     *  UnitDelay: '<S416>/Unit Delay5'
     */
    DW_l.UnitDelay4_DSTATE = DW_l.UnitDelay5_DSTATE;

    /* Update for UnitDelay: '<S416>/Unit Delay2' */
    DW_l.UnitDelay2_DSTATE = LogicalOperator_o;

    /* Update for UnitDelay: '<S416>/Unit Delay5' incorporates:
     *  UnitDelay: '<S416>/Unit Delay6'
     */
    DW_l.UnitDelay5_DSTATE = DW_l.UnitDelay6_DSTATE;

    /* Update for UnitDelay: '<S416>/Unit Delay6' */
    DW_l.UnitDelay6_DSTATE = UnitDelay7;
  }

  /* End of Outputs for S-Function (EcoCoder_Task): '<S4>/Task_PwrOff' */

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.005, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  M->Timing.clockTick1++;
}

/* Model step function for TID2 */
void Ecotron_step2(void)               /* Sample time: [0.01s, 0.0s] */
{
  real_T Sum;
  real_T IProdOut;
  real32_T Sum_l;
  real32_T IProdOut_e;
  boolean_T stopMode;
  real_T TSamp;
  boolean_T NotEqual_j;
  int8_T DataTypeConv2_f;
  int8_T DataTypeConv1_n;
  boolean_T stopMode_b;
  real32_T TSamp_i;
  boolean_T NotEqual_d;

  /* RateTransition generated from: '<S441>/Send CAN Message 2' */
  B_n.Set_Brake_PosOvrMsr_d = DW_l.Set_Brake_PosOvrMsr_Buffer;

  /* RateTransition generated from: '<S441>/Send CAN Message 2' */
  B_n.Brake_ResetOvrMsr_c = DW_l.Brake_ResetOvrMsr_Buffer;

  /* RateTransition generated from: '<S441>/Send CAN Message 2' */
  B_n.BrakeCalibCMD = DW_l.Brake_CalibCMDOvrMsr_Buffer;

  /* S-Function (ecodoer_sendMsg_float): '<S441>/Send CAN Message 2' incorporates:
   *  Constant: '<S441>/Read Calibration1'
   *  Constant: '<S441>/Read Calibration19'
   */
  flSig2DataCnn43U();

  /* RateTransition generated from: '<S448>/Switch' */
  DW_l.TmpRTBAtSwitchInport1_Buffer0 = Set_Brake_PosOvrCal_val;

  /* RateTransition generated from: '<S448>/Switch' */
  DW_l.TmpRTBAtSwitchInport2_Buffer0 = Set_Brake_PosOvrEn_val;

  /* RateTransition generated from: '<S443>/Send CAN Message 1' */
  B_n.Set_GasOvrMsr_a = DW_l.Set_GasOvrMsr_Buffer;

  /* RateTransition generated from: '<S443>/Send CAN Message 1' */
  B_n.Activate_ThrottleControllerOvrM = DW_l.Activate_ThrottleControllerOvrM;

  /* S-Function (ecodoer_sendMsg_float): '<S443>/Send CAN Message 1' */
  flSig2DataCnn44U();

  /* RateTransition generated from: '<S445>/Send CAN Message ' */
  B_n.GOLF_MotorRPM_m = DW_l.rxMO_RotationSpeed01_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message ' */
  B_n.GOLF_KL75_ox = DW_l.rxMO_Kl75_Buffer;

  /* S-Function (ecodoer_sendMsg_float): '<S445>/Send CAN Message ' incorporates:
   *  Constant: '<S445>/Constant'
   */
  flSig2DataCnn45U();

  /* RateTransition generated from: '<S445>/Send CAN Message 1' */
  B_n.EPAS_DriverIntervention_overrid = DW_l.EPAS_DriverIntervention_overrid;

  /* RateTransition generated from: '<S445>/Send CAN Message 1' */
  B_n.BBW_DriverIntervention_c = DW_l.RBF_DriverIntervention_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 1' */
  B_n.GasPedalintervention = DW_l.GasPedalintervention_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 1' */
  B_n.GOLF_AcceleratorRawValur_j = DW_l.rxMO_AcceleratorRawValue01_Buff;

  /* RateTransition generated from: '<S445>/Send CAN Message 1' */
  B_n.GOLF_BrakePedalPos_j = DW_l.Brake_pedalPos_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 1' */
  B_n.Steering_Angle_o = DW_l.Steering_Angle_Buffer;

  /* S-Function (ecodoer_sendMsg_float): '<S445>/Send CAN Message 1' incorporates:
   *  Constant: '<S445>/Constant1'
   *  Constant: '<S445>/Constant2'
   */
  flSig2DataCnn46U();

  /* RateTransition generated from: '<S445>/Send CAN Message 2' */
  B_n.GOLF_Fuel_d = DW_l.rxKBI_InhaltTank_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 2' */
  B_n.TmpRTBAtSendCANMessage2Inport2 = DW_l.TmpRTBAtSendCANMessage2Inport2_;

  /* RateTransition generated from: '<S445>/Send CAN Message 2' */
  B_n.GOLF_HighBeam_i = DW_l.rxBH_HighBeam_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 2' */
  B_n.GOLF_CurrentGear_c = DW_l.NoIdea1_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 2' */
  B_n.mode = DW_l.autonomy_Enable_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 2' */
  B_n.GOLF_HandBrakeStatus_g = DW_l.rxEPB_Status_Buffer;

  /* S-Function (ecodoer_sendMsg_float): '<S445>/Send CAN Message 2' incorporates:
   *  Constant: '<S445>/Constant5'
   *  Constant: '<S445>/Constant6'
   */
  flSig2DataCnn47U();

  /* RateTransition generated from: '<S445>/Send CAN Message 3' */
  B_n.TmpRTBAtSendCANMessage3Inport1 = DW_l.TmpRTBAtSendCANMessage3Inport1_;

  /* RateTransition generated from: '<S445>/Send CAN Message 3' */
  B_n.TmpRTBAtSendCANMessage3Inport2 = DW_l.TmpRTBAtSendCANMessage3Inport2_;

  /* S-Function (ecodoer_sendMsg_float): '<S445>/Send CAN Message 3' */
  flSig2DataCnn48U();

  /* RateTransition generated from: '<S445>/Send CAN Message 4' */
  B_n.isMotorRunning = DW_l.isMotorRunning_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 4' */
  B_n.Kl75 = DW_l.Kl75_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 4' */
  B_n.PDS_HeartbeatErr = DW_l.PDS_HeartbeatErr_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 4' */
  B_n.PDS_BUSErr = DW_l.PDS_BUSErr_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 4' */
  B_n.BywirePowerErr = DW_l.BywirePowerErr_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 4' */
  B_n.EPASPowerErr = DW_l.EPASPowerErr_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 4' */
  B_n.BrakePowerErr = DW_l.BrakePowerErr_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 4' */
  B_n.Throttle_ECU_HeartbeatErr = DW_l.Throttle_ECU_HeartbeatErr_Buffe;

  /* RateTransition generated from: '<S445>/Send CAN Message 4' */
  B_n.EPAS_SystemErr_g = DW_l.EPAS_SystemErr_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 4' */
  B_n.EPAS_HeartbeatErr_m = DW_l.EPAS_HeartbeatErr_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 4' */
  B_n.Brake_SystemErr_n = DW_l.Brake_SystemErr_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 4' */
  B_n.Brake_HeartBeatErr_d = DW_l.Brake_HeartBeatErr_Buffer;

  /* RateTransition generated from: '<S445>/Send CAN Message 4' */
  B_n.PC_HeartBeatErr = DW_l.PC_timeout_Buffer;

  /* S-Function (ecodoer_sendMsg_float): '<S445>/Send CAN Message 4' incorporates:
   *  Constant: '<S445>/Constant3'
   */
  flSig2DataCnn49U();

  /* RateTransition generated from: '<S447>/Send CAN Message 2' */
  B_n.debug_Gatesetsteer_j = DW_l.debug_Gatesetsteer_Buffer;

  /* RateTransition generated from: '<S447>/Send CAN Message 2' */
  B_n.debug_GateTorquelimit_e = DW_l.debug_GateTorquelimit_Buffer;

  /* RateTransition generated from: '<S447>/Send CAN Message 2' */
  B_n.mode_a = DW_l.autonomy_Enable_Buffer_d;

  /* S-Function (ecodoer_sendMsg_float): '<S447>/Send CAN Message 2' */
  flSig2DataCnn50U();

  /* RateTransition generated from: '<S338>/Integrator' */
  stopMode = DW_l.stopMode_Buffer_d;

  /* DiscreteIntegrator: '<S338>/Integrator' incorporates:
   *  RateTransition generated from: '<S338>/Integrator'
   */
  if ((DW_l.stopMode_Buffer_d && (DW_l.Integrator_PrevResetState_n <= 0)) ||
      ((!DW_l.stopMode_Buffer_d) && (DW_l.Integrator_PrevResetState_n == 1))) {
    DW_l.Integrator_DSTATE = 0.0;
  }

  /* SampleTimeMath: '<S333>/TSamp' incorporates:
   *  Constant: '<S254>/Read Calibration2'
   *  Product: '<S332>/DProd Out'
   *  RateTransition generated from: '<S254>/Subtract1'
   *
   * About '<S333>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  TSamp = DW_l.TmpRTBAtSubtract1Outport1_Buffe * Torque_PID_D * 100.0;

  /* Delay: '<S333>/UD' incorporates:
   *  RateTransition generated from: '<S333>/UD'
   */
  if (((PrevZCX_p.UD_Reset_ZCE == POS_ZCSIG) != (int32_T)DW_l.stopMode_Buffer) &&
      (PrevZCX_p.UD_Reset_ZCE != UNINITIALIZED_ZCSIG)) {
    DW_l.UD_DSTATE = 0.0;
  }

  PrevZCX_p.UD_Reset_ZCE = DW_l.stopMode_Buffer;

  /* Sum: '<S347>/Sum' incorporates:
   *  Constant: '<S254>/Read Calibration'
   *  Delay: '<S333>/UD'
   *  DiscreteIntegrator: '<S338>/Integrator'
   *  Product: '<S343>/PProd Out'
   *  RateTransition generated from: '<S254>/Subtract1'
   *  Sum: '<S333>/Diff'
   */
  Sum = (DW_l.TmpRTBAtSubtract1Outport1_Buffe * Torque_PID_P +
         DW_l.Integrator_DSTATE) + (TSamp - DW_l.UD_DSTATE);

  /* DeadZone: '<S331>/DeadZone' */
  if (Sum > 50.0) {
    IProdOut = Sum - 50.0;
  } else if (Sum >= 0.0) {
    IProdOut = 0.0;
  } else {
    IProdOut = Sum;
  }

  /* End of DeadZone: '<S331>/DeadZone' */

  /* RelationalOperator: '<S331>/NotEqual' incorporates:
   *  Gain: '<S331>/ZeroGain'
   */
  NotEqual_j = (0.0 != IProdOut);

  /* Signum: '<S331>/SignPreSat' */
  if (IProdOut < 0.0) {
    IProdOut = -1.0;
  } else {
    if (IProdOut > 0.0) {
      IProdOut = 1.0;
    }
  }

  /* End of Signum: '<S331>/SignPreSat' */

  /* DataTypeConversion: '<S331>/DataTypeConv1' */
  DataTypeConv2_f = (int8_T)IProdOut;

  /* Product: '<S335>/IProd Out' incorporates:
   *  Constant: '<S254>/Read Calibration1'
   *  RateTransition generated from: '<S254>/Subtract1'
   */
  IProdOut = DW_l.TmpRTBAtSubtract1Outport1_Buffe * Torque_PID_I;

  /* Saturate: '<S345>/Saturation' */
  if (Sum > 50.0) {
    Sum = 50.0;
  } else {
    if (Sum < 0.0) {
      Sum = 0.0;
    }
  }

  /* End of Saturate: '<S345>/Saturation' */

  /* RateTransition generated from: '<S383>/Integrator' */
  stopMode_b = DW_l.stopMode_Buffer_o;

  /* DiscreteIntegrator: '<S383>/Integrator' incorporates:
   *  RateTransition generated from: '<S383>/Integrator'
   */
  if ((DW_l.stopMode_Buffer_o && (DW_l.Integrator_PrevResetState_f <= 0)) ||
      ((!DW_l.stopMode_Buffer_o) && (DW_l.Integrator_PrevResetState_f == 1))) {
    DW_l.Integrator_DSTATE_n = 10.0F;
  }

  /* SampleTimeMath: '<S378>/TSamp' incorporates:
   *  Constant: '<S255>/Read Calibration2'
   *  Product: '<S377>/DProd Out'
   *  RateTransition generated from: '<S255>/Subtract1'
   *
   * About '<S378>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  TSamp_i = DW_l.TmpRTBAtSubtract1Outport1_Buf_j * Brake_PID_D * 100.0F;

  /* Delay: '<S378>/UD' incorporates:
   *  RateTransition generated from: '<S378>/UD'
   */
  if (((PrevZCX_p.UD_Reset_ZCE_b == POS_ZCSIG) != (int32_T)
       DW_l.stopMode_Buffer_b) && (PrevZCX_p.UD_Reset_ZCE_b !=
       UNINITIALIZED_ZCSIG)) {
    DW_l.UD_DSTATE_p = 0.0F;
  }

  PrevZCX_p.UD_Reset_ZCE_b = DW_l.stopMode_Buffer_b;

  /* Sum: '<S392>/Sum' incorporates:
   *  Constant: '<S255>/Read Calibration'
   *  Delay: '<S378>/UD'
   *  DiscreteIntegrator: '<S383>/Integrator'
   *  Product: '<S388>/PProd Out'
   *  RateTransition generated from: '<S255>/Subtract1'
   *  Sum: '<S378>/Diff'
   */
  Sum_l = (DW_l.TmpRTBAtSubtract1Outport1_Buf_j * Brake_PID_P +
           DW_l.Integrator_DSTATE_n) + (TSamp_i - DW_l.UD_DSTATE_p);

  /* DeadZone: '<S376>/DeadZone' */
  if (Sum_l > 120.0F) {
    IProdOut_e = Sum_l - 120.0F;
  } else if (Sum_l >= 0.0F) {
    IProdOut_e = 0.0F;
  } else {
    IProdOut_e = Sum_l;
  }

  /* End of DeadZone: '<S376>/DeadZone' */

  /* RelationalOperator: '<S376>/NotEqual' incorporates:
   *  Gain: '<S376>/ZeroGain'
   */
  NotEqual_d = (0.0F != IProdOut_e);

  /* Signum: '<S376>/SignPreSat' */
  if (IProdOut_e < 0.0F) {
    IProdOut_e = -1.0F;
  } else {
    if (IProdOut_e > 0.0F) {
      IProdOut_e = 1.0F;
    }
  }

  /* End of Signum: '<S376>/SignPreSat' */

  /* DataTypeConversion: '<S376>/DataTypeConv1' */
  DataTypeConv1_n = (int8_T)IProdOut_e;

  /* Product: '<S380>/IProd Out' incorporates:
   *  Constant: '<S255>/Read Calibration1'
   *  RateTransition generated from: '<S255>/Subtract1'
   */
  IProdOut_e = DW_l.TmpRTBAtSubtract1Outport1_Buf_j * Brake_PID_I;

  /* Saturate: '<S390>/Saturation' */
  if (Sum_l > 120.0F) {
    Sum_l = 120.0F;
  } else {
    if (Sum_l < 0.0F) {
      Sum_l = 0.0F;
    }
  }

  /* End of Saturate: '<S390>/Saturation' */

  /* RateTransition generated from: '<S246>/Switch1' */
  DW_l.TmpRTBAtSwitch1Inport3_Buffer0 = Sum;

  /* RateTransition generated from: '<S246>/Switch2' */
  DW_l.TmpRTBAtSwitch2Inport1_Buffer0 = Sum_l;

  /* Signum: '<S331>/SignPreIntegrator' */
  if (IProdOut < 0.0) {
    Sum = -1.0;
  } else if (IProdOut > 0.0) {
    Sum = 1.0;
  } else {
    Sum = IProdOut;
  }

  /* End of Signum: '<S331>/SignPreIntegrator' */

  /* Switch: '<S331>/Switch' incorporates:
   *  Constant: '<S331>/Constant1'
   *  DataTypeConversion: '<S331>/DataTypeConv2'
   *  Logic: '<S331>/AND3'
   *  RelationalOperator: '<S331>/Equal1'
   */
  if (NotEqual_j && (DataTypeConv2_f == (int8_T)Sum)) {
    IProdOut = 0.0;
  }

  /* End of Switch: '<S331>/Switch' */

  /* Update for DiscreteIntegrator: '<S338>/Integrator' */
  DW_l.Integrator_DSTATE += 0.01 * IProdOut;
  DW_l.Integrator_PrevResetState_n = (int8_T)stopMode;

  /* Update for Delay: '<S333>/UD' */
  DW_l.UD_DSTATE = TSamp;

  /* Signum: '<S376>/SignPreIntegrator' */
  if (IProdOut_e < 0.0F) {
    Sum_l = -1.0F;
  } else if (IProdOut_e > 0.0F) {
    Sum_l = 1.0F;
  } else {
    Sum_l = IProdOut_e;
  }

  /* End of Signum: '<S376>/SignPreIntegrator' */

  /* Switch: '<S376>/Switch' incorporates:
   *  Constant: '<S376>/Constant1'
   *  DataTypeConversion: '<S376>/DataTypeConv2'
   *  Logic: '<S376>/AND3'
   *  RelationalOperator: '<S376>/Equal1'
   */
  if (NotEqual_d && (DataTypeConv1_n == (int8_T)Sum_l)) {
    IProdOut_e = 0.0F;
  }

  /* End of Switch: '<S376>/Switch' */

  /* Update for DiscreteIntegrator: '<S383>/Integrator' */
  DW_l.Integrator_DSTATE_n += 0.01F * IProdOut_e;
  DW_l.Integrator_PrevResetState_f = (int8_T)stopMode_b;

  /* Update for Delay: '<S378>/UD' */
  DW_l.UD_DSTATE_p = TSamp_i;
}

/* Model step function for TID3 */
void Ecotron_step3(void)               /* Sample time: [0.02s, 0.0s] */
{
  /* (no output/update code required) */
}

/* Model step function for TID4 */
void Ecotron_step4(void)               /* Sample time: [0.05s, 0.0s] */
{
  /* (no output/update code required) */
}

/* Model step function for TID5 */
void Ecotron_step5(void)               /* Sample time: [0.1s, 0.0s] */
{
  int_T idxDelay;
  real32_T rxGE_TargetWalk;
  real32_T Delay_p;
  real32_T uDLookupTable_d;

  /* UnitDelay: '<S462>/Unit Delay' */
  B_n.UnitDelay_n = DW_l.UnitDelay_DSTATE_g;

  /* S-Function (DIO_Out): '<S462>/Start_Stop2' */
  F_Abstr_HSO_SwitchSet(HSO02,B_n.UnitDelay_n);

  /* Delay: '<S107>/Delay' */
  GOLF_GearLevel = DW_l.Delay_DSTATE[DW_l.CircBufIdx];

  /* RateTransition generated from: '<S107>/Delay' */
  rxGE_TargetWalk = DW_l.rxGE_TargetWalk_Buffer;

  /* Delay: '<S204>/Delay' */
  Delay_p = DW_l.Delay_DSTATE_m[0];

  /* RateTransition generated from: '<S204>/OR' */
  DW_l.TmpRTBAtORInport3_Buffer0 = Delay_p;

  /* RateTransition generated from: '<S204>/Delay' */
  Delay_p = DW_l.rxMO_Kl75_Buffer_n;

  /* Lookup_n-D: '<S246>/1-D Lookup Table' */
  uDLookupTable_d = look1_iflf_binlx(GOLF_GearLevel,
    rtCP_uDLookupTable_bp01Data_ly, rtCP_uDLookupTable_tableData_l, 5U);

  /* RateTransition generated from: '<S246>/Product1' */
  DW_l.TmpRTBAtProduct1Inport2_Buffer0 = uDLookupTable_d;

  /* Lookup_n-D: '<S261>/1-D Lookup Table' */
  uDLookupTable_d = look1_iflf_binlx(GOLF_GearLevel,
    rtCP_uDLookupTable_bp01Data_d0, rtCP_uDLookupTable_tableData_m, 5U);

  /* RateTransition generated from: '<S261>/Product' */
  DW_l.TmpRTBAtProductInport2_Buffer0 = uDLookupTable_d;

  /* Update for UnitDelay: '<S462>/Unit Delay' incorporates:
   *  Constant: '<S442>/Constant'
   */
  DW_l.UnitDelay_DSTATE_g = false;

  /* Update for Delay: '<S107>/Delay' */
  DW_l.Delay_DSTATE[DW_l.CircBufIdx] = rxGE_TargetWalk;
  if (DW_l.CircBufIdx < 6U) {
    DW_l.CircBufIdx++;
  } else {
    DW_l.CircBufIdx = 0U;
  }

  /* End of Update for Delay: '<S107>/Delay' */

  /* Update for Delay: '<S204>/Delay' */
  for (idxDelay = 0; idxDelay < 9; idxDelay++) {
    DW_l.Delay_DSTATE_m[idxDelay] = DW_l.Delay_DSTATE_m[idxDelay + 1];
  }

  DW_l.Delay_DSTATE_m[9] = Delay_p;

  /* End of Update for Delay: '<S204>/Delay' */
}

/* Model step function for TID6 */
void Ecotron_step6(void)               /* Sample time: [0.2s, 0.0s] */
{
  /* (no output/update code required) */
}

/* Model step function for TID7 */
void Ecotron_step7(void)               /* Sample time: [0.5s, 0.0s] */
{
  int_T idxDelay;
  uint32_T Cnt1;
  uint32_T Delay1;
  uint32_T Delay1_ng;
  uint32_T Delay1_ke;
  uint32_T Delay1_j;
  uint32_T Delay1_d;
  uint32_T Delay1_em;
  uint32_T Delay1_f;
  uint32_T Delay1_a;
  uint32_T Delay1_h;
  uint32_T PC_FrontwheelMsg_cnt1;
  uint32_T Delay1_h3;
  uint32_T Delay1_dg;
  uint32_T Delay1_j2;
  uint32_T Delay1_k;

  /* RateTransition generated from: '<S23>/Delay1' */
  Cnt1 = DW_l.Cnt1_Buffer;

  /* Delay: '<S23>/Delay1' */
  Delay1 = DW_l.Delay1_DSTATE[0];

  /* RateTransition generated from: '<S23>/Relational Operator' */
  DW_l.TmpRTBAtRelationalOperatorInpor = Delay1;

  /* RateTransition generated from: '<S48>/Delay1' */
  Delay1 = DW_l.Cnt1_Buffer_p;

  /* Delay: '<S48>/Delay1' */
  Delay1_ng = DW_l.Delay1_DSTATE_p[0];

  /* RateTransition generated from: '<S48>/Relational Operator' */
  DW_l.TmpRTBAtRelationalOperatorInp_j = Delay1_ng;

  /* RateTransition generated from: '<S56>/Delay1' */
  Delay1_ng = DW_l.Cnt1_Buffer_py;

  /* Delay: '<S56>/Delay1' */
  Delay1_ke = DW_l.Delay1_DSTATE_h[0];

  /* RateTransition generated from: '<S56>/Relational Operator' */
  DW_l.TmpRTBAtRelationalOperatorIn_js = Delay1_ke;

  /* RateTransition generated from: '<S59>/Delay1' */
  Delay1_ke = DW_l.Cnt1_Buffer_py0;

  /* Delay: '<S59>/Delay1' */
  Delay1_j = DW_l.Delay1_DSTATE_f[0];

  /* RateTransition generated from: '<S59>/Relational Operator' */
  DW_l.TmpRTBAtRelationalOperatorI_jsf = Delay1_j;

  /* RateTransition generated from: '<S66>/Delay1' */
  Delay1_j = DW_l.Cnt1_Buffer_py0c;

  /* Delay: '<S66>/Delay1' */
  Delay1_d = DW_l.Delay1_DSTATE_pa[0];

  /* RateTransition generated from: '<S66>/Relational Operator' */
  DW_l.TmpRTBAtRelationalOperator_jsfr = Delay1_d;

  /* RateTransition generated from: '<S78>/Delay1' */
  Delay1_d = DW_l.Cnt1_Buffer_py0cy;

  /* Delay: '<S78>/Delay1' */
  Delay1_em = DW_l.Delay1_DSTATE_e[0];

  /* RateTransition generated from: '<S78>/Relational Operator' */
  DW_l.TmpRTBAtRelationalOperato_jsfrz = Delay1_em;

  /* RateTransition generated from: '<S81>/Delay1' */
  Delay1_em = DW_l.Cnt1_Buffer_py0cyt;

  /* Delay: '<S81>/Delay1' */
  Delay1_f = DW_l.Delay1_DSTATE_j[0];

  /* RateTransition generated from: '<S81>/Relational Operator' */
  DW_l.TmpRTBAtRelationalOperat_jsfrzw = Delay1_f;

  /* RateTransition generated from: '<S89>/Delay1' */
  Delay1_f = DW_l.Cnt1_Buffer_py0cytz;

  /* Delay: '<S89>/Delay1' */
  Delay1_a = DW_l.Delay1_DSTATE_n[0];

  /* RateTransition generated from: '<S89>/Relational Operator' */
  DW_l.TmpRTBAtRelationalOpera_jsfrzwg = Delay1_a;

  /* RateTransition generated from: '<S96>/Delay1' */
  Delay1_a = DW_l.Cnt1_Buffer_py0cytzh;

  /* Delay: '<S96>/Delay1' */
  Delay1_h = DW_l.Delay1_DSTATE_m[0];

  /* RateTransition generated from: '<S96>/Relational Operator' */
  DW_l.TmpRTBAtRelational_jsfrzwgrs54s = Delay1_h;

  /* Delay: '<S173>/Delay1' */
  Delay1_h3 = DW_l.Delay1_DSTATE_nc[0];

  /* Product: '<S173>/Divide' incorporates:
   *  Constant: '<S173>/Constant'
   *  DataTypeConversion: '<S173>/Data Type Conversion'
   *  Delay: '<S173>/Delay2'
   *  RateTransition generated from: '<S173>/Delay3'
   *  Sum: '<S173>/Subtract'
   */
  PC_FrontwheelMsg_Freq = (real32_T)(DW_l.PC_FrontwheelMsg_cnt2_Buffer -
    DW_l.Delay2_DSTATE[0]) / 3.0F;

  /* RateTransition generated from: '<S173>/Delay1' */
  Delay1_h = DW_l.PC_FrontwheelMsg_cnt_Buffer;

  /* RateTransition generated from: '<S173>/Delay2' */
  PC_FrontwheelMsg_cnt1 = DW_l.PC_FrontwheelMsg_cnt1_Buffer;

  /* RateTransition generated from: '<S173>/Relational Operator' */
  DW_l.TmpRTBAtRelationalOpe_jsfrzwgrs = Delay1_h3;

  /* RateTransition generated from: '<S179>/Delay1' */
  Delay1_h3 = DW_l.Cnt1_Buffer_py0cytzhx;

  /* Delay: '<S179>/Delay1' */
  Delay1_dg = DW_l.Delay1_DSTATE_l[0];

  /* RateTransition generated from: '<S179>/Relational Operator' */
  DW_l.TmpRTBAtRelationalOp_jsfrzwgrs5 = Delay1_dg;

  /* RateTransition generated from: '<S182>/Delay1' */
  Delay1_dg = DW_l.Cnt1_Buffer_py0cytzhx4;

  /* Delay: '<S182>/Delay1' */
  Delay1_j2 = DW_l.Delay1_DSTATE_pg[0];

  /* RateTransition generated from: '<S182>/Relational Operator' */
  DW_l.TmpRTBAtRelationalO_jsfrzwgrs54 = Delay1_j2;

  /* RateTransition generated from: '<S185>/Delay1' */
  Delay1_j2 = DW_l.Cnt1_Buffer_py0cytzhx4s;

  /* Delay: '<S185>/Delay1' */
  Delay1_k = DW_l.Delay1_DSTATE_p4[0];

  /* RateTransition generated from: '<S185>/Relational Operator' */
  DW_l.TmpRTBAtRelationalOper_jsfrzwgr = Delay1_k;

  /* Update for Delay: '<S23>/Delay1' */
  DW_l.Delay1_DSTATE[0] = DW_l.Delay1_DSTATE[1];
  DW_l.Delay1_DSTATE[1] = Cnt1;

  /* Update for Delay: '<S48>/Delay1' */
  DW_l.Delay1_DSTATE_p[0] = DW_l.Delay1_DSTATE_p[1];
  DW_l.Delay1_DSTATE_p[1] = Delay1;

  /* Update for Delay: '<S56>/Delay1' */
  DW_l.Delay1_DSTATE_h[0] = DW_l.Delay1_DSTATE_h[1];
  DW_l.Delay1_DSTATE_h[1] = Delay1_ng;

  /* Update for Delay: '<S59>/Delay1' */
  DW_l.Delay1_DSTATE_f[0] = DW_l.Delay1_DSTATE_f[1];
  DW_l.Delay1_DSTATE_f[1] = Delay1_ke;

  /* Update for Delay: '<S66>/Delay1' */
  DW_l.Delay1_DSTATE_pa[0] = DW_l.Delay1_DSTATE_pa[1];
  DW_l.Delay1_DSTATE_pa[1] = Delay1_j;

  /* Update for Delay: '<S78>/Delay1' */
  DW_l.Delay1_DSTATE_e[0] = DW_l.Delay1_DSTATE_e[1];
  DW_l.Delay1_DSTATE_e[1] = Delay1_d;

  /* Update for Delay: '<S81>/Delay1' */
  DW_l.Delay1_DSTATE_j[0] = DW_l.Delay1_DSTATE_j[1];
  DW_l.Delay1_DSTATE_j[1] = Delay1_em;

  /* Update for Delay: '<S89>/Delay1' */
  DW_l.Delay1_DSTATE_n[0] = DW_l.Delay1_DSTATE_n[1];
  DW_l.Delay1_DSTATE_n[1] = Delay1_f;

  /* Update for Delay: '<S96>/Delay1' */
  DW_l.Delay1_DSTATE_m[0] = DW_l.Delay1_DSTATE_m[1];
  DW_l.Delay1_DSTATE_m[1] = Delay1_a;

  /* Update for Delay: '<S173>/Delay2' */
  for (idxDelay = 0; idxDelay < 5; idxDelay++) {
    DW_l.Delay2_DSTATE[idxDelay] = DW_l.Delay2_DSTATE[idxDelay + 1];
  }

  DW_l.Delay2_DSTATE[5] = PC_FrontwheelMsg_cnt1;

  /* End of Update for Delay: '<S173>/Delay2' */

  /* Update for Delay: '<S173>/Delay1' */
  DW_l.Delay1_DSTATE_nc[0] = DW_l.Delay1_DSTATE_nc[1];
  DW_l.Delay1_DSTATE_nc[1] = Delay1_h;

  /* Update for Delay: '<S179>/Delay1' */
  DW_l.Delay1_DSTATE_l[0] = DW_l.Delay1_DSTATE_l[1];
  DW_l.Delay1_DSTATE_l[1] = Delay1_h3;

  /* Update for Delay: '<S182>/Delay1' */
  DW_l.Delay1_DSTATE_pg[0] = DW_l.Delay1_DSTATE_pg[1];
  DW_l.Delay1_DSTATE_pg[1] = Delay1_dg;

  /* Update for Delay: '<S185>/Delay1' */
  DW_l.Delay1_DSTATE_p4[0] = DW_l.Delay1_DSTATE_p4[1];
  DW_l.Delay1_DSTATE_p4[1] = Delay1_j2;
}

/* Model step function for TID8 */
void Ecotron_step8(void)               /* Sample time: [1.0s, 0.0s] */
{
  /* (no output/update code required) */
}

/* Model step wrapper function for compatibility with a static main program */
void Ecotron_step(int_T tid)
{
  switch (tid) {
   case 0 :
    Ecotron_step0();
    break;

   case 1 :
    Ecotron_step1();
    break;

   case 2 :
    Ecotron_step2();
    break;

   case 3 :
    Ecotron_step3();
    break;

   case 4 :
    Ecotron_step4();
    break;

   case 5 :
    Ecotron_step5();
    break;

   case 6 :
    Ecotron_step6();
    break;

   case 7 :
    Ecotron_step7();
    break;

   case 8 :
    Ecotron_step8();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void Ecotron_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)M, 0,
                sizeof(RT_MODEL));
  (M)->Timing.TaskCounters.cLimit[0] = 1;
  (M)->Timing.TaskCounters.cLimit[1] = 5;
  (M)->Timing.TaskCounters.cLimit[2] = 10;
  (M)->Timing.TaskCounters.cLimit[3] = 20;
  (M)->Timing.TaskCounters.cLimit[4] = 50;
  (M)->Timing.TaskCounters.cLimit[5] = 100;
  (M)->Timing.TaskCounters.cLimit[6] = 200;
  (M)->Timing.TaskCounters.cLimit[7] = 500;
  (M)->Timing.TaskCounters.cLimit[8] = 1000;

  /* block I/O */
  (void) memset(((void *) &B_n), 0,
                sizeof(B));

  /* states (dwork) */
  (void) memset((void *)&DW_l, 0,
                sizeof(DW));

  /* Start for S-Function (EcoCoder_Task): '<S4>/Task_Call' */

  /* -- Fcn-Call_0 -- */

  /* End of Start for S-Function (EcoCoder_Task): '<S4>/Task_Call' */

  /* Start for MATLABSystem: '<S249>/Moving Average1' */
  DW_l.obj.matlabCodegenIsDeleted = true;
  DW_l.obj.isInitialized = 0;
  DW_l.obj.NumChannels = -1;
  DW_l.obj.matlabCodegenIsDeleted = false;
  DW_l.objisempty = true;
  DW_l.obj.isSetupComplete = false;
  DW_l.obj.isInitialized = 1;
  DW_l.obj.NumChannels = 1;
  DW_l.gobj_0.isInitialized = 0;
  DW_l.obj.pStatistic = &DW_l.gobj_0;
  DW_l.obj.isSetupComplete = true;
  DW_l.obj.TunablePropsChanged = false;

  /* Start for MATLABSystem: '<S249>/Moving Average2' */
  DW_l.obj_k.matlabCodegenIsDeleted = true;
  DW_l.obj_k.isInitialized = 0;
  DW_l.obj_k.NumChannels = -1;
  DW_l.obj_k.matlabCodegenIsDeleted = false;
  DW_l.objisempty_i = true;
  DW_l.obj_k.isSetupComplete = false;
  DW_l.obj_k.isInitialized = 1;
  DW_l.obj_k.NumChannels = 1;
  DW_l.gobj_0_a.isInitialized = 0;
  DW_l.obj_k.pStatistic = &DW_l.gobj_0_a;
  DW_l.obj_k.isSetupComplete = true;
  DW_l.obj_k.TunablePropsChanged = false;

  /* Start for Enabled SubSystem: '<Root>/Recover CAN Bus Off1' */
  /* Start for S-Function (coder_sfun_can_recover_bus_offV2): '<S6>/CAN Recover Bus Off' */
#ifdef RECOVER_BUSOFF_BSW_EN_AUTO

  F_Abstr_CAN_DisBSWRecBusOff(CAN_CTRL_B);

#endif

  /* End of Start for SubSystem: '<Root>/Recover CAN Bus Off1' */

  /* Start for Enabled SubSystem: '<Root>/Recover CAN Bus Off2' */
  /* Start for S-Function (coder_sfun_can_recover_bus_offV2): '<S7>/CAN Recover Bus Off' */
#ifdef RECOVER_BUSOFF_BSW_EN_AUTO

  F_Abstr_CAN_DisBSWRecBusOff(CAN_CTRL_C);

#endif

  /* End of Start for SubSystem: '<Root>/Recover CAN Bus Off2' */

  /* Start for Enabled SubSystem: '<Root>/Recover CAN Bus Off' */
  /* Start for S-Function (coder_sfun_can_recover_bus_offV2): '<S5>/CAN Recover Bus Off' */
#ifdef RECOVER_BUSOFF_BSW_EN_AUTO

  F_Abstr_CAN_DisBSWRecBusOff(CAN_CTRL_A);

#endif

  /* End of Start for SubSystem: '<Root>/Recover CAN Bus Off' */

  /* Start for S-Function (EcoCoder_Task): '<S1>/Task Trigger' */

  /* -- Fcn-Call_0 -- */

  /* End of Start for S-Function (EcoCoder_Task): '<S1>/Task Trigger' */
  /* Start for S-Function (EcoCoder_LCF_Def): '<S1>/ecoder_sfun_lcf_def' */
  tEcotron= c1Ecotron+c2Ecotron;
  PrevZCX_p.UD_Reset_ZCE = UNINITIALIZED_ZCSIG;
  PrevZCX_p.UD_Reset_ZCE_b = UNINITIALIZED_ZCSIG;
  PrevZCX_p.Subsystem_Trig_ZCE_l = POS_ZCSIG;
  PrevZCX_p.Subsystem2_Trig_ZCE = POS_ZCSIG;
  PrevZCX_p.Subsystem7_Trig_ZCE = POS_ZCSIG;
  PrevZCX_p.ShutdownPower_Trig_ZCE = ZERO_ZCSIG;
  PrevZCX_p.SoftwareReset_Trig_ZCE = ZERO_ZCSIG;
  PrevZCX_p.StoreAllNVMData_Trig_ZCE = ZERO_ZCSIG;
  PrevZCX_p.Reverse_Trig_ZCE = UNINITIALIZED_ZCSIG;
  PrevZCX_p.Reverse1_Trig_ZCE = UNINITIALIZED_ZCSIG;
  PrevZCX_p.Reverse2_Trig_ZCE = UNINITIALIZED_ZCSIG;
  PrevZCX_p.Reverse3_Trig_ZCE = UNINITIALIZED_ZCSIG;
  PrevZCX_p.Subsystem_Trig_ZCE = UNINITIALIZED_ZCSIG;

  /* InitializeConditions for DiscreteIntegrator: '<S293>/Integrator' */
  DW_l.Integrator_PrevResetState = 2;

  /* InitializeConditions for DiscreteIntegrator: '<S338>/Integrator' */
  DW_l.Integrator_PrevResetState_n = 2;

  /* InitializeConditions for Delay: '<S333>/UD' */
  DW_l.UD_DSTATE = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S383>/Integrator' */
  DW_l.Integrator_DSTATE_n = 10.0F;
  DW_l.Integrator_PrevResetState_f = 2;

  /* InitializeConditions for Delay: '<S378>/UD' */
  DW_l.UD_DSTATE_p = 0.0F;

  /* InitializeConditions for Delay: '<S107>/Delay' */
  DW_l.CircBufIdx = 0U;

  /* SystemInitialize for S-Function (EcoCoder_Task): '<S4>/Task_PwrOff' incorporates:
   *  SubSystem: '<S4>/Power Off Management'
   */
  /* System initialize for function-call system: '<S4>/Power Off Management' */
  DW_l.PowerOffManagement_PREV_T = M->Timing.clockTick1;

  /* InitializeConditions for UnitDelay: '<S416>/Unit Delay7' */
  DW_l.UnitDelay7_DSTATE = true;

  /* InitializeConditions for UnitDelay: '<S416>/Unit Delay4' */
  DW_l.UnitDelay4_DSTATE = true;

  /* InitializeConditions for UnitDelay: '<S416>/Unit Delay5' */
  DW_l.UnitDelay5_DSTATE = true;

  /* InitializeConditions for UnitDelay: '<S416>/Unit Delay6' */
  DW_l.UnitDelay6_DSTATE = true;

  /* SystemInitialize for Enabled SubSystem: '<S416>/KeyCycle' */
  /* SystemInitialize for Atomic SubSystem: '<S419>/ER_xxxx' */
  /* InitializeConditions for UnitDelay: '<S428>/Unit Delay' */
  DW_l.UnitDelay_DSTATE_b = true;

  /* End of SystemInitialize for SubSystem: '<S419>/ER_xxxx' */

  /* SystemInitialize for Atomic SubSystem: '<S419>/ER_xxxx1' */
  /* InitializeConditions for UnitDelay: '<S429>/Unit Delay' */
  DW_l.UnitDelay_DSTATE_ij = true;

  /* End of SystemInitialize for SubSystem: '<S419>/ER_xxxx1' */
  /* End of SystemInitialize for SubSystem: '<S416>/KeyCycle' */

  /* End of SystemInitialize for S-Function (EcoCoder_Task): '<S4>/Task_PwrOff' */

  /* SystemInitialize for Chart: '<S442>/Chart' */
  DW_l.is_HazardOFF = IN_NO_ACTIVE_CHILD;
  DW_l.is_HazardON = IN_NO_ACTIVE_CHILD;
  DW_l.temporalCounter_i1_j = 0U;
  DW_l.is_active_c9_Ecotron = 0U;
  DW_l.is_c9_Ecotron = IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S464>/Chart' */
  DW_l.is_FallingBuzz = IN_NO_ACTIVE_CHILD;
  DW_l.temporalCounter_i1 = 0U;
  DW_l.is_active_c14_Ecotron = 0U;
  DW_l.is_c14_Ecotron = IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Atomic SubSystem: '<S464>/Rising Edge' */
  /* InitializeConditions for UnitDelay: '<S469>/Unit Delay' */
  DW_l.UnitDelay_DSTATE_a = true;

  /* End of SystemInitialize for SubSystem: '<S464>/Rising Edge' */

  /* SystemInitialize for Chart: '<S445>/Chart' */
  DW_l.is_active_c4_Ecotron = 0U;
  DW_l.is_c4_Ecotron = IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S229>/Chart' */
  DW_l.temporalCounter_i1_j3 = 0U;
  DW_l.is_active_c7_Ecotron = 0U;
  DW_l.is_c7_Ecotron = IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S229>/Chart1' */
  DW_l.temporalCounter_i1_n = 0U;
  DW_l.is_active_c1_Ecotron = 0U;
  DW_l.is_c1_Ecotron = IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S195>/Chart' */
  DW_l.is_Otonom_f = IN_NO_ACTIVE_CHILD;
  DW_l.temporalCounter_i1_jd = 0U;
  DW_l.is_active_c2_Ecotron = 0U;
  DW_l.is_c2_Ecotron = IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S196>/Chart' */
  DW_l.is_Otonom = IN_NO_ACTIVE_CHILD;
  DW_l.temporalCounter_i1_k = 0U;
  DW_l.is_active_c12_Ecotron = 0U;
  DW_l.is_c12_Ecotron = IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S247>/Chart1' */
  DW_l.is_active_c8_Ecotron = 0U;
  DW_l.is_c8_Ecotron = IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S245>/Chart' */
  DW_l.is_active_c5_Ecotron = 0U;
  DW_l.is_c5_Ecotron = IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S198>/Chart' */
  DW_l.is_active_c6_Ecotron = 0U;
  DW_l.is_c6_Ecotron = IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S199>/Chart' */
  DW_l.is_Shutdown = IN_NO_ACTIVE_CHILD;
  DW_l.is_Startup = IN_NO_ACTIVE_CHILD;
  DW_l.temporalCounter_i1_i = 0U;
  DW_l.is_active_c11_Ecotron = 0U;
  DW_l.is_c11_Ecotron = IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Atomic SubSystem: '<S199>/Rising Edge' */
  /* InitializeConditions for UnitDelay: '<S415>/Unit Delay' */
  DW_l.UnitDelay_DSTATE_ix = true;

  /* End of SystemInitialize for SubSystem: '<S199>/Rising Edge' */

  /* InitializeConditions for MATLABSystem: '<S249>/Moving Average1' */
  if (DW_l.obj.pStatistic->isInitialized == 1) {
    DW_l.obj.pStatistic->pCumSum = 0.0F;
    memset(&DW_l.obj.pStatistic->pCumSumRev[0], 0, 199U * sizeof(real32_T));
    DW_l.obj.pStatistic->pCumRevIndex = 1.0F;
  }

  /* End of InitializeConditions for MATLABSystem: '<S249>/Moving Average1' */

  /* InitializeConditions for MATLABSystem: '<S249>/Moving Average2' */
  if (DW_l.obj_k.pStatistic->isInitialized == 1) {
    DW_l.obj_k.pStatistic->pCumSum = 0.0F;
    memset(&DW_l.obj_k.pStatistic->pCumSumRev[0], 0, 199U * sizeof(real32_T));
    DW_l.obj_k.pStatistic->pCumRevIndex = 1.0F;
  }

  /* End of InitializeConditions for MATLABSystem: '<S249>/Moving Average2' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
