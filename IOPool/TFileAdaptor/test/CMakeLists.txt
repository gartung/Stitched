add_executable(test_TFileAdaptor_TFile
  tfileTest.cpp
)

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
Core
FWCorePluginManager
IOPoolTFileAdaptor
MathCore
Net
RIO
Thread
Tree
UtilitiesStorageFactory
)


add_test(NAME test_TFileAdaptor_TFile COMMAND test_TFileAdaptor_TFile)

