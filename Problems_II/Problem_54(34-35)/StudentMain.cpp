#include "Student_h.h"

int main() 
{
	Student male;
	Student female;
	male.set_name();
	male.set_surname();
	male.set_age();
	male.set_lessons_name();
	female.set_name();
	female.set_surname();
	female.set_age();
	female.set_lessons_name();
	std::cout << "Problem 34: "<<std::endl;
	std::cout << male.get_name() << std::endl;
	std::cout << male.get_surname() << std::endl;
	std::cout << male.get_age() << std::endl;
	std::cout << male.get_lessons_name() << std::endl;	
	std::cout << female.get_name() << std::endl;
	std::cout << female.get_surname() << std::endl;
	std::cout << female.get_age() << std::endl;
	std::cout << female.get_lessons_name() << std::endl;
	std::cout << std::endl << "Problem 35) Name of older: " << std::endl;
	if (male.get_age() >= female.get_age()) {
		std::cout << male.get_name();
	}
	else {
		std::cout << female.get_name();
	}
	return 0;
}
