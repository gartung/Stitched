if(BUILDTEST)
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

install( TARGETS DataFormatsFEDRawData DESTINATION  lib  EXPORT stitched::DataFormatsFEDRawData)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
include_directories(${Boost_INCLUDE_DIR})
include_directories(${MD5_INCLUDE_DIR})
include_directories(${ROOT_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIRS})
include_directories(${TINYXML2_INCLUDE_DIR})
include_directories(${UUID_INCLUDE_DIR})
reflex_generate_dictionary(DataFormatsFEDRawData src/classes.h src/classes_def.xml ROOTMAPLIB DataFormatsFEDRawDataDict)
add_library(DataFormatsFEDRawDataDict SHARED DataFormatsFEDRawDataDict.cpp)
add_dependencies(DataFormatsFEDRawData DataFormatsFEDRawDataGen)
install( TARGETS DataFormatsFEDRawDataDict DESTINATION lib EXPORT stitched::DataFormatsFEDRawDataDict )
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsFEDRawDataDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsFEDRawData.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)
