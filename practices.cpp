#include <iostream>
using namespace std;
#include <string>
#include <sstream>

#define PI 3.14159
#define NEWLINE '\n'
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    Rectangle(int width, int height) {
        this->width = width; // Resolves naming conflict
        this->height = height;
    }
    Rectangle& setWidth(int w) {
        this->width = w;
        return *this; // Return the current object
    }
    void display() { cout << "Width: " << width << ", Height: " << height << endl; }
};

int main() {
    Rectangle rect(3, 4);
    rect.display(); // Chaining using `this`
    return 0;
}