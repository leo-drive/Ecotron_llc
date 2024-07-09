/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LLD_InitConf.c
 *
 * Code generated for Simulink model 'Ecotron'.
 *
 * Model version                  : 1.206
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Thu Jun 13 18:26:42 2024
 *
 * Target selection: EcoCoderTC27x.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

/******************************************************************************
   Includes
 ******************************************************************************/
#include "Cpu\Std\Ifx_Types.h"
#include "Cpu\Std\IfxCpu_Intrinsics.h"
#include "Scu\Std\IfxScuWdt.h"
#include "Cpu\Std\IfxCpu.h"
#include "GPT12.h"
#include "OS_Main.h"
#include "IO_main.h"
#include "QSPI.h"
#include "VADC.h"
#include "Service_CAN.h"
#include "LLD_InitConf.h"
#include "ASW_IO_Init.h"
#include "SCU.h"
#include "TIM.h"
#include "NVMEM.h"
#include "TLF35584.h"
#include "ASW_Schedule.h"
#include "Service_LIN.h"
#include "EcoCoderTypeDef.h"
#include "Ecotron.h"

/******************************************************************************
 *   Function:           F_Servece_Init
 *   Description:
 *   Input:
 *   Output:
 *   Return:
 *   Others:
 ******************************************************************************/
void F_Servece_Init(void)
{
  F_Servece_CAN_Init();
  F_Service_LIN_Init();
}

/******************************************************************************
 *   Function:           F_Abstraction_Init
 *   Description:
 *   Input:
 *   Output:
 *   Return:
 *   Others:
 ******************************************************************************/
/******************************************************************************
 *   Function:           MEM_NFNVM_Init
 *   Description:  20180517
 *   Input:
 *   Output:
 *   Return:
 *   Others:
 ******************************************************************************/
#define PUSH__UFNVMF
#include "EcoSectionDef.h"
#ifdef MEM_NFNVM_INT_EN

__UFNVMF ECO_U08 MEM_flgUnFixedNvmInitSet = ECO_MEM_NFNEM_INIT_SET;

#else

__UFNVMF ECO_U08 MEM_flgUnFixedNvmInitSet = 0;
                                 //0:Restore from factory default values in .mot

#endif

#define POP__UFNVMF
#include "EcoSectionDef.h"

ECO_U08 MEM_NFNVM_Init(void)
{
  ECO_U08 iLLDCAL= 0;
  iLLDCAL= MEM_flgUnFixedNvmInitSet;
  if (iLLDCAL) {
    return 1;
  } else {
    return 0;
  }
}

extern ECO_U32 __NVM_RAM_START;
extern ECO_U32 __NVM_INIT_START;
extern ECO_U32 __NVM_LEN;
static void F_Abst_NVMInit(void)
{
  ECO_U32 CalCounter;
  ECO_U32 addrCalRamStart= (ECO_U32)(&__NVM_RAM_START);
  ECO_U32 addrCalRomStart= (ECO_U32)(&__NVM_INIT_START);
  for (CalCounter=0;CalCounter<(ECO_U32)(&__NVM_LEN);CalCounter++) {
    *(ECO_U08*) (addrCalRamStart+CalCounter)=*(ECO_U08*) (addrCalRomStart+
      CalCounter);
  }
}

void F_Abstraction_Init(void)
{
  //F_Abs_HLSO_init();
  //F_Abs_LIN_init();
  F_ASW_IO_init();
  F_NVMEM_Init();

#ifdef MEM_NVM_INT_EN

  MEM_NVM_Init();

#endif

  MEM_NFNVM_Init();
  F_Abst_NVMInit();
}

/******************************************************************************
 *   Function:           F_Driver_Init
 *   Description:
 *   Input:
 *   Output:
 *   Return:
 *   Others:
 ******************************************************************************/
void F_Driver_Init(void)
{
  F_GPIO_init();

  //F_CAN_init();
  F_GPT12_init();
  F_VADC_Init(0);
  F_QSPI0_init();
  F_QSPI1_init();
  F_QSPI2_init();
  F_QSPI3_init();

#ifdef ASW_DETECT_STACK_OVERFLOW_EN

  F_Abstr_EnableStackProtect();

#endif

}

void F_Abstr_CAL_Check()
{

#ifdef ECO_CAB_CHECKE_FUN_DEF

  EcoCoder_CAB_ChecheFailedWhile();

#endif

}

/******************************************************************************
 *   Function:           F_BSW_ASW_Init
 *   Description:
 *   Input:
 *   Output:
 *   Return:
 *   Others:
 ******************************************************************************/
extern ECO_U32 __MSR_RAM_START;
extern ECO_U32 __MSR_RAM_LEN;
void F_BSW_ASW_Init(void)
{
  IfxCpu_disableInterrupts();
  F_SYS_Clock_Init();
  F_Watchdog_Init(0);
  F_Driver_Init();
  F_Abstraction_Init();
  F_Servece_Init();
  F_Abstr_CAL_Check();

  //ASW_Schedule_Init();
  IfxCpu_enableInterrupts();
  memset((ECO_U32)(&__MSR_RAM_START), 0, (ECO_U32)(&__MSR_RAM_LEN));
  ASW_Schedule_Init();

#ifdef ASW_FLEXRAY_INIT_EN

  F_ASW_FlexRay_Init();

#endif

}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
