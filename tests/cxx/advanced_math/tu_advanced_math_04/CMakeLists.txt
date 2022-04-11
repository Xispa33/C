cmake_minimum_required(VERSION 3.8)

# Test simple CMocka. No Mocks here

set(This cmocka_no_mock)



set(Sources
    simple_test.c
    #calculator_test.c
    #calculator.c
)

include_directories(
    /Users/brice/Desktop/Codes/C/tests/frameworks/cmocka-1.1.5/include/
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    #${CMOCKA_SHARED_LIBRARY}
    /Users/brice/Desktop/Codes/C/tests/frameworks/cmocka-1.1.5/build/src/libcmocka.dylib
)

#set (CMAKE_CXX_FLAGS "-DNDEBUG")
#set(COMPILER_FLAGS "INC_LIST_SORT")
#add_definitions(${COMPILER_FLAGS})
#set(CMAKE_CXX_FLAGS "${COMPILER_FLAGS}")
#SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")

#set(COMPILER_FLAGS "${DEFAULT_C_COMPILE_FLAGS} -DUNIT_TESTING")
#add_definitions(${COMPILER_FLAGS})
#set(CMAKE_C_FLAGS "${DEFAULT_C_COMPILE_FLAGS} -DUNIT_TESTING")
#set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")


### The most simple test
#add_cmocka_test(simple_test
#                SOURCES simple_test.c
#                COMPILE_OPTIONS ${DEFAULT_C_COMPILE_FLAGS}
#                LINK_LIBRARIES ${CMOCKA_SHARED_LIBRARY})