#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter an integer value between 5 and 10: ";
    while (true){
        cin >> number;
        if (number >= 5 && number <= 10){
        cout << "You entered " << number << " Has been accepted." <<endl;
        break;
        }
        else{
            cout << "Sorry. You enterer an invalid number.Please try again" << endl;
       }
    }
    return 0;
}
