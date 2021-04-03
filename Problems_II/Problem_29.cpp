// Problem_29.cpp : 

#include <iostream>

int findEven(int* arr, int size);

int main()
{
    const int size = 10;
    int arr[10]{ 0 };
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 10;
    }
    std::cout << "Count of Even number in array: " << findEven(arr, size) << std::endl;
}
int findEven(int* arr, int size)
{
    int even = 0;
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Element " << i << " = " << arr[i] << std::endl;
        if (arr[i] % 2 == 0) { ++even; }
    }
    std::cout << std::endl;
    return even;
}




