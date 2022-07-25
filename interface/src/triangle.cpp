#include "triangle.h"

double Triangle::square() {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

BoundingBoxDimensions Triangle::dimensions() {
    double edge = (a * b * c) / (4 * square());
        BoundingBoxDimensions box;
    box.width = box.height = 2 * edge;
    return box;
    //было вот так return BoundingBoxDimensions{2 * edge, 2 * edge}
    // но cmake почему-то ругается, пришлось менять  
}
 
std::string Triangle::type() { return "Triangle"; }
