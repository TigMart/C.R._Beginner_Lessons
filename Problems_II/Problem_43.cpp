// Problem_43.cpp : 

#include <iostream>

void foo(int);

int main()
{
    int number;
    std::cout << "Please enter positive number: ";
    std::cin >> number;
    foo(number);
    return 0;
}

void foo(int num)
{   
    while (num >= 0)
    {
        std::cout << num;
        --num;
    }
}


