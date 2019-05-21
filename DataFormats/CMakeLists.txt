add_subdirectory(Common)
add_subdirectory(FEDRawData)
add_subdirectory(FWLite)
add_subdirectory(Provenance)
add_subdirectory(StdDictionaries)
add_subdirectory(Streamer)
add_subdirectory(TestObjects)
add_subdirectory(WrappedStdDictionaries)


# Meta-target that builds everything in this subsystem
add_custom_target(DataFormats_all)
add_dependencies(DataFormats_all
  DataFormatsCommon
  DataFormatsFEDRawData
  DataFormatsFWLite
  DataFormatsProvenance
  DataFormatsStreamer
  DataFormatsTestObjects
)
