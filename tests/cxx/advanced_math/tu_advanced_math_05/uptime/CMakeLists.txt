add_library(proc_uptime proc_uptime.c)

include_directories(
    /Users/brice/Desktop/Codes/C/tests/frameworks/cmocka-1.1.5/include/
)

#target_link_libraries(${This} PUBLIC
    #${CMOCKA_SHARED_LIBRARY}
#    /Users/brice/Desktop/Codes/C/tests/frameworks/cmocka-1.1.5/build/src/libcmocka.dylib
#)

add_executable(uptime uptime.c)
target_compile_options(uptime PRIVATE ${DEFAULT_C_COMPILE_FLAGS})
target_link_libraries(uptime 
    proc_uptime
    #/Users/brice/Desktop/Codes/C/tests/frameworks/cmocka-1.1.5/build/src/libcmocka.dylib
)

set_property(TARGET
                 uptime
             PROPERTY
                 LINK_FLAGS
                     "${DEFAULT_LINK_FLAGS}")

#add_cmocka_test(test_uptime
#                SOURCES test_uptime.c
#                COMPILE_OPTIONS ${DEFAULT_C_COMPILE_FLAGS}
#                LINK_LIBRARIES ${CMOCKA_SHARED_LIBRARY})
set(This test_uptime)



set(Sources
    test_uptime.c
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
MESSAGE("${LINK_FLAGS}")
set_property(TARGET
                 test_uptime
             PROPERTY
                 LINK_FLAGS
                    "${DEFAULT_LINK_FLAGS} -Wl,--wrap=uptime")
