// Task_27: 

#include <iostream>


int main()
{
    int a, b, c;
    bool d = true;
    bool e = false;
    std::cout << "Please enter a digit: a = ";
    std::cin >> a;
    std::cout << "Please enter a digit: b = ";
    std::cin >> b;
    std::cout << "Please enter a digit: c = ";
    std::cin >> c;
    if (a != b && a != c && b != c) {
        std::cout << c << std::endl << b << std::endl << a << std::endl;
        std::cout << std::boolalpha << d;
    }
    else {
        std::cout << std::boolalpha << e;
    }
    return 0;

}


