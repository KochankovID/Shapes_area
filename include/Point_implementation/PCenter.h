//
// Created by Ilya Kochankov on 9/12/20.
//

#ifndef SHAPES_AREA_CenterPoint_H
#define SHAPES_AREA_CenterPoint_H

#include "interface/Center.h"
#include "Point.h"

class PCenter : public virtual Center{
public:
    PCenter();
    explicit PCenter(const Point& center);
    PCenter(double x, double y);
    PCenter(const PCenter& centerPoint);

    double& x() override {return _center.x;};
    const double& x() const override {return _center.x;};
    double& y() override {return _center.y;};
    const double& y() const override {return _center.y;};

    PCenter& operator=(const PCenter& copy);
    
    ~PCenter() override;

protected:
    Point _center;
};


#endif //SHAPES_AREA_CenterPoint_H
