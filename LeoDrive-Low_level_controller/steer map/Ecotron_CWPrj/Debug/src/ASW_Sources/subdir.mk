################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ASW_Sources/ASW_IO_Init.c \
../src/ASW_Sources/ASW_Schedule.c \
../src/ASW_Sources/DataDef_NVM.c \
../src/ASW_Sources/EcoCoder_AIKeyONDef.c \
../src/ASW_Sources/Ecotron.c \
../src/ASW_Sources/LLD_InitConf.c \
../src/ASW_Sources/Service_CAN.c \
../src/ASW_Sources/Service_LIN.c \
../src/ASW_Sources/const_params.c \
../src/ASW_Sources/look1_binlx.c \
../src/ASW_Sources/look1_iflf_binlx.c \
../src/ASW_Sources/rt_zcfcn.c

OBJS += \
./src/ASW_Sources/ASW_IO_Init.o \
./src/ASW_Sources/ASW_Schedule.o \
./src/ASW_Sources/DataDef_NVM.o \
./src/ASW_Sources/EcoCoder_AIKeyONDef.o \
./src/ASW_Sources/Ecotron.o \
./src/ASW_Sources/LLD_InitConf.o \
./src/ASW_Sources/Service_CAN.o \
./src/ASW_Sources/Service_LIN.o \
./src/ASW_Sources/const_params.o \
./src/ASW_Sources/look1_binlx.o \
./src/ASW_Sources/look1_iflf_binlx.o \
./src/ASW_Sources/rt_zcfcn.o

C_DEPS += \
./src/ASW_Sources/ASW_IO_Init.d \
./src/ASW_Sources/ASW_Schedule.d \
./src/ASW_Sources/DataDef_NVM.d \
./src/ASW_Sources/EcoCoder_AIKeyONDef.d \
./src/ASW_Sources/Ecotron.d \
./src/ASW_Sources/LLD_InitConf.d \
./src/ASW_Sources/Service_CAN.d \
./src/ASW_Sources/Service_LIN.d \
./src/ASW_Sources/const_params.d \
./src/ASW_Sources/look1_binlx.d \
./src/ASW_Sources/look1_iflf_binlx.d \
./src/ASW_Sources/rt_zcfcn.d


# Each subdirectory must supply rules for building sources it contributes
src/ASW_Sources/%.o: ../src/ASW_Sources/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: TriCore C Compiler'
	"$(TRICORE_TOOLS)/bin/tricore-gcc" -c -I"..\src\ASW_Libs" -I"..\src\ASW_Sources" -I"..\BSW\0_AppSw\Config\Common" -I"..\BSW\0_AppSw\Tricore" -I"..\BSW\1_SrvSw" -I"..\BSW\1_SrvSw\Tricore" -I"..\BSW\2_COMM\Abstraction" -I"..\BSW\2_COMM\TypeDef" -I"..\BSW\3_OS" -I"..\BSW\4_CDrv\MultiCAN" -I"..\BSW\4_CDrv\GPT12" -I"..\BSW\4_CDrv\IO" -I"..\BSW\4_CDrv\INT" -I"..\BSW\4_CDrv\QSPI" -I"..\BSW\4_CDrv\HSD_Drv\BTT6200" -I"..\BSW\4_CDrv\HSD_Drv\A3942" -I"..\BSW\4_CDrv\LSD_Drv\NCV7513" -I"..\BSW\4_CDrv\LSD_Drv\TLE8110" -I"..\BSW\4_CDrv\DMA" -I"..\BSW\4_CDrv\VADC" -I"..\BSW\4_CDrv\GTM\TOM" -I"..\BSW\4_CDrv\GTM\ATOM" -I"..\BSW\4_CDrv\GTM\TIM" -I"..\BSW\4_CDrv\Flash" -I"..\BSW\4_CDrv\CCU6" -I"..\BSW\4_CDrv\SCU" -I"..\BSW\4_CDrv\STM" -I"..\BSW\4_CDrv\EEPROM" -I"..\BSW\4_CDrv\LIN" -I"..\BSW\4_CDrv\TLF35584" -I"..\BSW\4_CDrv\MCU_Check" -I"..\BSW\5_Abstraction\HLSO" -I"..\BSW\5_Abstraction\NVMEM" -I"..\BSW\6_McHal\Tricore" -I"..\BSW\6_McHal\Tricore\_Reg" -I"..\BSW\4_CDrv\FlexRay" -I"..\BSW\5_Abstraction\NVM" -I"..\BSW\4_CDrv\SCI" -fno-common -O2 -fgcse-after-reload -ffast-math -funswitch-loops -fpredictive-commoning -ftree-vectorize -fipa-cp-clone -fpeel-loops -fmove-loop-invariants -frename-registers -fira-algorithm=priority -g3 -W -Wall -Wextra -Wdiv-by-zero -Warray-bounds -Wcast-align -Wignored-qualifiers -Wformat -Wformat-security -pipe  -DTRIBOARD_TC275C -D__GNUC__=4 -DTRIBOARD_TC275B -fshort-double -mcpu=tc27xx -mversion-info -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '
