add_executable(DiagStreamerFile
  DiagStreamerFile.cpp
)

target_include_directories(DiagStreamerFile PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DiagStreamerFile PUBLIC
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

target_link_libraries(DiagStreamerFile PUBLIC
FWCoreUtilities
IOPoolStreamer
)


install( TARGETS DiagStreamerFile DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::DiagStreamerFile)

add_executable(CalcAdler32
  CalcAdler32.cpp
)

target_include_directories(CalcAdler32 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(CalcAdler32 PUBLIC
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

target_link_libraries(CalcAdler32 PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreUtilities
IOPoolStreamer
Python2::Python
Threads::Threads
)


install( TARGETS CalcAdler32 DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::CalcAdler32)

