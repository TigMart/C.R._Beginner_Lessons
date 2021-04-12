// Problem_33.cpp : 

#include <iostream>

bool foo(int num);

int main()
{
    int num;
    std::cout << "Please enter positive number: ";
    std::cin >> num;
    std::cout<<std::boolalpha<<foo(num);
}   
bool foo(int num)
{
    if (num <= 1) { return false; }
    for (int i = 2; i < num; ++i) {
        if (num % i == 0) { return false; }
    }
    return true;
}



