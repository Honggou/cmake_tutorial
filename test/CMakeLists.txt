#link_directories($ENV{LD_LIBRARY_PATH})

include_directories("${CMAKE_SOURCE_DIR}/include")

find_library(GMOCK_LIB
    NAMES gmock_main libgmock_main
    HINTS ~/gmock ~/gtest /usr/lib /usr/local/lib
)

message(STATUS "GMOCK_LIB=${GMOCK_LIB}")

add_executable(MathTestBin test_math.cpp)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(MathTestBin
    ${GMOCK_LIB}
    MathLib
    Threads::Threads
)

install(TARGETS MathTestBin DESTINATION bin)