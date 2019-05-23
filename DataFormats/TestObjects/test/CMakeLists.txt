add_executable(Enum_t
  Enum_t.cpp
)

add_test(NAME Enum_t_CTest COMMAND Enum_t)

set_tests_properties(Enum_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(Enum_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(Enum_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(Enum_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(Enum_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(Enum_t PUBLIC
${CPPUNIT_LIBRARY}
DataFormatsCommon
DataFormatsStdDictionaries
DataFormatsTestObjects
DataFormatsWrappedStdDictionaries
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


