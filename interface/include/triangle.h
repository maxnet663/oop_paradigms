#pragma once
#include "shape.h"

class Triangle: public IShape {
    private:
        double a;
        double b;
        double c;
    public:
        Triangle(double inA = 3, double inB = 4, double inC = 5) : a(inA), b(inB), c(inC) {}
        virtual double square() override;
        virtual BoundingBoxDimensions dimensions() override;

        virtual std::string type() override;
};


