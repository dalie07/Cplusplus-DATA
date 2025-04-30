#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int main() {
    int choice;
    do {
        cout << "Choose an option:\n";
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            float side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            Square square(side);
            cout << "The area of the square is: " << Area::calculateSquareArea(square) << endl;
        } else if (choice == 2) {
            float base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            Triangle triangle(base, height);
            cout << "The area of the triangle is: " << Area::calculateTriangleArea(triangle) << endl;
        } else if (choice == 3) {
            float radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            Circle circle(radius);
            cout << "The area of the circle is: " << Area::calculateCircleArea(circle) << endl;
        } else if (choice != 4) {
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    cout << "Program terminated.\n";
    return 0;
}