// Task_25.cpp : 

#include <iostream>
#include <new>
int** Matrix(int);
void swap_Diagonals(int** matrix, int size);
void delete_matrix(int** matrix, int size);
void My_swap(int& a, int& b);

int main()
{
	int matrix_size;
	std::cout << "Please enter matrix size: ";
	std::cin >> matrix_size;
	int** matrix = Matrix(matrix_size);
	std::cout << std::endl << std::endl;
	swap_Diagonals(matrix, matrix_size);
	delete_matrix(matrix, matrix_size);
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
		return matrix;
	}
}

void swap_Diagonals(int** matrix, int size)
{
	std::cout << "Principal_Diagonal ";
	for (int i = 0; i < size; ++i) {
		std::cout << matrix[i][i] << " ";
	}
	std::cout << std::endl << "Secondary Diagonal ";
	for (int i = 0; i < size; ++i) {
		std::cout << matrix[i][size - i - 1] << " ";
	}
	std::cout << std::endl <<"Swap";
	for (int i = 0; i < size; ++i) {
		My_swap(matrix[i][i], matrix[i][size - i - 1]);
	}
	std::cout << std::endl << "Principal_Diagonal ";
	for (int i = 0; i < size; ++i) {
		std::cout << matrix[i][i] << " ";
	}
	std::cout << std::endl << "Secondary Diagonal ";
	for (int i = 0; i < size; ++i) {
		std::cout << matrix[i][size - i - 1] << " ";
	}
	return;
}
void My_swap(int& a, int& b) 
{
	int tmp = a;
	a = b;
	b = tmp;
	return;
}
void delete_matrix(int** matrix, int size) 
{
	for (int i = 0; i < size; ++i) {
		delete[] matrix[i];
	}
	delete[] matrix;
	return;
}