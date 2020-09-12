//
// Created by Ilya Kochankov on 9/12/20.
//

#ifndef SHAPES_AREA_ELLIPSE_H
#define SHAPES_AREA_ELLIPSE_H

#include "Point.h"
#include "Curve.h"

class Ellipse : public Curve{
public:
    Ellipse();
    Ellipse(const Point& focus1, const Point& focus2);
    Ellipse(double focus1x, double focus1y, double focus2x, double focus2y);

    Point getFocus1() const {return _focus1;}
    void setFocus1(const Point& focus1);
    void setFocus1(double x, double y);

    Point getFocus2() const {return _focus2;}
    void setFocus2(const Point& focus2);
    void setFocus2(double x, double y);

    double area() const override;

    ~Ellipse();
private:
    Point _focus1, _focus2;
};


#endif //SHAPES_AREA_ELLIPSE_H
