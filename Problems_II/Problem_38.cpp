// Problem_38.cpp : 

#include <iostream>

struct Point
{
    int x;
    int y;
};

struct Line
{
    Point line[2];
}gic;

int main()

{   
    for (int i = 0; i < 2; ++i) 
    {
        std::cout << i+1 << " point x and y: "<<std::endl;
        std::cin >> gic.line->x;
        std::cin >> gic.line->y;
    }
    return 0;
}

