#include "Fixed.hpp"

Fixed::Fixed(const Fixed &f1)
{
	fixed_point = f1.fixed_point;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(other.getRawBits());
	return *this;
}