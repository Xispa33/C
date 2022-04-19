cmake_minimum_required(VERSION 3.0)
project(c VERSION 1.0)

#add_subdirectory(main/tu_main_01)
#add_subdirectory(main/tu_main_02)
#add_subdirectory(main/tu_main_03)
#add_subdirectory(base_math/tu_base_math_01)
#add_subdirectory(base_math/tu_base_math_02)
#add_subdirectory(advanced_math/tu_advanced_math_01)
#add_subdirectory(advanced_math/tu_advanced_math_02)
#add_subdirectory(advanced_math/tu_advanced_math_03)
#add_subdirectory(advanced_math/tu_advanced_math_04)
# A tester sur linux. --wrap pose probleme
#add_subdirectory(advanced_math/tu_advanced_math_05)
add_subdirectory(advanced_math)

add_custom_target(${PROJECT_NAME}.build)
add_dependencies(${PROJECT_NAME}.build 
    advanced_math.build
)

add_custom_target(${PROJECT_NAME}.run)
add_dependencies(${PROJECT_NAME}.run 
    advanced_math.run
)
