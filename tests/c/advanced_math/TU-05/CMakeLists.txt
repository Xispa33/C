project(TU-05)

set(TEST_NAME tu_05)

#add_library(proc_uptime2 proc_uptime.c)

set(SRC
    test_uptime.c
)

include_directories(
    ${CMOCKA_DIR}/include/
)

add_custom_target(${PROJECT_NAME}.build
    COMMAND make
)

add_executable(${TEST_NAME} ${SRC})


target_link_libraries(${TEST_NAME} PUBLIC
    ${CMOCKA_BUILD_DIR}/src/${CMOCKA_LIB}
)

set(TEST_FRAMEWORK cmocka)

target_special_setup(${PROJECT_NAME} ${TEST_NAME} ${TEST_FRAMEWORK})

set_property(TARGET ${TEST_NAME} 
             PROPERTY LINK_FLAGS "${DEFAULT_LINK_FLAGS} -Wl,--wrap=uptime"
)

