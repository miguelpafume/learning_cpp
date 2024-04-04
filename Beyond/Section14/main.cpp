#include <iostream>
#include "MyString.hpp"

int main() {
  std::cout << std::boolalpha;

  MyString mystring1;
  mystring1 = "pera";

  MyString ms2 {"MORANGO"};

  bool compare = {mystring1 == ms2};
  bool compare2 = {mystring1 != ms2};

  std::cout << compare << std::endl; 
  std::cout << compare2 << std::endl << std::endl;

  mystring1 = "abacaxi";
  compare = {mystring1 == ms2};
  compare2 = {mystring1 != ms2};

  std::cout << compare << std::endl;
  std::cout << compare2 << std::endl;
  
  std::cout << "-=-=-=-=-=-=-=-=-=" << std::endl;
  std::cout << mystring1 << " =! " << ms2 << std::endl;
  
  std::cin >> mystring1;
  std::cout << mystring1 << std::endl;

  MyString allstr {mystring1 + ms2};

  std::cout << allstr << std::endl;

  allstr += "banana";

  std::cout << allstr << std::endl;
  std::cout << mystring1 << std::endl;
  std::cout << ms2 << std::endl;

  std::cout << mystring1 * 3 << std::endl;

  mystring1 *= 5;

  std::cout << mystring1 << std::endl;

  ms2 = -ms2;

  std::cout << ms2 << std::endl;

  std::cout << (ms2 < mystring1) << std::endl;
  std::cout << (ms2 > mystring1) << std::endl;

  return 0;
}