//
// Created by Ilya Kochankov on 9/12/20.
//

#include "Curve.h"

Curve::Curve() : _center(Point()){
}

Curve::Curve(const Point &center) : _center(center){

}

Curve::Curve(const Curve& curve) : _center(curve._center){

}

Curve::~Curve() {

}

Curve &Curve::operator=(const Curve &copy) {
    _center = copy._center;
    return *this;
}

bool Curve::operator==(const Curve &copy) const {
    return _center == copy._center;
}

bool Curve::operator!=(const Curve &copy) const {
    return !(*this == copy);
}
