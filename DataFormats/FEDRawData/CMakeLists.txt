add_subdirectory(test)
include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

cms_rootdict(DataFormatsFEDRawData src/classes.h src/classes_def.xml)

add_library(DataFormatsFEDRawData SHARED ${DataFormatsFEDRawData_EXTRA_SOURCES}
  src/FEDHeader.cc
  src/FEDNumbering.cc
  src/FEDRawData.cc
  src/FEDRawDataCollection.cc
  src/FEDTrailer.cc
)

add_rootdict_rules(DataFormatsFEDRawData)

set_target_properties(DataFormatsFEDRawData PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(DataFormatsFEDRawData PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DataFormatsFEDRawData PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(DataFormatsFEDRawData PUBLIC
DataFormatsCommon
FWCoreUtilities
)


add_python_rules(DataFormats/FEDRawData)
install( TARGETS DataFormatsFEDRawData DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)

