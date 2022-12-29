#include "Scalar.hpp"
#include <limits>
#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision


int getPrecision(const std::string str)
{
	int len;

	len = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
		{
			for (size_t j = i + 1; j < str.length(); j++)
				len++;
			break;
		}
	}
	if (len == 0)
		len++;
	return len;
}

Scalar::Scalar(std::string data)
: _data(data) {
	std::stringstream ss;
	if (_data == "-inf" || _data == "-inff") {
		std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf" << std::endl;
		return ;
	}
	if (_data == "+inf" || _data == "+inff") {
		std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf" << std::endl;
		return ;
	}
	if (_data.size() == 1 && !(_data.at(0) >= '0' && _data.at(0) <= '9')) {
		unsigned char c = _data.at(0);
		int i = c;
		_value = i;
		this->print_char();
		this->print_int();
		this->print_float(getPrecision(_data));
		this->print_double(getPrecision(_data));
		return ;
	}
	if (_data.back() == 'f')
		_data.pop_back();
	if (_data == "nan") {
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
		return ;
	}
	ss << _data;
	if (ss >> _value) {
		this->print_char();
		this->print_int();
		this->print_float(getPrecision(_data));
		this->print_double(getPrecision(_data));
	}
	else {
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
	}
}

Scalar::Scalar(const Scalar &other)
: _data(other._data), _value(other._value) {}

Scalar &Scalar::operator=(const Scalar &other) {
	_data = other._data;
	_value = other._value;
	return *this;
}

Scalar::~Scalar() {}

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

void	Scalar::print_float(int precision) const {
	if (_value < std::numeric_limits<float>::max() && _value > -std::numeric_limits<float>::max()) {
		std::cout << "float: " << std::fixed << std::setprecision(precision) << static_cast<float>(_value) << "f" << std::endl;
	}
	else if (_value > 0)
		std::cout << "float: +inff" << std::endl;
	else
		std::cout << "float: -inff" << std::endl;
}

void	Scalar::print_double(int precision) const {
	if (_value < std::numeric_limits<double>::max() && _value > -std::numeric_limits<double>::max())
		std::cout << "double: " << std::fixed << std::setprecision(precision) << static_cast<double>(_value) << std::endl;
	else if (_value > 0)
		std::cout << "double: +inf" << std::endl;
	else
		std::cout << "double: -inf" << std::endl;
}


