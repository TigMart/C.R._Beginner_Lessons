// Problem_36.cpp :

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
    Student female;
    Student x;
    std::cout << "Please enter name of boy: ";
    std::cin >> male.name;
    std::cout << std::endl;
    std::cout << "Please enter surname of boy: ";
    std::cin >> male.surname;
    std::cout << std::endl;
    std::cout << "Please enter age of " << male.name << " ";
    std::cin >> male.age;
    std::cout << std::endl;
    std::cout << "Please enter lessons name: ";
    std::cin.get();
    getline(std::cin, (male.lessons_name));
    std::cout << std::endl;
    std::cout << "Please enter name of girl: ";
    std::cin >> female.name;
    std::cout << std::endl;
    std::cout << "Please enter surname of girl: ";
    std::cin >> female.surname;
    std::cout << std::endl;
    std::cout << "Please enter age of " << female.name << " ";
    std::cin >> female.age;
    std::cout << std::endl;
    std::cout << "Please enter lessons name: ";
    std::cin.get();
    getline(std::cin, (female.lessons_name));
    x.name = male.name;
    x.surname = female.surname;
    x.age = (male.age + female.age) / 2;
    std::cout << std::endl;
    std::cout << x.name << std::endl;
    std::cout << x.surname << std::endl;
    std::cout << x.age << std::endl;
    std::cout << x.lessons_name << std::endl;
    return 0;
}