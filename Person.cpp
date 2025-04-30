#include "Person.h"

// Default constructor
Person::Person() : mWeight(0.0f), mFirstName(""), mAge(0) {}

// Overloaded constructor
Person::Person(string newFirstName, float newWeight) : mFirstName(newFirstName), mWeight(newWeight) {
    // Assign a default age for simplicity
    mAge = (newFirstName == "Jane") ? 25 : 30; // Example: Jane is 25, John is 30
}

// Destructor
Person::~Person() {}

// Overload + operator to calculate total weight
float Person::operator+(const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}

// Overload == operator to compare first names
bool Person::operator==(const Person& otherPerson) {
    return this->mFirstName == otherPerson.mFirstName;
}

// Overload != operator to compare first names
bool Person::operator!=(const Person& otherPerson) {
    return this->mFirstName != otherPerson.mFirstName;
}

// Overload < operator to compare ages
bool Person::operator<(const Person& otherPerson) {
    return this->mAge < otherPerson.mAge;
}

// Overload > operator to compare ages
bool Person::operator>(const Person& otherPerson) {
    return this->mAge > otherPerson.mAge;
}

// Conversion operator to int (age)
Person::operator int() {
    return mAge;
}

// Conversion operator to string (first name)
Person::operator string() {
    return mFirstName;
}

// Conversion operator to float (weight)
Person::operator float() {
    return mWeight;
}