#ifndef Scalar_HPP
#define Scalar_HPP

#include <string>
#include <sstream>
#pragma once

class Scalar
{
public:
    Scalar(std::string data);
    ~Scalar();

	void	print_int() const;
	void	print_float() const;
	void	print_double() const;
	void	print_char() const;

private:
	std::string			_data;
	// int					_d_int;
	// char				_d_char;
	// float				_d_float;
	// double				_d_double;

	long double			_value;

};

#endif