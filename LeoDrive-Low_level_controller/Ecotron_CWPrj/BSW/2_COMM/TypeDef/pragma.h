/*************************************************************
Copyright (c) BAIC 2015-2016. All rights reserved.

File name:		pragma.h
Author:			BAIC
Version:		V1.0.1
Date:			2017-1-11
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef PRAGMA_H
#define PRAGMA_H



#endif


//----------------------------------------------

#ifdef START_SECTION_CalRom
  #pragma section ".cal_data_on"
  #undef START_SECTION_CalRom
#endif

#ifdef STOP_SECTION_CalRom  
  #pragma section
  #undef STOP_SECTION_CalRom
#endif

//----------------------------------------------

#ifdef START_SECTION_BootCalRom
  #pragma section   ".__bootcal_rom"
  #undef START_SECTION_BootCalRom
#endif

#ifdef STOP_SECTION_BootCalRom
  #pragma section
  #undef STOP_SECTION_BootCalRom
#endif


//----------------------------------------------
#ifdef START_SECTION_CalRam
  #pragma section ".cal_data_on"
  #undef START_SECTION_CalRam
#endif

#ifdef STOP_SECTION_CalRam  
  #pragma section
  #undef STOP_SECTION_CalRam
#endif

//----------------------------------------------

//#ifdef START_SECTION_WriteBackRom
//  #pragma section   ".__writeback_rom"
//  #undef START_SECTION_WriteBackRom
//#endif
//
//#ifdef STOP_SECTION_WriteBackRom
//  #pragma section
//  #undef STOP_SECTION_WriteBackRom
//#endif

//----------------------------------------------


#ifdef START_SECTION_WriteBackRam
  #pragma section   ".__writeback_ram"
  #undef START_SECTION_WriteBackRam
#endif

#ifdef STOP_SECTION_WriteBackRam 
  #pragma section
  #undef STOP_SECTION_WriteBackRam
#endif
//----------------------------------------------

#ifdef START_SECTION_AppRam 
  #pragma section ".measure_data"
  #undef START_SECTION_AppRam
#endif

#ifdef STOP_SECTION_AppRam  
  #pragma section
  #undef STOP_SECTION_AppRam
#endif

//----------------------------------------------

//#ifdef START_SECTION_DTC
//  #pragma section  ".__writeback_ram"
//  #undef START_SECTION_DTC
//#endif
//
//#ifdef STOP_SECTION_DTC
//  #pragma section
//  #undef STOP_SECTION_DTC
//#endif
//----------------------------------------------
#ifdef START_SECTION_ADCRam
  #pragma section  ".__vadc_ram"
  #undef START_SECTION_ADCRam
#endif

#ifdef STOP_SECTION_ADCRam
  #pragma section
  #undef STOP_SECTION_ADCRam
#endif

//----------------------------------------------

#ifdef START_SECTION_FNVM
  #pragma section  ".__fnvm_data"
  #undef START_SECTION_FNVM
#endif

#ifdef STOP_SECTION_FNVM
  #pragma section
  #undef STOP_SECTION_FNVM
#endif

//----------------------------------------------

#ifdef START_SECTION_FNVM_FLAG   //fnvm flag
  #pragma section ".__fnvm_flag"
  #undef START_SECTION_FNVM_FLAG
#endif

#ifdef STOP_SECTION_FNVM_FLAG
  #pragma section
  #undef STOP_SECTION_FNVM_FLAG
#endif


//----------------------------------------------

#ifdef START_UFVNM_FLAG_ROM   //unvm flag
  #pragma section ".__ufnvm_flag"
  #undef START_UFVNM_FLAG_ROM
#endif

#ifdef STOP_UFVNM_FLAG_ROM
  #pragma section
  #undef STOP_UFVNM_FLAG_ROM
#endif

//----------------------------------------------


//----------------------------------------------

#ifdef START_POWERON_FLAG_ROM          //First_PowerOn_Flag
  #pragma section ".__poweron_flag"
  #undef START_POWERON_FLAG_ROM
#endif

#ifdef STOP_POWERON_FLAG_ROM
  #pragma section
  #undef STOP_POWERON_FLAG_ROM
#endif

//----------------------------------------------


//#ifdef START_SECTION_LLDRam   //measurement ram
//  #pragma section  ".__measurement_ram"
//  #undef START_SECTION_LLDRam
//#endif
//
//#ifdef STOP_SECTION_LLDRam
//  #pragma section
//  #undef STOP_SECTION_LLDRam
//#endif

//=================seedkey code======================
//#ifdef START_BOOT_SEEDKEY_CODE
//  #pragma section ".__boot_seedkey_code"
//  #undef START_BOOT_SEEDKEY_CODE
//#endif
//
//#ifdef STOP_BOOT_SEEDKEY_CODE
//  #pragma section
//  #undef STOP_BOOT_SEEDKEY_CODE
//#endif
//----------------------------------------------


//----------------------------------------------

#ifdef START_ADDR_EPK
  #pragma section ".__epk_data"
  #undef START_ADDR_EPK
#endif

#ifdef STOP_ADDR_EPK
  #pragma section
  #undef STOP_ADDR_EPK
#endif

//----------------------------------------------

