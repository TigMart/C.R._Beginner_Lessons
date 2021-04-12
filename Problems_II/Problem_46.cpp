// Problem_46.cpp :

#include <iostream>

void foo(int* arr, int size, int);

int main()
{
    const int size = 5;
    int arr[size]{ 1,2,3,4,5 };
    foo(arr, size, 0);
}

void foo(int* arr, int size, int i)
{
    if (i == size) {return;}
    std::cout << arr[i]<<" ";
    ++i;
    foo(arr,size, i);
}