#include <iostream>
#include <string>
#include <format>

int main() {
    std::string first_name {};
    int age {};

    std::cout << "Enter the name of the person you want to write to: ";
    std::cin >> first_name;
    std::cout << "Enter the age of the pearson you want to write to: ";
    std::cin >> age;

    if (age <= 0 || age >= 110) {
        std::cout << "You're kidding!";
        return 0;
    }

    std::string friend_name {};
    char friend_sex {};

    std::cout << "\nEnter the name of a friend: ";
    std::cin >> friend_name;
    std::cout << "Enter the sex of the friend (m/f)): ";
    std::cin >> friend_sex;


    std::cout << format("\nDear {},\nHow are you? I am fine. I miss you.\nHave you seen {} lately? ", first_name, friend_name);

    if (friend_sex == 'f') {
        std::cout << format("If you see {} please ask her to call me.", friend_name);
    }

    if (friend_sex == 'm') {
        std::cout << format("If you see {} please ask him to call me.", friend_name);
    }

    std::cout << std::format("\nI hear you just had a birthday and you are {} years old.", age);

    if (age < 12) {
        std::cout << std::format("\nNext year you will be {}.", age+1);
    } else if (age = 17) {
        std::cout << "\nNext year you will be able to vote.";
    } else if (age > 70) {
        std::cout << "I hope you are enjoying retirement.";
    }

    std::cout << "Your's sincerely,\n\nMiguel Pafume R.";

    return 0;
}