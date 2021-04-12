// Problem_48.cpp :

#include <iostream>

int delete_elem(int* arr, int size, int i);

int main()
{
    int arr[] = { 1,2,3,4,5 };
    int size = sizeof(arr) / sizeof(int);
    int x = 4;
    int result = delete_elem(arr, size, x);
    std::cout << "Modified array is " << std::endl;
    for (int i = 0; i < result; i++)
        std::cout << arr[i] << " ";
    return 0;
}

int delete_elem(int* arr, int size, int x) 
{
    int i = 0;
    for (i=0; i < size; ++i) {
        if (i == x)
            break;
    }
    if (x < size) {
        --size;
        for (int j = i; j < size; ++j) {
            arr[j] = arr[j + 1];
        }
    }
    return size;
}