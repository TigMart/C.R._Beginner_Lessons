// Problem_53.cpp : 

#include <iostream>
#include <string>

std::string all_digits(std::string str);

int main()
{
    std::string str;
    std::cout << "Enter Sentenc: ";
    std::getline(std::cin, str);
    std::string minword = all_digits(str);
    std::cout << "Digits in sentenc: " << minword << std::endl;
    return 0;
}

std::string all_digits(std::string str)
{

    std::string tmp = "";
    std::string digits = "";
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= 48 && str[i] <= 57) {
            digits.push_back(str[i]);
        }
    }
    return digits;
}