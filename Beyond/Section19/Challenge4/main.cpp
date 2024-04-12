#include <fstream>
#include <string>

int main () { 
  std::ifstream file_in   {"romeoandjuliet.txt"};
  std::ofstream file_out  {"numbered_romeoandjuliet.txt"};

  std::string line {};
  size_t line_number {1};

  while(std::getline(file_in, line)) {
    if(line != "") {
      file_out << line_number << " - " << line << std::endl;
      line_number++;
    } else {
      file_out << std::endl;
    }
  }

  file_out.close();
  file_in.close();
  return 0;
}