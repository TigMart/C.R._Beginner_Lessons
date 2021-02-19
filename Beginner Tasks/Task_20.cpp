// Task_20 : Enter the user name, convert the name to uppercase, if the name is lowercase. 

#include <iostream> 
#include <string>

int main()
{
    char name[50];
    int i;
    std::cout << "please Enter your name in lowercase: ";
    std::cin >> name;

    for (i = 0; i <= strlen(name); i++) {
        if (name[i] >= 97 && name[i] <= 122)
            name[i] -= 32;
    }
     
    std::cout << "The entered name in uppercase: " << name;
    return 0;
}
