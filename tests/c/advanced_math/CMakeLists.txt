cmake_minimum_required(VERSION 3.0)
project(advanced_math VERSION 1.0)

#add_subdirectory(main/tu_main_01)
#add_subdirectory(main/tu_main_02)
#add_subdirectory(main/tu_main_03)
#add_subdirectory(base_math/tu_base_math_01)
#add_subdirectory(base_math/tu_base_math_02)
#add_subdirectory(advanced_math/tu_advanced_math_01)
#add_subdirectory(advanced_math/tu_advanced_math_02)
add_subdirectory(TU-03)
add_subdirectory(TU-04)
# A tester sur linux. --wrap pose probleme
#add_subdirectory(advanced_math/tu_advanced_math_05)

add_custom_target(${PROJECT_NAME}.build)
add_dependencies(${PROJECT_NAME}.build 
    TU-03.build
    TU-04.build
)

add_custom_target(${PROJECT_NAME}.run)
add_dependencies(${PROJECT_NAME}.run 
    TU-03.run
    TU-04.run
)
