// Problem_30.cpp : 

#include <iostream>

int** Matrix(int size);
void delete_matrix(int** matrix, int size);
void rewrite_array(int** matrix, int size);

int main()
{
    int** matrix = Matrix(5);
    rewrite_array(matrix, 5);
    delete_matrix(matrix, 5);
}

int** Matrix(int size)
{
    int** matrix = new  (std::nothrow)  int* [size];
    if (matrix == nullptr) {
        std::cout << "Error: Allocated memory ";
    }
    else {
        for (int r = 0; r < size; ++r) {
            matrix[r] = new int[size];
            std::cout << std::endl;
            for (int c = 0; c < size; ++c) {
                matrix[r][c] = rand() % 10;
                std::cout << matrix[r][c] << " ";
            }
        }
        std::cout << std::endl;
        return matrix;
    }
}

void delete_matrix(int** matrix, int size) {
    for (int i = 0; i < size; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return;
}

void rewrite_array(int** matrix, int size) {
    int arr[100]{};
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            arr[j] = matrix[i][j];
            std::cout << arr[j]<<" ";
        }
    }
}


