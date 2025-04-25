#pragma once
#include <string>
using namespace std;

class Person {
public:
    Person();  // Default constructor
    Person(string newName, float newWeight);  // Constructor with name and weight
    ~Person();  // Destructor

    // Overloaded '+' operator for weight
    float operator + (const Person& otherPerson);

    // Overloaded relational operators
    bool operator == (const Person& otherPerson);
    bool operator != (const Person& otherPerson);
    bool operator < (const Person& otherPerson);
    bool operator > (const Person& otherPerson);

    // Conversion operators
    operator int();     // Convert to int (age)
    operator string();  // Convert to string (first name)
    operator float();   // Convert to float (weight)

private:
    string mFirstName;
    float mWeight;
    int mAge;
};
