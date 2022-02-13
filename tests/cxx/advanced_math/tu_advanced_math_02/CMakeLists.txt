cmake_minimum_required(VERSION 3.8)

set(This tu_advanced_math_02_exe)

set(Sources
    advanced_math.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    advanced_math
    gtest_main
)

add_test(NAME ${This}
         COMMAND ${This}
)