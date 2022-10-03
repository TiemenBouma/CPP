#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int					fixed_point;
	static const int	frac_bit = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &f1);
	Fixed &operator=(const Fixed &other);

};

#endif