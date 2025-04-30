#include "Circle.h"

namespace shapes {
    // Default constructor
    Circle::Circle() : radius(0) {}

    // Overloaded constructor
    Circle::Circle(float r) : radius(r) {}

    // Destructor
    Circle::~Circle() {}

    // Set the radius
    void Circle::setRadius(float r) {
        radius = r;
    }

    // Get the radius
    float Circle::getRadius() const {
        return radius;
    }
}