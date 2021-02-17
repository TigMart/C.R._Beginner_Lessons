// Task_13: Enter two variables, print the maximum value of them. 
 



#include <iostream>

int main()
{
    int a;
    int b;
    std::cout << "Dear User enter  any digit, a=: ";
    std::cin >> a;
    std::cout << "Dear User enter  any digit, b=: ";
    std::cin >> b;
    if (a >= b) {
        std::cout << "a is greater than b" << std::endl << a;
    }
    else {
        std::cout << "b is greater than a" << std::endl << b;
    }
    return 0;
}


