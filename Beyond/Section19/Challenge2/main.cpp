#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

int CalcScore(const std::string &answer_sheet, const std::string &answer) {
  int temp {};
  for (int i {0}; i < answer_sheet.size(); i++) {
    if (answer_sheet[i] == answer[i]) {temp++;}
  }
  return temp;
}

int main() {
	std::ifstream file{"responses.txt"};

	std::string line, answer_sheet, name, answer {};
  int line_count {0};

  std::cout << std::left << std::setw(10) << "NAME" << std::setw(8) << "ANSWER" << "SCORE" << std::endl;
  std::cout << std::setfill('-') << std::setw(23) << "" << std::setfill(' ') << std::endl;

  while (file >> line) {
    line_count++;

    if (line_count == 1) {answer_sheet = line; continue;}

    if (line_count % 2 == 0) {
      name = line;
    } else {
      answer = line;
      int score = CalcScore(answer_sheet, answer);
      std::cout << std::left << std::setw(10) << name;
      std::cout << std::setw(10) << std::left<< answer;
      std::cout << score << "/5" << std::endl;
    }
  }

	return 0;
}