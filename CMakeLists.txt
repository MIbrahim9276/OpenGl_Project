cmake_minimum_required(VERSION 3.28.1)
set( CMAKE_CXX_COMPILER "C:\\MinGW\\bin\\g++.exe" )
set( CMAKE_C_COMPILER "C:\\MinGW\\bin\\gcc.exe" )
project(main)

aux_source_directory(src src_files)
add_executable(main hello.cpp ${src_files})

include_directories(include)
link_directories(libs)