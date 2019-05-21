add_executable(EventMessageTest
  EventMessageTest.cpp
)

target_include_directories(EventMessageTest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(EventMessageTest PUBLIC
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
${ZLIB_INCLUDE_DIR}
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(EventMessageTest PUBLIC
IOPoolStreamer
)


add_test(EventMessageTest EventMessageTest)

add_executable(ReadStreamerFile
  ReadStreamerFile.cpp
)

target_include_directories(ReadStreamerFile PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ReadStreamerFile PUBLIC
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
${ZLIB_INCLUDE_DIR}
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(ReadStreamerFile PUBLIC
IOPoolStreamer
)


add_test(ReadStreamerFile ReadStreamerFile)

add_executable(WriteStreamerFile
  WriteStreamerFile.cpp
)

target_include_directories(WriteStreamerFile PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(WriteStreamerFile PUBLIC
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
${ZLIB_INCLUDE_DIR}
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(WriteStreamerFile PUBLIC
IOPoolStreamer
)


add_test(WriteStreamerFile WriteStreamerFile)

add_executable(RunThis_t
  RunThis_t.cpp
)

target_include_directories(RunThis_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(RunThis_t PUBLIC
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
${ZLIB_INCLUDE_DIR}
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(RunThis_t PUBLIC
IOPoolStreamer
)


add_test(RunThis_t RunThis_t)

add_library(StreamThingProducer SHARED 
  StreamThingProducer.cc
)

target_include_directories(StreamThingProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(StreamThingProducer PUBLIC
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
${ZLIB_INCLUDE_DIR}
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(StreamThingProducer PUBLIC
DataFormatsTestObjects
IOPoolStreamer
)


add_library(StreamThingAnalyzer SHARED 
  StreamThingAnalyzer.cc
)

target_include_directories(StreamThingAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(StreamThingAnalyzer PUBLIC
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
${ZLIB_INCLUDE_DIR}
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(StreamThingAnalyzer PUBLIC
IOPoolStreamer
)


