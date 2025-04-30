#include <iostream>
using namespace std;

int main()
{
    int numArray[5]; // Declare an array of size 5
    int *Ppointer = nullptr; // Initialize the pointer to nullptr

    // Point to the start of the array
    Ppointer = numArray;

    // Assign values to the array using the pointer
    *Ppointer = 10;       // Assign 10 to numArray[0]
    Ppointer++;           // Move the pointer to numArray[1]
    *Ppointer = 20;       // Assign 20 to numArray[1]

    Ppointer = &numArray[2]; // Point to numArray[2]
    *Ppointer = 30;          // Assign 30 to numArray[2]

    Ppointer = numArray + 3; // Point to numArray[3]
    *Ppointer = 40;          // Assign 40 to numArray[3]

    Ppointer = numArray;     // Reset the pointer to the start of the array
    *(Ppointer + 4) = 50;    // Assign 50 to numArray[4]

    // Print the array elements
    for (int i = 0; i < 5; i++) {
        cout << numArray[i] << " ";
    }
    cout << endl;

    return 0;
}