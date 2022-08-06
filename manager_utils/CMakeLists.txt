cmake_minimum_required(VERSION 3.5.1)
	
project(manager_utils LANGUAGES CXX)		#this is the library folder !

set(_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)	
set(_INC_DIR ${_BASE_DIR}/manager_utils)						#we made the same folder name in order to be readable
set(_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)	

add_library(
	${PROJECT_NAME} STATIC

	${_INC_DIR}/config/DrawMgrCfg.h		#we have two separate directories after manager_utils
	
	${_INC_DIR}/managers/MgrBase.h	
	${_INC_DIR}/managers/DrawMgr.h	
	
	${_SRC_DIR}/managers/DrawMgr.cpp
	
)

set_target_cpp_standard(${PROJECT_NAME} 17)
enable_target_warnings(${PROJECT_NAME})

target_include_directories(
${PROJECT_NAME} 
	PUBLIC 
		${_BASE_DIR}	#we need to include the directory
	 
	
)

target_link_libraries(
${PROJECT_NAME} 
		PUBLIC
		sdl_utils	#we include sdl_utils cuz sdl_utils links publicaly utils, and utils is linked with the main project
		
)