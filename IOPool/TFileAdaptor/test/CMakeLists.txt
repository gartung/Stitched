add_executable(test_TFileAdaptor_TFile
  tfileTest.cpp
)

add_test(NAME test_TFileAdaptor_TFile_CTest COMMAND test_TFileAdaptor_TFile)

set_tests_properties(test_TFileAdaptor_TFile_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(test_TFileAdaptor_TFile_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(test_TFileAdaptor_TFile PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(test_TFileAdaptor_TFile PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_TFileAdaptor_TFile PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(test_TFileAdaptor_TFile PUBLIC
FWCorePluginManager
IOPoolTFileAdaptor
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
UtilitiesStorageFactory
)


