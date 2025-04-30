#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() : length(0), width(0) {}

// Overloaded constructor
Rectangle::Rectangle(float l, float w) : length(l), width(w) {}

// Destructor
Rectangle::~Rectangle() {}

// Set the length of the rectangle
void Rectangle::setLength(float l) {
    length = l;
}

// Set the width of the rectangle
void Rectangle::setWidth(float w) {
    width = w;
}

// Get the length of the rectangle
float Rectangle::getLength() const {
    return length;
}

// Get the width of the rectangle
float Rectangle::getWidth() const {
    return width;
}

// Calculate and return the area of the rectangle
float Rectangle::calculateArea() const {
    return length * width;
}