add_subdirectory(Catalog)
add_subdirectory(Common)
add_subdirectory(Concurrency)
add_subdirectory(FWLite)
add_subdirectory(Framework)
add_subdirectory(Integration)
add_subdirectory(MessageLogger)
add_subdirectory(MessageService)
add_subdirectory(Modules)
add_subdirectory(ParameterSet)
add_subdirectory(PluginManager)
add_subdirectory(PrescaleService)
add_subdirectory(PythonParameterSet)
add_subdirectory(ServiceRegistry)
add_subdirectory(Services)
add_subdirectory(Sources)
add_subdirectory(TFWLiteSelector)
add_subdirectory(TFWLiteSelectorTest)
add_subdirectory(Utilities)
add_subdirectory(Version)
add_subdirectory(ParameterSetReader)
add_subdirectory(PyDevParameterSet)
add_subdirectory(TestProcessor)
add_subdirectory(Skeletons)
add_subdirectory(SOA)


# Meta-target that builds everything in this subsystem
add_custom_target(FWCore_all)
add_dependencies(FWCore_all
  FWCoreCommon
  FWCoreFWLite
  FWCoreMessageLogger
  FWCoreTFWLiteSelector
  FWCoreTFWLiteSelectorTest
)
