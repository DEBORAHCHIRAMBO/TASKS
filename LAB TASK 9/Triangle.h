#pragma once

#include "Polygon.h"

class Triangle : public Polygon {
public:
    Triangle(int a, int b) : Polygon(a, b) {}
    void PrintArea() override {
        cout << "Triangle area: " << (width * height) / 2 << '\n';
    }
};
