// Problem_34.cpp :

#include <iostream>
#include <string>

struct Student
{
    std::string name;
    std::string surname;
    unsigned short age;
    std::string lessons_name;
};

int main()
{
   Student male;
   std::cout << "Please enter name of student ";
   std::cin >> male.name;
   std::cout << std::endl;
   std::cout << "Please enter surname of student ";
   std::cin >> male.surname; 
   std::cout << std::endl;
   std::cout << "Please enter age of student ";
   std::cin >> male.age; 
   std::cout << std::endl;
   std::cout << "Please enter lessons name: ";
   getline(std::cin, (male.lessons_name));
   std::cin.get();
   std::cout << std::endl;
   return 0;
}