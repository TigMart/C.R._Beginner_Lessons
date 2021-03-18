// Task_11.cpp:

#include <iostream>
#include<string>
int main()
{
    int size = 0;
    std::string square;
    std::string str;
    std::cout << "write the size of a house ";
    std::cin >> size;
    int c = size * 2 - 3;
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
    for (int a = 0; a < c; ++a)
    {
        square.push_back(' ');
        str=square; 
    }
    for (int i = 1; i <= size; ++i)
    {
        std::cout << "*" << str << "*" << std::endl;
        
    }
    for (int i = 1; i <= size*2-1; ++i) {
        std::cout  << "*";
    }
    return 0;
}