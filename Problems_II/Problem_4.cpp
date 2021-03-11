// Task_4:

#include <iostream>

int main() 
{
	int number = 0;
	int Mul = 1;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (number == 0) 
	{
		std::cout << number;
	}	
	else
	{
		while (number != 0)
		{
			Mul = Mul * (number % 10);
			number = number / 10;
		}
	}
	std::cout << "Mul: " << Mul;
	return 0;
}


