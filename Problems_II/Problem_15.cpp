// Task_15

#include <iostream>
#include <string>

int main()
{
    
    std::string binar_num;
    char binar[] = { '0','1' };
    std::cout << std::endl << " Convert a decimal number to hexadecimal number:" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << " Input a decimal number: ";
    int dec_num = 0;
    std::cin >> dec_num;
    
    if (dec_num == 0) 
    {
        std::cout << " The binary number is : " << dec_num << std::endl;
    }
    else 
    {
        while (dec_num > 0)
        {

            int num = 0;
            num = dec_num % 2;
            binar_num = binar[num] + binar_num;
            dec_num = dec_num / 2;
        }
        std::cout << " The binary positive number is : "<<"0" << binar_num << std::endl;
    }
    for (int i = 0; i <= binar_num.length(); ++i)
    {
        if (binar_num[i] == '0') 
        {
            binar_num[i] = '1';

        }
        else 
        {
            binar_num[i] = '0';
        }
    }
    for (int a = binar_num.length() - 1; true; --a) 
    {
        if (binar_num[a] == '0')
        {
            binar_num[a] = '1';
            break;
        }
        else 
        {
            binar_num[a] = '0';
            
            continue;
        }
        
    }
    std::cout <<" The binary negative number is : " <<"1"<<binar_num;
    return 0; 
}