if(${BUILDTEST})
add_subdirectory(test)
endif()
add_library(DataFormatsFEDRawData SHARED 
  src/FEDHeader.cc
  src/FEDNumbering.cc
  src/FEDRawData.cc
  src/FEDRawDataCollection.cc
  src/FEDTrailer.cc
)

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


install( TARGETS DataFormatsFEDRawData DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::DataFormatsFEDRawData)

include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

reflex_build_dictionary(DataFormatsFEDRawData src/classes.h src/classes_def.xml)

add_library(DataFormatsFEDRawDataDictObj OBJECT ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsFEDRawData.cxx)

set_property(TARGET DataFormatsFEDRawDataDictObj PROPERTY POSITION_INDEPENDENT_CODE ON)

add_dependencies(DataFormatsFEDRawDataDictObj DataFormatsFEDRawData-dictgen)

add_dependencies(DataFormatsFEDRawData DataFormatsFEDRawDataDictObj)

target_link_libraries(DataFormatsFEDRawData PUBLIC $<TARGET_OBJECTS:DataFormatsFEDRawDataDictObj>)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsFEDRawData_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsFEDRawDataDict.rootmap DESTINATION ${CMAKE_INSTALL_LIBDIR})

