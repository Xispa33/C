cmake_minimum_required(VERSION 3.18)
project(BASE_CXX VERSION 1.0.0)

enable_testing()

# cxx folder contains a librairy which is needed for the creation of 
# the executable. Therefore, cxx needs to be compiled before main.
# add_subdirectory(cxx) therefore needs to be placed before 
# add_subdirectory(main)
add_subdirectory(c/base_math)
add_subdirectory(c/advanced_math)
add_subdirectory(c/cg)
add_subdirectory(c/main)

add_subdirectory(tests/cxx)
#add_subdirectory(tests/googletest)