cmake_minimum_required(VERSION 3.28.1)
project(main)

include_directories(include)
link_directories(libs)

aux_source_directory(src src_files)
add_executable(main hello.cpp ${src_files})