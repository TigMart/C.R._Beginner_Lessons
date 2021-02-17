// Task_16: Enter tree variables, print the minimum value of them. 


#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    std::cout << "Dear User enter  any digit, a=: ";
    std::cin >> a;
    std::cout << "Dear User enter  any digit, b=: ";
    std::cin >> b;
    std::cout << "Dear User enter  any digit, c=: ";
    std::cin >> c;
    if (a <= b && a <= c) {
        std::cout << "a is less than b, c" << std::endl << a;
    }
    else if (b <= a && b <= c) {
        std::cout << "b is less than a, c" << std::endl << b;
    }
    else {
        std::cout << "c is less than a, b" << std::endl << c;
    }
    return 0;
}



