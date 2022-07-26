#pragma once
#include <string>
#include <cmath>
#include <iostream>

struct BoundingBoxDimensions { //— простая структура, которая содержит ширину и высоту
    double width = 0;
    double height = 0;
};

class IShape {
    
    public:
        IShape() {}
        virtual ~IShape() {
            std::cout << "IShape delete" << std::endl;
        }
        virtual double square() = 0; //— возвращает площадь конкретной фигуры;
        virtual BoundingBoxDimensions dimensions() = 0; //— размеры описывающего прямоугольника;
        virtual std::string type() = 0;// — название конкретного типа, например, вернуть строку Triangle для класса Triangle;
};


void printParams(IShape *shape);

