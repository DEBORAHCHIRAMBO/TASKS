#include <iostream>
#include <string>

using namespace std;

int main(){
    int * number = new int;
    cout << "Enter the value of number: ";
    cin >> *number;
    cin.ignore();
    cout << "Number is: " << *number << endl;

    

    string * name = new string;
    cout << "Enter name of string: " << *name << endl;
    getline(cin, *name);
    cout << "Name is: " << *name << endl;

    delete number;
    delete name;


    return 0;
}
