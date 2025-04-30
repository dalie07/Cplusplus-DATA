#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random integer between 0 and 11
    int daysUntilExpiration = rand() % 12;

    // Output the random number (for testing purposes)
    cout << "Days until expiration: " << daysUntilExpiration << endl;

    // Check subscription status using a switch statement
    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
        default:
            if (daysUntilExpiration <= 5) {
                cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
                cout << "Renew now and save 10%!" << endl;
            } else if (daysUntilExpiration <= 10) {
                cout << "Your subscription will expire soon. Renew now!" << endl;
            } else {
                cout << "You have an active subscription." << endl;
            }
            break;
    }

    return 0;
}