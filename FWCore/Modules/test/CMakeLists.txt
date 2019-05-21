add_executable(TestFWCoreModules
  TestIntegration.cpp
)

target_include_directories(TestFWCoreModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreModules PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreModules PUBLIC
FWCoreModules
FWCoreUtilities
)


add_test(TestFWCoreModules TestFWCoreModules)

add_executable(TestFWCoreModulesTP
  test_catch2_LogErrorFilter.cc
  test_catch2_ModuloEventIDFilter.cc
  test_catch2_PathStatusFilter.cc
  test_catch2_Prescaler.cc
  test_catch2_main.cc
)

target_include_directories(TestFWCoreModulesTP PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreModulesTP PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreModulesTP PUBLIC
FWCoreModules
FWCoreTestProcessor
)


add_test(TestFWCoreModulesTP TestFWCoreModulesTP)

