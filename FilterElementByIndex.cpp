#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize the array
    string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int size = sizeof(elements) / sizeof(elements[0]); // Calculate the size of the array

    cout << "Elements starting with 'B':" << endl;

    // Iterate through the array
    for (int i = 0; i < size; i++) {
        // Check if the element starts with 'B'
        if (elements[i][0] == 'B') {
            cout << elements[i] << endl; // Output the element
        }
    }

    return 0;
}