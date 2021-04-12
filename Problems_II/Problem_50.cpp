// Problem_50.cpp :

#include <iostream>
#include <new>

int Add_Array_elem(int* arr, int size);
int Mul_Array_elem(int* arr, int size);
int* My_array(int arr_size);

int main()
{
    int* arr = My_array(5);
    double add_array = Add_Array_elem(arr, 5);
    double mul_array = Mul_Array_elem(arr, 5);
    double result = (add_array + mul_array) / 2;
    std::cout << "The arithmetic average of the sum and mul of the elements of an array: " << result;
    delete[] arr;

    
}
int* My_array(int arr_size)
{
    
    std::cout << "Please push " << arr_size << " elements in array: " << std::endl;
    int* arr = new (std::nothrow) int[arr_size];
    if (arr == nullptr) {
        std::cout << "Error: Allocated memory ";
        return 0;
    }
    else {
        for (int i = 0; i < arr_size; ++i) {
            std::cout << "Elements of arr " << i << ": ";
            std::cin >> arr[i];
        }
    }
    return arr;
}

int Mul_Array_elem(int* arr, int size)
{
    int result = 1;   
        for (int i = 0; i < size; ++i) {
            result = result * arr[i];
        }
    return result;
}

int Add_Array_elem(int* arr, int size)
{
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result = result + arr[i];
    }
    return result;
}   