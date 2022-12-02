/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:55:05 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/02 13:55:06 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	//std::cout << "Int = " << _fixed_point << std::endl;
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
	//std::cout << "getRawBits member function called" << std::endl;
	return _fixed_point;
}

void Fixed::setRawBits( int const rawbit)
{
	//std::cout << "setRawBits member function called" << std::endl;
	_fixed_point = rawbit;
}

float Fixed::toFloat(void) const
{
	// by shifting _fixed_point 8 bits all decimals will fall off and the int wil remain.
	int i_part = _fixed_point >> _frac_bit;
	//for us to know what part is still float we need to know the fixed point part of int.
	int i_fp = ((int)i_part << _frac_bit);
	// 1 <<  8 == 2^8 ==  256
	float f_part = (float)(_fixed_point - i_fp) / (float)(1 << _frac_bit);
	return (i_part + f_part);
}

int Fixed::toInt(void) const
{
	return _fixed_point >> _frac_bit;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f) {
	out << f.toFloat();
	return out;
}