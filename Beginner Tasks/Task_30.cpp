// Task_30:

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cout << "Enter a digit. a = ";
    std::cin >> a;
    if (a % 2 == 0) {
        for (b = 0; b <= 100; ++b) {
            std::cout << b << std::endl;
        }
    }
    else {
        for (b = 100; b >= 0; --b) {
            std::cout << b << std::endl;
        }
    }
    return 0;
}


