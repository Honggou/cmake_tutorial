
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

project(Tutorial
LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)

#set(CMAKE_INSTALL_PREFIX "")

# does this system provide the log and exp functions?
include(CheckFunctionExists)
check_function_exists(log HAVE_LOG)
check_function_exists(exp HAVE_EXP)

# The version number
set(Tutorial_VERSION_MAJOR 1)
set(Tutorial_VERSION_MINOR 0)

# configure a header file to pass some of the CMake setttings to the source code
configure_file(
    "${PROJECT_SOURCE_DIR}/tutorial_config.h.in"
    "${PROJECT_BINARY_DIR}/tutorial_config.h"
)

# add the binary tree to the search path for include files
# so that we will find tutorial_config.h
include_directories("${PROJECT_BINARY_DIR}")

# option which will be shown in CMake GUI with a default value
option (USE_MYMATH "Use tutorial provided math implementation" ON)

# print location variables
message(STATUS "CMAKE_BINARY_DIR=${CMAKE_BINARY_DIR}")
message(STATUS "CMAKE_COMMAND=${CMAKE_COMMAND}")
message(STATUS "CMAKE_SOURCE_DIR =${CMAKE_SOURCE_DIR}")
message(STATUS "CMAKE_CURRENT_BINARY_DIR=${CMAKE_CURRENT_BINARY_DIR}")
message(STATUS "CMAKE_CURRENT_SOURCE_DIR=${CMAKE_CURRENT_SOURCE_DIR}")
message(STATUS "CMAKE_CURRENT_LIST_FILE=${CMAKE_CURRENT_LIST_FILE}")
message(STATUS "CMAKE_CURRENT_LIST_DIR=${CMAKE_CURRENT_LIST_DIR}")
message(STATUS "CMAKE_FILES_DIRECTORY=${CMAKE_FILES_DIRECTORY}")
message(STATUS "CMAKE_ROOT=${CMAKE_ROOT}")
message(STATUS "CMAKE_MODULE_PATH=${CMAKE_MODULE_PATH}")
message(STATUS "PROJECT_NAME=${PROJECT_NAME}")
message(STATUS "CMAKE_PROJECT_NAME=${CMAKE_PROJECT_NAME}")
message(STATUS "PROJECT_BINARY_DIR=${PROJECT_BINARY_DIR}")
message(STATUS "PROJECT_SOURCE_DIR=${PROJECT_SOURCE_DIR}")
message(STATUS "Tutorial_BINARY_DIR=${Tutorial_BINARY_DIR}")
message(STATUS "Tutorial_SOURCE_DIR=${Tutorial_SOURCE_DIR}")

add_subdirectory(src)
add_subdirectory(test)
#add_subdirectory(doc)

install(FILES "${PROJECT_BINARY_DIR}/tutorial_config.h" DESTINATION include)

# build a CPack driven installer package
include (InstallRequiredSystemLibraries)
set (CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set (CPACK_PACKAGE_VERSION_MAJOR "${Tutorial_VERSION_MAJOR}")
set (CPACK_PACKAGE_VERSION_MINOR "${Tutorial_VERSION_MINOR}")
include (CPack)
