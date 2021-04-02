// Task_13.cpp :

#include <iostream>
int main() 
{
	int max_num = 0;
	int min_num = 9;
	int num_in = 0;
	int num = 0;
	std::cout << "Enter a number: ";
	std::cin >> num_in;
	while (num_in) 
	{
		num = num_in % 10;
		if (num > max_num) {
			max_num = num;
		}
		if (min_num > num) {
			min_num = num;
		}
		num_in /= 10;
	}
	std::cout << "min number is: " << min_num << std::endl << "max number is: " << max_num;
	return 0;
}
