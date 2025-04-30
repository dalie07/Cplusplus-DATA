#include "Triangle.h"

namespace shapes {
    // Default constructor
    Triangle::Triangle() : base(0), height(0) {}

    // Overloaded constructor
    Triangle::Triangle(float b, float h) : base(b), height(h) {}

    // Destructor
    Triangle::~Triangle() {}

    // Set the base
    void Triangle::setBase(float b) {
        base = b;
    }

    // Set the height
    void Triangle::setHeight(float h) {
        height = h;
    }

    // Get the base
    float Triangle::getBase() const {
        return base;
    }

    // Get the height
    float Triangle::getHeight() const {
        return height;
    }
}