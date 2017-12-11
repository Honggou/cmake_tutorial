# first we add the executable that generates the table
add_executable(MakeSqrtTable make_sqrt_table.cpp)

# add the command to generate the source code
add_custom_command (
  OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/sqrt_table.h
  COMMAND MakeSqrtTable ${CMAKE_CURRENT_BINARY_DIR}/sqrt_table.h
  DEPENDS MakeSqrtTable)

# add the binary tree directory to the search path for include files
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# install generated files
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/sqrt_table.h DESTINATION include/tutorial)

# add the main library
add_library(MathLib math.cpp ${CMAKE_CURRENT_BINARY_DIR}/sqrt_table.h)

install(TARGETS MathLib DESTINATION lib)
install(DIRECTORY "${PROJECT_SOURCE_DIR}/include/tutorial" DESTINATION include)
