//
// Created by Ilya Kochankov on 9/12/20.
//

#ifndef SHAPES_AREA_PELLIPSE_H
#define SHAPES_AREA_PELLIPSE_H

#include "Ellipse.h"
#include "PCenter.h"

class PEllipse : public PCenter, public Ellipse{
public:
    PEllipse();
    PEllipse(const Point& center, double r, double R);
    PEllipse(double x, double y, double r, double R);
    PEllipse(const PEllipse& ellipse);

    double getr() const override {return _r;};
    void setr(double r) override;
    double getR() const override {return _R;};
    void setR(double R) override;

    double area() const override;

    PEllipse& operator=(const PEllipse& pEllipse);

    ~PEllipse() override {};

private:
    double _r, _R;
};


#endif //SHAPES_AREA_PELLIPSE_H
