#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    // Create an instance of the Rectangle class using the default constructor
    Rectangle rect;

    // Variables to hold user input
    float length, width;

    // Prompt the user for the length and width of the first rectangle
    cout << "Enter the length of the first rectangle: ";
    cin >> length;
    cout << "Enter the width of the first rectangle: ";
    cin >> width;

    // Use accessor methods to set the length and width
    rect.setLength(length);
    rect.setWidth(width);

    // Output the area of the first rectangle
    cout << "The area of the first rectangle is: " << rect.calculateArea() << endl;

    // Prompt the user for the length and width of the second rectangle
    cout << "Enter the length of the second rectangle: ";
    cin >> length;
    cout << "Enter the width of the second rectangle: ";
    cin >> width;

    // Create a new instance of the Rectangle class using the overloaded constructor
    Rectangle rect2(length, width);

    // Output the area of the second rectangle
    cout << "The area of the second rectangle is: " << rect2.calculateArea() << endl;

    return 0;
}