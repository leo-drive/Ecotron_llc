################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here

-include objects.mk
-include sources.mk
-include src/ASW_Sources/subdir.mk
-include BSW/0_AppSw/Tricore/subdir.mk
-include BSW/6_McHal/Tricore/Cpu/CStart/subdir.mk
-include BSW/6_McHal/Tricore/Cpu/Irq/subdir.mk
-include BSW/6_McHal/Tricore/Cpu/Std/subdir.mk
-include BSW/6_McHal/Tricore/Cpu/Trap/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

#rebuild target
rebuild: clean all

# All Target
all: ECO_HCU_FLS.elf

# Tool invocations
ECO_HCU_FLS.elf: $(OBJS) $(USER_OBJS) $(ASM)
	@echo 'Building target: $@'
	@echo 'Invoking: TriCore C Linker'
	"$(TRICORE_TOOLS)/bin/tricore-gcc" -o  "ECO_HCU_FLS.elf" -nocrt0 -T "..\Config\Lcf_Gnuc.lsl" @iROM.objectlist -Wl,--gc-sections -mcpu=tc27xx -Wl,--mem-holes -Wl,--no-warn-flags  -Wl,-Map="$(basename $(notdir $@)).map" -Wl,--cref -fshort-double -Wl,--defsym,NOPCPWARNING=0x1 @../iROMLink.args -Wl,--extmap="a"
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(PCP_S)$(EXECUTABLES)$(OBJS)$(C_DEPS)$(CPCP_DEPS) ECO_HCU_FLS.elf
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

