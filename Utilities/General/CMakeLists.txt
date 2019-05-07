if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(UtilitiesGeneral SHARED 
  src/ClassName.cc
)

target_include_directories(UtilitiesGeneral PRIVATE ${CMAKE_SOURCE_DIR})

install( TARGETS UtilitiesGeneral DESTINATION  lib  EXPORT stitched::UtilitiesGeneral)

