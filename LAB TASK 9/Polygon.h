#pragma once

#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    Polygon(int a = 0, int b = 0) : width(a), height(b) {}
    virtual void PrintArea() = 0; // pure virtual function
    virtual ~Polygon() {} // virtual destructor (important for deleting derived objects)
};
