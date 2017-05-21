# - CMAKE_BINARY_DIR: 
# - CMAKE_SOURCE_DIR: this is the directory, from which cmake was started, i.e. the top level source directory
# - EXECUTABLE_OUTPUT_PATH: place where CMake should put all executable files

project(CMake-sandbox)
cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

set(VERSION_MAJOR "1")
set(VERSION_MINOR "0")
set(VERSION_PATCH "0")
set(VERSION "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")

set(CMAKE_BINARY_DIR       ${CMAKE_SOURCE_DIR})
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH    ${CMAKE_SOURCE_DIR}/lib)

include_directories("inc")


message ("This is a CMake message.")


###########################################################
# - File globbing

# These instructions search the directory tree when cmake is
# # invoked and put all files that match the pattern in the variables 
# # `sources` and `headers`

#file(GLOB_RECURSE sources ${PROJECT_SOURCE_DIR}/src/*.cc)
#file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cc)
#file(GLOB headers ${PROJECT_SOURCE_DIR}/inc/*.h)

########################################################

#
#add_executable(sum ./src/main.cc ./src/Utils.cc)

#add_subdirectory(lib)

add_subdirectory( src )
