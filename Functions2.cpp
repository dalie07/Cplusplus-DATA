#include <iostream>
using namespace std;

// Function to swap two integers using pointers
void SwapNumbers(int* a, int* b) {
    int temp = *a; // Dereference pointer a to get the value
    *a = *b;       // Assign the value pointed to by b to the location pointed to by a
    *b = temp;     // Assign the temporary value to the location pointed to by b
}

int main() {
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl; // varA is 25
    cout << "varB before swap: " << varB << endl; // varB is 100

    // Call the SwapNumbers function using pointers
    SwapNumbers(&varA, &varB);

    cout << "varA after swap: " << varA << endl; // varA is 100
    cout << "varB after swap: " << varB << endl; // varB is 25

    return 0;
}