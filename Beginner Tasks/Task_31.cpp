// Task_31: 

#include <iostream>
#include <string>

int main()
{
    int num = 0;
    std::string name;
    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "How many times do I print your name on the screen? ";
    std::cin >> num;
    while (num>0)
    {
        std::cout<< std::endl << name;
        --num;
    }
    return 0;
}


