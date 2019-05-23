add_executable(Exception_t
  Exception_t.cpp
)

add_test(NAME Exception_t_CTest COMMAND Exception_t)

set_tests_properties(Exception_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(Exception_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(Exception_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(Exception_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(Exception_t PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(Exception_t PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(EDMException_t
  EDMException_t.cpp
)

add_test(NAME EDMException_t_CTest COMMAND EDMException_t)

set_tests_properties(EDMException_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(EDMException_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(EDMException_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(EDMException_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(EDMException_t PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(EDMException_t PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(TestHelper_t
  TestHelper_t.cpp
)

add_test(NAME TestHelper_t_2_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/one.sh)
set_tests_properties(TestHelper_t_2_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestHelper_t_2_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME TestHelper_t_3_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/two.sh)
set_tests_properties(TestHelper_t_3_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestHelper_t_3_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME TestHelper_t_4_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/testFriendlyNames.sh)
set_tests_properties(TestHelper_t_4_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestHelper_t_4_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME TestHelper_t_5_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/testAdler32.sh)
set_tests_properties(TestHelper_t_5_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestHelper_t_5_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestHelper_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestHelper_t PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(TestHelper_t PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(value_ptr_t
  value_ptr_t.cpp
)

add_test(NAME value_ptr_t_CTest COMMAND value_ptr_t)

set_tests_properties(value_ptr_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(value_ptr_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(value_ptr_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(value_ptr_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(value_ptr_t PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(value_ptr_t PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(atomic_value_ptr_t
  atomic_value_ptr_t.cpp
)

add_test(NAME atomic_value_ptr_t_CTest COMMAND atomic_value_ptr_t)

set_tests_properties(atomic_value_ptr_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(atomic_value_ptr_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(atomic_value_ptr_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(atomic_value_ptr_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(atomic_value_ptr_t PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(atomic_value_ptr_t PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(Digest_t
  Digest_t.cpp
)

add_test(NAME Digest_t_CTest COMMAND Digest_t)

set_tests_properties(Digest_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(Digest_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(Digest_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(Digest_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(Digest_t PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(Digest_t PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(CRC32Calculator_t
  CRC32Calculator_t.cpp
)

add_test(NAME CRC32Calculator_t_CTest COMMAND CRC32Calculator_t)

set_tests_properties(CRC32Calculator_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(CRC32Calculator_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(CRC32Calculator_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(CRC32Calculator_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(CRC32Calculator_t PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(CRC32Calculator_t PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(Guid_t
  Guid_t.cpp
)

add_test(NAME Guid_t_CTest COMMAND Guid_t)

set_tests_properties(Guid_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(Guid_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(Guid_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(Guid_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(Guid_t PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(Guid_t PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(typedefs_t
  typedefs_t.cpp
)

add_test(NAME typedefs_t_CTest COMMAND typedefs_t)

set_tests_properties(typedefs_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(typedefs_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(typedefs_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(typedefs_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(typedefs_t PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(typedefs_t PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(HRTime_t
  HRTime_t.cpp
)

add_test(NAME HRTime_t_CTest COMMAND HRTime_t)

set_tests_properties(HRTime_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(HRTime_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(HRTime_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(HRTime_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(HRTime_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(HRTime_t PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(isFinite_t
  isFinite_t.cpp
)

add_test(NAME isFinite_t_CTest COMMAND isFinite_t)

set_tests_properties(isFinite_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(isFinite_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(isFinite_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(isFinite_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(isFinite_t PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(isFinite_t PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(clone_ptr_t
  clone_ptr_t.cpp
)

add_test(NAME clone_ptr_t_CTest COMMAND clone_ptr_t)

set_tests_properties(clone_ptr_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(clone_ptr_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(clone_ptr_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(clone_ptr_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(clone_ptr_t PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(clone_ptr_t PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(MallocOpts_t
  MallocOpts_t.cpp
)

add_test(NAME MallocOpts_t_CTest COMMAND MallocOpts_t)

set_tests_properties(MallocOpts_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(MallocOpts_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(MallocOpts_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(MallocOpts_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(MallocOpts_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(MallocOpts_t PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(testFWCoreUtilities
  callxnowait_t.cppunit.cpp
  cputimer_t.cppunit.cpp
  esinputtag.cppunit.cpp
  extensioncord_t.cppunit.cpp
  friendlyname_t.cppunit.cpp
  indexset.cppunit.cpp
  propagate_const_t.cppunit.cpp
  reusableobjectholder_t.cppunit.cpp
  signal_t.cppunit.cpp
  soatuple_t.cppunit.cpp
  transform.cppunit.cpp
  typeid_t.cppunit.cpp
  typeidbase_t.cppunit.cpp
  vecarray.cppunit.cpp
)

add_test(NAME testFWCoreUtilities_CTest COMMAND testFWCoreUtilities)

set_tests_properties(testFWCoreUtilities_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(testFWCoreUtilities_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(testFWCoreUtilities PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(testFWCoreUtilities PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreUtilities PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(testFWCoreUtilities PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(InputTag_t
  InputTag_t.cpp
)

add_test(NAME InputTag_t_CTest COMMAND InputTag_t)

set_tests_properties(InputTag_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(InputTag_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(InputTag_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(InputTag_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(InputTag_t PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(InputTag_t PUBLIC
${TBB_LIBRARIES}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(EDGetToken_t
  EDGetToken_t.cpp
)

add_test(NAME EDGetToken_t_CTest COMMAND EDGetToken_t)

set_tests_properties(EDGetToken_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(EDGetToken_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(EDGetToken_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(EDGetToken_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(EDGetToken_t PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(EDGetToken_t PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(RunningAverage_t
  RunningAverage_t.cpp
)

add_test(NAME RunningAverage_t_CTest COMMAND RunningAverage_t)

set_tests_properties(RunningAverage_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(RunningAverage_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(RunningAverage_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(RunningAverage_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(RunningAverage_t PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(RunningAverage_t PUBLIC
${TBB_LIBRARIES}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
Python2::Python
Threads::Threads
)


