# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(recipe-03 LANGUAGES C)

# expose options to the user
option(USE_LIBRARY "Compile sources into a library" OFF)

message(STATUS "Compile sources into a library? ${USE_LIBRARY}")

include(CMakeDependentOption)

# second option depends on the value of the first
cmake_dependent_option(
  MAKE_STATIC_LIBRARY "Compile sources into a static library" OFF
  "USE_LIBRARY" ON
  )

# third option depends on the value of the first
cmake_dependent_option(
  MAKE_SHARED_LIBRARY "Compile sources into a shared library" ON
  "USE_LIBRARY" ON
  )

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

# list sources
list(APPEND _sources add.h add.c)

if(USE_LIBRARY)
  message(STATUS "Compile sources into a STATIC library? ${MAKE_STATIC_LIBRARY}")
  message(STATUS "Compile sources into a SHARED library? ${MAKE_SHARED_LIBRARY}")

  if(MAKE_SHARED_LIBRARY)
    add_library(add SHARED ${_sources})

    add_executable(add_app main.c)

    target_link_libraries(add_app add)
  endif()

  if(MAKE_STATIC_LIBRARY)
    add_library(add STATIC ${_sources})

    add_executable(add_app main.c)

    target_link_libraries(add_app add)
  endif()
else()
  add_executable(add_app main.c ${_sources})
endif()
