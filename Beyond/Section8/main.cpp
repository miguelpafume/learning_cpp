#include <iostream>

using namespace std;

int main() {
    cout << "Enter the amount of cents: ";
    int Cents {0};
    cin >> Cents;

    int Dollars, Quartes, Dimes, Nickels, Pennies = 0;

    Dollars = Cents/100;
    Cents %= 100;

    Quartes = Cents/25;    
    Cents %= 25;    

    Dimes = Cents/10;    
    Cents %= 10;  

    Nickels = Cents/5;    
    Cents %= 5;  

    Pennies = Cents;

    cout << "\nYou can provide this change as follows: " << endl;
    cout << "Dollars: " << Dollars << endl;
    cout << "Quartes: " << Quartes << endl;
    cout << "Dimes: " << Dimes << endl;
    cout << "Nickels: " << Nickels << endl;
    cout << "Pennies: " << Pennies << endl;

    return 0;
}