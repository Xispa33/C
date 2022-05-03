cmake_minimum_required(VERSION 3.0)
project(frameworks VERSION 1.0)

add_subdirectory(cmocka)

add_custom_target(${PROJECT_NAME}.build)
#add_dependencies(${PROJECT_NAME}.build)

add_custom_target(${PROJECT_NAME}.run)
#add_dependencies(${PROJECT_NAME}.run)
