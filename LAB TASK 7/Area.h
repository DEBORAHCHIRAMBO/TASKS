#pragma once

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

class Area {
public:
    static double calculateSquareArea(const shapes::Square& s);
    static double calculateTriangleArea(const shapes::Triangle& t);
    static double calculateCircleArea(const shapes::Circle& c);
};
