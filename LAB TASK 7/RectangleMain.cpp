#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    // First instance 
    Rectangle rect1;
    float length1, width1;

    cout << "Enter the length of the first rectangle: ";
    cin >> length1;
    cout << "Enter the width of the first rectangle: ";
    cin >> width1;

    rect1.setLength(length1);
    rect1.setWidth(width1);

    cout << "The area of the first rectangle is: " << rect1.getArea() << endl;

    // Second instance 
    float length2, width2;
    cout << "\nEnter the length of the second rectangle: ";
    cin >> length2;
    cout << "Enter the width of the second rectangle: ";
    cin >> width2;

    Rectangle rect2(length2, width2);

    cout << "The area of the second rectangle is: " << rect2.getArea() << endl;

    return 0;
}
