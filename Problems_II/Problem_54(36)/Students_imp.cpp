#include "Student_h.h"

Student::Student()
{
	name = "";
	surname = "";
	age = 0;
	lessons_name = "";
}

void Student::set_name(const std::string& name){ this->name = name; }
std::string Student::get_name()const { return this->name; }
void Student::set_surname(const std::string& surname){ this->surname = surname;}
std::string Student::get_surname()const { return this->surname; }
void Student::set_age(const unsigned int age) { this->age = age; }
unsigned int Student::get_age()const { return this->age; }
void Student::set_lessons_name(const std::string& lessons_name) { this->lessons_name = lessons_name; }
std::string Student::get_lessons_name()const { return this->lessons_name; }

Student::~Student() {}
