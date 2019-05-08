if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(DataFormatsCommon SHARED 
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
  ROOT::MathCore
  ROOT::Net
  ROOT::Thread
  ROOT::Tree
  Threads::Threads
)

install( TARGETS DataFormatsCommon DESTINATION  ${CMAKE_INSTALL_LIBDIR}  EXPORT stitched::DataFormatsCommon)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
include_directories(${Boost_INCLUDE_DIR})
include_directories(${MD5_INCLUDE_DIR})
include_directories(${ROOT_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIRS})
include_directories(${TINYXML2_INCLUDE_DIR})
include_directories(${UUID_INCLUDE_DIR})
reflex_build_dictionary(DataFormatsCommon src/classes.h src/classes_def.xml OPTIONS )
add_dependencies(DataFormatsCommon DataFormatsCommon-dictgen)
