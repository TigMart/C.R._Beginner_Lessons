#ifndef SPREADSHEETCELL
#define SPREADSHEETCELL 

#include <iostream>
#include <string>


class Spreadsheetcell
{
public:
	Spreadsheetcell();
	Spreadsheetcell(double initial_Value);
	Spreadsheetcell(const std::string& initial_Value);
	Spreadsheetcell(const Spreadsheetcell& src);
	Spreadsheetcell& operator=(const Spreadsheetcell& rhs);
	~Spreadsheetcell();
public:
	void set_value(double);
	double get_value();
	void set_string(const std::string& instring);
	std::string get_string();
protected:
	std::string double_to_string(double invalue);
	double string_to_double(const std::string& instring);

	double mvalue;
	std::string mstring;
};

#endif // !SPREADSHEETCELL

