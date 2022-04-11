cmake_minimum_required(VERSION 3.18)

add_custom_target(app_exe.build)
add_dependencies(app_exe.build
    app_exe
)

add_custom_target(app_exe.run)
add_dependencies(app_exe.run
    app_exe.build
)

add_executable(app_exe main.c)

target_link_libraries(app_exe PUBLIC 
    base_math 
    advanced_math 
    cg_lib
)

#set_target_properties(app_exe PROPERTIES 
#    SUFFIX .exe
#)