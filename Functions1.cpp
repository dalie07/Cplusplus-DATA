#include <iostream>
using namespace std;

// Function to swap two integers using references
void SwapNumbers(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl; // varA is 25
    cout << "varB before swap: " << varB << endl; // varB is 100

    // Call the SwapNumbers function
    SwapNumbers(varA, varB);

    cout << "varA after swap: " << varA << endl; // varA is 100
    cout << "varB after swap: " << varB << endl; // varB is 25

    return 0;
}