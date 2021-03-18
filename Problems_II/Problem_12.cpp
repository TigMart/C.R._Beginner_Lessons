// Task_12.cpp:

#include <iostream>

int main()
{
    int size = 0;
    std::cout << "write the size of a triangle: ";
    std::cin >> size;
    for (int i = 1; i <= size; ++i)
    {
        for (int j = size - i; j > 0; --j) {
            std::cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    return 0;
}

