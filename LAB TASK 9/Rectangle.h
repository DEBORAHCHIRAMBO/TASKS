#pragma once

#include "Polygon.h"

class Rectangle : public Polygon {
public:
    Rectangle(int a, int b) : Polygon(a, b) {}
    void PrintArea() override {
        cout << "Rectangle area: " << width * height << '\n';
    }
};
