#include <iostream>
using namespace std;

class Rectangle
{
    private:
    float length;
    float width;

    public:
    Rectangle ()
    {
        length = 0;
        width = 0;
    }

     ~ Rectangle(){
        
     }
    void setLength (float l)
     {
        length = l;
        }
    void setWidth (float w)
        {
         width = w;
            }

    float getArea()
    {
        return  length * width;
    }
};

int main(){
    Rectangle rect;
    float length , width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    rect.setLength(length);
    rect.setWidth(width);

    cout << "The area of a rectangle is: " << rect.getArea() << endl;
    return 0;


}