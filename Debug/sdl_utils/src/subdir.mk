################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../sdl_utils/src/InputEvent.cpp \
../sdl_utils/src/MonitorWindow.cpp \
../sdl_utils/src/Renderer.cpp \
../sdl_utils/src/SDLLoader.cpp \
../sdl_utils/src/Texture.cpp 

CPP_DEPS += \
./sdl_utils/src/InputEvent.d \
./sdl_utils/src/MonitorWindow.d \
./sdl_utils/src/Renderer.d \
./sdl_utils/src/SDLLoader.d \
./sdl_utils/src/Texture.d 

OBJS += \
./sdl_utils/src/InputEvent.o \
./sdl_utils/src/MonitorWindow.o \
./sdl_utils/src/Renderer.o \
./sdl_utils/src/SDLLoader.o \
./sdl_utils/src/Texture.o 


# Each subdirectory must supply rules for building sources it contributes
sdl_utils/src/%.o: ../sdl_utils/src/%.cpp sdl_utils/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-sdl_utils-2f-src

clean-sdl_utils-2f-src:
	-$(RM) ./sdl_utils/src/InputEvent.d ./sdl_utils/src/InputEvent.o ./sdl_utils/src/MonitorWindow.d ./sdl_utils/src/MonitorWindow.o ./sdl_utils/src/Renderer.d ./sdl_utils/src/Renderer.o ./sdl_utils/src/SDLLoader.d ./sdl_utils/src/SDLLoader.o ./sdl_utils/src/Texture.d ./sdl_utils/src/Texture.o

.PHONY: clean-sdl_utils-2f-src

