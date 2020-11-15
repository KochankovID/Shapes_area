//
// Created by Ilya Kochankov on 11/15/20.
//
#include "math.h"
#include "cmath"

#include "PerimeterVisitor.h"

double PerimeterVisitor::perimeter_circle(const Circle &circle) const {
    return 2 * PI * circle.getRadius();
}

double PerimeterVisitor::perimeter_ellipse(const Ellipse &ellipse) const {
    return 2 * PI * std::sqrt((std::pow(ellipse.getr(), 2) + std::pow(ellipse.getR(), 2)) / 2);
}
