// Problem_51.cpp

#include <iostream>
#include <string>

std::string Shortest_Word(std::string str);

int main()
{
    std::string str;
    std::getline(std::cin, str);
    std::string word = Shortest_Word(str);
    std::cout << "Shortest Word: " << word;
    return 0;
}

std::string Shortest_Word(std::string str)
{
    std::cout << str.length();
    std::string tmpWord = "";
    std::string minWord = "";
    for (int i = 0; i<str.length(); ++i) {
        if (str[i] != ' ') {
            minWord.push_back(str[i]);
        }
        else {
            break;
        }
    }
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ') {
            tmpWord.push_back(str[i]);
            if (i + 1 == str.length() && tmpWord.length() < minWord.length()) {
                minWord = tmpWord;
            }
        }
        else {
            if (tmpWord.length() < minWord.length()) {
                minWord = tmpWord;
            }
            tmpWord.clear();
        }
    }
    return minWord;
}


