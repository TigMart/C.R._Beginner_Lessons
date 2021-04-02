// Task_20.cpp:

#include <iostream>
#include <new>

int main()
{
    int arr_size = 0;
    std::cout << "Enter size of arrays: ";
    std::cin >> arr_size;
    int* arr_x = new (std::nothrow) int[arr_size];
    int* arr_y = new (std::nothrow) int[arr_size];
    if (arr_x == nullptr || arr_y == nullptr) {
        std::cout << "Error: Allocated memory ";
        return 0;
    }
    else {
        for (int i = 0; i < arr_size; ++i) {
            std::cout << "Elements of arr_x " << i << ": ";
            std::cin >> arr_x[i];
        }
        std::cout << std::endl;
        for (int i = 0; i < arr_size; ++i) {
            std::cout << "Elements of arr_y " << i << ": ";
            std::cin >> arr_y[i];
        }
        std::cout << std::endl;
        for (int i = 0; i < arr_size; ++i) {
            std::cout << "MUL of (index -> x: " << i << " * " << "y: " << i << ")\nVALUE:  (" << arr_x[i]
                << " * " << arr_y[i] << ") = " << arr_x[i] * arr_y[i] << std::endl << std::endl;
        }
    }
    delete[] arr_x;
    delete[] arr_y;
    return 0;
}
