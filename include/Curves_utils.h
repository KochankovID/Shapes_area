//
// Created by Ilya Kochankov on 9/19/20.
//

#ifndef SHAPES_AREA_CURVES_UTILS_H
#define SHAPES_AREA_CURVES_UTILS_H

#include <algorithm>

#include "Curve.h"


template<typename T>
double total_area(T first_iterable, T second_iterable){
    double summ = 0;
    for(;first_iterable < second_iterable; first_iterable++){
        summ += (*first_iterable)->area();
    }
    return summ;
}

#endif //SHAPES_AREA_CURVES_UTILS_H
