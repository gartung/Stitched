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


add_test(NAME testDataFormatsCommon COMMAND testDataFormatsCommon)

add_executable(DetSetVector_t
  DetSetVector_t.cpp
)

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


add_test(NAME DetSetVector_t COMMAND DetSetVector_t)

add_executable(OwnVector_t
  OwnVector_t.cpp
)

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


add_test(NAME OwnVector_t COMMAND OwnVector_t)

add_executable(DictionaryTools_t
  DictionaryTools_t.cpp
)

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


add_test(NAME DictionaryTools_t COMMAND DictionaryTools_t)

add_executable(Wrapper_t
  Wrapper_t.cpp
)

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


add_test(NAME Wrapper_t COMMAND Wrapper_t)

add_executable(traits_t
  traits_t.cpp
)

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


add_test(NAME traits_t COMMAND traits_t)

add_executable(RefCore_t
  RefCore_t.cpp
)

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


add_test(NAME RefCore_t COMMAND RefCore_t)

add_executable(Ref_t
  Ref_t.cpp
)

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


add_test(NAME Ref_t COMMAND Ref_t)

add_executable(RefVector_t
  RefVector_t.cpp
)

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


add_test(NAME RefVector_t COMMAND RefVector_t)

add_executable(DataFrame_t
  DataFrame_t.cpp
)

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


add_test(NAME DataFrame_t COMMAND DataFrame_t)

add_executable(DetSetNew_t
  DetSetNew_t.cpp
)

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


add_test(NAME DetSetNew_t COMMAND DetSetNew_t)

add_executable(DetSetNewTS_t
  DetSetNewTS_t.cpp
)

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


add_test(NAME DetSetNewTS_t COMMAND DetSetNewTS_t)

add_executable(MapOfVectors_t
  MapOfVectors_t.cpp
)

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


add_test(NAME MapOfVectors_t COMMAND MapOfVectors_t)

add_executable(exDSTV
  exDSTV.cpp
)

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


add_test(NAME exDSTV COMMAND exDSTV)

add_executable(Trie_t
  Trie_t.cpp
)

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


add_test(NAME Trie_t COMMAND Trie_t)

add_executable(exTrie
  exTrie.cpp
)

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


add_test(NAME exTrie COMMAND exTrie)

add_executable(testBoostRange
  testBoostRange.cpp
)

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


add_test(NAME testBoostRange COMMAND testBoostRange)

add_executable(testMultiAssociation
  testMultiAssociation.cc
  testRunner.cpp
)

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


add_test(NAME testMultiAssociation COMMAND testMultiAssociation)

