cmake_minimum_required(VERSION 3.18)

# Compilations flags
if ((RUN_MODE STREQUAL "Coverage"))
    set(CMAKE_C_FLAGS "-g -O0 --coverage -fno-exceptions -fprofile-arcs -ftest-coverage")
    #set(CMAKE_C_FLAGS_DEBUG "-std=gnu99 -Wall -pedantic -g -I/usr/local/include/cmocka.h")
endif()