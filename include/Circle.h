//
// Created by Ilya Kochankov on 9/12/20.
//

#ifndef SHAPES_AREA_CIRCLE_H
#define SHAPES_AREA_CIRCLE_H

#include "Curve.h"
#include "Point.h"

const double PI = 3.141592653589793;

class Circle : public Curve{
public:
    Circle();
    Circle(const Point& center, double radius);
    Circle(double x, double y, double radius);
    Circle(const Circle& copy);

    Point& center() {return _center;}
    const Point& center() const {return _center;}

    double getRadius() const {return _radius;}
    void setRadius(double radius);

    double area() const override;

    Circle& operator=(const Circle& copy);
    bool operator==(const Circle& circle);
    bool operator!=(const Circle& circle);

    ~Circle();
private:
    Point _center;
    double _radius;
};

#endif //SHAPES_AREA_CIRCLE_H
