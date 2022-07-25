#pragma once
#include "shape.h"

class Circle: public IShape {
private:
    double r;
public:
    Circle(double inR = 3) : r(inR) {}
    virtual double square() override;
    virtual BoundingBoxDimensions dimensions() override;

    virtual std::string type() override;
};
