add_subdirectory(test)
include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

cms_rootdict(DataFormatsCommon src/classes.h src/classes_def.xml)

add_library(DataFormatsCommon SHARED ${DataFormatsCommon_EXTRA_SOURCES}
  src/CommonExceptions.cc
  src/ConvertHandle.cc
  src/DataFrameContainer.cc
  src/DetSetVectorNew.cc
  src/EDProductGetter.cc
  src/HandleBase.cc
  src/HandleExceptionFactory.cc
  src/MergeableCounter.cc
  src/MultiAssociation.cc
  src/OrphanHandleBase.cc
  src/ProductData.cc
  src/PtrVectorBase.cc
  src/RefCore.cc
  src/RefCoreStreamer.cc
  src/RefCoreWithIndex.cc
  src/ThinnedAssociation.cc
  src/ValidHandle.cc
  src/View.cc
  src/WrapperBase.cc
  src/setIsMergeable.cc
  src/traits.cc
)

add_rootdict_rules(DataFormatsCommon)

set_target_properties(DataFormatsCommon PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(DataFormatsCommon PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DataFormatsCommon PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(DataFormatsCommon PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsProvenance
DataFormatsStdDictionaries
FWCoreMessageLogger
FWCoreUtilities
Python2::Python
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
Threads::Threads
)


add_python_rules(DataFormats/Common)
install( TARGETS DataFormatsCommon DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)

