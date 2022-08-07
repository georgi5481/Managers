################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../manager_utils/src/managers/DrawMgr.cpp \
../manager_utils/src/managers/RsrcMgr.cpp 

CPP_DEPS += \
./manager_utils/src/managers/DrawMgr.d \
./manager_utils/src/managers/RsrcMgr.d 

OBJS += \
./manager_utils/src/managers/DrawMgr.o \
./manager_utils/src/managers/RsrcMgr.o 


# Each subdirectory must supply rules for building sources it contributes
manager_utils/src/managers/%.o: ../manager_utils/src/managers/%.cpp manager_utils/src/managers/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-manager_utils-2f-src-2f-managers

clean-manager_utils-2f-src-2f-managers:
	-$(RM) ./manager_utils/src/managers/DrawMgr.d ./manager_utils/src/managers/DrawMgr.o ./manager_utils/src/managers/RsrcMgr.d ./manager_utils/src/managers/RsrcMgr.o

.PHONY: clean-manager_utils-2f-src-2f-managers

