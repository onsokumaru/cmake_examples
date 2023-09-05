# --- set minimum cmake versio --- #
cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

# --- project name and languages --- #
project(recipe-03 LANGUAGES C)

# --- generate a library from sources --- #
add_library(add
  STATIC
    add.c
    add.h
  )

# --- create executable --- #
add_executable(add_app main.c)

# --- link library against executable --- #
target_link_libraries(add_app add)
