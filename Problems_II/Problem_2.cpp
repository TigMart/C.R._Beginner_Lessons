// Task_2 : 

#include <iostream>
int main() 
{
	int number = 0;
	std::cout << "Enter a positive number = ";
	std::cin >> number;
	for (; number != 0; number/=10) {
		std::cout << number % 10<<'\t';
	}
	return 0;
}
