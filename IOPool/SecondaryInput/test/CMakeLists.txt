add_executable(TestSecondaryInput
  TestSecondaryInput.cpp
)

target_include_directories(TestSecondaryInput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestSecondaryInput PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(TestSecondaryInput PUBLIC
FWCoreUtilities
)


add_test(TestSecondaryInput TestSecondaryInput)

add_library(SecondaryProducer SHARED 
  SecondaryProducer.cc
)

target_include_directories(SecondaryProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(SecondaryProducer PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(SecondaryProducer PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreSources
FWCoreUtilities
)


