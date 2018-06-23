cmake_minimum_required(VERSION 3.10)

project(C C)

set(CMAKE_C_STANDARD 11)

add_library(C SHARED ctype/ctype.h ctype/tolower.c ctype/toupper.c strings/string.h strings/strcasecmp.c strings/strncasecmp.c strings/index.c strings/rindex.c strings/strcpy.c strings/strncpy.c strings/strcat.c strings/strncat.c strings/strlen.c strings/strchr.c strings/strrchr.c strings/strchrnul.c strings/strcmp.c strings/strncmp.c strings/stpcpy.c strings/stpncpy.c strings/strcspn.c strings/strspn.c strings/strdup.c strings/strfry.c strings/swap.c strings/strpbrk.c strings/strsep.c strings/strstr.c strings/strtok.c strings/strtok_r.c ctype/isalnum.c ctype/isalpha.c ctype/iscntrl.c ctype/isdigit.c ctype/isgraph.c ctype/islower.c ctype/isprint.c ctype/ispunct.c ctype/isspace.c ctype/isupper.c ctype/isxdigit.c)

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)

add_executable(my_test test.c)

target_link_libraries(my_test C)
