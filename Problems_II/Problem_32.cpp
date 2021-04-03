// Problem_32.cpp : 

#include <iostream>
#include <string>

std::string Reapeted_char(std::string text);

int main() {
    std::cout << Reapeted_char("hheeellowoooooooorld");
    return 0;
}

std::string Reapeted_char(std::string text) {
    int max = 0;
    int count = 0;
    std::string maxCharacter;
    int size = text.length();

        for (int i = 0; i < size; i++) {
            int tmp = 1;
            if (text[i] == text[i + 1]) {
                for (int j = i + 1; j < size; ++j) {
                    if (text[j] == text[j + 1]) {
                        tmp++;
                        i++;
                    }
                }
            }
            if (tmp > count)
            {
                count = tmp;
                maxCharacter = text[i];
            }
        }
    return maxCharacter;
}
