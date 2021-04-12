// Problem_40.cpp :

#include <iostream>

int Factorial(int num);

int main()
{
    int number;
    std::cout << "Please enter positive number: ";
    std::cin >> number;
    int result = Factorial(number);
    std::cout << result;
    return 0;
}

int Factorial(int num)
{
    if (num <= 1) { return 1; }
    return num * Factorial(num - 1);
}