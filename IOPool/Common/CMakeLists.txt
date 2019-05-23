add_subdirectory(bin)
add_subdirectory(test)
add_library(IOPoolCommon SHARED ${IOPoolCommon_EXTRA_SOURCES}
  src/RootServiceChecker.cc
)

set_target_properties(IOPoolCommon PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(IOPoolCommon PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolCommon PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(IOPoolCommon PUBLIC
FWCoreServiceRegistry
FWCoreUtilities
)


add_python_rules(IOPool/Common)
install( TARGETS IOPoolCommon DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)

