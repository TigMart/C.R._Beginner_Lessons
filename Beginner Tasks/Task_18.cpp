/*Task_18 : Enter four variables, print the minimum value 
            if the sum of the four variables is zero. */


#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    int d;
    std::cout << "Dear User enter  any digit, a=: ";
    std::cin >> a;
    std::cout << "Dear User enter  any digit, b=: ";
    std::cin >> b;
    std::cout << "Dear User enter  any digit, c=: ";
    std::cin >> c; 
    std::cout << "Dear User enter  any digit, d=: ";
    std::cin >> d;
    if (a + b + c + d == 0) {
        if (a <= b && a <= c && a <= d) {
            std::cout << "a is less than b, c, d" << std::endl << a;
        }
        else if (b <= a && b <= c && b <= d) {
            std::cout << "b is less than a, c, d" << std::endl << b;
        }
        else if (c <= a && c <= b && c <= d) {
            std::cout << "c is less than a, b, d" << std::endl << c;
        }
        else {
            std::cout << "d is less than a, b, c" << std::endl << d;
        }
    }
    return 0;
}
