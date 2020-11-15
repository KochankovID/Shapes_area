cmake_minimum_required(VERSION 3.16)
project(Shapes_area)

set(CMAKE_CXX_STANDARD 17)

add_executable(Shapes_area main.cpp include/Point_implementation/Point.h src/Point.cpp
        include/interface/Curve.h include/interface/Circle.h include/interface/Ellipse.h src/PCenter.cpp include/Point_implementation/PCenter.h
        src/PCircle.cpp include/Point_implementation/PCircle.h include/interface/Center.h src/PEllipse.cpp include/Point_implementation/PEllipse.h
        include/Random_generator.h src/Random_generator.cpp include/Curves_utils.h src/PerimeterVisitor.cpp include/PerimeterVisitor.h include/VisitorBase.h)
include_directories(Shapes_area include)
add_subdirectory(test)

################################
# GTest
################################
ADD_SUBDIRECTORY (lib/googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})