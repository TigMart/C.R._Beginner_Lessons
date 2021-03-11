// Task_6: 

#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "What is your name? ";
    std::cin >> name;
    for (int i = name.size()-1; i >= 0; --i) {
        std::cout << name[i];
    }
    return 0;
}


