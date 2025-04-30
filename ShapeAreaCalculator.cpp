#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice;

    while (true) {
        // Display menu
        cout << "Please select the area of the shape to calculate:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit program" << endl;
        cout << "Enter selection: ";
        cin >> choice;

        // Validate input
        if (cin.fail() || choice < 1 || choice > 4) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Your input was invalid. Please enter a valid input." << endl;
            continue; // Restart the loop
        }

        // Handle user choices
        if (choice == 1) {
            // Square
            double side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            if (cin.fail() || side <= 0) {
                cin.clear(); // Clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                cout << "Invalid input. Side length must be a positive number." << endl;
            } else {
                cout << "The area of the square is: " << calculateSquareArea(side) << endl;
            }
        } else if (choice == 2) {
            // Rectangle
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            if (cin.fail() || length <= 0 || width <= 0) {
                cin.clear(); // Clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                cout << "Invalid input. Length and width must be positive numbers." << endl;
            } else {
                cout << "The area of the rectangle is: " << calculateRectangleArea(length, width) << endl;
            }
        } else if (choice == 3) {
            // Triangle
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            if (cin.fail() || base <= 0 || height <= 0) {
                cin.clear(); // Clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                cout << "Invalid input. Base and height must be positive numbers." << endl;
            } else {
                cout << "The area of the triangle is: " << calculateTriangleArea(base, height) << endl;
            }
        } else if (choice == 4) {
            // Quit program
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }

        // Restart the loop
        cout << endl;
    }

    return 0;
}