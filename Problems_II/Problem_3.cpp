// Task_3:

#include <iostream>

int main() {
	int number = 0;
	int sum = 0;
	std::cout << "Enter a number: ";
	std::cin >> number;

	while (number!=0)
	{	
		sum = sum + number % 10;
		number /= 10;	
	}
	std::cout << "Sum: " << sum;
	return 0;
}

// Sum of array elements
/*int main()
{
	int arr[10];
	int size = 0; 
	int i = 0;
	int sum = 0; 
	std::cout << "Enter the size of the array : ";
	std::cin >> size;
	std::cout  << std::endl << "Enter the elements of the array : " ;
	for (i = 0; i < size; ++i)
		std::cin >> arr[i];
	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	std::cout << std::endl << "Sum of array elements : " << sum;
	return 0;
}*/





