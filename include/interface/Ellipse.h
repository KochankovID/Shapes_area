//
// Created by Ilya Kochankov on 9/12/20.
//

#ifndef SHAPES_AREA_ELLIPSE_H
#define SHAPES_AREA_ELLIPSE_H

#include "Curve.h"
#include "Center.h"

class Ellipse : public Curve, public virtual Center{
public:
    virtual double getr() const = 0;
    virtual void setr(double r) = 0;
    virtual double getR() const = 0;
    virtual void setR(double R) = 0;

    ~Ellipse() override {};
};


#endif //SHAPES_AREA_ELLIPSE_H
