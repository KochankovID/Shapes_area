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
    Ellipse(const Point& center, double r, double R);
    Ellipse(double x, double y, double r, double R);
    Ellipse(const Ellipse& ellipse);

    double getr() const {return _r;}
    void setr(const Point& r);

    double getR() const {return _R;}
    void setR(const Point& R);

    double area() const override;

    ~Ellipse();

private:
    double _r, _R;
};


#endif //SHAPES_AREA_ELLIPSE_H
