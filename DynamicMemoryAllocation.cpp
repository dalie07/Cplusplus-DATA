#include <iostream>
#include <string>
#include <limits> // For numeric_limits
using namespace std;

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;

    // Dynamically allocate a string
    string* dynamicString = new string;

    // Prompt the user to assign a value to the dynamically allocated integer
    cout << "Enter an integer value: ";
    cin >> *dynamicInt;

    // Prompt the user to assign a value to the dynamically allocated string
    cout << "Enter a string value: ";
    cin>>*dynamicString;

    // Output the values of the dynamically allocated variables
    cout << "The value of the dynamically allocated integer is: " << *dynamicInt << endl;
    cout << "The value of the dynamically allocated string is: " << *dynamicString << endl;

    // Free the dynamically allocated memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}