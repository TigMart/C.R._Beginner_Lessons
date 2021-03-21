// Task_23.cpp :

#include <iostream>
#include <new>

int main()
{
    int row_size = 0;
    int col_size = 0;
    std::cout << "Enter a size of row: ";
    std::cin >> row_size;
    std::cout << "Enter a size of column: ";
    std::cin >> col_size;
    int** matrix = new (std::nothrow) int* [row_size];
    if (matrix == nullptr) {
        std::cout << "Error: Allocated memory ";
        return 0;
    }
    else
    {
        for (int i = 0; i < row_size; ++i) {

            matrix[i] = new int[col_size];
        }
        for (int i = 0; i < row_size; ++i) {
            for (int j = 0; j < col_size; ++j) {
                matrix[i][j] = rand() % 90 + 10;
            }
        }
        for (int i = 0; i < row_size; ++i) {
            std::cout << std::endl;
            for (int j = 0; j < col_size; ++j) {
                std::cout << matrix[i][j] << "  ";
            }
        }
        std::cout << std::endl << std::endl;
        for (int i = 0; i < row_size; ++i) {
            std::cout << "The auxiliary diagonal elements of a matrix: " << i << " x " << row_size - i - 1 << " = " << matrix[i][row_size-i-1] << std::endl;
        }
        for (int i = 0; i < row_size; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
    return 0;
}