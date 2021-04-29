#include "vector.h"

int main()
{
	Vector<int> vec;
	for (int i = 1; i < 5; ++i) {
		vec.push_back(i * 2);
	}
	Vector<char> vec1;
	for (int i = 97; i < 102; ++i) {
		vec1.push_back(i);
	}
	Vector<int> vec2;
	vec2 = vec;
	std::cout << "vector size : " << vec.size() << std::endl;
	std::cout << "vector elements : ";
	vec.print();
	vec.push(100, 1);
	std::cout << std::endl << "After updating 1st index" << std::endl;
	std::cout << "vector elements of type int : " << std::endl;
	vec.print();
	std::cout << "vector elements of type char : " << std::endl;
	vec1.print();
	std::cout << "Element at 1st index of type int: " << vec[1] << std::endl;
	std::cout << "Element at 1st index of type char: " << vec1[1] << std::endl;
	vec.pop_Back();
	vec1.pop_Back();
	std::cout << std::endl << "After deleting last element" << std::endl;
	std::cout << "vector size of type int: " << vec.size() << std::endl;
	std::cout << "vector size of type char: " << vec1.size() << std::endl;
	std::cout << "vector elements of type int: ";
	vec.print();
	std::cout << "vector elements of type char: ";
	vec1.print();
	std::cout << std::endl << "After adding element in front of vector: ";
	vec.push_front(88);
	vec.print();
	std::cout << "vector 2 elements : ";
	vec2.print();
	return 0;
}

