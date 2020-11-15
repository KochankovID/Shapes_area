//
// Created by Ilya Kochankov on 11/15/20.
//

#ifndef SHAPES_AREA_VISITORBASE_H
#define SHAPES_AREA_VISITORBASE_H

#include "./interface/Circle.h"
#include "./interface/Ellipse.h"

class Circle;
class Ellipse;

class VisitorBase{
public:
    virtual double perimeter_circle(const Circle& circle) const = 0;
    virtual double perimeter_ellipse(const Ellipse& ellipse) const = 0;

};

#endif //SHAPES_AREA_VISITORBASE_H
