################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BSW/0_AppSw/Tricore/Cpu0_Main.c \
../BSW/0_AppSw/Tricore/Cpu1_Main.c \
../BSW/0_AppSw/Tricore/Cpu2_Main.c

OBJS += \
./BSW/0_AppSw/Tricore/Cpu0_Main.o \
./BSW/0_AppSw/Tricore/Cpu1_Main.o \
./BSW/0_AppSw/Tricore/Cpu2_Main.o

C_DEPS += \
./BSW/0_AppSw/Tricore/Cpu0_Main.d \
./BSW/0_AppSw/Tricore/Cpu1_Main.d \
./BSW/0_AppSw/Tricore/Cpu2_Main.d


# Each subdirectory must supply rules for building sources it contributes
BSW/0_AppSw/Tricore/%.o: ../BSW/0_AppSw/Tricore/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: TriCore C Compiler'
	"$(TRICORE_TOOLS)/bin/tricore-gcc" -c -I"..\src\ASW_Libs" -I"..\src\ASW_Sources" -I"..\BSW\0_AppSw\Config\Common" -I"..\BSW\0_AppSw\Tricore" -I"..\BSW\1_SrvSw" -I"..\BSW\1_SrvSw\Tricore" -I"..\BSW\2_COMM\Abstraction" -I"..\BSW\2_COMM\TypeDef" -I"..\BSW\3_OS" -I"..\BSW\4_CDrv\MultiCAN" -I"..\BSW\4_CDrv\GPT12" -I"..\BSW\4_CDrv\IO" -I"..\BSW\4_CDrv\INT" -I"..\BSW\4_CDrv\QSPI" -I"..\BSW\4_CDrv\HSD_Drv\BTT6200" -I"..\BSW\4_CDrv\HSD_Drv\A3942" -I"..\BSW\4_CDrv\LSD_Drv\NCV7513" -I"..\BSW\4_CDrv\LSD_Drv\TLE8110" -I"..\BSW\4_CDrv\DMA" -I"..\BSW\4_CDrv\VADC" -I"..\BSW\4_CDrv\GTM\TOM" -I"..\BSW\4_CDrv\GTM\ATOM" -I"..\BSW\4_CDrv\GTM\TIM" -I"..\BSW\4_CDrv\Flash" -I"..\BSW\4_CDrv\CCU6" -I"..\BSW\4_CDrv\SCU" -I"..\BSW\4_CDrv\STM" -I"..\BSW\4_CDrv\EEPROM" -I"..\BSW\4_CDrv\LIN" -I"..\BSW\4_CDrv\TLF35584" -I"..\BSW\4_CDrv\MCU_Check" -I"..\BSW\5_Abstraction\HLSO" -I"..\BSW\5_Abstraction\NVMEM" -I"..\BSW\6_McHal\Tricore" -I"..\BSW\6_McHal\Tricore\_Reg" -I"..\BSW\4_CDrv\FlexRay" -I"..\BSW\5_Abstraction\NVM" -I"..\BSW\4_CDrv\SCI" -fno-common -O2 -fgcse-after-reload -ffast-math -funswitch-loops -fpredictive-commoning -ftree-vectorize -fipa-cp-clone -fpeel-loops -fmove-loop-invariants -frename-registers -fira-algorithm=priority -g3 -W -Wall -Wextra -Wdiv-by-zero -Warray-bounds -Wcast-align -Wignored-qualifiers -Wformat -Wformat-security -pipe  -DTRIBOARD_TC275C -D__GNUC__=4 -DTRIBOARD_TC275B -fshort-double -mcpu=tc27xx -mversion-info -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '
