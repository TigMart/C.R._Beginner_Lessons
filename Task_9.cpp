//Task_9: Use the four arithmetic operations with numbers 12 and 23, print the results on screen.

#include <iostream>

int Add(int x, int y)
{
    return x + y;
}
int Sub(int x, int y)
{
    return x - y;
}
int Mul(int x, int y)
{
    return x * y;
}
float Div(float x, float y)
{
    return x / y;
}

int main()
{
    using namespace std;
    cout << "Add - " << Add(12, 23) << endl;
    cout << "Sub - " << Sub(12, 23) << endl;
    cout << "Mul - " << Mul(12, 23) << endl;
    cout << "Div - " << Div(12, 23) << endl;
    return 0;
}