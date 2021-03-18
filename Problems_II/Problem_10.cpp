// Task_10 

#include <iostream>

int main() {
    double number_m = 0;
    double number_km = 0;
    std::cout << "Enter a number ";
    std::cin >> number_m;
    number_km = number_m / 1000.0;
    std::cout << number_m << " meters = "<<number_km<<" Kilometers";
    return 0;
}


