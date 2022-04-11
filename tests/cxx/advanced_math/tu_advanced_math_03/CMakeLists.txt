cmake_minimum_required(VERSION 3.8)
# Test simple Unity/CMock. Mocks have to be generated
set(This tu_advanced_math_03_exe)



set(Sources
    tu_advanced_math.c
    /Users/brice/Desktop/Codes/C/c/advanced_math/src/advanced_math_2.c
    TestProductionCode_Runner.c
    # Commande ruby au prealable pour ce fichier
    #CMOCK_DIR=/Users/brice/Desktop/Codes/C/tests/frameworks/cmock ruby tests/frameworks/cmock/scripts/create_mock.rb /Users/brice/Desktop/Codes/C/c/advanced_math/inc/advanced_math.h
    /Users/brice/Desktop/Codes/C/build/test/mocks/mock_advanced_math.c
)

include_directories(
    /Users/brice/Desktop/Codes/C/c/advanced_math/inc/inc
    /Users/brice/Desktop/Codes/C/c/advanced_math/inc
    /Users/brice/Desktop/Codes/C/build/test/mocks/
    /Users/brice/Desktop/Codes/C/tests/frameworks/cmock/vendor/unity/src/
)


add_library(unity /Users/brice/Desktop/Codes/C/tests/frameworks/Unity/src/unity.c)
target_include_directories(unity PUBLIC /Users/brice/Desktop/Codes/C/tests/frameworks/cmock/Unity/src/)

add_library(cmock /Users/brice/Desktop/Codes/C/tests/frameworks/cmock/src/cmock.c /Users/brice/Desktop/Codes/C/tests/frameworks/Unity)
target_link_libraries(cmock /Users/brice/Desktop/Codes/C/tests/frameworks/cmock/vendor/unity)
target_include_directories(cmock PUBLIC /Users/brice/Desktop/Codes/C/tests/frameworks/cmock/src)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    cmock
    unity
)

#add_custom_command(
#    OUTPUT toto
#    COMMAND ruby ../../frameworks/cmock/lib/cmock.rb ../../../c/advanced_math/inc/advanced_math.h
#    DEPENDS ${This}
#)
