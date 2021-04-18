#include "Student_h.h"

Student::Student()
{
	name = "";
	surname = "";
	age = 0;
	lessons_name = "";
}

void Student::set_name() 
{ 
	std::cout << "Enter your name: "; 
	std::cin >> name; 
}
std::string Student::get_name()const{ return name; }
void Student::set_surname()
{
	std::cout << "Enter your surname: ";
	std::cin >> surname;
}
std::string Student::get_surname()const{ return surname; }
void Student::set_age() 
{
	std::cout << "Enter your age: ";
	std::cin >> age;
}
unsigned int Student::get_age()const { return age; }
void Student::set_lessons_name() 
{  
	std::cout << "Enter your lessons name: ";
	std::cin.get();
	getline(std::cin, lessons_name);
}
std::string Student::get_lessons_name()const { return lessons_name; }

Student::~Student(){}
