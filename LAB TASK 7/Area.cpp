#include "Area.h"
#include <cmath>

double Area::calculateSquareArea(const shapes::Square& s) {
    return s.getSideLength() * s.getSideLength();
}

double Area::calculateTriangleArea(const shapes::Triangle& t) {
    return 0.5 * t.getBase() * t.getHeight();
}

double Area::calculateCircleArea(const shapes::Circle& c) {
    return M_PI * std::pow(c.getRadius(), 2);
}
