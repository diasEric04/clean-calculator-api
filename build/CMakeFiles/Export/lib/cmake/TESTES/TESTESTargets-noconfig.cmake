#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Testes::testes" for configuration ""
set_property(TARGET Testes::testes APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(Testes::testes PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtestes.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS Testes::testes )
list(APPEND _IMPORT_CHECK_FILES_FOR_Testes::testes "${_IMPORT_PREFIX}/lib/libtestes.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
