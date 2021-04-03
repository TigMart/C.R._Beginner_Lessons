// Problem_31.cpp : 

#include <iostream>
#include <string>

std::string Reapeted_char(std::string text);

int main() {
    std::cout << Reapeted_char("ABCEE");
    return 0;
}

std::string Reapeted_char(std::string text) {
    int max = 0;
    int count = 0;
    std::string maxCharacter;
    int size = text.length();
    for (char q = 0; q <= 126; q++) {
        count = 0;
        for (int i = 0; i <size; i++) {
            if (text[i] == q)
                count++;
        }
        if (count > max)
        {
            max = count;
            maxCharacter = q;
        }
    }
    return maxCharacter;
}
