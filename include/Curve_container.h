//
// Created by Ilya Kochankov on 9/18/20.
//

#ifndef SHAPES_AREA_СURVE_CONTAINER_H
#define SHAPES_AREA_СURVE_CONTAINER_H

#include "Curve.h"

class Сurve_container {
public:
    virtual void fill(int number_of_curves) = 0;
    virtual void generate() = 0;
    virtual void sort() = 0;
    virtual double total_area() const = 0;
    virtual void add(const Curve& curve) = 0;
    virtual void remove(const Curve& curve) = 0;

    virtual Curve& operator[] (int index) = 0;
    virtual const Curve& operator[] (int index) const = 0;
};


#endif //SHAPES_AREA_СURVE_CONTAINER_H
