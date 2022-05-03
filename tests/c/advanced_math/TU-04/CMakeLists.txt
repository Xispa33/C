cmake_minimum_required(VERSION 3.8)

# Test simple CMocka. No Mocks here
#set(This cmocka_no_mock)
project(TU-04)

set(TEST_NAME tu_04)

set(SRC
    simple_test.c
)

include_directories(
    ${CMOCKA_DIR}/include
)

add_custom_target(${PROJECT_NAME}.build
    COMMAND make
)

add_executable(${TEST_NAME} ${SRC})

target_link_libraries(${TEST_NAME} PUBLIC
    ${CMOCKA_BUILD_DIR}/src/libcmocka.dylib
)

set(TEST_FRAMEWORK cmocka)

target_special_setup(${PROJECT_NAME} ${TEST_NAME} ${TEST_FRAMEWORK})

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