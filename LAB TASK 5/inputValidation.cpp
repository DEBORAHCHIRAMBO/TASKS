#include <iostream>
#include <limits>

using namespace std;

int main() {
    int number = 0;

    while (true) {
        cout << "Enter a number between 5 and 10: ";
        cin >> number;

        // Check for invalid input
        if (cin.fail()) {
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "You entered an invalid input. Please enter a valid number.\n";
        } 
        else if (number < 5 || number > 10) {
            cout << "You entered an invalid number. Please try again.\n";
        } 
        else {
            break; 
        }
    }

    cout << "You input value: " << number << " has been accepted.\n";
    return 0;
}
