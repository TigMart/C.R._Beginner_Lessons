// Problem_45.cpp :


#include <iostream>

int Fib(int n);

int main()
{
    int number;
    std::cout << "Please enter positive number: ";
    std::cin >> number;
    int result = Fib(number);
    std::cout << result;
    return 0;
}

int Fib(int n)
{
   
    int a = 0;
    int b = 1;
    int tmp;
    if (n == 0) { return a; }
    for (int i = 2; i <= n; i++)
    {
        tmp = a + b;
        a = b;
        b = tmp;
    }
    return b;
}
