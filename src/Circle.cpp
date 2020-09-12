//
// Created by Ilya Kochankov on 9/12/20.
//

#include <stdexcept>
#include "Circle.h"
#include "exception"

Circle::Circle() {
    _center = Point();
    _radius = 1;
}

Circle::Circle(const Point &center, double radius) {
    _center = center;
    this->setRadius(radius);
}

Circle::Circle(double x, double y, double radius) {
    *this = Circle(Point(x, y), radius);
}

Circle::Circle(const Circle &copy) {
    _center = copy._center;
    _radius = copy._radius;
}

double Circle::area() const {
    return PI * _radius * _radius;
}

void Circle::setRadius(double radius) {
    if(radius <= 0){
        throw std::runtime_error("Radius must be a positive number!");
    }
    _radius = radius;
}

Circle::~Circle() {

}

Circle &Circle::operator=(const Circle &copy) {
    _center = copy._center;
    _radius = copy._radius;
    return *this;
}

bool Circle::operator==(const Circle &circle) {
    return (_center == circle._center) and (_radius == circle._radius);
}

bool Circle::operator!=(const Circle &circle) {
    return !(*this == circle);
}
