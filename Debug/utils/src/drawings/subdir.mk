################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../utils/src/drawings/Color.cpp \
../utils/src/drawings/Point.cpp \
../utils/src/drawings/Rectangle.cpp 

CPP_DEPS += \
./utils/src/drawings/Color.d \
./utils/src/drawings/Point.d \
./utils/src/drawings/Rectangle.d 

OBJS += \
./utils/src/drawings/Color.o \
./utils/src/drawings/Point.o \
./utils/src/drawings/Rectangle.o 


# Each subdirectory must supply rules for building sources it contributes
utils/src/drawings/%.o: ../utils/src/drawings/%.cpp utils/src/drawings/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-utils-2f-src-2f-drawings

clean-utils-2f-src-2f-drawings:
	-$(RM) ./utils/src/drawings/Color.d ./utils/src/drawings/Color.o ./utils/src/drawings/Point.d ./utils/src/drawings/Point.o ./utils/src/drawings/Rectangle.d ./utils/src/drawings/Rectangle.o

.PHONY: clean-utils-2f-src-2f-drawings

