// Task_16.cpp:

#include <iostream>

int main()
{
    const int size = 5;
    int arr[size];
    int max_index = 0;
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Enter a number "<<i<<": ";
        std::cin >> arr[i];
        if (arr[max_index] < arr[i])
        { 
            max_index = i;
        }
    }
    std::cout << "The largest element index: " << max_index;
    return 0;
}
