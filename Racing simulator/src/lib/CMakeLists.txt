cmake_minimum_required(VERSION 3.16)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../../lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../../bin)

project(functions_library)
set(SOURSE_LIB Functions.h Functions.cpp)
set(SOURSE_DLL Air.cpp Bot_vezde_hod.cpp Centavr.cpp Cover_sam_let.cpp Error.cpp Ground.cpp Metla.cpp Orel.cpp Verblud.cpp Verblud_Speed.cpp)

add_library(functions_lib STATIC ${SOURSE_LIB})
add_library(functions_dll SHARED ${SOURSE_DLL})