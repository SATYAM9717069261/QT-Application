# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/helloworld_console_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/helloworld_console_autogen.dir/ParseCache.txt"
  "helloworld_console_autogen"
  )
endif()
