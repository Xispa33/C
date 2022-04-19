export WORKSPACE_DIR ?= ${PWD}
export BUILD_DIR ?= ${WORKSPACE_DIR}/build

export C_DIR ?= ${WORKSPACE_DIR}/c
export TEST_DIR ?= ${WORKSPACE_DIR}/tests
export TESTS_FRAMEWORKS_DIR ?= ${TEST_DIR}/frameworks
export CMOCK_DIR ?= ${TESTS_FRAMEWORKS_DIR}/cmock
export CMOCKA_DIR ?= ${TESTS_FRAMEWORKS_DIR}/cmocka
export CMOCKA_BUILD_DIR ?= ${CMOCKA_DIR}/build

export ADVANCED_MATH_DIR ?= ${C_DIR}/advanced_math
export ADVANCED_MATH_DIR_SRC ?= ${ADVANCED_MATH_DIR}/src
export ADVANCED_MATH_DIR_INC ?= ${ADVANCED_MATH_DIR}/inc

export C_MOCK_BUILD_DIR ?= ${BUILD_DIR}/test/mocks
export UNITY_DIR ?= ${CMOCK_DIR}/vendor/unity
export UNITY_DIR_SRC ?= ${UNITY_DIR}/src

export BUILD_TEST_DIR ?= ${BUILD_DIR}/tests
export BUILD_C_DIR = ${BUILD_TEST_DIR}/c
export BUILD_TU_TEST_DIR ?= ${BUILD_C_DIR}/advanced_math
export CPPCHECK_OUT_FILE ?= cppcheck_issues.xml

#/Users/brice/Desktop/Codes/C/build/test/mocks/mock_advanced_math.c
