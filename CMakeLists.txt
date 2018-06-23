cmake_minimum_required(VERSION 3.10)

project(C C)

set(CMAKE_C_STANDARD 11)

add_library(C SHARED ctype/ctype.h ctype/tolower.c ctype/toupper.c string/string.h string/strcasecmp.c string/strncasecmp.c string/index.c string/rindex.c string/strcpy.c string/strncpy.c string/strcat.c string/strncat.c string/strlen.c string/strchr.c string/strrchr.c string/strchrnul.c string/strcmp.c string/strncmp.c string/stpcpy.c string/stpncpy.c string/strcspn.c string/strspn.c string/strdup.c string/strfry.c string/swap.c string/strpbrk.c string/strsep.c string/strstr.c string/strtok.c string/strtok_r.c ctype/isalnum.c ctype/isalpha.c ctype/iscntrl.c ctype/isdigit.c ctype/isgraph.c ctype/islower.c ctype/isprint.c ctype/ispunct.c ctype/isspace.c ctype/isupper.c ctype/isxdigit.c)

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)

add_executable(my_test test.c)

target_link_libraries(my_test C)
