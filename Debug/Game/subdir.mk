################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Game/Game.cpp 

CPP_DEPS += \
./Game/Game.d 

OBJS += \
./Game/Game.o 


# Each subdirectory must supply rules for building sources it contributes
Game/%.o: ../Game/%.cpp Game/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-Game

clean-Game:
	-$(RM) ./Game/Game.d ./Game/Game.o

.PHONY: clean-Game

