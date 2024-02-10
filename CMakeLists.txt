cmake_minimum_required(VERSION 3.28.1)
project(main)

add_executable(main hello.cpp)

include_directories(include)
link_directories(libs)

aux_source_directory(src deps_files)
add_executable(deps ${deps_files})
add_dependencies(main ${deps})