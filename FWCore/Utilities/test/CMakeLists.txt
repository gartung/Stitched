add_executable(Exception_t
  Exception_t.cpp
)

target_include_directories(Exception_t PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(Exception_t PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(Exception_t PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreUtilities
  dl
)

add_test(NAME Exception_t COMMAND Exception_t)
add_executable(EDMException_t
  EDMException_t.cpp
)

target_include_directories(EDMException_t PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(EDMException_t PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(EDMException_t PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreUtilities
  dl
)

add_test(NAME EDMException_t COMMAND EDMException_t)
add_executable(TestHelper_t
  TestHelper_t.cpp
)

target_include_directories(TestHelper_t PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(TestHelper_t PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(TestHelper_t PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreUtilities
  dl
)

add_test(NAME TestHelper_t COMMAND TestHelper_t)
add_executable(value_ptr_t
  value_ptr_t.cpp
)

target_include_directories(value_ptr_t PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(value_ptr_t PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(value_ptr_t PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreUtilities
  dl
)

add_test(NAME value_ptr_t COMMAND value_ptr_t)
add_executable(atomic_value_ptr_t
  atomic_value_ptr_t.cpp
)

target_include_directories(atomic_value_ptr_t PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(atomic_value_ptr_t PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(atomic_value_ptr_t PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreUtilities
  dl
)

add_test(NAME atomic_value_ptr_t COMMAND atomic_value_ptr_t)
add_executable(Digest_t
  Digest_t.cpp
)

target_include_directories(Digest_t PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(Digest_t PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(Digest_t PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreUtilities
  dl
)

add_test(NAME Digest_t COMMAND Digest_t)
add_executable(CRC32Calculator_t
  CRC32Calculator_t.cpp
)

target_include_directories(CRC32Calculator_t PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(CRC32Calculator_t PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(CRC32Calculator_t PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreUtilities
  dl
)

add_test(NAME CRC32Calculator_t COMMAND CRC32Calculator_t)
add_executable(Guid_t
  Guid_t.cpp
)

target_include_directories(Guid_t PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(Guid_t PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(Guid_t PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreUtilities
  dl
)

add_test(NAME Guid_t COMMAND Guid_t)
add_executable(typedefs_t
  typedefs_t.cpp
)

target_include_directories(typedefs_t PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(typedefs_t PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(typedefs_t PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreUtilities
  dl
)

add_test(NAME typedefs_t COMMAND typedefs_t)
add_executable(HRTime_t
  HRTime_t.cpp
)

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
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${PYTHON_LIBRARY}
  FWCoreUtilities
  dl
)

add_test(NAME HRTime_t COMMAND HRTime_t)
add_executable(isFinite_t
  isFinite_t.cpp
)

target_include_directories(isFinite_t PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(isFinite_t PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(isFinite_t PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreUtilities
  dl
)

add_test(NAME isFinite_t COMMAND isFinite_t)
add_executable(clone_ptr_t
  clone_ptr_t.cpp
)

target_include_directories(clone_ptr_t PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(clone_ptr_t PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(clone_ptr_t PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreUtilities
  dl
)

add_test(NAME clone_ptr_t COMMAND clone_ptr_t)
add_executable(MallocOpts_t
  MallocOpts_t.cpp
)

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
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${PYTHON_LIBRARY}
  FWCoreUtilities
  dl
)

add_test(NAME MallocOpts_t COMMAND MallocOpts_t)
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
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${PYTHON_LIBRARY}
  FWCoreUtilities
  dl
)

add_test(NAME testFWCoreUtilities COMMAND testFWCoreUtilities)
add_executable(InputTag_t
  InputTag_t.cpp
)

target_include_directories(InputTag_t PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(InputTag_t PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(InputTag_t PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${TBB_LIBRARIES}
  FWCoreUtilities
  dl
)

add_test(NAME InputTag_t COMMAND InputTag_t)
add_executable(EDGetToken_t
  EDGetToken_t.cpp
)

target_include_directories(EDGetToken_t PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(EDGetToken_t PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(EDGetToken_t PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreUtilities
  dl
)

add_test(NAME EDGetToken_t COMMAND EDGetToken_t)
add_executable(RunningAverage_t
  RunningAverage_t.cpp
)

target_include_directories(RunningAverage_t PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(RunningAverage_t PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(RunningAverage_t PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${TBB_LIBRARIES}
  FWCoreUtilities
  dl
)

add_test(NAME RunningAverage_t COMMAND RunningAverage_t)
