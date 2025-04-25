#include "Person.h"
#include <iostream>

// Default constructor
Person::Person() : mFirstName(""), mWeight(0.0f), mAge(0) {}

// Constructor with name and weight
Person::Person(string newName, float newWeight) : mFirstName(newName), mWeight(newWeight), mAge(0) {}

// Destructor
Person::~Person() {
    // Optional: Release any dynamically allocated resources here
}

// Overloaded '+' operator to add the weight of two persons
float Person::operator + (const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}

// Overloaded '==' operator to compare first names
bool Person::operator == (const Person& otherPerson) {
    return this->mFirstName == otherPerson.mFirstName;
}

// Overloaded '!=' operator to compare first names
bool Person::operator != (const Person& otherPerson) {
    return this->mFirstName != otherPerson.mFirstName;
}

// Overloaded '<' operator to compare ages
bool Person::operator < (const Person& otherPerson) {
    return this->mAge < otherPerson.mAge;
}

// Overloaded '>' operator to compare ages
bool Person::operator > (const Person& otherPerson) {
    return this->mAge > otherPerson.mAge;
}

// Conversion operator to int (returns the age)
Person::operator int() {
    return mAge;
}

// Conversion operator to string (returns the first name)
Person::operator string() {
    return mFirstName;
}

// Conversion operator to float (returns the weight)
Person::operator float() {
    return mWeight;
}
