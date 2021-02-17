// Task_14: Enter two variables, print the minimum value of them. 

#include <iostream>

int main()
{
    int a;
    int b;
    std::cout << "Dear User enter  any digit, a=: ";
    std::cin >> a;
    std::cout << "Dear User enter  any digit, b=: ";
    std::cin >> b;
    if (a <= b) {
        std::cout << "a is less than b" << std::endl << a;
    }
    else {
        std::cout << "b is less than a" << std::endl << b;
    }
    return 0;
}

