//Task_10: Declare variables of all types, assign values and print values on the screen

#include <iostream>
#include <climits>

int main()
{
	using namespace std;

	int a = 2147483647;
	short int b = 32767;
	long int c = 2147483647;
	long long int d = 9223372036854775807;
	unsigned int e = 4294967295;
	unsigned short int f = 65535;
	unsigned long int g = 4294967295;
	unsigned long long int h = 18446744073709551615;
	float i = 9.77778f;
	double j = 10.6667;
	long double k = 12.8889l;
	bool l = true;
	bool m = false;
	char n = 'T';
	unsigned char o = 'I';
	signed char p = 'K';
		
	cout << "int:			" << a << "		(" << sizeof(a) << " bytes)\n";
	cout << "short int:		" << b << "			(" << sizeof(b) << " bytes)\n";
	cout << "long int:		" << c << "	        (" << sizeof(c) << " bytes)\n";
	cout << "long long int:		" << d << "     (" << sizeof(d) << " bytes)\n";
	cout << "unsigned int:		" << e << "		(" << sizeof(e) << " bytes)\n";
	cout << "unsigned short int:	" << f << "			(" << sizeof(f) << " bytes)\n";
	cout << "unsigned long int:	" << g << "		(" << sizeof(g) << " bytes)\n";
	cout << "unsigned long long int:	" << h << "    (" << sizeof(h) << " bytes)\n";
	cout << "float:			" << i << "			(" << sizeof(i) << " bytes)\n";
	cout << "double:			" << j << "			(" << sizeof(j) << " bytes)\n";
	cout << "long double:		" << k << "			(" << sizeof(k) << " bytes)\n";
	cout << "bool:			" << l << "			(" << sizeof(l) << " bytes)\n";
	cout << "bool:			" << m << "			(" << sizeof(m) << " bytes)\n";
	cout << "char:			" << n << "			(" << sizeof(n) << " bytes)\n";
	cout << "unsigned char:		" << o << "			(" << sizeof(o) << " bytes)\n";
	cout << "signed char:		" << p << "			(" << sizeof(p) << " bytes)\n";
	return 0;
}
