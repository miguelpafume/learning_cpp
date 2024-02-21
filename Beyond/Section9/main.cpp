#include <iostream>
#include <vector>

using namespace std;

int main() {
    char Choice {};
    vector<int> Numbers {};

    while (true) {
        cout << "\n-=-=-=-=-=-=-=-=-=-=\n\n";

        cout << "P - Print Numbers" << endl;
        cout << "A - Add Number" << endl;
        cout << "M - Display Mean of Numbers" << endl;
        cout << "S - Display the Smallest Number" << endl;
        cout << "L - Display the Largest Number" << endl;
        cout << "Q - Quit" << endl;

        cout << "\nEnter your choice: ";
        cin >> Choice;

        cout << "\n-=-=-=-=-=-=-=-=-=-=\n\n";

        if(Choice == 'Q' || Choice == 'q'){
            cout << "Goodbye!\n";
            break;
        }

        switch (Choice) {
            case 'p':
            case 'P': {
                if (Numbers.size() == 0) {
                    cout << "[ ] - the list is empty." << endl;
                } else {
                    cout << "[ ";
                    for (int i: Numbers) {
                        cout << i << " ";
                    }
                    cout << "]" << endl;
                }
                break;
            }

            case 'a':
            case 'A': {
                int Number {0};
                cout << "Type your number: ";
                cin >> Number; 
                Numbers.push_back(Number);
                cout << "Number " << Number << " was added.\n";
                break;
            }

            case 'm':
            case 'M': {
                if (Numbers.size() == 0) {
                    cout << "Unable to calculate the mean - no data." << endl;
                } else {
                    double AverageNumber {0};
                    for (int j: Numbers) {
                        AverageNumber += j;
                    }
                    AverageNumber /= Numbers.size();
                    cout << "The average of all numbers in the list is: " << AverageNumber << endl;
                }
                break;
            }

            case 's':
            case 'S': {
                if (Numbers.size() == 0) {
                    cout << "Unable to determine the smallest number - list is empty." << endl;
                } else {
                    int SmallestNumber {Numbers.at(0)};
                    for (int i: Numbers) {
                        (i < SmallestNumber) ? SmallestNumber = i : SmallestNumber = SmallestNumber;
                    } 
                    cout << "The smallest number is: " << SmallestNumber << endl;
                }
                break;
            }

            case 'l':
            case 'L': {
                if (Numbers.size() == 0) {
                    cout << "Unable to determine the largest number - list is empty." << endl;
                } else {
                    int LargestNumber {Numbers.at(0)};
                    for (int i: Numbers) {
                        (i > LargestNumber) ? LargestNumber = i : LargestNumber = LargestNumber;
                    } 
                    cout << "The largest number is: " << LargestNumber << endl;
                }
                break;
            }

            default: cout << "Unknown selection, please try again.\n";
        }
    }
    return 0;
}