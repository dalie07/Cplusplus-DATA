#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    // Create Person objects
    Person Jane = Person("Jane", 60.0f);
    Person John = Person("John", 75.0f);

    // Calculate total weight
    float totalWeight = Jane + John;
    cout << "Total weight: " << totalWeight << " kg" << endl;

    // Compare first names
    if (Jane == John) {
        cout << "This is the same person" << endl;
    }
    if (Jane != John) {
        cout << "This is not the same person" << endl;
    }

    // Compare ages
    if (Jane < John) {
        cout << "Jane is younger than John" << endl;
    }
    if (John > Jane) {
        cout << "John is older than Jane" << endl;
    }

    // Convert John to int (age)
    int johnAge = John;
    cout << "John's age: " << johnAge << " years" << endl;

    // Convert Jane to string (first name)
    string janeFirstName = Jane;
    cout << "Jane's first name: " << janeFirstName << endl;

    // Convert Jane to float (weight)
    float janeWeight = Jane;
    cout << "Jane's weight: " << janeWeight << " kg" << endl;

    return 0;
}