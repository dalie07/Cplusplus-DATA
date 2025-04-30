#ifndef AREA_H
#define AREA_H

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

namespace shapes {
    class Area {
    public:
        // Calculate the area of a square
        static float calculateSquareArea(const Square& square);

        // Calculate the area of a triangle
        static float calculateTriangleArea(const Triangle& triangle);

        // Calculate the area of a circle
        static float calculateCircleArea(const Circle& circle);
    };
}

#endif