# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/MAKU_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/MAKU_autogen.dir/ParseCache.txt"
  "MAKU_autogen"
  )
endif()
