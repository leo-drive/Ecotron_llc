/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		Flash.h
Author:			
Version:		V1.0.1
Date:			2016-10-24
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/



#ifndef FLASH_H
#define FLASH_H


#include "_Impl\IfxFlash_cfg.h"
#include "Cpu\Std\Ifx_Types.h"


#define PFlash_Addr_Logical2Physical_Offset (0xa0000000-0x80000000)

#define PFLS_MIN_WRITE_SIZE 	32
//#define FLS_MEM_CAL_ROM_START 	0x80238000


#define  MCAL_FLASH_PFLASH_PAGESIZE			IFXFLASH_PFLASH_PAGE_LENGTH		//32bytes
#define  MCAL_FLASH_DFLASH_PAGESIZE			IFXFLASH_DFLASH_PAGE_LENGTH		//8bytes

#define 	FLASH_PFLASH_PAGESIZE     IFXFLASH_PFLASH_PAGE_LENGTH
#define 	FLASH_DFLASH_PAGESIZE	  IFXFLASH_DFLASH_PAGE_LENGTH

#define  MCAL_PFLASH_SECTOR_NUM				IFXFLASH_PFLASH_NUM_LOG_SECTORS
#define  MCAL_DFLASH_SECTOR_NUM				IFXFLASH_DFLASH_NUM_LOG_SECTORS
#define  MCAL_FLASH_SECTOR_NUM				(MCAL_PFLASH_SECTOR_NUM+MCAL_DFLASH_SECTOR_NUM)

