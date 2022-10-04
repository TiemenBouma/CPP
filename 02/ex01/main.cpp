#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	float ff = 0.1;
	Fixed a(ff);
	Fixed b( a );
	Fixed c;
	
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}