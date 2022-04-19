cmake_minimum_required(VERSION 3.18)

# Compilations flags
if ((RUN_MODE STREQUAL "Coverage"))
    set(CMAKE_C_FLAGS "-g -O0 --coverage -fno-exceptions -fprofile-arcs -ftest-coverage")
endif()