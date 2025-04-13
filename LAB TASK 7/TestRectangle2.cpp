#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    
    Rectangle()
    {
        length = 0;
        width = 0;
    }

    
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    ~Rectangle()
    {
    }

    void setLength(float l)
    {
        length = l;
    }

    void setWidth(float w)
    {
        width = w;
    }

    float getArea()
    {
        return length * width;
    }
};

int main()
{
    Rectangle rect;
    float length, width;

    
    cout << "Enter the length of the first rectangle: ";
    cin >> length;
    cout << "Enter the width of the first rectangle: ";
    cin >> width;

    rect.setLength(length);
    rect.setWidth(width);

    cout << "The area of the first rectangle is: " << rect.getArea() << endl;

    float length2, width2;
    cout << "\nEnter the length of the second rectangle: ";
    cin >> length2;
    cout << "Enter the width of the second rectangle: ";
    cin >> width2;

    Rectangle rect2(length2, width2);

    cout << "The area of the second rectangle is: " << rect2.getArea() << endl;

    return 0;
}
