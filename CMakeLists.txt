cmake_minimum_required(VERSION 3.18)
project(BASE_CXX VERSION 1.0.0)

include(cmake/usr_paths.cmake)
include(cmake/scripts.cmake)
include(cmake/compile.cmake)
include(cmake/CodeCoverage.cmake)

add_subdirectory(c)
add_subdirectory(tests)