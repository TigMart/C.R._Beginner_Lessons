// Problem_52.cpp : 

#include <iostream>
#include <string>

std::string Shortest_Word(std::string str);
std::string Longest_Word(std::string str);

int main()
{
    std::string str;
    std::cout << "Enter Sentenc: ";
    std::getline(std::cin, str);
    std::string minword = Shortest_Word(str);
    std::string maxword = Longest_Word(str);
    std::cout << "Shortest Word: " << minword << std::endl;
    std::cout << "longest Word: " << maxword;
    return 0;
}

std::string Shortest_Word(std::string str)
{
    std::string tmpWord = "";
    std::string minWord = "";
    for (int i = 0; i < str.length(); ++i) {
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

std::string Longest_Word(std::string str)
{

    std::string tmpWord = "";
    std::string maxWord = "";
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ') {
            maxWord.push_back(str[i]);
        }
        else {
            break;
        }
    }
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ') {
            tmpWord.push_back(str[i]);
            if (i + 1 == str.length() && tmpWord.length() > maxWord.length()) {
                maxWord = tmpWord;
            }
        }
        else {
            if (tmpWord.length() > maxWord.length()) {
                maxWord = tmpWord;
            }
            tmpWord.clear();
        }
    }
    return maxWord;
}