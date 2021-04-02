// Task_1: Split

#include <iostream>

int main()
{
    int number = 0;
    int count = 0;
    int reverse = 0;
    std::cout << "Enter a positive number = ";
    std::cin >> number;
    while (number)
    {
        ++count;
        reverse = reverse * 10 + (number % 10);
        number /= 10;      
    }
    
    while (count--)
    {
        std::cout <<"'"<< reverse % 10 <<"'"<< " ";
        reverse /= 10;
    }
}

/*#include <iostream>

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
}*/
