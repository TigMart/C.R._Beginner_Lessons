// Problem_39.cpp : 

#include <iostream>

struct Point {
    double x;
    double y;
};

struct Line {
    Point line[2];
};

int main()
{
    Line l1;
    Line l2;
    std::cout << "Line: y = ax + b " << std::endl;
    for (int i = 0; i < 2; ++i) {
        std::cout << "First line Point_" << i + 1 << " x and y = ";
        std::cin >> l1.line[i].x;
        std::cin >> l1.line[i].y;
    }
    for (int i = 0; i < 2; ++i) {
        std::cout << "Second line Point_" << i + 1 << " x and y = ";
        std::cin >> l2.line[i].x;
        std::cin >> l2.line[i].y;
    }
    double a1, b1;
    double a2, b2;
    a1 = (l1.line[1].y - l1.line[0].y) / (l1.line[1].x - l1.line[0].x);
    a2 = (l2.line[1].y - l2.line[0].y) / (l2.line[1].x - l2.line[0].x);
    b1 = l1.line[0].y - (a1 * l1.line[0].x);
    b2 = l2.line[0].y - (a2 * l2.line[0].x);
    std::cout <<"a1 = "<< a1 << "\t" <<"a2 = "<< a2 << std::endl;
    std::cout <<"b1 = "<< b1 << "\t" <<"b2 = "<< b2 << std::endl;
    if (a1 == a2 && b1 != b2) {
        std::cout << "Lines are Parallel ";
    }
    else if (a1 == a2 && b1 == b2) {
        std::cout << "Lines are Coincidence ";
    }
    else if (a1 != a2) {
        std::cout << " Lines are intersect ";
        double x = (b2-b1) / (a1-a2);
        double y = (a1 * x) + b1;
        std::cout << "Y: " << y << " " << "X: " << x << std::endl;
    }
    return 0;
}




