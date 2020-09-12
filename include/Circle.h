//
// Created by Ilya Kochankov on 9/12/20.
//

#ifndef SHAPES_AREA_CIRCLE_H
#define SHAPES_AREA_CIRCLE_H

#include "Curve.h"
#include "Center.h"

class Circle : public Curve, public virtual Center{
public:
    virtual double getRadius() const = 0;
    virtual void setRadius(double radius) = 0;
    bool operator==(const Circle& copy) const;
    bool operator!=(const Circle& copy) const;

    virtual ~Circle() {};
};

inline bool Circle::operator==(const Circle &copy) const {
    return (this->getRadius() == copy.getRadius()) &&
    (this->Center::operator==(copy));
}

inline bool Circle::operator!=(const Circle &copy) const {
    return !(*this == copy);
}

#endif //SHAPES_AREA_CIRCLE_H
