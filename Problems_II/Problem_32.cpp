// Problem_32.cpp : 

#include <iostream>
#include <string>

void Reapeted_char(std::string text);

int main() {
    std::string str;
    getline(std::cin, str, '|');
    std::cin.get();
    Reapeted_char(str);
    return 0;
}

void Reapeted_char(std::string text) {
    int max = 0;
    int count = 0;
    std::string maxCharacter;
    int size = text.length();
    int tmp;
        for (int i = 0; i < size; i++) {
            tmp = 1;
            if (text[i] == text[i + 1]) {
                for (int j = i + 1;; ++j) {
                    if (text[j] == text[j + 1]) {
                        tmp++;
                        i++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            if (tmp > count)
            {
                count = tmp;
                maxCharacter =  text[i];
            }
        }
        while (count > 0)
        {
            std::cout << maxCharacter;
            --count;
        }
}
