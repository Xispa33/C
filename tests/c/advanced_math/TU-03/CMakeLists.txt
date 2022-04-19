cmake_minimum_required(VERSION 3.8)
# Test simple Unity/CMock. Mocks have to be generated
project(TU-03)

set(TEST_NAME tu_03)

set(SRC
    tu_advanced_math.c
    ${ADVANCED_MATH_DIR_SRC}/advanced_math_2.c
    TestProductionCode_Runner.c
    ${C_MOCK_BUILD_DIR}/mock_advanced_math.c
)

include_directories(
    ${ADVANCED_MATH_DIR_INC}
    ${C_MOCK_BUILD_DIR}
    ${UNITY_DIR_SRC}
)


add_library(unity ${UNITY_DIR_SRC}/unity.c)
target_include_directories(unity PUBLIC ${UNITY_DIR_SRC})

add_library(cmock ${CMOCK_DIR}/src/cmock.c)
#add_library(cmock ${CMOCK_DIR}/src/cmock.c ${UNITY_DIR})
#target_link_libraries(cmock ${UNITY_DIR})
target_include_directories(cmock PUBLIC ${CMOCK_DIR}/src)

# Add function specifying modules to mock
execute_process (
    #COMMAND bash -c "ruby ${CMOCK_DIR}/scripts_2/create_makefile.rb"
    COMMAND bash -c "CMOCK_DIR=${CMOCK_DIR} ruby ${CMOCK_DIR}/scripts/create_mock.rb ${ADVANCED_MATH_DIR_INC}/advanced_math.h"
)

add_custom_target(${PROJECT_NAME}.build
    COMMAND make
)

add_executable(${TEST_NAME} ${SRC})

target_link_libraries(${TEST_NAME} PUBLIC
    cmock
    unity
)

target_special_setup_unity(${PROJECT_NAME} ${TEST_NAME})