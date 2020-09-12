//
// Created by Ilya Kochankov on 9/12/20.
//

#ifndef SHAPES_AREA_CIRCLE_H
#define SHAPES_AREA_CIRCLE_H

#include "Curve.h"
#include "Point.h"

class Circle : public Curve{
public:
    Circle();
    Circle(const Point& center, double radius);
    Circle(double x, double y, double radius);
    Circle(const Circle& copy);

    Point& center() {return this->_center;}
    const Point& center() const {return this->_center;}

    double getRadius() const {return this->_radius;}
    void setRadius();

    double area() const override;

private:
    Point _center;
    double _radius;
};

#endif //SHAPES_AREA_CIRCLE_H
