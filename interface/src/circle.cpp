#include "circle.h"

double Circle::square() { return std::atan(1) * 4 * r * r; }

BoundingBoxDimensions Circle::dimensions() {
    BoundingBoxDimensions box;
    box.width = box.height = 2 * r;
    return box;
    //return BoundingBoxDimensions{2*r, 2*r};
}

std::string Circle::type() { return "Circle"; }

