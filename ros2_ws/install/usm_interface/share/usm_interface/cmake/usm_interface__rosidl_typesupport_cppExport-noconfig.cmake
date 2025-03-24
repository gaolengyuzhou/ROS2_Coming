#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "usm_interface::usm_interface__rosidl_typesupport_cpp" for configuration ""
set_property(TARGET usm_interface::usm_interface__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(usm_interface::usm_interface__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libusm_interface__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_NOCONFIG "libusm_interface__rosidl_typesupport_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS usm_interface::usm_interface__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_usm_interface::usm_interface__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libusm_interface__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
