#pragma once

class MyString {
  friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);
  friend std::istream &operator>>(std::istream &is, MyString &rhs);

  private:
  char *str;

  public:
  MyString(); //no arg
  MyString(const char *string); //overloaded constructor
  MyString(const MyString &src); //copy construcor 
  MyString(MyString &&src); //move constructor
  ~MyString(); //destructor

  MyString &operator=(const MyString &rhs);
  MyString &operator=(MyString &&rhs);

  MyString operator+(const MyString &rhs) const;
  MyString &operator+=(const MyString &rhs);

  MyString operator*(const size_t &rhs) const;
  MyString &operator*=(const size_t &rhs);

  MyString operator-() const;

  bool operator>(const MyString &rhs) const;
  bool operator<(const MyString &rhs) const;

  bool operator==(const MyString &rhs) const;
  bool operator!=(const MyString &rhs) const;
};