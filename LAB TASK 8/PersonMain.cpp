#include <iostream>
#include "Person.h"   
using namespace std;

int main() {
    // Create instances of Person
    Person Jane = Person("Jane", 60.0f);
    Person John = Person("John", 75.0f);

    // Use the conversion operator to get John's age
    int johnAge = John;  // Implicit conversion to int (mAge)
    cout << "John's Age: " << johnAge << endl;

    // Use the conversion operator to get Jane's first name
    string janeFirstName = Jane;  // Implicit conversion to string (mFirstName)
    cout << "Jane's First Name: " << janeFirstName << endl;

    // Use the conversion operator to get Jane's weight
    float janeWeight = Jane;  // Implicit conversion to float (mWeight)
    cout << "Jane's Weight: " << janeWeight << endl;

    return 0;
}
