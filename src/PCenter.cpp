//
// Created by Ilya Kochankov on 9/12/20.
//

#include "Point_implementation/PCenter.h"

PCenter::PCenter() : _center(){

}

PCenter::PCenter(const Point &center) : _center(center){

}

PCenter::PCenter(double x, double y) {
    *this = PCenter(Point(x, y));
}

PCenter::PCenter(const PCenter &centerPoint) : _center(centerPoint._center) {

}

PCenter &PCenter::operator=(const PCenter &copy) {
    _center = copy._center;
    return *this;
}

PCenter::~PCenter() {

}
