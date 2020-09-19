//
// Created by Ilya Kochankov on 9/19/20.
//
#include <iostream>
#include "cmath"

#include "Random_generator.h"
#include "Point_implementation/PCircle.h"
#include "Point_implementation/PEllipse.h"


Random_generator::Random_generator(std::pair<double, double> radius_range, Point pointmin, Point pointmax){
    srandom(time(nullptr));
    isCorrectRRange(radius_range);
    _radius_range = radius_range;
    isCorrectPointsMinMax(pointmin, pointmax);
    _pointmin = pointmin;
    _pointmax = pointmax;
}

Random_generator::Random_generator(const Random_generator &randomGenerator) : _radius_range(randomGenerator._radius_range),
_pointmin(randomGenerator._pointmin), _pointmax(randomGenerator._pointmax){

}

double Random_generator::randius_generator() const {
    return _random_generator(_radius_range.first, _radius_range.second);
}

Point Random_generator::center_generator() const {
    return Point(_random_generator(_pointmin.x, _pointmax.x), _random_generator(_pointmin.y, _pointmax.y));
}

std::shared_ptr<Curve> Random_generator::curve_generator() const {
    switch(int(std::round(_random_generator(0,1)))) {
        case 0: {
            return std::make_shared<PCircle>(center_generator(), randius_generator());
        }
        case 1: {
            return std::make_shared<PEllipse>(center_generator(), randius_generator(), randius_generator());
        }
    }
}

double Random_generator::_random_generator(double min, double max) const {
    return rand() / double (RAND_MAX) * (max - min) + min;
}

void Random_generator::setRRange(std::pair<double, double> radius_range) {
    isCorrectRRange(radius_range);
    _radius_range = radius_range;
}

void Random_generator::setPmin(Point pointmin) {
    isCorrectPointsMinMax(pointmin, _pointmax);
    _pointmin = pointmin;
}

void Random_generator::setPmax(Point pointmax) {
    isCorrectPointsMinMax(_pointmin, pointmax);
    _pointmax = pointmax;
}

void Random_generator::isCorrectRRange(std::pair<double, double> radius_range) {
    if(radius_range.first > radius_range.second){
        throw std::runtime_error("Invalid radius!");
    }
}

void Random_generator::isCorrectPointsMinMax(Point pointmin, Point pointmax) {
    if((pointmin.x > pointmax.x) || (pointmin.y > pointmax.y)){
        throw std::runtime_error("Invalid MinMaxpoints!");
    }
}

