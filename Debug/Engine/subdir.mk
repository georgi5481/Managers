################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Engine/Engine.cpp \
../Engine/EngineConfigLoader.cpp 

CPP_DEPS += \
./Engine/Engine.d \
./Engine/EngineConfigLoader.d 

OBJS += \
./Engine/Engine.o \
./Engine/EngineConfigLoader.o 


# Each subdirectory must supply rules for building sources it contributes
Engine/%.o: ../Engine/%.cpp Engine/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-Engine

clean-Engine:
	-$(RM) ./Engine/Engine.d ./Engine/Engine.o ./Engine/EngineConfigLoader.d ./Engine/EngineConfigLoader.o

.PHONY: clean-Engine

