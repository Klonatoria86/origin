cmake_minimum_required(VERSION 3.16)
project(Static_library)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)

include_directories(greeter_lib)
 
add_executable(Static_library main.cpp)
add_subdirectory(greeter_lib)
target_link_libraries(Static_library Greeter_lib)