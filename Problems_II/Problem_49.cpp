// Problem_49.cpp :

#include <iostream>

void Spilt_number(int number, int k);

int main()
{
    Spilt_number(12345, 3);
}

void Spilt_number(int number, int k)
{
    int reverse = 0;
    std::cout << "First " << k << " numbers of " << number << ": ";
    for (; number != 0; number /= 10) {
        reverse = reverse * 10 + (number % 10);
    }
    int  i = 0;
    for (; reverse != 0; reverse /= 10) {
        ++i;
        if(i<=k)
        std::cout << reverse % 10;
    }
    std::cout << std::endl;
}
