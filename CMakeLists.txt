cmake_minimum_required(VERSION 3.16)
project(Shapes_area)

set(CMAKE_CXX_STANDARD 17)

add_executable(Shapes_area main.cpp include/Point.h src/Point.cpp test/Point_test.cpp test/main.cpp include/Curve.h include/Circle.h src/Circle.cpp src/Ellipse.cpp include/Ellipse.h)
include_directories(Shapes_area include)
add_subdirectory(test)

################################
# GTest
################################
ADD_SUBDIRECTORY (lib/googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})