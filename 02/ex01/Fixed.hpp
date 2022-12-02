/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:55:09 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/02 13:55:10 by tbouma           ###   ########.fr       */
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

	float toFloat(void) const;
	int toInt(void) const;

	void setRawBits(int const rawbit);
	int getRawBits(void) const;

};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif