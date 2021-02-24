// Task_21 :  reverse of string

#include <iostream>
#include <string>

void reverse(std::string name) {
    std::cin >> name;
    int i;
    for (i = name.length() - 1; i >= 0; --i)
        std::cout << name[i];
}

int main()
{
    reverse("");
    return 0;
    
}
