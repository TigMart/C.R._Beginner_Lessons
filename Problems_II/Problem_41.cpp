// Problem_41.cpp :

#include <iostream>

int Factorial(int num);

int main()
{
    int number;
    std::cout << "Please enter positive number: ";
    std::cin >> number;
    std::cout << Factorial(number);
    return 0;
}

int Factorial(int num)
{
    int result = 1;
    for (int i = 2; i <= num; i++) 
    {
        result *= i;
    }
    return result;
}
