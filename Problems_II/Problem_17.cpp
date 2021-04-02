// Task_17.cpp : 

#include <iostream>
#include <new>

int main()
{
    int arr_size = 0;
    int min_index = 0;
    std::cout << "Enter a size of array: ";
    std::cin >> arr_size;
    if (arr_size == 0) { return 0; }
    int* arr = new (std::nothrow) int[arr_size];
    if (arr == nullptr) {
        std::cout << "Error: Allocated Mermory: ";
        return 0;
    }
    else {
        for (int i = 0; i < arr_size; ++i)
        {
            std::cout << "Enter a number " << i << ": ";
            std::cin >> arr[i];
            if (arr[min_index] > arr[i])
            {
                min_index = i;
            }
        }
        std::cout << "The smallest element index: " << min_index; 
    }
    delete[] arr;
    return 0; 
}
