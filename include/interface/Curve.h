//
// Created by Ilya Kochankov on 9/12/20.
//

#ifndef SHAPES_AREA_CURVE_H
#define SHAPES_AREA_CURVE_H

#include <string>

#include "Point_implementation/Point.h"

const double PI = 3.141592653589793;

class VisitorBase;

class Curve{
public:
    virtual double area() const = 0;
    virtual std::string toString() = 0;
    virtual double accept(const VisitorBase& visitor) = 0;

    virtual ~Curve() {};
};

#endif //SHAPES_AREA_CURVE_H
