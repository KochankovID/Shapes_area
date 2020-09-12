//
// Created by Ilya Kochankov on 9/12/20.
//

#ifndef SHAPES_AREA_CENTER_H
#define SHAPES_AREA_CENTER_H

class Center{
public:
    virtual double& x() = 0;
    virtual const double& x() const = 0;
    virtual double& y() = 0;
    virtual const double& y() const = 0;

    bool operator==(const Center& center) const;
    bool operator!=(const Center& center) const;

    virtual ~Center() {};
};

inline bool Center::operator==(const Center &center) const {
    return (this->x() == center.x()) and (this->y() == center.y());
}

inline bool Center::operator!=(const Center &center) const {
    return !(*this == center);
}

#endif //SHAPES_AREA_CENTER_H
