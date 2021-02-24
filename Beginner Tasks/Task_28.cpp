// Task_28: Declare and enter two variables. Change the values of the variables in places and print them on the screen 


#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cout << "Enter a digit: a = ";
    std::cin >> a;
    std::cout << "Enter a digit: b = ";
    std::cin >> b;
    b = a + b;
    a = b - a;
    b = b - a;
    std::cout <<"A= "<< a << std::endl <<"B= "<< b;
    return 0;
}


