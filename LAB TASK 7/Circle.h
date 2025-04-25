#pragma once

namespace shapes {
    class Circle {
    private:
        double radius;

    public:
        Circle(); // Default constructor
        Circle(double r); // Overloaded constructor
        double getRadius() const;
        ~Circle(); // Destructor
    };
}
