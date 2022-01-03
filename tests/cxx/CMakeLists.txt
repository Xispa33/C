cmake_minimum_required(VERSION 3.8)

set(This app_test_exe)

set(Sources
    main/main.cpp
)

add_executable(${This} ${Sources})

#include_directories("/Users/brice/Desktop/Codes/GoogleTest/C_base")

target_link_libraries(${This} PUBLIC
#    example
    gtest_main
)

add_test(NAME ${This}
         COMMAND ${This}
)