// Task_8 : 
#include <iostream>
#include <string>

int main()
{
    std::string name_in;
    std::string name_out;
    std::cout << "Please enter your name in lowercase: ";
    std::cin >> name_in;
    for (int i = 0; i < name_in.size(); ++i) 
    {
        name_in[i] -= 32;
        name_out.push_back(name_in[i]);
    }
    std::cout <<"Your name in uppercase: "<< name_out;
    return 0;
}

