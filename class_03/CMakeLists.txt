cmake_minimum_required(VERSION 3.16)
project(class_03 LANGUAGES CXX)

set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(main
    main.cpp
    src/marker.cpp
)

target_include_directories(main PRIVATE inc)
target_compile_features(main PRIVATE cxx_std_17)
