//
// Created by Ilya Kochankov on 9/12/20.
//

#ifndef SHAPES_AREA_CURVE_H
#define SHAPES_AREA_CURVE_H

#include "Point.h"

class Curve{
public:
    virtual double area() const = 0;
    virtual ~Curve() {};
};

#endif //SHAPES_AREA_CURVE_H
