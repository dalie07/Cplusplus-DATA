#include "Box.h"

Box::Box() {
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

Box::Box(const double newLength, const double newBreadth, const double newHeight) {
    length = newLength;
    breadth = newBreadth;
    height = newHeight;
}

Box::~Box() {
    // Destructor
}

double Box::getVolume() {
    return length * breadth * height;
}

void Box::setLength(const double newLength) {
    length = newLength;
}

void Box::setBreadth(const double newBreadth) {
    breadth = newBreadth;
}

void Box::setHeight(const double newHeight) {
    height = newHeight;
}

Box Box::operator+(const Box& b) {
    Box box;
    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
}