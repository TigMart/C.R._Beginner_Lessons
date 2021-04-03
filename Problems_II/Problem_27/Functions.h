#ifndef Function
#define Function
#endif
#include <iostream>
#include <string>
#include <new>
#include <cmath>

//Problem 1
void Spilt_number(int number)
{
    int reverse = 0;
    std::cout << "1) Splitted Integer: ";
    for (; number != 0; number /= 10) {
        reverse = reverse * 10 + (number % 10);
    }
    for (; reverse != 0; reverse /= 10) {
        std::cout << "'" << reverse % 10 << "'";
    }
    std::cout << std::endl;
}

//Problem 2
void Reverse(int number)
{
    std::cout << "2) Reverse: ";
    for (; number != 0; number /= 10) {
        std::cout << number % 10;
    }
    std::cout << std::endl;
}

//Problem 3
int Sum_of_integer(int number)
{
    int sum = 0;
    for (; number != 0; number /= 10) {
        sum = sum + number % 10;
    }
    std::cout << "3) Sum of  number: ";
    return sum;

}

//Problem 4
int Mul_of_integer(int number)
{
    int mul = 1;
    for (; number != 0; number /= 10) {
        mul = mul * (number % 10);
    }
    std::cout << "4) Sum of number: ";
    return mul;
}

