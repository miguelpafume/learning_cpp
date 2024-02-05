#include <iostream>

int main() {
    std::cout << "Welcome to box calculator. Please type the length, width and height information:\n";
    
    double Length, Width, Height;

    std::cout << "Length: ";
    std::cin >> Length;

    std::cout << "Width: ";
    std::cin >> Width;

    std::cout << "Height: "; 
    std::cin >> Height;

    double BaseArea = Width * Length;
    double Volume = BaseArea * Height;
    
    std::cout << "\nThe base area is: " << BaseArea << "\nThe volume is: " << Volume; 

    return 0;
}