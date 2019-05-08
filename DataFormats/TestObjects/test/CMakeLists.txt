add_executable(Enum_t
  Enum_t.cpp
)

target_include_directories(Enum_t PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(Enum_t PUBLIC
 ${Boost_INCLUDE_DIR}
 ${CPPUNIT_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(Enum_t PUBLIC
  ${CPPUNIT_LIBRARY}
  DataFormatsCommon
  DataFormatsStdDictionaries
  DataFormatsTestObjects
  DataFormatsWrappedStdDictionaries
  ROOT::Core
)

add_test(NAME Enum_t COMMAND Enum_t)
