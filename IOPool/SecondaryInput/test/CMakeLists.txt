add_executable(TestSecondaryInput
  TestSecondaryInput.cpp
)

add_test(NAME TestSecondaryInput_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/TestSecondaryInput.sh)
set_tests_properties(TestSecondaryInput_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestSecondaryInput_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestSecondaryInput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestSecondaryInput PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(TestSecondaryInput PUBLIC
FWCoreUtilities
)


add_library(SecondaryProducer SHARED ${SecondaryProducer_EXTRA_SOURCES}
  SecondaryProducer.cc
)

set_target_properties(SecondaryProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(SecondaryProducer PROPERTIES PREFIX "plugin")
target_include_directories(SecondaryProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(SecondaryProducer PUBLIC
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

target_link_libraries(SecondaryProducer PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreSources
FWCoreUtilities
)


