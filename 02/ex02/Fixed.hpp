/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:55:32 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/02 13:55:33 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <ostream>

class Fixed
{
private:
	int					_fixed_point;
	static const int	_frac_bit = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed(const Fixed &f1);
	Fixed &operator=(const Fixed &other);
	Fixed operator/(const Fixed &other);
	Fixed operator*(const Fixed &other);
	Fixed operator+(const Fixed &other);
	Fixed operator-(const Fixed &other);

	bool operator<(const Fixed &other);
	bool operator>(const Fixed &other);
	bool operator<=(const Fixed &other);
	bool operator>=(const Fixed &other);
	bool operator==(const Fixed &other);
	bool operator!=(const Fixed &other);

	Fixed &operator--(void);
	Fixed &operator++(void);
	Fixed operator--(int);
	Fixed operator++(int);


	float toFloat(void) const;
	int toInt(void) const;

	void setRawBits(int const rawbit);
	int getRawBits(void) const;

	static const Fixed &max(const Fixed &other1, const Fixed &other2);
	static Fixed &max(Fixed &other1, Fixed &other2);
	static const Fixed &min(const Fixed &other1, const Fixed &other2);
	static Fixed &min(Fixed &other1, Fixed &other2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif