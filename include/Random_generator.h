//
// Created by Ilya Kochankov on 9/19/20.
//

#ifndef SHAPES_AREA_RANDOM_GENERATOR_H
#define SHAPES_AREA_RANDOM_GENERATOR_H

#include <memory>

#include "interface/Curve.h"
#include "utility"

class Random_generator{
public:
    Random_generator(std::pair<double, double> radius_range = std::pair<double, double>(1, 100),
                     Point pointmin = Point(0, 0), Point pointmax = Point(100, 100));
    Random_generator(const Random_generator& randomGenerator);

    double randius_generator() const;
    Point center_generator() const;
    std::shared_ptr<Curve> curve_generator() const;

    void setRRange(std::pair<double, double> radius_range);
    void setPmin(Point pointmin);
    void setPmax(Point pointmax);

    std::pair<double, double> getRRange() const {return _radius_range;}
    Point getPmin() const {return _pointmin;}
    Point getPmax() const {return _pointmax;}

    ~Random_generator()= default;
private:
    double _random_generator(double min, double max) const;
    void isCorrectRRange(std::pair<double, double> radius_range);
    void isCorrectPointsMinMax(Point pointmin, Point pointmax);

    std::pair<double, double> _radius_range = std::pair<double, double>(1, 100);
    Point _pointmin = Point(0, 0);
    Point _pointmax = Point(100, 100);
};

#endif //SHAPES_AREA_RANDOM_GENERATOR_H
