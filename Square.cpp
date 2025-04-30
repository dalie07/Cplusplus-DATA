#include "Square.h"

namespace shapes {
    // Default constructor
    Square::Square() : sideLength(0) {}

    // Overloaded constructor
    Square::Square(float side) : sideLength(side) {}

    // Destructor
    Square::~Square() {}

    // Set the side length
    void Square::setSideLength(float side) {
        sideLength = side;
    }

    // Get the side length
    float Square::getSideLength() const {
        return sideLength;
    }
}