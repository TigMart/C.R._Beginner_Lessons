// Task_7: 
#include <iostream>
#include <string>

int main()
{
    std::string name_in;
    std::string name_out;
    std::cout << "What is your name? ";
    std::cin >> name_in;
    for (int i = 0; i < name_in.size(); ++i) {
        if (name_in[i] != 'a' && name_in[i] != 'e' && name_in[i] != 'i'
            && name_in[i] != 'o' && name_in[i] != 'u') 
        {
            name_out.push_back(name_in[i]);
        }
    }
    std::cout <<"Your name without vowel: " << name_out;
    return 0;
}