//
// Created by Ilya Kochankov on 9/12/20.
//

#ifndef SHAPES_AREA_POINT_H
#define SHAPES_AREA_POINT_H

#include "utility"

struct Point{
    Point();
    Point(double x, double y);
    Point(const Point& copy);

    Point& operator=(const Point& copy);

    virtual ~Point();

    double x;
    double y;
};

#endif //SHAPES_AREA_POINT_H
