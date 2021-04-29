#include  "Spreadsheetcell.h"

#include <sstream>
//Default
Spreadsheetcell::Spreadsheetcell() : mvalue(0), mstring("") {}
//copy ctor
Spreadsheetcell::Spreadsheetcell(const Spreadsheetcell& src) : mvalue{ src.mvalue }, mstring{ src.mstring }{}
//Ctor with param
Spreadsheetcell::Spreadsheetcell(double initial_Value)
{
	set_value(initial_Value);
}
//Ctor with param
Spreadsheetcell::Spreadsheetcell(const std::string& initial_Value)
{
	set_string(initial_Value);
}
//operator=
Spreadsheetcell& Spreadsheetcell::operator=(const Spreadsheetcell& rhs)
{
	if (this == &rhs) {
		std::cout << "self-attribution: " << std::endl;
		return *this;
	}
	mvalue = rhs.mvalue;
	mstring = rhs.mstring;
	return *this;
}

void Spreadsheetcell::set_value(double invalue)
{
	mvalue = invalue;
	mstring = double_to_string(mvalue);
}

double Spreadsheetcell::get_value() { return (mvalue); }

void Spreadsheetcell::set_string(const std::string& instring)
{
	mstring = instring;
	mvalue = string_to_double(mstring);
}

std::string Spreadsheetcell::get_string() { return mstring; }

std::string Spreadsheetcell::double_to_string(double invalue)
{
	std::ostringstream ostr;
	ostr << invalue;
	return (ostr.str());
}
double Spreadsheetcell::string_to_double(const std::string& instring)
{
	double temp;
	std::istringstream istr(instring);
	istr >> temp;
	if (istr.fail() || !istr.eof()) {
		return 0;
	}
	return temp;
}

Spreadsheetcell::~Spreadsheetcell() {}