typedef enum
{												//	Start			End			Size(KB)
	Mcal_Flash_FlashSector_PF0_S0 	=0,		//0xA000_0000 	0xA000_3FFF 	16
	Mcal_Flash_FlashSector_PF0_S1 	,		//0xA000_4000 	0xA000_7FFF		16
	Mcal_Flash_FlashSector_PF0_S2 	,		//0xA000_8000 	0xA000_BFFF		16
	Mcal_Flash_FlashSector_PF0_S3 	,		//0xA000_C000 	0xA000_FFFF		16
	Mcal_Flash_FlashSector_PF0_S4 	,		//0xA001_0000 	0xA001_3FFF		16
	Mcal_Flash_FlashSector_PF0_S5 	,		//0xA001_4000 	0xA001_7FFF		16
	Mcal_Flash_FlashSector_PF0_S6 	,		//0xA001_8000 	0xA001_CFFF 	16
	Mcal_Flash_FlashSector_PF0_S7 	,		//0xA001_C000 	0xA001_FFFF		16
	Mcal_Flash_FlashSector_PF0_S8 	,		//0xA002_0000 	0xA002_7FFF		32
	Mcal_Flash_FlashSector_PF0_S9 	,		//0xA002_8000 	0xA002_FFFF 	32
	Mcal_Flash_FlashSector_PF0_S10 	,		//0xA003_0000 	0xA003_7FFF 	32
	Mcal_Flash_FlashSector_PF0_S11 	,		//0xA003_8000 	0xA003_FFFF 	32
	Mcal_Flash_FlashSector_PF0_S12 	,		//0xA004_0000 	0xA004_7FFF 	32
	Mcal_Flash_FlashSector_PF0_S13 	,		//0xA004_8000 	0xA004_FFFF		32
	Mcal_Flash_FlashSector_PF0_S14 	,		//0xA005_0000 	0xA005_7FFF		32
	Mcal_Flash_FlashSector_PF0_S15 	,		//0xA005_8000 	0xA005_FFFF		32
	Mcal_Flash_FlashSector_PF0_S16 	,		//0xA006_0000 	0xA006_FFFF		64
	Mcal_Flash_FlashSector_PF0_S17 	,		//0xA007_0000 	0xA007_FFFF		64
	Mcal_Flash_FlashSector_PF0_S18 	,		//0xA008_0000 	0xA008_FFFF 	64
	Mcal_Flash_FlashSector_PF0_S19	,		//0xA009_0000 	0xA009_FFFF		64
	Mcal_Flash_FlashSector_PF0_S20	,		//0xA00A_0000 	0xA00B_FFFF		128
	Mcal_Flash_FlashSector_PF0_S21	,		//0xA00C_0000 	0xA00D_FFFF 	128
	Mcal_Flash_FlashSector_PF0_S22 	,		//0xA00E_0000 	0xA00F_FFFF 	128
	Mcal_Flash_FlashSector_PF0_S23	,		//0xA010_0000 	0xA013_FFFF		256
	Mcal_Flash_FlashSector_PF0_S24	,		//0xA014_0000 	0xA017_FFFF 	256
	Mcal_Flash_FlashSector_PF0_S25 	,		//0xA018_0000 	0xA01B_FFFF 	256
	Mcal_Flash_FlashSector_PF0_S26 	,		//0xA01C_0000 	0xA01F_FFFF 	256

	Mcal_Flash_FlashSector_PF1_S0 	,		//0xA200_0000 	0xA200_3FFF 	16
	Mcal_Flash_FlashSector_PF1_S1 	,		//0xA200_4000 	0xA200_7FFF		16
	Mcal_Flash_FlashSector_PF1_S2 	,		//0xA200_8000 	0xA200_BFFF		16
	Mcal_Flash_FlashSector_PF1_S3 	,		//0xA200_C000 	0xA200_FFFF		16
	Mcal_Flash_FlashSector_PF1_S4 	,		//0xA201_0000 	0xA201_3FFF		16
	Mcal_Flash_FlashSector_PF1_S5 	,		//0xA201_4000 	0xA201_7FFF		16
	Mcal_Flash_FlashSector_PF1_S6 	,		//0xA201_8000 	0xA201_CFFF 	16
	Mcal_Flash_FlashSector_PF1_S7 	,		//0xA201_C000 	0xA201_FFFF		16
	Mcal_Flash_FlashSector_PF1_S8 	,		//0xA202_0000 	0xA202_7FFF		32
	Mcal_Flash_FlashSector_PF1_S9 	,		//0xA202_8000 	0xA202_FFFF 	32
	Mcal_Flash_FlashSector_PF1_S10 	,		//0xA203_0000 	0xA203_7FFF 	32
	Mcal_Flash_FlashSector_PF1_S11 	,		//0xA203_8000 	0xA203_FFFF 	32
	Mcal_Flash_FlashSector_PF1_S12 	,		//0xA204_0000 	0xA204_7FFF 	32
	Mcal_Flash_FlashSector_PF1_S13 	,		//0xA204_8000 	0xA204_FFFF		32
	Mcal_Flash_FlashSector_PF1_S14 	,		//0xA205_0000 	0xA205_7FFF		32
	Mcal_Flash_FlashSector_PF1_S15 	,		//0xA205_8000 	0xA205_FFFF		32
	Mcal_Flash_FlashSector_PF1_S16 	,		//0xA206_0000 	0xA206_FFFF		64
	Mcal_Flash_FlashSector_PF1_S17 	,		//0xA207_0000 	0xA207_FFFF		64
	Mcal_Flash_FlashSector_PF1_S18 	,		//0xA208_0000 	0xA208_FFFF 	64
	Mcal_Flash_FlashSector_PF1_S19	,		//0xA209_0000 	0xA209_FFFF		64
	Mcal_Flash_FlashSector_PF1_S20	,		//0xA20A_0000 	0xA20B_FFFF		128
	Mcal_Flash_FlashSector_PF1_S21	,		//0xA20C_0000 	0xA20D_FFFF 	128
	Mcal_Flash_FlashSector_PF1_S22 	,		//0xA20E_0000 	0xA20F_FFFF 	128
	Mcal_Flash_FlashSector_PF1_S23	,		//0xA210_0000 	0xA213_FFFF		256
	Mcal_Flash_FlashSector_PF1_S24	,		//0xA214_0000 	0xA217_FFFF 	256
	Mcal_Flash_FlashSector_PF1_S25 	,		//0xA218_0000 	0xA21B_FFFF 	256
	Mcal_Flash_FlashSector_PF1_S26 	,		//0xA21C_0000 	0xA21F_FFFF 	256

	Mcal_Flash_FlashSector_DF0_EEPROM0 		,		//0xAF00_0000 	0xAF00_1FFF 	8
	Mcal_Flash_FlashSector_DF0_EEPROM1 		,		//0xAF00_2000 	0xAF00_3FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM2 		,		//0xAF00_4000 	0xAF00_5FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM3 		,		//0xAF00_6000 	0xAF00_7FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM4 		,		//0xAF00_8000 	0xAF00_9FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM5 		,		//0xAF00_A000 	0xAF00_BFFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM6 		,		//0xAF00_C000 	0xAF00_DFFF 	8
	Mcal_Flash_FlashSector_DF0_EEPROM7 	 	,		//0xAF00_E000 	0xAF00_FFFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM8 	 	,		//0xAF01_0000 	0xAF01_1FFF 	8
	Mcal_Flash_FlashSector_DF0_EEPROM9 	 	,		//0xAF01_0000 	0xAF01_3FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM10	 	,		//0xAF01_2000 	0xAF01_5FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM11  	,		//0xAF01_4000 	0xAF01_7FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM12 	,		//0xAF01_6000 	0xAF01_9FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM13 	,		//0xAF01_8000 	0xAF01_BFFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM14 	,		//0xAF01_A000 	0xAF01_DFFF 	8
	Mcal_Flash_FlashSector_DF0_EEPROM15 	,		//0xAF01_C000 	0xAF01_FFFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM16		,		//0xAF02_0000 	0xAF02_1FFF 	8
	Mcal_Flash_FlashSector_DF0_EEPROM17 	,		//0xAF02_2000 	0xAF02_3FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM18 	,		//0xAF02_4000 	0xAF02_5FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM19 	,		//0xAF02_6000 	0xAF02_7FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM20 	,		//0xAF02_8000 	0xAF02_9FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM21 	,		//0xAF02_A000 	0xAF02_BFFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM22 	,		//0xAF02_C000 	0xAF02_DFFF 	8
	Mcal_Flash_FlashSector_DF0_EEPROM23 	,		//0xAF02_E000 	0xAF02_FFFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM24 	,		//0xAF03_0000 	0xAF03_1FFF 	8
	Mcal_Flash_FlashSector_DF0_EEPROM25	 	,		//0xAF03_0000 	0xAF03_3FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM26	 	,		//0xAF03_2000 	0xAF03_5FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM27  	,		//0xAF03_4000 	0xAF03_7FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM28 	,		//0xAF03_6000 	0xAF03_9FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM29 	,		//0xAF03_8000 	0xAF03_BFFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM30 	,		//0xAF03_A000 	0xAF03_DFFF 	8
	Mcal_Flash_FlashSector_DF0_EEPROM31 	,		//0xAF03_C000 	0xAF03_FFFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM32		,		//0xAF04_0000 	0xAF04_1FFF 	8
	Mcal_Flash_FlashSector_DF0_EEPROM33 	,		//0xAF04_2000 	0xAF04_3FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM34 	,		//0xAF04_4000 	0xAF04_5FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM35 	,		//0xAF04_6000 	0xAF04_7FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM36 	,		//0xAF04_8000 	0xAF04_9FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM37 	,		//0xAF04_A000 	0xAF04_BFFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM38 	,		//0xAF04_C000 	0xAF04_DFFF 	8
	Mcal_Flash_FlashSector_DF0_EEPROM39 	,		//0xAF04_E000 	0xAF04_FFFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM40 	,		//0xAF05_0000 	0xAF05_1FFF 	8
	Mcal_Flash_FlashSector_DF0_EEPROM41	 	,		//0xAF05_0000 	0xAF05_3FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM42	 	,		//0xAF05_2000 	0xAF05_5FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM43  	,		//0xAF05_4000 	0xAF05_7FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM44 	,		//0xAF05_6000 	0xAF05_9FFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM45 	,		//0xAF05_8000 	0xAF05_BFFF		8
	Mcal_Flash_FlashSector_DF0_EEPROM46 	,		//0xAF05_A000 	0xAF05_DFFF 	8
	Mcal_Flash_FlashSector_DF0_EEPROM47 			//0xAF05_C000 	0xAF05_FFFF		8

} Mcal_Flash_FlashSector;


/** \brief contains start and end address of sectors
*/
typedef struct
{
    uint32    Start;  /**< \brief start address of sector */
    uint32    End;    /**< \brief end address of sector */
} Mcal_Flash_FlashSectorStruct;


extern uint32 FlashEraseData(uint32 PageAddr);
extern uint32 FlashWriteOnePage(uint32 PageAddr,uint32 *SouData);
extern uint8 Flash_Program(uint32 destAddr,uint32 sourceData,uint32 size);


extern uint8 Flash_clr_memory (uint32 local_clr_addr,uint32 local_clr_memory_size);
extern uint8 ProgramFlash(uint32 dest,uint32 source,uint32 size);
extern void Mcal_Flash_EraseOneSector(Mcal_Flash_FlashSector FlashSector);
extern void Mcal_Flash_ReadData(uint32 FlashAddr,uint32 RamAdderss,uint32 Length);
extern Mcal_Flash_FlashSector Mcal_Flash_GetSectorNum(uint32 Address);

#endif
