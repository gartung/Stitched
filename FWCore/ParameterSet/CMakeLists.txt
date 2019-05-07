add_subdirectory(bin)
if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(FWCoreParameterSet SHARED 
  src/ANDGroupDescription.cc
  src/AllowedLabelsDescription.cc
  src/AllowedLabelsDescriptionBase.cc
  src/ConfigurationDescriptions.cc
  src/DocFormatHelper.cc
  src/EmptyGroupDescription.cc
  src/Entry.cc
  src/FileInPath.cc
  src/FillDescriptionFromPSet.cc
  src/IfExistsDescription.cc
  src/IllegalParameters.cc
  src/ORGroupDescription.cc
  src/ParameterDescription.cc
  src/ParameterDescriptionBase.cc
  src/ParameterDescriptionCases.cc
  src/ParameterDescriptionNode.cc
  src/ParameterSet.cc
  src/ParameterSetConverter.cc
  src/ParameterSetDescription.cc
  src/ParameterSetDescriptionFillerBase.cc
  src/ParameterSetDescriptionFillerPluginFactory.cc
  src/ParameterSetDescriptionTraits.cc
  src/ParameterSetEntry.cc
  src/ParameterSwitchBase.cc
  src/ParameterWildcard.cc
  src/ParameterWildcardBase.cc
  src/ProcessDesc.cc
  src/Registry.cc
  src/VParameterSetEntry.cc
  src/XORGroupDescription.cc
  src/types.cc
  src/validateTopLevelParameterSets.cc
)

target_include_directories(FWCoreParameterSet PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCoreParameterSet PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(FWCoreParameterSet PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${TBB_LIBRARIES}
  DataFormatsProvenance
  FWCoreMessageLogger
  FWCorePluginManager
  FWCoreUtilities
  dl
)

install( TARGETS FWCoreParameterSet DESTINATION  lib  EXPORT stitched::FWCoreParameterSet)

