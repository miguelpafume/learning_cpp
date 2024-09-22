#include "Trust_Account.h"

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}

Trust_Account::Trust_Account(std::string name, double balance, double int_rate) 
 : Savings_Account {name, balance, int_rate} {
}

bool Trust_Account::deposit(double amount) {
  if (amount > 0) {
    if (amount >= 5000) {
      amount += 50;
    }
    return Savings_Account::deposit(amount);
  }
  return false;
}
