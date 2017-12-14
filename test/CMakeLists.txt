link_directories($ENV{LD_LIBRARY_PATH})

include_directories("${CMAKE_SOURCE_DIR}/include")

add_executable(MathTestBin test_math.cpp)
target_link_libraries(MathTestBin
    gmock_main
    MathLib
)

install(TARGETS MathTestBin DESTINATION bin)