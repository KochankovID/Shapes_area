cmake_minimum_required(VERSION 3.16)
project(Shapes_area)

set(CMAKE_CXX_STANDARD 17)

add_executable(Shapes_area main.cpp include/Point.h src/Point.cpp
        include/Curve.h include/Circle.h include/Ellipse.h src/PCenter.cpp include/PCenter.h
        src/PCircle.cpp include/PCircle.h include/Center.h src/PEllipse.cpp include/PEllipse.h
        include/Random_generator.h src/Random_generator.cpp include/Curves_utils.h)
include_directories(Shapes_area include)
add_subdirectory(test)

################################
# GTest
################################
ADD_SUBDIRECTORY (lib/googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})