# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Class_Schedulizer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Class_Schedulizer_autogen.dir\\ParseCache.txt"
  "Class_Schedulizer_autogen"
  )
endif()
