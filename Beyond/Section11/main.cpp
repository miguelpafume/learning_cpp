#include <iostream>
#include <vector>

using namespace std;

void DisplayMenu() {
    cout << "P - Print Numbers" << endl;
    cout << "A - Add Number" << endl;
    cout << "M - Display Mean of Numbers" << endl;
    cout << "S - Display the Smallest Number" << endl;
    cout << "L - Display the Largest Number" << endl;
    cout << "Q - Quit" << endl;
}

void PrintNumbers(const vector<int> &vec) {
    if (vec.size() == 0) {
        cout << "[ ] - the list is empty." << endl;
    } else {
        cout << "[ ";
        for (int i: vec) {
            cout << i << " ";
        }
        cout << "]" << endl;
    }
}

void AddNumber(vector<int> &vec) {
    int num {};
    cout << "Type your number: ";
    cin >> num; 
    vec.push_back(num);
    cout << "Number " << num << " was added.\n";
}

void MeanNumber(const vector<int> &vec) {
    if (vec.size() == 0) {
        cout << "Unable to calculate the mean - no data." << endl;
    } else {
        double average_number {0};
        for (int j: vec) {
            average_number += j;
        }
        average_number /= vec.size();
        cout << "The average of all numbers in the list is: " << average_number << endl;
    }
}

void SmalledNumber(const vector<int> &vec) {
    if (vec.size() == 0) {
        cout << "Unable to determine the smallest number - list is empty." << endl;
    } else {
        int SmallestNumber {vec.at(0)};
        for (int i: vec) {
            (i < SmallestNumber) ? SmallestNumber = i : SmallestNumber = SmallestNumber;
        } 
        cout << "The smallest number is: " << SmallestNumber << endl;
    }
}

void LargestNumber(const vector<int> &vec) {
    if (vec.size() == 0) {
        cout << "Unable to determine the largest number - list is empty." << endl;
    } else {
        int LargestNumber {vec.at(0)};
        for (int i: vec) {
            (i > LargestNumber) ? LargestNumber = i : LargestNumber = LargestNumber;
        } 
        cout << "The largest number is: " << LargestNumber << endl;
    }
}

int main() {
    char choice {};
    vector<int> Numbers {};

    while (true) {
        cout << "\n-=-=-=-=-=-=-=-=-=-=\n\n";

        DisplayMenu();

        cout << "\nEnter your choice: ";
        cin >> choice;
        choice = toupper(choice);

        cout << "\n-=-=-=-=-=-=-=-=-=-=\n\n";

        if(choice == 'Q'){
            cout << "Goodbye!\n";
            break;
        }

        switch (choice) {
            case 'P': {
                PrintNumbers(Numbers);
                break;
            }

            case 'A': {
                AddNumber(Numbers);
                break;
            }

            case 'M': {
                MeanNumber(Numbers);
                break;
            }

            case 'S': {
                SmalledNumber(Numbers);
                break;
            }

            case 'L': {
                LargestNumber(Numbers);
                break;
            }

            default: cout << "Unknown selection, please try again.\n";
        }
    }
    return 0;
}