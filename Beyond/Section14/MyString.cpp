#include <iostream>
#include <cstring>
#include "MyString.hpp"

MyString::MyString() : str{nullptr} { 
  str = new char[1];
  *str = '\0';
}

MyString::MyString(const char *string) : str{nullptr} { 
  if(string == nullptr) {
    str = new char[1];
    *str = '\0';
  } else {
    str = new char[strlen(string) + 1];
    strcpy(str, string);
  }
}

MyString::MyString(const MyString &src) : str{nullptr} { 
  str = new char[strlen(src.str) + 1];
  strcpy(str, src.str);
}

MyString::MyString(MyString &&src) : str {src.str} {
  src.str = nullptr;
}

MyString::~MyString() {
  delete [] str;
}

std::ostream &operator<<(std::ostream &os, const MyString &rhs) { 
  os << rhs.str;
  return os;
}

std::istream &operator>>(std::istream &is, MyString &rhs) {
  char buff[255];
  is >> buff;
  rhs = MyString{buff};
  return is;
}

MyString &MyString::operator=(const MyString &rhs) {
  if (this == &rhs) {
    return *this;
  }
  delete [] str;
  str = new char[strlen(rhs.str) + 1];
  strcpy(str, rhs.str);
  return *this;
}

MyString &MyString::operator=(MyString &&rhs) {
  if (this == &rhs) {
    return *this;
  }
  delete [] str;
  str = rhs.str;
  rhs.str = nullptr;
  return *this;
}

bool MyString::operator==(const MyString &rhs) const {
  return (strcmp(str, rhs.str) == 0);
}

bool MyString::operator!=(const MyString &rhs) const {
  return (strcmp(str, rhs.str) != 0);
}

MyString MyString::operator+(const MyString &rhs) const {
  char *buff {new char[strlen(str) + strlen(rhs.str) + 1]};
  strcpy(buff, str);
  strcat(buff, rhs.str);
  MyString temp {buff};
  delete [] buff;
  return temp;
}

MyString &MyString::operator+=(const MyString &rhs) {
  *this = *this + rhs;
  return *this;
}

MyString MyString::operator*(const size_t &rhs) const {
  MyString temp {};
  for(size_t i {0}; i < rhs; i++) {
    temp += str;
  }
  return temp;
}

MyString &MyString::operator*=(const size_t &rhs) {
  *this = *this * rhs;
  return *this;
}

MyString MyString::operator-() const {
  char *buff {new char[strlen(str) + 1]};

  for(size_t i {0}; i < strlen(str); i++) {
    buff[i] = std::tolower(str[i]);
  }

  MyString temp {buff};
  delete [] buff;
  return temp;
}

bool MyString::operator>(const MyString &rhs) const {
  return (strcmp(str, rhs.str) > 0);
}

bool MyString::operator<(const MyString &rhs) const {
  return (strcmp(str, rhs.str) < 0);
}