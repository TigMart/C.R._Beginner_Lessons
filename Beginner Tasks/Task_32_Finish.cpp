// Task_32_Finish: 

#include <iostream>

int main()
{
    int a = 0;
	int b = 0;
	std::cout << "From 0 to what number of squares do you want to print? ";
	std::cin >> b;
	for (a = 0; a <= b; ++a) {
		if (a == 0) {
			std::cout << 0 << std::endl;
		}
		else if (a == 1) {
			std::cout << 1 << std::endl;
		}
		else {
			std::cout << a*a <<std::endl;
		}
	}
	return 0;
}


