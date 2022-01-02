cmake_minimum_required(VERSION 3.18)
project(BASE_CXX VERSION 1.0.0)

# cxx folder contains a librairy which is needed for the creation of 
# the executable. Therefore, cxx needs to be compiled before main.
# add_subdirectory(cxx) therefore needs to be placed before 
# add_subdirectory(main)
add_subdirectory(cxx/base_math)
add_subdirectory(cxx/advanced_math)
add_subdirectory(cxx/main)