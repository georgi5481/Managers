################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../utils/src/Time/Time.cpp 

CPP_DEPS += \
./utils/src/Time/Time.d 

OBJS += \
./utils/src/Time/Time.o 


# Each subdirectory must supply rules for building sources it contributes
utils/src/Time/%.o: ../utils/src/Time/%.cpp utils/src/Time/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-utils-2f-src-2f-Time

clean-utils-2f-src-2f-Time:
	-$(RM) ./utils/src/Time/Time.d ./utils/src/Time/Time.o

.PHONY: clean-utils-2f-src-2f-Time

