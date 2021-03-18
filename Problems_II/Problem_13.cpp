// Task_13.cpp :

#include <iostream>
int main() 
{
	int maximum = 9;
	int min_num = 0;
	int num_in = 0;
	int num1 = 0;
	int max_num = 0;
	std::cout << "Enter a number: ";
	std::cin >> num_in;
	while (num_in) {
		num1 = num_in % 10;
		if (num1 > max_num) {
			max_num = num1;
		}
		if (maximum > num1) {
			min_num = num1;
		}
		num_in /= 10;
	}
	std::cout << "min number is: " << min_num << std::endl << "max number is: " << max_num;
	return 0;
}

