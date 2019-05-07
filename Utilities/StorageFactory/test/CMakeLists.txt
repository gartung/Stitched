add_executable(test_StorageFactory_t0Repack
  t0Repack.cpp
)

target_include_directories(test_StorageFactory_t0Repack PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(test_StorageFactory_t0Repack PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(test_StorageFactory_t0Repack PUBLIC
  FWCoreParameterSet
  UtilitiesStorageFactory
)

add_test(NAME test_StorageFactory_t0Repack COMMAND test_StorageFactory_t0Repack)
add_executable(test_StorageFactory_randomread
  randomread.cpp
)

target_include_directories(test_StorageFactory_randomread PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(test_StorageFactory_randomread PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(test_StorageFactory_randomread PUBLIC
  FWCoreParameterSet
  UtilitiesStorageFactory
)

add_test(NAME test_StorageFactory_randomread COMMAND test_StorageFactory_randomread)
add_executable(test_StorageFactory_Any
  any.cpp
)

target_include_directories(test_StorageFactory_Any PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(test_StorageFactory_Any PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(test_StorageFactory_Any PUBLIC
  FWCoreParameterSet
  UtilitiesStorageFactory
)

add_test(NAME test_StorageFactory_Any COMMAND test_StorageFactory_Any)
add_executable(test_StorageFactory_Local
  local.cpp
)

target_include_directories(test_StorageFactory_Local PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(test_StorageFactory_Local PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(test_StorageFactory_Local PUBLIC
  FWCoreParameterSet
  UtilitiesStorageFactory
)

add_test(NAME test_StorageFactory_Local COMMAND test_StorageFactory_Local)
add_executable(test_StorageFactory_Local2
  local2.cpp
)

target_include_directories(test_StorageFactory_Local2 PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(test_StorageFactory_Local2 PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(test_StorageFactory_Local2 PUBLIC
  FWCoreParameterSet
  UtilitiesStorageFactory
)

add_test(NAME test_StorageFactory_Local2 COMMAND test_StorageFactory_Local2)
add_executable(test_StorageFactory_Local3
  local3.cpp
)

target_include_directories(test_StorageFactory_Local3 PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(test_StorageFactory_Local3 PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(test_StorageFactory_Local3 PUBLIC
  FWCoreParameterSet
  UtilitiesStorageFactory
)

add_test(NAME test_StorageFactory_Local3 COMMAND test_StorageFactory_Local3)
add_executable(test_StorageFactory_Ftp
  ftp.cpp
)

target_include_directories(test_StorageFactory_Ftp PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(test_StorageFactory_Ftp PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(test_StorageFactory_Ftp PUBLIC
  FWCoreParameterSet
  UtilitiesStorageFactory
)

add_test(NAME test_StorageFactory_Ftp COMMAND test_StorageFactory_Ftp)
add_executable(test_StorageFactory_Ftp2
  ftp2.cpp
)

target_include_directories(test_StorageFactory_Ftp2 PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(test_StorageFactory_Ftp2 PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(test_StorageFactory_Ftp2 PUBLIC
  FWCoreParameterSet
  UtilitiesStorageFactory
)

add_test(NAME test_StorageFactory_Ftp2 COMMAND test_StorageFactory_Ftp2)
add_executable(test_StorageFactory_Rfio2
  rfio2.cpp
)

target_include_directories(test_StorageFactory_Rfio2 PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(test_StorageFactory_Rfio2 PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(test_StorageFactory_Rfio2 PUBLIC
  FWCoreParameterSet
  UtilitiesStorageFactory
)

add_test(NAME test_StorageFactory_Rfio2 COMMAND test_StorageFactory_Rfio2)
add_executable(test_StorageFactory_Rfio3
  rfio3.cpp
)

target_include_directories(test_StorageFactory_Rfio3 PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(test_StorageFactory_Rfio3 PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(test_StorageFactory_Rfio3 PUBLIC
  FWCoreParameterSet
  UtilitiesStorageFactory
)

add_test(NAME test_StorageFactory_Rfio3 COMMAND test_StorageFactory_Rfio3)
add_executable(test_StorageFactory_Write
  write.cpp
)

target_include_directories(test_StorageFactory_Write PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(test_StorageFactory_Write PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(test_StorageFactory_Write PUBLIC
  FWCoreParameterSet
  UtilitiesStorageFactory
)

add_test(NAME test_StorageFactory_Write COMMAND test_StorageFactory_Write)
add_executable(test_StorageFactory_Mkstemp
  mkstemp.cpp
)

target_include_directories(test_StorageFactory_Mkstemp PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(test_StorageFactory_Mkstemp PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(test_StorageFactory_Mkstemp PUBLIC
  FWCoreParameterSet
  UtilitiesStorageFactory
)

add_test(NAME test_StorageFactory_Mkstemp COMMAND test_StorageFactory_Mkstemp)
