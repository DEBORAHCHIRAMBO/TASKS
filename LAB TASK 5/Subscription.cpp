#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    int days = rand() % 12; 

    cout << "Enter number of days." << endl;
    cin >> days;

    cout << "Days until subscription expires: " << days << endl;
   

    if (days == 0)
        cout << "Your subscription has expired." << endl;
    else if (days == 1)
        cout << "Your subscription expires within a day!\nRenew now and save 20%!" << endl;
    else if (days <= 5)
        cout << "Your subscription expires in " << days << " days.\nRenew now and save 10%!" << endl;
    else if (days <= 10)
        cout << "Your subscription will expire soon. Renew now!" << endl;
    else
        cout << "You have an active subscription." << endl;

    return 0;
}