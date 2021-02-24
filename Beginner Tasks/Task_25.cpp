// Task_25 Print only odd numbers in the 0-100 range 


#include <iostream>

int main()
{
    int a = 0;
    int b = 2;
    while (a < 100) {
        a += 1;
        if (a % b != 0) {
            std::cout << a << std::endl;

        }
    }
    return 0;
}
