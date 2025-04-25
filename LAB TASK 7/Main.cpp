#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int main() {
    int choice;

    do {
        cout << "\n===== Area Calculator =====" << endl;
        cout << "1. Calculate the area of a Square" << endl;
        cout << "2. Calculate the area of a Triangle" << endl;
        cout << "3. Calculate the area of a Circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double side;
                cout << "Enter side length of the square: ";
                cin >> side;
                Square square(side);
                double area = Area::calculateSquareArea(square);
                cout << "Area of the square: " << area << endl;
                break;
            }
            case 2: {
                double base, height;
                cout << "Enter base of the triangle: ";
                cin >> base;
                cout << "Enter height of the triangle: ";
                cin >> height;
                Triangle triangle(base, height);
                double area = Area::calculateTriangleArea(triangle);
                cout << "Area of the triangle: " << area << endl;
                break;
            }
            case 3: {
                double radius;
                cout << "Enter radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                double area = Area::calculateCircleArea(circle);
                cout << "Area of the circle: " << area << endl;
                break;
            }
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
