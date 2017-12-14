#link_directories($ENV{LD_LIBRARY_PATH})

include_directories("${CMAKE_SOURCE_DIR}/include")

find_library(GMOCK_LIB
    NAMES gmock_main libgmock_main
    HINTS ~/gmock ~/gtest /usr/lib /usr/local/lib
)

message("GMOCK_LIB=${GMOCK_LIB}")

add_executable(MathTestBin test_math.cpp)
target_link_libraries(MathTestBin
    ${GMOCK_LIB}
    MathLib
)

install(TARGETS MathTestBin DESTINATION bin)