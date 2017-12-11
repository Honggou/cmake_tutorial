#link_directories("/usr/local/lib/" "${PROJECT_BINARY_DIR/src/tutorial}")

include_directories("${CMAKE_SOURCE_DIR}/include")

add_executable(MathTestBin test_math.cpp)
target_link_libraries(MathTestBin
    gmock_main
    MathLib
)

install(TARGETS MathTestBin DESTINATION bin)