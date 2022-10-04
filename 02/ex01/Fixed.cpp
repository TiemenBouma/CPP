#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_point = value << _frac_bit;
	//std::cout << "Int = " << _fixed_point << std::endl;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	int i_part = (int) value;
	float f_part = value - i_part;
	_fixed_point = (i_part << _frac_bit) + roundf(f_part * (1 << _frac_bit));
	std::cout << "Int = " << _fixed_point << std::endl;
}

Fixed::Fixed(const Fixed &f1)
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(f1.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(other.getRawBits());
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixed_point;
}

void Fixed::setRawBits( int const rawbit)
{
	//std::cout << "setRawBits member function called" << std::endl;
	_fixed_point = rawbit;
}

float Fixed::toFloat(void) const
{
	float a = _fixed_point;
	return a;
}

int Fixed::toInt(void) const
{
	return _fixed_point;
}