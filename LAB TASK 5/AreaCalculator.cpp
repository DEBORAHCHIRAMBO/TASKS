#include <iostream>

using namespace std;
int main(){

    int choice;
    double base, height, length ,width , side;

    cout << "Please select area of the shape to calculate: " << endl;
    cout << "1. Triangle" <<endl;
    cout << "2. Rectangle" <<endl;
    cout << "3. Square" <<endl;
    cout << "4. Quit Program" << endl;
    cout << "Enter selection: " << endl;
    cin >> choice;

    if (choice == 1){
        cout << "Enter base of the triangle: " <<endl;
        cin >> base;
        cout << "Enter height of the triangle: " <<endl;
        cin >> height;
        cout << "Area of the triangle is: " << 0.5 * base * height << endl; 
    }
      else if (choice == 2){
         cout << "Enter length of the rectangle: " << endl;
         cin >> length;
         cout << "Enter width of the rectangle: " << endl;
         cin >> width;
         cout << "Area of the rectangle is: " << length * width << endl;
      }
      else if(choice == 3){
        cout << "Enter side of the square: " << endl;
        cin >> side;
        cout << "Area of Square is: " << side * side << endl;
      }
      else if(choice == 4){
        cout << "Exiting the program" << endl;
      }
      else{
        cout << "your input was: " << choice << " which is an invalid input. Please enter a valid input!!!" << endl;
      }
      return 0;
}


