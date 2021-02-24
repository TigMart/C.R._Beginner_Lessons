// Task_29:

#include <iostream>

int main()
{
    int a = 0;
    std::cout << "Enter a digit. a = ";
    std::cin >> a;
    if (a % 2 == 0) {
        std::cout <<"Is it even number? " << "Yes it's "  << std::boolalpha << true;
    }
    else {
        std::cout << "Is it even number? " << "No  it's " << std::boolalpha << false;
    }

    return 0;
}


