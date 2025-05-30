#include "Square.h"

namespace shapes {
    Square::Square() : sideLength(0) {}

    Square::Square(double side) : sideLength(side) {}

    double Square::getSideLength() const {
        return sideLength;
    }

    Square::~Square() {}
}
