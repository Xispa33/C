cmake_minimum_required(VERSION 3.18)
project(BASE_CXX VERSION 1.0.0)

include(cmake/usr_paths.cmake)
include(cmake/scripts.cmake)
include(cmake/compile.cmake)
include(cmake/CodeCoverage.cmake)

#enable_testing()

# c folder contains a librairy which is needed for the creation of 
# the executable. Therefore, c needs to be compiled before main.
# add_subdirectory(c) therefore needs to be placed before 
add_subdirectory(c)


add_subdirectory(tests)
#set(CMAKE_C_FLAGS_DEBUG "-std=gnu99 -Wall -pedantic -g -I/usr/local/include/cmocka.h")