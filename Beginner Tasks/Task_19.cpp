// Task_19 : Enter the username and age. Print a welcome message on the screen. 


#include <iostream>
#include <string>

int main()
{   
    std::string name;
    std::cout << "Please enter your name :";
    std::cin >> name;
    std::cout << "Hello dear " << name << std::endl << "How old are you? " << std::endl;
    int age;
    std::cout << "Please enter your age :";
    std::cin >> age;
    return 0;
}

