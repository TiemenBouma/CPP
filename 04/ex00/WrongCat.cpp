/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:58:45 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/13 13:28:56 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat()
	: WrongAnimal("WrongCat")
{
	std::cout << "WrongCAT Default contstructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << _type << ": WrongCAT Copy constructor" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << _type << ": WrongCAT Copy assignment operator" << std::endl;
	_type = other._type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCAT Default destructor" << std::endl;

}

void WrongCat::makeSound() const
{
	std::cout << "Miauw" << std::endl;
}