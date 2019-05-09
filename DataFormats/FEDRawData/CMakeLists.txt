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


install( TARGETS DataFormatsFEDRawData DESTINATION  lib  EXPORT cmssw::DataFormatsFEDRawData)

include_directories(
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

include_directories(${CMAKE_SOURCE_DIR})

include_directories(/usr/include/)

reflex_build_dictionary(DataFormatsFEDRawData src/classes.h src/classes_def.xml)

add_dependencies(DataFormatsFEDRawData DataFormatsFEDRawData-dictgen)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsFEDRawDataDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsFEDRawData.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

