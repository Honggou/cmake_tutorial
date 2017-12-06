if (USE_MYMATH)
    include_directories(${PROJECT_SOURCE_DIR}/include)
    add_subdirectory(tutorial)
    set (EXTRA_LIBS ${EXTRA_LIBS} MathLib)
endif (USE_MYMATH)

add_executable(TutorialBin main.cpp)
target_link_libraries(TutorialBin ${EXTRA_LIBS})