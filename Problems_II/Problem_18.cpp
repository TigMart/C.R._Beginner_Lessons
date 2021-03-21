// Task_18.cpp : 

#include <iostream>
#include <new>

int max_value(int* arr, int n) 
{
    int max_val = arr[0];
    for (int i = 0; i < n; ++i) {
        if (max_val < arr[i]) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int min_value(int* arr,int n) 
{
    int min_val = arr[0];
    for (int i = 0; i < n; ++i) {
        if (min_val > arr[i]) {
            min_val = arr[i];
        }
    }
    return min_val;
}

int main()
{
    int arr_size = 0;
    std::cout << "Enter a size of array: ";
    std::cin >> arr_size;
    int* arr = new (std::nothrow) int[arr_size];
    if (arr == nullptr) {
        std::cout << "Error: Allocated Memory";
        return 0;
    }
    else {

        for (int i = 0; i < arr_size; ++i) {
            std::cout << "Enter number " << i << ": ";
            std::cin >> arr[i];
        }
        int max = max_value(arr, arr_size);
        int min = min_value(arr, arr_size);
        std::cout << "Maximum value in array: " << max << std::endl;
        std::cout << "Minimum value in array: " << min << std::endl;
        std::cout << "The sum of the maximum and minimum values in array: " << max + min << std::endl;
    }
    delete[] arr;
    return 0;
}