//Problem 5
void Calculator(double x, double y, char symbol)
{
    switch (symbol)
    {
    case '+':
        std::cout << "5) Sum: " << x << " + " << y << " = " << x + y;
        break;
    case '-':
        std::cout << "5) Sub: " << x << " - " << y << " = " << x - y;
        break;
    case '*':
        std::cout << "5) Mul: " << x << " * " << y << " = " << x * y;
        break;
    case '/':
        if (y == 0) {
            std::cout << "Zero Division Error: " << std::endl;
            std::cout << "Please re-enter a number y =  ";
            std::cin >> y;
            Calculator(x, y, symbol);
        }
        else {
            std::cout << "5) Div: " << x << " / " << y << " = " << x / y;
            break;
        }
    }
    if (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/')
    {
        std::cout << "You must enter these operators (+, -, *, /)" << std::endl;
        std::cout << "Choose operators (+, -, *, /)";
        std::cin >> symbol;
        Calculator(x, y, symbol);
    }
    std::cout << std::endl;
}

//Problem 6
void Str_reverse(std::string name)
{
    std::cout << "6) Reverse: ";
    for (int i = name.size() - 1; i >= 0; --i) {
        std::cout << name[i];
    }
    std::cout << std::endl;
}

//Problem 7

void Name_without_vowels(std::string name)
{
    std::string name_out;
    for (int i = 0; i < name.size(); ++i) {
        if (name[i] != 'a' && name[i] != 'e' && name[i] != 'i'
            && name[i] != 'o' && name[i] != 'u')
        {
            name_out.push_back(name[i]);
        }
    }
    std::cout << "7) Your name without vowels: " << name_out;
    std::cout << std::endl;
}

//Problem 8

void Name_in_uppercase(std::string name_in)
{
    std::string name_out;
    for (int i = 0; i < name_in.size(); ++i)
    {
        name_in[i] -= 32;
        name_out.push_back(name_in[i]);
    }
    std::cout << "8) Your name in uppercase: " << name_out;
    std::cout << std::endl;
}

//Problem 9

void Ev_sec_sym_in_Upp(std::string name_in)
{
    std::string name_out;
    for (int i = 0; i < name_in.size(); ++i)
    {
        if (name_in[i] >= 97 && name_in[i] <= 122)
        {
            if (i % 2 != 0)
            {
                name_in[i] -= 32;
                name_out.push_back(name_in[i]);
            }
            else
            {
                name_out.push_back(name_in[i]);
            }
        }
    }
    std::cout << "9) every second symbol in Uppercase: " << name_out;
    std::cout << std::endl;
}

//Problem 10 

void Convert_m_to_km(double meter) 
{
    double number_km = 0;
    number_km = meter / 1000.0;
    std::cout << "10) " << meter << " meters = " << number_km << " Kilometers";
    std::cout << std::endl;
}

//Problem 11

void Print_Home(int size)
{
    std::string square;
    std::string str;
    int c = size * 2 - 3;
    std::cout << "11) "<<std::endl;
    for (int i = 1; i <= size; ++i)
    {
        for (int j = size - i; j > 0; --j) {
            std::cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    for (int a = 0; a < c; ++a)
    {
        square.push_back(' ');
        str = square;
    }
    for (int i = 1; i <= size; ++i)
    {
        std::cout << "*" << str << "*" << std::endl;

    }
    for (int i = 1; i <= size * 2 - 1; ++i) {
        std::cout << "*";
    }
    std::cout << std::endl;
}

// Problem 12

void Print_triangle(int size)
{
    std::cout << "12) " << std::endl;
    for (int i = 1; i <= size; ++i)
    {
        for (int j = size - i; j > 0; --j) {
            std::cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

// Problem 13
void Min_Max(int number)
{
    int max_num = 0;
    int min_num = 9;

    int num = 0;

    while (number)
    {
        num = number % 10;
        if (num > max_num) {
            max_num = num;
        }
        if (min_num > num) {
            min_num = num;
        }
        number /= 10;
    }
    std::cout << "13) min number is: " << min_num << '\t' << "max number is: " << max_num;
    std::cout << std::endl << std::endl;
}

// Problem 14

void Convert_Dec_to_Hex(int dec_num)
{
    int num = dec_num;
    int r = 0;
    std::string hexdec_num;
    char hex[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    while (dec_num > 0)
    {
        r = dec_num % 16;
        hexdec_num = hex[r] + hexdec_num;
        dec_num = dec_num / 16;
    }
    std::cout << "14) "<< num <<" convert to hexadecimal number = " << hexdec_num << std::endl;
    std::cout << std::endl;
}

// Problem 15

void Convert_Dec_to_Bin(int dec_num)
{

    std::string binar_num;
    char binar[] = { '0','1' };
    int num = dec_num;
    if (dec_num == 0)
    {
        std::cout << "15) The binary number is : " << dec_num << std::endl;
    }
    else
    {
        while (dec_num > 0)
        {

            int num = 0;
            num = dec_num % 2;
            binar_num = binar[num] + binar_num;
            dec_num = dec_num / 2;
        }
        std::cout << "15) "<<num<< " convert to binary positive number = " << "0" << binar_num << std::endl;
    }
    for (int i = 0; i <= binar_num.length(); ++i)
    {
        if (binar_num[i] == '0')
        {
            binar_num[i] = '1';

        }
        else
        {
            binar_num[i] = '0';
        }
    }
    for (int a = binar_num.length() - 1; true; --a)
    {
        if (binar_num[a] == '0')
        {
            binar_num[a] = '1';
            break;
        }
        else
        {
            binar_num[a] = '0';

            continue;
        }

    }
    std::cout <<'\t'<< "convert to binary negative number = " << "1" << binar_num;
    std::cout << std::endl << std::endl;
}

//Problem 16

void Max_index_arr()
{
    const int size = 5;
    int arr[size];
    int max_index = 0;
    std::cout << "16) Please push 5 elements in array: "<<std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Enter number " << i << ": ";
        std::cin >> arr[i];
        if (arr[max_index] < arr[i])
        {
            max_index = i;
        }
    }
    std::cout << "The largest element index: " << max_index;
    std::cout << std::endl << std::endl;
}

//Problem 17

void Min_index_arr()
{
    const int size = 5;
    int arr[size];
    int max_index = 0;
    std::cout << "17) Please push 5 elements in array: " << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Enter number " << i << ": ";
        std::cin >> arr[i];
        if (arr[max_index] > arr[i])
        {
            max_index = i;
        }
    }
    std::cout << "The smallest element index: " << max_index;
    std::cout << std::endl << std::endl;
}

//Problem 18

int max_value(int* arr, int n)
{
    int max_val = arr[0];
    for (int i = 0; i < n; ++i) {
        if (max_val < arr[i]) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int min_value(int* arr, int n)
{
    int min_val = arr[0];
    for (int i = 0; i < n; ++i) {
        if (min_val > arr[i]) {
            min_val = arr[i];
        }
    }
    return min_val;
}

void Sum_Min_Max_arr(int arr_size)
{
    std::cout << "18) Please push " << arr_size << " elements in array: " << std::endl;
    if (arr_size == 0) { return; }
    int* arr = new (std::nothrow) int[arr_size];
    if (arr == nullptr) {
        std::cout << "Error: Allocated Memory";
        return;
    }
    else {

        for (int i = 0; i < arr_size; ++i) {
            std::cout << "Enter number " << i << ": ";
            std::cin >> arr[i];
        }
        int max = max_value(arr, arr_size);
        int min = min_value(arr, arr_size);
        std::cout << "Maximum value in array: " << max << std::endl;
        std::cout << "Minimum value in array: " << min << std::endl;
        std::cout << "The sum of the maximum and minimum values in array: " << max + min << std::endl;
    }
    delete[] arr;
}

//Problem 19

void Reverse_array(int arr_size)
{
    std::cout << "19) Please push " << arr_size << " elements in array: " << std::endl;
    if (arr_size == 0) { return; }
    int* arr = new (std::nothrow) int[arr_size];
    if (arr == nullptr) {
        std::cout << "Error: Allocated Memroy";
        return;
    }
    else {
        for (int i = 0; i < arr_size; ++i) {
            std::cout << "Element " << i << ": ";
            std::cin >> arr[i];
        }
        std::cout << "Reverse array: ";
        for (int i = 0; i < arr_size; ++i) {
            std::cout << arr[(arr_size - 1) - i] << " ";
        }
    }
    delete[] arr;
}

//Problem 20

void Mul_Array_elem(int arr_size)
{
    std::cout << "20) Please push " << arr_size << " elements in array: " << std::endl;
    int* arr_x = new (std::nothrow) int[arr_size];
    int* arr_y = new (std::nothrow) int[arr_size];
    if (arr_x == nullptr || arr_y == nullptr) {
        std::cout << "Error: Allocated memory ";
        return;
    }
    else {
        for (int i = 0; i < arr_size; ++i) {
            std::cout << "Elements of arr_x " << i << ": ";
            std::cin >> arr_x[i];
        }
        std::cout << std::endl;
        for (int i = 0; i < arr_size; ++i) {
            std::cout << "Elements of arr_y " << i << ": ";
            std::cin >> arr_y[i];
        }
        std::cout << std::endl;
        for (int i = 0; i < arr_size; ++i) {
            std::cout << "MUL of (index -> x: " << i << " * " << "y: " << i << ")\nVALUE:  (" << arr_x[i]
                << " * " << arr_y[i] << ") = " << arr_x[i] * arr_y[i] << std::endl << std::endl;
        }
    }
    delete[] arr_x;
    delete[] arr_y;
}

//Problem 21

void Add_Array_elem(int arr_size)
{
    std::cout << "21) Please push " << arr_size << " elements in array: " << std::endl;
    int* arr_x = new (std::nothrow)int[arr_size];
    int* arr_y = new (std::nothrow)int[arr_size];
    if (arr_x == nullptr || arr_y == nullptr) {
        std::cout << "Error: Allocated memory. ";
        return;
    }
    else {
        for (int i = 0; i < arr_size; ++i) {
            std::cout << "Elements of arr_x " << i << ": ";
            std::cin >> arr_x[i];
        }
        std::cout << std::endl;
        for (int i = 0; i < arr_size; ++i) {
            std::cout << "Elements of arr_y " << i << ": ";
            std::cin >> arr_y[i];
        }
        std::cout << std::endl;
        for (int i = 0; i < arr_size; ++i) {
            std::cout << "ADD of (index -> x: " << i << " + " << "y: " << i << ")\nVALUE:  (" << arr_x[i]
                << " + " << arr_y[i] << ") = " << arr_x[i] + arr_y[i] << std::endl << std::endl;
        }
        delete[] arr_x;
        delete[] arr_y;
    }
}

//Problem 22

void Principal_diagonal_matrix(int size)
{
    std::cout << "22) Principal diagonal  of matrix " << std::endl;
    int** matrix = new (std::nothrow) int* [size];
    if (matrix == nullptr) {
        std::cout << "Error: Allocated memory ";
        return;
    }
    else
    {
        for (int i = 0; i < size; ++i) {

            matrix[i] = new int[size];
        }
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                matrix[i][j] = rand() % 90 + 10;
            }
        }
        for (int i = 0; i < size; ++i) {
            std::cout << std::endl;
            for (int j = 0; j < size; ++j) {
                std::cout << matrix[i][j] << "  ";
            }
        }
        std::cout << std::endl << std::endl;
        std::cout << "The main diagonal of a matrix: " << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout  << i << " x " << i << " = " << matrix[i][i] << std::endl;
        }
        for (int i = 0; i < size; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
}

//Problem 23

void Secondary_diagonal_matrix(int size)
{
    std::cout << "23) Secondary diagonal  of matrix " << std::endl;
    int** matrix = new (std::nothrow) int* [size];
    if (matrix == nullptr) {
        std::cout << "Error: Allocated memory ";
        return;
    }
    else {
        for (int i = 0; i < size; ++i) {
            matrix[i] = new int[size];
        }
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                matrix[i][j] = rand() % 90 + 10;
            }
        }
        for (int i = 0; i < size; ++i) {
            std::cout << std::endl;
            for (int j = 0; j < size; ++j) {
                std::cout << matrix[i][j] << "  ";
            }
        }
        std::cout << std::endl << std::endl;
        std::cout << "The auxiliary diagonal elements of a matrix: " << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout  << i << " x " << size - i - 1 << " = " << matrix[i][size - i - 1] << std::endl;
        }
        for (int i = 0; i < size; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
}

//Problem 24

int** Matrix(int size)
{
    int** matrix = new  (std::nothrow)  int* [size];
    if (matrix == nullptr) {
        std::cout << "Error: Allocated memory ";
    }
    else {
        for (int r = 0; r < size; ++r) {
            matrix[r] = new int[size];
            std::cout << std::endl;
            for (int c = 0; c < size; ++c) {
                matrix[r][c] = rand() % 10;
                std::cout << matrix[r][c] << " ";
            }
        }
        return matrix;
    }
}

void Sum_Diagonals(int** matrix, int size)
{
    std::cout << "Principal_Diagonal ";
    for (int i = 0; i < size; ++i) {
        std::cout << matrix[i][i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Secondary Diagonal ";
    for (int i = 0; i < size; ++i) {
        std::cout << matrix[i][size - i - 1] << " ";
    }
    int sum = 0;
    std::cout << std::endl;
    std::cout << "Sum of Matrix Diagonals ";
    for (int i = 0; i < size; ++i) {
        sum = matrix[i][i] + matrix[i][size - i - 1];
        std::cout << sum << " ";
    }
    std::cout << std::endl;
    return;

}

void delete_matrix(int** matrix, int size) {
    for (int i = 0; i < size; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return;
}

void Sum_Diagonals_matrix(int matrix_size)
{
    std::cout << "24) SUM of diagonals of matrix " << std::endl;
    int** matrix = Matrix(matrix_size);
    std::cout << std::endl << std::endl;
    Sum_Diagonals(matrix, matrix_size);
    delete_matrix(matrix, matrix_size);
}

//Problem 25

void My_swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void swap_Diagonals(int** matrix, int size)
{
    std::cout << "Principal_Diagonal ";
    for (int i = 0; i < size; ++i) {
        std::cout << matrix[i][i] << " ";
    }
    std::cout << std::endl << "Secondary Diagonal ";
    for (int i = 0; i < size; ++i) {
        std::cout << matrix[i][size - i - 1] << " ";
    }
    std::cout << std::endl << "Swap";
    for (int i = 0; i < size; ++i) {
        My_swap(matrix[i][i], matrix[i][size - i - 1]);
    }
    std::cout << std::endl << "Principal_Diagonal ";
    for (int i = 0; i < size; ++i) {
        std::cout << matrix[i][i] << " ";
    }
    std::cout << std::endl << "Secondary Diagonal ";
    for (int i = 0; i < size; ++i) {
        std::cout << matrix[i][size - i - 1] << " ";
    }
    return;
}

void Swap_Diagonals_Matrix(int matrix_size)
{
    int size = matrix_size;
    std::cout << "25) Swap diagonals of matrix " << std::endl;
    int** matrix = Matrix(size);
    std::cout << std::endl << std::endl;
    swap_Diagonals(matrix, matrix_size);
    delete_matrix(matrix, size);
}

//Problem 26

int Discriminant(int a, int b, int c)
{
    int disc = b * b - 4 * a * c;
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

void Quadratic_equation()
{
    std::cout << std::endl << "26) Quadratic equation " << std::endl;
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
    std::cout << "Discriminant: " << disc << std::endl;
    double x1 = Solution_1(a, b, disc);
    double x2 = Solution_2(a, b, disc);
    if (disc > 0) {
        std::cout << "Solution_1: " << x1 << std::endl;
        std::cout << "Solution_2: " << x2;
    }
    else if (disc == 0) {
        std::cout << "Solution_1: " << x1;
    }
    else {
        std::cout << "No Solution: ";
    }
}