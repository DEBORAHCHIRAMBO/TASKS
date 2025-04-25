#pragma once

namespace shapes {
    class Square {
    private:
        double sideLength;

    public:
        Square(); // Default constructor
        Square(double side); // Overloaded constructor
        double getSideLength() const;
        ~Square(); // Destructor
    };
}
