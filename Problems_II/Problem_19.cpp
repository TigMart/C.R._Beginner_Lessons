// Task_19.cpp :

#include <iostream>
#include <new>
int main()
{
    int arr_size;
    std::cout << "Enter a size of array: ";
    std::cin >> arr_size;
    if (arr_size == 0) { return 0; }
    int* arr = new (std::nothrow) int[arr_size];
    if (arr == nullptr) {
        std::cout << "Error: Allocated Memroy";
        return 0;
    }
    else {
        for (int i = 0; i < arr_size; ++i) {
            std::cout << "Element " << i << ": ";
            std::cin >> arr[i];
        }
        for (int i = 0; i < arr_size; ++i) {
            std::cout << arr[(arr_size - 1) - i] << " ";
        }
    }
    delete[] arr;
    return 0;
}
