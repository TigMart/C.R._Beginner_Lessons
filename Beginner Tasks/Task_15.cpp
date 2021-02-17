// Task_15: Enter tree variables, print the maximum value of them. 


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
    if (a >= b && a >=c) {
        std::cout << "a is greater than b, c" << std::endl << a;
    }
    else if(b >= a && b >= c){
        std::cout << "b is greater than a,c" << std::endl << b;
    }
    else {
        std::cout << "c is greater than a,b" << std::endl << c;
    }
    return 0;
}



