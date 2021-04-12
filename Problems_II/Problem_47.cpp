// Problem_47.cpp :

#include <iostream>
#include <string>

void reverse_str(std::string text);

int main()
{
    std::string text = "Coderepublic";
    reverse_str(text);
    return 0;
}

void reverse_str(std::string text)
{
    for (int i = text.length()-1; i >= 0; i--)
        std::cout << text[i];
}