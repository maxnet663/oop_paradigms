#include "rectangle.h"

double Rectangle::square() { return width * length; }

BoundingBoxDimensions Rectangle::dimensions() {
    BoundingBoxDimensions box;
    box.width = this->width;
    box.height = length;
    return box;
    //return BoundingBoxDimensions{this->width, length};
}

std::string Rectangle::type() { return "Rectangle"; }
