cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(cpp-playground)

set(EXECUTABLE_OUTPUT_PATH build/basic)
set(CMAKE_CXX_FLAGS "-Wall -std=c++14 ${CMAKE_CXX_FLAGS}")

file(GLOB basicSources src/basic/*.cpp)
foreach(filePath ${basicSources})
	get_filename_component(binFileName ${filePath} NAME_WE)
	add_executable(${binFileName} ${filePath})
endforeach()
