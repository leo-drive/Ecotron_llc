

#ifndef IFX_CFG_TRAP_H
#define IFX_CFG_TRAP_H



#include "Cpu/Std/Ifx_Types.h"
#include "CAN.h"
#include "NVM.h"
//======zhaoxn addsta 2019-5-21=======
#include "SCU.h"
//======zhaoxn addend 2019-5-21=======


IFX_INLINE void myTrapExtensionHook(IfxCpu_Trap trapWatch);
IFX_INLINE void mySysCallExtensionHook(IfxCpu_Trap trapWatch);



//marp.trapdis    0:en   1:dis



IFX_INLINE void myTrapExtensionHook(IfxCpu_Trap trapWatch)
{
	switch (trapWatch.tClass)
	{
		case IfxCpu_Trap_Class_memoryManagement:
		{
			//user code: Function calls allowed.


			break;
		}
		case IfxCpu_Trap_Class_internalProtection:
		{
			//user code: Function calls allowed.


			break;
		}
		case IfxCpu_Trap_Class_instructionErrors:
		{
			//user code: Function calls allowed.


			break;
		}
		case IfxCpu_Trap_Class_contextManagement:
		{
			//user code: Function calls NOT allowed.



			break;
		}
		case IfxCpu_Trap_Class_bus:
		{

			//flash error handle function
			F_NVM_Repair();
			//====zhaoxn addsta 2019-5-21=====
			F_SW_Reset();
			//====zhaoxn addend 2019-5-21=====



			break;
		}
		case IfxCpu_Trap_Class_assertion:
		{
			//user code: Function calls allowed.


			break;
		}
		case IfxCpu_Trap_Class_nonMaskableInterrupt:
		{
			//user code: Function calls allowed.



			break;
		}
		default:
		{
			break;
		}
	}
}


IFX_INLINE void mySysCallExtensionHook(IfxCpu_Trap trapWatch)
{
	switch (trapWatch.tId)
	{
		case IfxCpu_Trap_Bus_Id_programFetchSynchronousError:
		{
			//user code: Function calls allowed.



			break;
		}
		case IfxCpu_Trap_Bus_Id_dataAccessSynchronousError:
		{



			break;
		}
		case IfxCpu_Trap_Bus_Id_dataAccessAsynchronousError:
		{
			//user code: Function calls allowed.



			break;
		}
		default:
		{



			break;
		}
	}
}








#endif

