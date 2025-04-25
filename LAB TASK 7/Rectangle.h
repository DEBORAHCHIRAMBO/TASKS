#pragma once

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();            // Default constructor
    Rectangle(float l, float w); // an overloaded constructor         
    ~Rectangle();         // Destructor

    void setLength(float l);
    void setWidth(float w);

    float getLength() const;
    float getWidth() const;
    float getArea() const;
};
