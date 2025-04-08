#include <iostream>

using namespace std;

int main() {
    int rows, columns;
    double array[3][3]; 

    
    cout << "Enter rows (1-3): ";
    cin >> rows;

    cout << "Enter columns (1-3): ";
    cin >> columns;

    // Check if dimensions are within the allowed range
    if (rows < 1 || rows > 3 || columns < 1 || columns > 3) {
        cout << "Rows and columns must be between 1 and 3." << endl;
        return 1;
    }

    // Input values into the array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    
    cout << "\nArray values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


    