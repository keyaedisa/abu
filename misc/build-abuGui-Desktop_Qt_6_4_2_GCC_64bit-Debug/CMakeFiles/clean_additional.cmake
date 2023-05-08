# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/abuGui_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/abuGui_autogen.dir/ParseCache.txt"
  "abuGui_autogen"
  )
endif()
