cmake_minimum_required(VERSION 3.16)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../../lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../../bin)

project(Leaver_dll_v1)
set(SOURCE_DLL Leaver.cpp Leaver.h)
 
add_library (Leaver_dll SHARED ${SOURCE_DLL})
target_compile_definitions(Leaver_dll PRIVATE leaver_dll)