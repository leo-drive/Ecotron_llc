#ifndef EcoSectionDef_H
#define EcoSectionDef_H
#define __RP
#define __RWP
#define __MP
#define __FNVMP
#define __FNVMF
#define __UFNVMP
#define __UFNVMF
#define __BOOTP
#define __BOOTP2
#define __BOOT_SEEDKEY_CODE
#define __ADDR_EPK
#endif

/******************************************************************************/
#ifdef PUSH__RP
#undef PUSH__RP
#endif

#ifdef POP__RP
#undef POP__RP
#endif

/******************************************************************************/
#ifdef PUSH__RWP
#define START_SECTION_CalRom
#undef PUSH__RWP
#endif

#ifdef POP__RWP
#define STOP_SECTION_CalRom
#undef POP__RWP
#endif

/******************************************************************************/
#ifdef PUSH__MP
#define START_SECTION_AppRam
#undef PUSH__MP
#endif

#ifdef POP__MP
#define STOP_SECTION_AppRam
#undef POP__MP
#endif

/******************************************************************************/
#ifdef PUSH__FNVMP
#define START_SECTION_FNVM
#undef PUSH__FNVMP
#endif

#ifdef POP__FNVMP
#define STOP_SECTION_FNVM
#undef POP__FNVMP
#endif

/******************************************************************************/
#ifdef PUSH__FNVMF
#define START_SECTION_FNVM_FLAG
#undef PUSH__FNVMF
#endif

#ifdef POP__FNVMF
#define STOP_SECTION_FNVM_FLAG
#undef POP__FNVMF
#endif

/******************************PUSH__UFNVMP************************************************/
#ifdef PUSH__UFNVMP
#define START_SECTION_WriteBackRam
#undef PUSH__UFNVMP
#endif

#ifdef POP__UFNVMP
#define STOP_SECTION_WriteBackRam
#undef POP__UFNVMP
#endif

/********************************POP__UFNVMP**********************************************/
/******************************************************************************/
#ifdef PUSH__UFNVMF
#define START_UFVNM_FLAG_ROM
#undef PUSH__UFNVMF
#endif

#ifdef POP__UFNVMF
#define STOP_UFVNM_FLAG_ROM
#undef POP__UFNVMF
#endif

/******************************************************************************/
#ifdef PUSH__BOOTP
#define START_SECTION_BootCalRom
#undef PUSH__BOOTP
#endif

#ifdef POP__BOOTP
#define STOP_SECTION_BootCalRom
#undef POP__BOOTP
#endif

/***************************20221208*******************************************/
#ifdef PUSH__BOOTP2
#define START_SECTION_BootCalRom2
#undef PUSH__BOOTP2
#endif

#ifdef POP__BOOTP2
#define STOP_SECTION_BootCalRom2
#undef POP__BOOTP2
#endif

/***************************20221208*******************************************/
#ifdef PUSH__BOOT_SEEDKEY_CODE
#define START_BOOT_SEEDKEY_CODE
#undef PUSH__BOOT_SEEDKEY_CODE
#endif

#ifdef POP__BOOT_SEEDKEY_CODE
#define STOP_BOOT_SEEDKEY_CODE
#undef POP__BOOT_SEEDKEY_CODE
#endif

/**EPK Section************************************************************************************/
#ifdef PUSH__ADDR_EPK
#define START_ADDR_EPK
#undef PUSH__ADDR_EPK
#endif

#ifdef POP__ADDR_EPK
#define STOP_ADDR_EPK
#undef POP__ADDR_EPK
#endif

/**EPK Section***********************************************************************************/
#include "pragma.h"
