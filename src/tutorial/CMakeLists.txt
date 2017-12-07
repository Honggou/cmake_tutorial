add_library(MathLib math.cpp)

install(TARGETS MathLib DESTINATION lib)
install(DIRECTORY "${PROJECT_SOURCE_DIR}/include/tutorial" DESTINATION include)