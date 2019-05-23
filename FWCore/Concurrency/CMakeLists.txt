add_subdirectory(test)
add_library(FWCoreConcurrency SHARED ${FWCoreConcurrency_EXTRA_SOURCES}
  src/SerialTaskQueue.cc
  src/SharedResourceNames.cc
  src/ThreadSafeOutputFileStream.cc
  src/WaitingTaskList.cc
  src/WaitingTaskWithArenaHolder.cc
  src/Xerces.cc
)

set_target_properties(FWCoreConcurrency PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(FWCoreConcurrency PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreConcurrency PUBLIC
${TBB_INCLUDE_DIRS}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(FWCoreConcurrency PUBLIC
${TBB_LIBRARIES}
${XERCESC_LIBRARIES}
)


add_python_rules(FWCore/Concurrency)
install( TARGETS FWCoreConcurrency DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)

