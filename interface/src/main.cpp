#include "circle.h"
#include "triangle.h"
#include "rectangle.h"

int main() {
    IShape *circle = new Circle(5);
    IShape *triangle = new Triangle(3, 4, 5);
    IShape *rectangle = new Rectangle(5, 10);
    IShape *figures[]  = {circle, triangle, rectangle};

    for (int i = 0; i < 3; i++)
        printParams(figures[i]);
    return 0;
}












