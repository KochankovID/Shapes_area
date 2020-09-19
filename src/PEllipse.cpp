//
// Created by Ilya Kochankov on 9/12/20.
//

#include <stdexcept>
#include "Point_implementation/PEllipse.h"
#include "exception"

PEllipse::PEllipse() : PCenter(), _r(1), _R(1){

}

PEllipse::PEllipse(const Point &center, double r, double R) : PCenter(center), _r(r), _R(R) {

}

PEllipse::PEllipse(double x, double y, double r, double R) : PEllipse(Point(x, y), r, R){

}

PEllipse::PEllipse(const PEllipse &ellipse) {
    _center = ellipse._center;
    _r = ellipse._r;
    _R = ellipse._R;
}

void PEllipse::setr(double r) {
    if(r <= 0){
        throw std::runtime_error("Radius must be a positive number!");
    }
    _r = r;
}

void PEllipse::setR(double R) {
    if(R <= 0){
        throw std::runtime_error("Radius must be a positive number!");
    }
    _R = R;
}

double PEllipse::area() const {
    return PI * _r * _R;
}

PEllipse &PEllipse::operator=(const PEllipse &pEllipse) {
    _center = pEllipse._center;
    _r = pEllipse._r;
    _R = pEllipse._R;
    return *this;
}
