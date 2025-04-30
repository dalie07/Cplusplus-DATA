#include "Area.h"
#include <cmath> // For M_PI

namespace shapes {
    // Calculate the area of a square
    float Area::calculateSquareArea(const Square& square) {
        return square.getSideLength() * square.getSideLength();
    }

    // Calculate the area of a triangle
    float Area::calculateTriangleArea(const Triangle& triangle) {
        return 0.5f * triangle.getBase() * triangle.getHeight();
    }

    // Calculate the area of a circle
    float Area::calculateCircleArea(const Circle& circle) {
        return M_PI * circle.getRadius() * circle.getRadius();
    }
}