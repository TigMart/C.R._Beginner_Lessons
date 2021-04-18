// Problem_54(36).cpp : 

#include "Student_h.h"

int main()
{
	Student male;
	Student female;
	Student X;
	male.set_name("Marshal");
	male.set_surname("Martirosyan");
	male.set_age(25);
	male.set_lessons_name("Matematika, Fizika");
	female.set_name("Ani");
	female.set_surname("Baghramyan");
	female.set_age(32);
	female.set_lessons_name("Patmutyun, Anlgleren");
	std::cout <<"Name: "<< male.get_name() << std::endl;
	std::cout <<"Surname: "<< male.get_surname() << std::endl;
	std::cout <<"Age: "<< male.get_age() << std::endl;
	std::cout <<"Lessons name: "<< male.get_lessons_name() << std::endl;
	std::cout << "Name: " << female.get_name() << std::endl;
	std::cout << "Surname: " << female.get_surname() << std::endl;
	std::cout << "Age: " << female.get_age() << std::endl;
	std::cout << "Lessons name: " << female.get_lessons_name() << std::endl;
	X.set_name(male.get_name());
	X.set_surname(female.get_surname());
	X.set_age((male.get_age() + female.get_age()) / 2);
	X.set_lessons_name("Programming ");
	std::cout << std::endl << "Problem 36: " ;
	std::cout << std::endl << "Name: "  << X.get_name() << std::endl;
	std::cout << "Surname: " << X.get_surname() << std::endl;
	std::cout << "Age: " << X.get_age() << std::endl;
	std::cout << "Lessons name: " << X.get_lessons_name() << std::endl;
  return 0;
}
