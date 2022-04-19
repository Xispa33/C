cmake_minimum_required(VERSION 3.18)
project(c VERSION 1.0.0)

#enable_testing()

# c folder contains a librairy which is needed for the creation of 
# the executable. Therefore, c needs to be compiled before main.
# add_subdirectory(c) therefore needs to be placed before 
# add_subdirectory(main)
add_subdirectory(base_math)
add_subdirectory(advanced_math)
add_subdirectory(cg)
add_subdirectory(main)

