cmake_minimum_required(VERSION 3.5)
cmake_policy(SET CMP0048 NEW)

project(
  libmy.so
  VERSION 2.2.3.1
  )

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/../lib/${CMAKE_BUILD_TYPE})
add_compile_options(-W -Wall -Wextra -Werror)

include_directories(${CMAKE_SOURCE_DIR}/../includes)

file(
  GLOB_RECURSE
  source_files
  libs_srcs/
  )

add_library(
  my
  SHARED
  ${source_files}
  )

set_target_properties(my PROPERTIES LINKER_LANGUAGE C)
