#ifndef Scalar_HPP
#define Scalar_HPP

#include <string>
#include <sstream>
#pragma once

class Scalar
{
public:
    Scalar(std::string data);
	Scalar(const Scalar &other);
	Scalar &operator=(const Scalar &other); 
    ~Scalar();

	void	print_int() const;
	void	print_float(int precision) const;
	void	print_double(int precision) const;
	void	print_char() const;

private:
	std::string			_data;
	long double			_value;

};

#endif