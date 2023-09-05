# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(recipe-02 LANGUAGES C)

# introduce a toggle for using a library
set(USE_LIBRARY OFF)

message(STATUS "Compile sources into a library? ${USE_LIBRARY}")

# BUILD_SHARED_LIBS is a global flag offered by CMake
# to toggle the behavior of add_library
set(BUILD_SHARED_LIBS OFF)

# list sources
list(APPEND _sources add.h add.c)

if(USE_LIBRARY)
  # add_library will create a static library
  # since BUILD_SHARED_LIBS is OFF
  add_library(add ${_sources})

  add_executable(add_app main.c)

  target_link_libraries(add_app add)
else()
  # --- create executable from only source files, no library --- #
  add_executable(add_app main.c ${_sources})
endif()
