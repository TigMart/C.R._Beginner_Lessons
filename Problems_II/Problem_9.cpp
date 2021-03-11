// Task_9

#include <iostream>

int main()
{
    std::string name_in;
    std::string name_out;
    std::cout << "Please enter your name in lowercase: ";
    std::cin >> name_in;

    for (int i = 0; i < name_in.size(); ++i)
    {
        if (name_in[i] >= 97 && name_in[i] <= 122)
        {
            if (i % 2 != 0)
            {
                name_in[i] -= 32;
                name_out.push_back(name_in[i]);
            }
            else
            {
                name_out.push_back(name_in[i]);
            }
        }
    }
    std::cout << "every second symbol in Upppercase: " << name_out;
    return 0;
}
