//
// Created by Ilya Kochankov on 9/12/20.
//

#ifndef SHAPES_AREA_PCIRCLE_H
#define SHAPES_AREA_PCIRCLE_H

#include "interface/Circle.h"
#include "PCenter.h"

class PCircle : public PCenter, public Circle{
public:
    PCircle();
    PCircle(const Point& center, double radius);
    PCircle(double x, double y, double radius);
    PCircle(const PCircle& pCircle);

    double getRadius() const override {return _radius;};
    void setRadius(double radius) override;
    double area() const override;
    std::string toString() {return "PCircle(" + _center.toString() + ", " + std::to_string(_radius) + ")";};

     PCircle& operator=(const PCircle& copy);

    ~PCircle() override;

private:
    double _radius;
};


#endif //SHAPES_AREA_PCIRCLE_H
