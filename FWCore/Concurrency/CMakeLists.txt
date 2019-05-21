if(${BUILDTEST})
add_subdirectory(test)
endif()
add_library(FWCoreConcurrency SHARED 
  src/SerialTaskQueue.cc
  src/SharedResourceNames.cc
  src/ThreadSafeOutputFileStream.cc
  src/WaitingTaskList.cc
  src/WaitingTaskWithArenaHolder.cc
  src/Xerces.cc
)

target_include_directories(FWCoreConcurrency PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreConcurrency PUBLIC
${TBB_INCLUDE_DIRS}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(FWCoreConcurrency PUBLIC
${TBB_LIBRARIES}
${XERCESC_LIBRARIES}
)


install( TARGETS FWCoreConcurrency DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::FWCoreConcurrency)

