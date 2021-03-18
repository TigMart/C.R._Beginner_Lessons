// Task_14

#include <iostream>
#include <cmath>

int main()
{
    int dec_num = 0;
    int r = 0;
    std::string hexdec_num;
    char hex[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    std::cout << std::endl << " Convert a decimal number to hexadecimal number:" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << " Input a decimal number: ";
    std::cin >> dec_num;

    while (dec_num > 0)
        
    {
        r = dec_num % 16;
        hexdec_num = hex[r] + hexdec_num;
        dec_num = dec_num / 16;
    }
    std::cout << " The hexadecimal number is : " << hexdec_num << std::endl;
    return 0;
}

