//
// Created by Ilya Kochankov on 9/12/20.
//

#include "Point_implementation/Point.h"

Point::Point() {
    this->x = 0;
    this->y = 0;
}

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

Point::Point(const Point &copy) {
    this->x = copy.x;
    this->y = copy.y;
}

Point::~Point() {

}

Point &Point::operator=(const Point &copy) {
    this->x = copy.x;
    this->y = copy.y;
    return *this;
}

bool Point::operator==(const Point &point) const {
    return (this->x == point.x) and (this->y == point.y);
}

bool Point::operator!=(const Point &point) const {
    return !this->operator==(point);
}
