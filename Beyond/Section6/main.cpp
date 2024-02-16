#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Frank's Carpet Cleaning Service\n\n";

    int SmallRooms;
    cout << "How many small rooms would you like cleaned? ";
    cin >> SmallRooms;

    int LargeRooms;
    cout << "How many large rooms would you like cleaned? ";
    cin >> LargeRooms;

    double Cost = (SmallRooms * 25) + (LargeRooms * 35);
    double Tax = Cost * 0.06;

    cout << "\nEstimate for carpet cleaning service:\nNumber of small rooms: " << SmallRooms
    << "\nNumber of large rooms: " << LargeRooms
    << "\nPrice per small room: $25"s
    << "\nPrice per large room: $35"
    << "\nCost: $" << Cost
    << "\nTax: $" << Tax;

    cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=\n";

    double TotalCost = Cost + Tax;

    cout << "Total estimate: $" << TotalCost << "\nThis estimate is valid for 30 days.";

    return 0;
}