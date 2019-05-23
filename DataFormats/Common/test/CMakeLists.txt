add_executable(testDataFormatsCommon
  DetSetRefVector_t.cppunit.cc
  cloningptr_t.cppunit.cc
  containermask_t.cppunit.cc
  handle_t.cppunit.cc
  ptr_t.cppunit.cc
  ptrvector_t.cppunit.cc
  ref_t.cppunit.cc
  reftobase_t.cppunit.cc
  reftobaseprod_t.cppunit.cc
  reftobasevector_t.cppunit.cc
  testAssociationNew.cc
  testAssociationVector.cc
  testIDVectorMap.cc
  testOneToManyAssociation.cc
  testOneToOneAssociation.cc
  testOwnVector.cc
  testRangeMap.cc
  testRunner.cpp
  testSortedCollection.cc
  testValueMap.cc
  testValueMapNew.cc
)

add_test(NAME testDataFormatsCommon_CTest COMMAND testDataFormatsCommon)

set_tests_properties(testDataFormatsCommon_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(testDataFormatsCommon_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(testDataFormatsCommon PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(testDataFormatsCommon PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testDataFormatsCommon PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(testDataFormatsCommon PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(DetSetVector_t
  DetSetVector_t.cpp
)

add_test(NAME DetSetVector_t_CTest COMMAND DetSetVector_t)

set_tests_properties(DetSetVector_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(DetSetVector_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(DetSetVector_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(DetSetVector_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DetSetVector_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(DetSetVector_t PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(OwnVector_t
  OwnVector_t.cpp
)

add_test(NAME OwnVector_t_CTest COMMAND OwnVector_t)

set_tests_properties(OwnVector_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(OwnVector_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(OwnVector_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(OwnVector_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(OwnVector_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(OwnVector_t PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(DictionaryTools_t
  DictionaryTools_t.cpp
)

add_test(NAME DictionaryTools_t_CTest COMMAND DictionaryTools_t)

set_tests_properties(DictionaryTools_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(DictionaryTools_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(DictionaryTools_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(DictionaryTools_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DictionaryTools_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(DictionaryTools_t PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
DataFormatsStdDictionaries
DataFormatsWrappedStdDictionaries
Python2::Python
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
Threads::Threads
)


add_executable(Wrapper_t
  Wrapper_t.cpp
)

add_test(NAME Wrapper_t_CTest COMMAND Wrapper_t)

set_tests_properties(Wrapper_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(Wrapper_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(Wrapper_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(Wrapper_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(Wrapper_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(Wrapper_t PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(traits_t
  traits_t.cpp
)

add_test(NAME traits_t_CTest COMMAND traits_t)

set_tests_properties(traits_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(traits_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(traits_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(traits_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(traits_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(traits_t PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(RefCore_t
  RefCore_t.cpp
)

add_test(NAME RefCore_t_CTest COMMAND RefCore_t)

set_tests_properties(RefCore_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(RefCore_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(RefCore_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(RefCore_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(RefCore_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(RefCore_t PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(Ref_t
  Ref_t.cpp
)

add_test(NAME Ref_t_CTest COMMAND Ref_t)

set_tests_properties(Ref_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(Ref_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(Ref_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(Ref_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(Ref_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(Ref_t PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(RefVector_t
  RefVector_t.cpp
)

add_test(NAME RefVector_t_CTest COMMAND RefVector_t)

set_tests_properties(RefVector_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(RefVector_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(RefVector_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(RefVector_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(RefVector_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(RefVector_t PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(DataFrame_t
  DataFrame_t.cpp
)

add_test(NAME DataFrame_t_CTest COMMAND DataFrame_t)

set_tests_properties(DataFrame_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(DataFrame_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(DataFrame_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(DataFrame_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DataFrame_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(DataFrame_t PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(DetSetNew_t
  DetSetNew_t.cpp
)

add_test(NAME DetSetNew_t_CTest COMMAND DetSetNew_t)

set_tests_properties(DetSetNew_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(DetSetNew_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(DetSetNew_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(DetSetNew_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DetSetNew_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(DetSetNew_t PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(DetSetNewTS_t
  DetSetNewTS_t.cpp
)

add_test(NAME DetSetNewTS_t_CTest COMMAND DetSetNewTS_t)

set_tests_properties(DetSetNewTS_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(DetSetNewTS_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(DetSetNewTS_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(DetSetNewTS_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DetSetNewTS_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(DetSetNewTS_t PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(MapOfVectors_t
  MapOfVectors_t.cpp
)

add_test(NAME MapOfVectors_t_CTest COMMAND MapOfVectors_t)

set_tests_properties(MapOfVectors_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(MapOfVectors_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(MapOfVectors_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(MapOfVectors_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(MapOfVectors_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(MapOfVectors_t PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(exDSTV
  exDSTV.cpp
)

add_test(NAME exDSTV_CTest COMMAND exDSTV)

set_tests_properties(exDSTV_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(exDSTV_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(exDSTV PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(exDSTV PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(exDSTV PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(exDSTV PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(Trie_t
  Trie_t.cpp
)

add_test(NAME Trie_t_CTest COMMAND Trie_t)

set_tests_properties(Trie_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(Trie_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(Trie_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(Trie_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(Trie_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(Trie_t PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(exTrie
  exTrie.cpp
)

add_test(NAME exTrie_CTest COMMAND exTrie)

set_tests_properties(exTrie_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(exTrie_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(exTrie PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(exTrie PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(exTrie PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(exTrie PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(testBoostRange
  testBoostRange.cpp
)

add_test(NAME testBoostRange_CTest COMMAND testBoostRange)

set_tests_properties(testBoostRange_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(testBoostRange_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(testBoostRange PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(testBoostRange PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testBoostRange PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(testBoostRange PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


add_executable(testMultiAssociation
  testMultiAssociation.cc
  testRunner.cpp
)

add_test(NAME testMultiAssociation_CTest COMMAND testMultiAssociation)

set_tests_properties(testMultiAssociation_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(testMultiAssociation_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(testMultiAssociation PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(testMultiAssociation PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testMultiAssociation PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(testMultiAssociation PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
Python2::Python
Threads::Threads
)


