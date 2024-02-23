#include <iostream>
#include <string>

using namespace std;

int main() {

    //Declares both the user input and its inverted value.
    string PyramidLetters {};
    string InvertedLetters {};

    //Asks for the input
    cout << "Input the string to make the pyramid: ";
    getline(cin, PyramidLetters);

    //Goes backwards through PyramidLetters and saves the results to InvertedLetters
    for (size_t r {PyramidLetters.size()}; r != 0; r--) {
        InvertedLetters.push_back(PyramidLetters.at(r-1));
    }

    //The ammount of times the program'll iterate is bases on the size of the string + the value used to limit the outputs of the string
    for (int i {0}; i < PyramidLetters.size(); i++) {
        //Outputs the spaces bases on the size of the string
        for (size_t j {0}; j < (PyramidLetters.size()-i); j++) {
            cout << " "; 
        }

        //Outputs the inputed string limited at the iteration number
        for (int j {0}; j <= i; j++) {
            cout << PyramidLetters.at(j);
        }

        //Goes through the inverted list and doesn't break automatically
        for (size_t k {(InvertedLetters.size())};; k++) {
            //Breaks out of the loop if the position of k is over the size of the string (skips the first/repeated letter)
            if (k-i >= InvertedLetters.size())
            break;
            
            //Outputs the letter on the inverted string based on the max value of the string - the iteration value
            if (InvertedLetters.at(k-i) != string::npos)
                cout << InvertedLetters.at(k-i);
        }
        //Break line
        cout << endl;
    }
    return 0;
}