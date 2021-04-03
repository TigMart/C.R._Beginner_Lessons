// Problem_26.cpp : 

#include <iostream>
#include <cmath>

int Discriminant(int a, int b, int c);
double Solution_1(double a, double b, double disc);
double Solution_2(double a, double b, double disc);

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    std::cout << "Please enter a = ";
    std::cin >> a;
    if (a == 0) {
        std::cout << "Invalid" << std::endl;
        std::cout << "please re-enter a = ";
        std::cin >> a;
    }
    std::cout << "Please enter b = ";
    std::cin >> b;
    std::cout << "Please enter c = ";
    std::cin >> c;
    std::cout << a << "x^2 " << " " << b << "x " << " " << c << " = 0" << std::endl;
    int disc = Discriminant(a, b, c);
    std::cout << "Discriminant: " << disc<<std::endl;
    double x1 = Solution_1(a, b, disc);
    double x2 = Solution_2(a, b, disc);
    if (disc > 0) {
        std::cout << "Solution_1: " << x1<<std::endl;
        std::cout << "Solution_2: " << x2;
    }
    else if (disc == 0) {
        std::cout << "Solution_1: " << x1;
    }
    else {
        std::cout << "No Solution: ";
    }
    return 0;
}

int Discriminant(int a, int b, int c) 
{
    int disc = b*b - 4 * a * c;
    return disc;
}
double Solution_1(double a, double b, double disc)
{
    double x1 = ((-b) + (sqrt(disc))) / (2.0 * a);
    return x1;
}
double Solution_2(double a, double b, double disc)
{
    double x2 = ((-b) - sqrt(disc)) / 2.0 * a;
    return x2;
}

