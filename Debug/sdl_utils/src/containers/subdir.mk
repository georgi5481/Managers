################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../sdl_utils/src/containers/ImageContainer.cpp \
../sdl_utils/src/containers/TextContainer.cpp 

CPP_DEPS += \
./sdl_utils/src/containers/ImageContainer.d \
./sdl_utils/src/containers/TextContainer.d 

OBJS += \
./sdl_utils/src/containers/ImageContainer.o \
./sdl_utils/src/containers/TextContainer.o 


# Each subdirectory must supply rules for building sources it contributes
sdl_utils/src/containers/%.o: ../sdl_utils/src/containers/%.cpp sdl_utils/src/containers/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-sdl_utils-2f-src-2f-containers

clean-sdl_utils-2f-src-2f-containers:
	-$(RM) ./sdl_utils/src/containers/ImageContainer.d ./sdl_utils/src/containers/ImageContainer.o ./sdl_utils/src/containers/TextContainer.d ./sdl_utils/src/containers/TextContainer.o

.PHONY: clean-sdl_utils-2f-src-2f-containers

