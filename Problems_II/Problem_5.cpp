// Task_5: 

#include <iostream>

void calcul(double, double, char);

int main()
{
	double x = 0;
	double y = 0;
	char symbol;
	std::cout << "Enter a number x= ";
	std::cin >> x;
	std::cout << "Enter a number y= ";
	std::cin >> y;
	std::cout << "Choose the arithmetic operations: '+','-','*','/'  ";
	std::cin >> symbol;
	calcul(x, y, symbol);
	
	return 0;
}

	void calcul(double x, double y, char symbol)
	{
		
		if (symbol == '+') {
			std::cout << x << " + " << y << " = " << x + y;
		}
		else if (symbol == '-') {
			std::cout << x << " - " << y << " = " << x - y;
		}
		else if (symbol == '*') {
			std::cout << x << " * " << y << " = " << x * y;
		}
		else if (symbol == '/') {
			if (0 == y)
			{
				std::cout << "Zero Division Error" <<std::endl;
				std::cout << "Please re-enter a number y= ";
				std::cin >> y;
				calcul(x, y, symbol);
			
			}
			else {
				std::cout << x << " / " << y << " = " << x / y;
			}
		}
		else
		{
			std::cout << "Ap jan inchx te " << symbol << " petqa gres kam '+' kam ,'-', kam '*', kam el '/'" << std::endl;
			std::cout << "Choose the arithmetic operations: '+','-','*','/'  ";
			std::cin >> symbol;
			calcul(x, y, symbol);
		}
	}