//This isn't exactly what was asked but I think is cooler and more dynamic.
//The exercice was basically a substitution cypher, but I made a A1Z26

#include <string>
#include <iostream>

using namespace std;

int main() { 
    string UpperAlphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string LowerAlphabet {"abcdefghijklmnopqrstuvwxyz"};

    string UserInput {};
    
    cout << "Write the text to be encrypted: ";
    getline(cin, UserInput);

    size_t Position {};
    size_t Steps {1};

    for (size_t i {0}; i < UserInput.size(); i++) {
        size_t LetterPosition = UpperAlphabet.find((UserInput.at(i)));

        if (UserInput.at(i) == ' ') {
            continue;
        } else {
            if (UpperAlphabet.find((UserInput.at(i))) == string::npos) {
                LetterPosition = LowerAlphabet.find((UserInput.at(i)));

                LetterPosition+Steps >= LowerAlphabet.size() ? Position = LetterPosition-(26-Steps) : Position = LetterPosition+Steps;

                UserInput.replace(i, 1, 1, LowerAlphabet.at(Position));
            } else {
                LetterPosition = UpperAlphabet.find((UserInput.at(i)));

                LetterPosition+Steps >= UpperAlphabet.size() ? Position = LetterPosition-(26-Steps) : Position = LetterPosition+Steps;

                UserInput.replace(i, 1, 1, UpperAlphabet.at(Position));
            }
        }
    }

    string SolvedInput {UserInput};

    for (size_t i {0}; i < SolvedInput.size(); i++) {
        size_t LetterPosition = UpperAlphabet.find((SolvedInput.at(i)));

        if (SolvedInput.at(i) == ' ') {
            continue;
        } else {
            if (UpperAlphabet.find((SolvedInput.at(i))) == string::npos) {
                LetterPosition = LowerAlphabet.find((SolvedInput.at(i)));

                LetterPosition-Steps < 0 ? Position = LetterPosition+(25+Steps) : Position = LetterPosition-Steps;

                SolvedInput.replace(i, 1, 1, LowerAlphabet.at(Position));
            } else {
                LetterPosition = UpperAlphabet.find((SolvedInput.at(i)));

                LetterPosition-Steps < 0 ? Position = LetterPosition+(25+Steps) : Position = LetterPosition-Steps;

                SolvedInput.replace(i, 1, 1, UpperAlphabet.at(Position));
            }
        }
    }

    cout << "\nEncrypted message is: " << UserInput;
    cout << "\nThe decripted message is: " << SolvedInput;

    return 0;
}