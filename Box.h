#pragma once
#include <iostream>
using namespace std;

class Box {
public:
    Box();
    Box(const double newLength, const double newBreadth, const double newHeight);
    ~Box();
    double getVolume();
    void setLength(const double newLength);
    void setBreadth(const double newBreadth);
    void setHeight(const double newHeight);

    Box operator+(const Box& b);

private:
    double length;
    double breadth;
    double height;
};
