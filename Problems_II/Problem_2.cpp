// Task_2 : 

#include <iostream>
int main() 
{
	int number = 0;
	int i = 0;
	std::cout << "Enter a positive number = ";
	std::cin >> number;
	while (number > 0) {
		i = number % 10;
		number /= 10;
		std::cout << i <<'\t';
	}
	return 0;
}
