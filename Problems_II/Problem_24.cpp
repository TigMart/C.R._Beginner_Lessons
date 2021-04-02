// Task_24.cpp :

#include <iostream>
#include <new>
int** Matrix(int);
void Sum_Diagonals(int** matrix, int size);
void delete_matrix(int** matrix, int size);

int main()
{
	int matrix_size;
	std::cout << "Please enter matrix size: ";
	std::cin >> matrix_size;
	int** matrix = Matrix(matrix_size);
	std::cout << std::endl << std::endl;
	Sum_Diagonals(matrix, matrix_size);
	delete_matrix(matrix, matrix_size);
}

int** Matrix(int size)
{
	int** matrix = new  (std::nothrow)  int*[size];
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

void Sum_Diagonals(int** matrix, int size)
{
	std::cout << "Principal_Diagonal ";
	for (int i = 0; i < size; ++i){
		std::cout << matrix[i][i]<<" ";	
	}
	std::cout << std::endl;
	std::cout << "Secondary Diagonal ";
	for (int i = 0; i < size; ++i) {
		std::cout << matrix[i][size - i - 1] << " ";
	}
	int sum = 0;
	std::cout << std::endl;
	std::cout << "Sum of Matrix Diagonals ";
	for (int i = 0; i < size; ++i) {
		sum =  matrix[i][i] + matrix[i][size - i - 1];
		std::cout << sum << " ";
	}
	return;
	
}

void delete_matrix(int** matrix, int size) {
	for (int i = 0; i < size; ++i) {
		delete[] matrix[i];
	}
	delete[] matrix;
	return;
}

