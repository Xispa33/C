cmake_minimum_required(VERSION 3.18)

function(find_test_id TEST_ID)
    get_filename_component(FNAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
    set(${TEST_ID} ${FNAME} PARENT_SCOPE)
endfunction()

function(target_special_setup_unity PROJECT_NAME TEST_NAME)
    set(TEST_ID "")
    find_test_id(TEST_ID)

    if(TEST_ID MATCHES "^TU")
        set(BUILD_DIR ${BUILD_TU_TEST_DIR})
    elseif(TEST_ID MATCHES "^TI")
        set(BUILD_DIR ${BUILD_INTEGRATION_TESTS_DIR})
    endif()

    if((RUN_MODE STREQUAL "Coverage"))
        setup_target_for_coverage_lcov(
            NAME ${PROJECT_NAME}.run  # Name for custom target.
            EXECUTABLE ${TEST_NAME}   # Name of the test driver executable that runs the tests.
        )
    else()
        add_custom_target(${PROJECT_NAME}.run
            COMMAND ${BUILD_DIR}/${TEST_ID}/${TEST_NAME} > ${TEST_NAME}.testresult
            COMMAND python3 ${UNITY_DIR}/auto/unity_to_junit.py ${BUILD_DIR}/${TEST_ID}/
            COMMAND mv ${BUILD_DIR}/${TEST_ID}/result.xml ${BUILD_DIR}/${TEST_ID}/${TEST_ID}.xml
            DEPENDS ${PROJECT_NAME}.build
        )
    endif()
endfunction()

function(target_special_setup_cmocka PROJECT_NAME TEST_NAME)
    set(TEST_ID "")
    find_test_id(TEST_ID)

    if(TEST_ID MATCHES "^TU")
        set(BUILD_DIR ${BUILD_TU_TEST_DIR})
    elseif(TEST_ID MATCHES "^TI")
        set(BUILD_DIR ${BUILD_INTEGRATION_TESTS_DIR})
    endif()

    if((RUN_MODE STREQUAL "Coverage"))
        setup_target_for_coverage_lcov(
            NAME ${PROJECT_NAME}.run  # Name for custom target.
            EXECUTABLE ${TEST_NAME}   # Name of the test driver executable that runs the tests.
        )
    else()
        add_custom_target(${PROJECT_NAME}.run
            COMMAND CMOCKA_MESSAGE_OUTPUT=xml ${BUILD_DIR}/${TEST_ID}/${TEST_NAME} > ${BUILD_DIR}/${TEST_ID}/${TEST_ID}.xml
            DEPENDS ${PROJECT_NAME}.build
        )
    endif()
endfunction()