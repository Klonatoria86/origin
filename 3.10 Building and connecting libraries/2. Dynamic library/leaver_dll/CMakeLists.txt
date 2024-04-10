cmake_minimum_required(VERSION 3.16)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../../bin)
project(Leaver_dll)
set(SOURCE_DLL Leaver.cpp Leaver.h)
 
add_library (Leaver_dll  SHARED ${SOURCE_DLL})