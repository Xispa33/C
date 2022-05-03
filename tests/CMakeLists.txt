cmake_minimum_required(VERSION 3.0)
project(tests VERSION 1.0)

add_subdirectory(c)
add_subdirectory(frameworks)


add_custom_target(${PROJECT_NAME}.build)
add_dependencies(${PROJECT_NAME}.build c.build frameworks.build)

add_custom_target(${PROJECT_NAME}.run)
add_dependencies(${PROJECT_NAME}.run c.run frameworks.run)

#add_subdirectory(googletest)