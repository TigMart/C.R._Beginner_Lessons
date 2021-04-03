// Problem_28.cpp : 

#include <iostream>

int findOdd(int* arr, int size);

int main()
{
    const int size = 10;
    int arr[10]{ 0 };
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 10;
    }
    std::cout <<"Count of Odd number in array: "<< findOdd(arr, size)<<std::endl;
}
int findOdd(int* arr, int size)
{
    int odd = 0;
    for (int i = 0; i < size; ++i)
    {
        std::cout <<"Element "<<i <<" = "<< arr[i] << std::endl;
        if (arr[i] % 2 != 0) { ++odd; }   
    }
    std::cout << std::endl;
    return odd;
}



