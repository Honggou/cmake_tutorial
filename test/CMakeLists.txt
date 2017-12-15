#link_directories($ENV{LD_LIBRARY_PATH})

include_directories("${CMAKE_SOURCE_DIR}/include")

#find_library(GMOCK_LIB
#    NAMES gmock_main libgmock_main
#    HINTS ${CMAKE_SOURCE_DIR}/googletest-release-1.8.0/lib/ /usr/lib /usr/local/lib
#)

message(STATUS "LD_LIBRARY_PATH=$ENV{LD_LIBRARY_PATH}")

add_executable(MathTestBin test_math.cpp)

# The GMock need libpthread.so
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

target_link_libraries(MathTestBin
    gmock_main
    MathLib
    Threads::Threads
)

install(TARGETS MathTestBin DESTINATION bin)