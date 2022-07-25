#include "shape.h"

void printParams(IShape *shape) { 
            std::cout << "Type: " << shape->type() << std::endl
                << "Square: " << shape->square() << std::endl;
            BoundingBoxDimensions tmp = shape->dimensions();
            std::cout << "Width: " << tmp.width << std::endl
                << "Height: " << tmp.height << std::endl;
}
