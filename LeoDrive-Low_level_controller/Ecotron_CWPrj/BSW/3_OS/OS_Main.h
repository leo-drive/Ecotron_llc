/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		OS_Main.h
Author:			
Version:		V1.0.1
Date:			2016-12-16
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef OS_Main_H
#define OS_Main_H


#include "Cpu\Std\Ifx_Types.h"
#include "STM.h"


#define OS_CRITICAL_CTRL
#ifdef OS_CRITICAL_CTRL
#include "Gpt12\Std\IfxGpt12.h"
#include "Cpu\Irq\IfxCpu_Irq.h"
#define FM_OS_INTC_EN()\
{\
	IfxSrc_enable((Ifx_SRC_SRCR *)&(MODULE_SRC.GPT12.GPT12[0].T2));\
	IfxSrc_enable((Ifx_SRC_SRCR *)&(MODULE_SRC.GPT12.GPT12[0].T3));\
	IfxSrc_enable((Ifx_SRC_SRCR *)&(MODULE_SRC.GPT12.GPT12[0].T4));\
	IfxSrc_enable((Ifx_SRC_SRCR *)&(MODULE_SRC.GPT12.GPT12[0].T5));\
	IfxSrc_enable((Ifx_SRC_SRCR *)&(MODULE_SRC.GPT12.GPT12[0].T6));\
}
#define FM_OS_INTC_DIS()\
{\
	IfxSrc_disable((Ifx_SRC_SRCR *)&(MODULE_SRC.GPT12.GPT12[0].T2));\
	IfxSrc_disable((Ifx_SRC_SRCR *)&(MODULE_SRC.GPT12.GPT12[0].T3));\
	IfxSrc_disable((Ifx_SRC_SRCR *)&(MODULE_SRC.GPT12.GPT12[0].T4));\
	IfxSrc_disable((Ifx_SRC_SRCR *)&(MODULE_SRC.GPT12.GPT12[0].T5));\
	IfxSrc_disable((Ifx_SRC_SRCR *)&(MODULE_SRC.GPT12.GPT12[0].T6));\
}
#endif

#define OS_MONITOR_EN
#ifdef OS_MONITOR_EN
	typedef struct os_task_monitor_Tag{
		uint32 tStart;
		uint32 tEnd;
		uint32 tI;
		uint32 tC;
		uint32 tIMax;
		uint32 tIMin;
		uint32 tCMax;
		uint32 tCMin;
		uint8 stNotFirst;
		uint16 pctLoad;
		uint32 tICrect;
	}os_task_monitor_t;

	typedef struct OS_Monitor_Tag {
		os_task_monitor_t OS_H1ms;
		os_task_monitor_t OS_H5ms;
		os_task_monitor_t OS_H10ms;
		os_task_monitor_t OS_H20ms;
		os_task_monitor_t OS_H100ms;
		os_task_monitor_t OS_L1ms;
		os_task_monitor_t OS_L5ms;
		os_task_monitor_t OS_L10ms;
		os_task_monitor_t OS_L20ms;
		os_task_monitor_t OS_L50ms;
		os_task_monitor_t OS_L100ms;
		os_task_monitor_t OS_L200ms;
		os_task_monitor_t OS_L500ms;
		os_task_monitor_t OS_L1000ms;
	}OS_MonitorType;

	extern OS_MonitorType OS_Monitor;
#endif

#ifdef OS_MONITOR_EN
	//测试时间间隔，单位us  最大65535us
	#define OS_MSTART(task_monitor) \
	{\
	    task_monitor.tStart=F_STM_GetLowerFreeTimerValue();\
	    if(task_monitor.stNotFirst!=0)\
	    { \
	        task_monitor.tI = task_monitor.tStart-task_monitor.tEnd;\
	        if (task_monitor.tI > task_monitor.tIMax)\
	        {\
	            task_monitor.tIMax=task_monitor.tI;\
	        }\
	        if (task_monitor.tI < task_monitor.tIMin)\
	        {\
	            task_monitor.tIMin=task_monitor.tI;\
	        }\
	    }\
	    else\
	    {\
	        task_monitor.stNotFirst=1;\
	    }\
	}

	#define OS_MEND(task_monitor) \
	{\
	     task_monitor.tEnd=F_STM_GetLowerFreeTimerValue();\
	     task_monitor.tC = task_monitor.tEnd- task_monitor.tStart;\
	     if (task_monitor.tC > task_monitor.tCMax)\
	     {\
	        task_monitor.tCMax=task_monitor.tC;\
	     }\
	     if (task_monitor.tC < task_monitor.tCMin)\
	     {\
	        task_monitor.tCMin=task_monitor.tC;\
	     }\
	     task_monitor.tEnd=task_monitor.tStart;\
	}

    #define OS_LOAD(task_monitor,tICrectIn) \
	{\
	     task_monitor.tICrect=(uint32)tICrectIn*10;\
	     task_monitor.pctLoad = (uint16)((uint32)task_monitor.tC*1/task_monitor.tICrect);\
	}
#endif



typedef void (*task_ptr)(void);
extern void F_OS_Init(void);
extern void TaskNop(void);
extern void F_OS_LStart(void);


extern task_ptr FP_OS_ASW_L1ms;
extern task_ptr FP_OS_ASW_L5ms;
extern task_ptr FP_OS_ASW_L10ms;
extern task_ptr FP_OS_ASW_L20ms;
extern task_ptr FP_OS_ASW_L50ms;
extern task_ptr FP_OS_ASW_L100ms;
extern task_ptr FP_OS_ASW_L200ms;
extern task_ptr FP_OS_ASW_L500ms;
extern task_ptr FP_OS_ASW_L1000ms;

extern task_ptr FP_OS_ASW_H1ms;
extern task_ptr FP_OS_ASW_H5ms;
extern task_ptr FP_OS_ASW_H10ms;
extern task_ptr FP_OS_ASW_H20ms;
extern task_ptr FP_OS_ASW_H100ms;


extern task_ptr FP_OS_COM_ABST_H1ms;
//=============zhaoxn addsta 2019-7-12================
extern task_ptr FP_OS_COM_CANFD_ABST_H1ms;
//=============zhaoxn addend 2019-7-12================


extern task_ptr FP_OS_COM_SERVE_H1ms;
extern task_ptr FP_OS_COM_SERVE_H5ms;
extern task_ptr FP_OS_COM_SERVE_H10ms;
extern task_ptr FP_OS_COM_SERVE_L20ms;
extern task_ptr FP_OS_COM_SERVE_L100ms;

extern task_ptr FP_OS_COM_SERVE_L1ms;


extern void F_OS_ASWTaskCtrl(uint8 en);



#endif
