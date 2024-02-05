#include <iostream>

int main () {
    double celsius;

    std::cout << "Enter a degree in Celcius you want to convert to Fahrenheit:\n";
    std::cin >> celsius;

    double fahrenheit = (9.0/5.0) * celsius + 32;
    
    std::cout << std::endl << celsius << " Celcius is the same as " << fahrenheit << " Fahrenheit!";
}