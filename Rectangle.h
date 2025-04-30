#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length; // Length of the rectangle
    float width;  // Width of the rectangle

public:
    // Default constructor
    Rectangle();

    // Overloaded constructor
    Rectangle(float l, float w);

    // Destructor
    ~Rectangle();

    // Accessor methods to set values
    void setLength(float l);
    void setWidth(float w);

    // Accessor methods to get values
    float getLength() const;
    float getWidth() const;

    // Method to calculate the area of the rectangle
    float calculateArea() const;
};

#endif