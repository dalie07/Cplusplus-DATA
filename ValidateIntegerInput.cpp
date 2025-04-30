#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

int main() {
    int userInput;

    while (true) {
        cout << "Enter an integer value between 5 and 10: ";
        cin >> userInput;

        // Check if the input is a valid integer
        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Sorry, you entered an invalid number, please try again." << endl;
            continue; // Restart the loop
        }

        // Check if the integer is between 5 and 10
        if (userInput >= 5 && userInput <= 10) {
            break; // Exit the loop if the input is valid
        } else {
            cout << "You entered " << userInput << ", please enter a number between 5 and 10." << endl;
        }
    }

    // Output after the loop
    cout << "Your input value (" << userInput << ") has been accepted." << endl;

    return 0;
}