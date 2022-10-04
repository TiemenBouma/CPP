#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int					_fixed_point;
	static const int	_frac_bit = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &f1);
	Fixed &operator=(const Fixed &other);

	void setRawBits(int const rawbit);
	int getRawBits(void) const;

};

#endif