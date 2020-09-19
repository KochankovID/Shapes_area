//
// Created by Ilya Kochankov on 9/12/20.
//

#ifndef SHAPES_AREA_POINT_H
#define SHAPES_AREA_POINT_H

#include <string>

#include "utility"


struct Point{
    Point();
    Point(double x, double y);
    Point(const Point& copy);

    Point& operator=(const Point& copy);
    bool operator==(const Point& point) const;
    bool operator!=(const Point& point) const;
    std::string toString() {return "Point(" + std::to_string(x) + ", " + std::to_string(y) + ")";};

    virtual ~Point();

    double x;
    double y;
};

#endif //SHAPES_AREA_POINT_H
