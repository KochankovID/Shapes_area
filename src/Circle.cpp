//
// Created by Ilya Kochankov on 9/12/20.
//

#include <stdexcept>
#include "Circle.h"
#include "exception"

Circle::Circle() {
    this->_center = Point();
    this->_radius = 1;
}

Circle::Circle(const Point &center, double radius) {
    if(radius <= 0){
        throw std::runtime_error("Radius must be a positive number!");
    }
    this->_radius = radius;
    this->_center = center;
}

Circle::Circle(double x, double y, double radius) {
    *this = Circle(Point(x, y), radius);
}

Circle::Circle(const Circle &copy) {
    this->_center = copy._center;
    this->_radius = copy._radius;
}

double Circle::area() {
    return 0;
}
