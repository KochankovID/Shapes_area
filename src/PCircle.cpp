//
// Created by Ilya Kochankov on 9/12/20.
//

#include <stdexcept>
#include "Point_implementation/PCircle.h"
#include "exception"

PCircle::PCircle() : PCenter(), _radius(1){

}

PCircle::PCircle(const Point &center, double radius) : PCenter(center){
    this->setRadius(radius);
}

PCircle::PCircle(double x, double y, double radius) : PCircle(Point(x, y), radius){
}

PCircle::PCircle(const PCircle &pCircle) : PCenter(pCircle), _radius(pCircle._radius){

}

void PCircle::setRadius(double radius) {
    if(radius <= 0){
        throw std::runtime_error("Radius must be a positive number!");
    }
    _radius = radius;
}

double PCircle::area() const {
    return PI * _radius * _radius;;
}

PCircle &PCircle::operator=(const PCircle &copy) {
    this->_center = copy._center;
    this->_radius = copy._radius;
    return *this;
}

PCircle::~PCircle() {

}

