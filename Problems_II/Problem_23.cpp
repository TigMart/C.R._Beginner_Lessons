// Task_23.cpp :

#include <iostream>
#include <new>

int main()
{
    int size = 0;
    std::cout << "Enter a size: ";
    std::cin >> size;
    int** matrix = new (std::nothrow) int* [size];
    if (matrix == nullptr) {
        std::cout << "Error: Allocated memory ";
        return 0;
    }
    else
    {
        for (int i = 0; i < size; ++i) {

            matrix[i] = new int[size];
        }
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                matrix[i][j] = rand() % 90 + 10;
            }
        }
        for (int i = 0; i < size; ++i) {
            std::cout << std::endl;
            for (int j = 0; j < size; ++j) {
                std::cout << matrix[i][j] << "  ";
            }
        }
        std::cout << std::endl << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << "The auxiliary diagonal elements of a matrix: " << i << " x " << size - i - 1 << " = " << matrix[i][size-i-1] << std::endl;
        }
        for (int i = 0; i < size; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
    return 0;
}
