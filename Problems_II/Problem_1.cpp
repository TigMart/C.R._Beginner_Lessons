// Task_1: Split

/*
#include <iostream>

int main()
{
    int number = 0;
    int i = 0;
    int reverse = 0;
    std::cout << "Enter a positive number = ";
    std::cin >> number;
    while (number > 0)
    {
        i = number % 10;
        reverse = reverse * 10 + i;
        number /= 10;      
    }
    while (reverse > 0)
    {
        std::cout <<"'"<< reverse % 10 <<"'"<< " ";
        reverse /= 10;
    }
}
*/

#include <iostream>

void numbers(int a); 

int main() {
    int a;
    std::cout << "Enter a positive number : ";
    std::cin >> a;
    numbers(a);
    return 0;
}
void numbers(int a)
{
    if (a / 10 == 0)
        std::cout << "'" << a << "'" << std::endl;
    else 
    {
        numbers(a / 10);
        std::cout << "'" << a % 10 << "'" << std::endl;
    }
}
