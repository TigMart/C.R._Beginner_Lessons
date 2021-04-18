#ifndef Student_h
#define Student_h


#include <string>
#include <iostream>

class Student
{
public:
    Student();
    ~Student();
public:
    void set_name(const std::string& name);
    std::string get_name()const;
    void set_surname(const std::string& surname);
    std::string get_surname()const;
    void set_age(const unsigned int age);
    unsigned int get_age()const;
    void set_lessons_name(const std::string& lessons_name);
    std::string get_lessons_name()const;

private:
    std::string name;
    std::string surname;
    unsigned int age;
    std::string lessons_name;
};
#endif
