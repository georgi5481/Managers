################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../utils/src/thread/ThreadUtils.cpp 

CPP_DEPS += \
./utils/src/thread/ThreadUtils.d 

OBJS += \
./utils/src/thread/ThreadUtils.o 


# Each subdirectory must supply rules for building sources it contributes
utils/src/thread/%.o: ../utils/src/thread/%.cpp utils/src/thread/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-utils-2f-src-2f-thread

clean-utils-2f-src-2f-thread:
	-$(RM) ./utils/src/thread/ThreadUtils.d ./utils/src/thread/ThreadUtils.o

.PHONY: clean-utils-2f-src-2f-thread

