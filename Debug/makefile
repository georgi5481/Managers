################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include utils/src/thread/subdir.mk
-include utils/src/drawings/subdir.mk
-include utils/src/Time/subdir.mk
-include sdl_utils/src/containers/subdir.mk
-include sdl_utils/src/subdir.mk
-include manager_utils/src/managers/subdir.mk
-include build/utils/CMakeFiles/utils.dir/src/thread/subdir.mk
-include build/utils/CMakeFiles/utils.dir/src/drawings/subdir.mk
-include build/utils/CMakeFiles/utils.dir/src/Time/subdir.mk
-include build/sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/subdir.mk
-include build/sdl_utils/CMakeFiles/sdl_utils.dir/src/subdir.mk
-include build/manager_utils/CMakeFiles/manager_utils.dir/src/managers/subdir.mk
-include build/CMakeFiles/Managers.dir/Game/subdir.mk
-include build/CMakeFiles/Managers.dir/Engine/subdir.mk
-include build/CMakeFiles/Managers.dir/subdir.mk
-include build/CMakeFiles/3.22.1/CompilerIdCXX/subdir.mk
-include Game/subdir.mk
-include Engine/subdir.mk
-include subdir.mk
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Managers
BUILD_ARTIFACT_EXTENSION :=
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: main-build

# Main-build Target
main-build: Managers

# Tool invocations
Managers: $(OBJS) $(USER_OBJS) makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross G++ Linker'
	g++  -o "Managers" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) Managers
	-@echo ' '

.PHONY: all clean dependents main-build

-include ../makefile.targets
