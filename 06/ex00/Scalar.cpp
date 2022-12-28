#include "Scalar.hpp"
#include <limits>
#include <iostream>
#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision


Scalar::Scalar(std::string data)
: _data(data) {
	std::stringstream ss;
	//long double value;

	if (_data.back() == 'f')
		_data.pop_back();
	if (_data == "nan") {
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
		return ;
	}
	ss << _data;
	//std::cout << "DEBUG" << std::endl;
	if (ss >> _value) {
		this->print_char();
		this->print_int();
		this->print_float();
		this->print_double();
	}
	else {
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
	}
	std::cout << _value << std::endl;

}

Scalar::~Scalar() {

}

void	Scalar::print_int() const {
	if (_value < std::numeric_limits<int>::max() && _value > std::numeric_limits<int>::min())
		std::cout << "int: " << static_cast<int>(_value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void	Scalar::print_char() const {
	if ((_value < 33 && _value >= 0) || _value == 127)
		std::cout << "char: Non displayable" << std::endl;
	else if (_value < 0 || _value > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(_value) << std::endl;
}

void	Scalar::print_float() const {
	if (_value < std::numeric_limits<float>::max() && _value > -std::numeric_limits<float>::max()) {
		//std::cout << std::setprecision(2);
		std::cout << "float: " << static_cast<float>(_value) << std::endl;
	}
	else if (_value > 0)
		std::cout << "float: +inff" << std::endl;
	else
		std::cout << "float: -inff" << std::endl;
}

void	Scalar::print_double() const {
	if (_value < std::numeric_limits<double>::max() && _value > -std::numeric_limits<double>::max())
		std::cout << "double: " << static_cast<double>(_value) << std::endl;
	else if (_value > 0)
		std::cout << "double: +inf" << std::endl;
	else
		std::cout << "double: -inf" << std::endl;
}


