//
// Created by Ilya Kochankov on 11/15/20.
//

#ifndef SHAPES_AREA_PERIMETERVISITOR_H
#define SHAPES_AREA_PERIMETERVISITOR_H

#include "VisitorBase.h"
#include "./interface/Circle.h"
#include "./interface/Ellipse.h"

class PerimeterVisitor : public VisitorBase{
public:
    PerimeterVisitor()= default;;

    [[nodiscard]] double perimeter_circle(const Circle& circle) const;
    [[nodiscard]] double perimeter_ellipse(const Ellipse& ellipse) const;

    ~PerimeterVisitor()= default;;
};


#endif //SHAPES_AREA_PERIMETERVISITOR_H
