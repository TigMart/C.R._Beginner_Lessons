// Problem_42.cpp : 

#include <iostream>

void foo(int num);

int main()
{
    int number;
    std::cout << "Please enter positive number: ";
    std::cin >> number;
    foo(number);
}

void foo(int num)
{
    if (num < 0) { return; }
    std::cout << num;
    foo(--num);
}


