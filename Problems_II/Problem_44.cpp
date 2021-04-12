// Problem_44.cpp : 

#include <iostream>

int Fib(int num);

int main()
{
    int number;
    std::cout << "Please enter positive number: ";
    std::cin >> number;
    int result = Fib(number);
    std::cout << result;
    return 0;
}

int Fib(int num)
{
    if (num<=1) { return num; }
    return Fib(num - 1) + Fib(num - 2);
}