// String.cpp : 

#include <iostream>
#include "String.h"

int main()
{
    String a;
    a.push_back('t');
    a.push_back('i');
    a.push_back('k');
    a.push_front('1');
    a.print();
    std::cout << std::endl;
    char str[] = "Text";
    String b(str);
    b.print();
    a.insert('5', 1);
    a.erase(0);
    a.pop_back();
    std::cout<<std::boolalpha<<a.empty()<<std::endl;
    std::cout << a.back() << std::endl;
    std::cout << a.front() << std::endl;
    return 0;
}
