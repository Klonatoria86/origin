cmake_minimum_required(VERSION 3.16)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../../lib)
project(Greeter_lib)
set(SOURCE_LIB Greeter.h Greeter.cpp)
 
add_library (Greeter_lib STATIC ${SOURCE_LIB})