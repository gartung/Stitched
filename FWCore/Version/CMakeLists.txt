add_library(FWCoreVersion SHARED 
  src/GetFileFormatVersion.cc
  src/GetReleaseVersion.cc
)

target_include_directories(FWCoreVersion PRIVATE ${CMAKE_SOURCE_DIR})

install( TARGETS FWCoreVersion DESTINATION  lib  EXPORT stitched::FWCoreVersion)

