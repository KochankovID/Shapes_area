//
// Created by Ilya Kochankov on 9/12/20.
//

#ifndef SHAPES_AREA_CURVE_H
#define SHAPES_AREA_CURVE_H

#include "Point.h"

class Curve{
public:
    Curve();
    explicit Curve(const Point& center);
    Curve(const Curve& curve);

    virtual double area() const = 0;

    Point& center() {return _center;}
    const Point& center() const {return _center;}

    Curve& operator=(const Curve& copy);
    virtual bool operator==(const Curve& copy) const;
    virtual bool operator!=(const Curve& copy) const;

    virtual ~Curve();

protected:
    Point _center;
};

#endif //SHAPES_AREA_CURVE_H
