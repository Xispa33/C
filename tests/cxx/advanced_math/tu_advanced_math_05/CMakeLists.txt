# TODO Execute "$CMAKE_LINKER --help" and check for --wrap
#if (${CMAKE_C_COMPILER_ID} MATCHES "(GNU|Clang)" AND NOT APPLE)
#    add_subdirectory(chef_wrap)
#    add_subdirectory(uptime)
#endif()

#add_subdirectory(chef_wrap)
MESSAGE("${CMAKE_LINKER}")
add_subdirectory(uptime)
