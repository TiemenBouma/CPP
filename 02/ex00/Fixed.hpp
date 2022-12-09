/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:54:50 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/09 10:49:26 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
