#pragma once
#include "shape.h"

class Rectangle: public IShape {
    private:
        double width;
        double length;
    public:
        Rectangle(double inWidth = 5, double inLength = 10) : width(inWidth), length(inLength) {}
        virtual double square() override;
        virtual BoundingBoxDimensions dimensions() override;
        virtual std::string type() override;
};


