#include <fstream>
#include <iostream>
#include <string>

int main () {
  std::ifstream file {"romeoandjuliet.txt"};

  std::string input, word {};
  int count {0};
  
  std::cout << "Write a word to search in the text:\n> ";
  std::cin >> input;

  for (int i {0}; i < input.size(); i++) {
    input[i] = tolower(input[i]);
  }  

  while (file >> word) {
    if (word.size() < input.size()) {continue;}
  
    for (int i {0}; i < word.size(); i++) {
      int temp {0};
      if (tolower(word[i]) == input[0]) {
        for (int j {0}; j < input.size(); j++) {
          if (tolower(word[i+j]) == input[j]) {
            temp++;
          }
        }
      }
      if (temp == input.size()) {count++;}
    }

  }
  std::cout << "The word was repeated " << count << " ammount of times." << std::endl;
  return 0;
}