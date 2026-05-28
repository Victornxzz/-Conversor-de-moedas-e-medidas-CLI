cmake_minimum_required(VERSION 3.10)
project(ConversorCLI)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB SOURCES "src/*.cpp")
add_executable(Conversor ${SOURCES})

target_include_directories(Conversor PRIVATE include)
