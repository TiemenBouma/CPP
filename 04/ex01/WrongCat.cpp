/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbouma <tbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/14 09:38:06 by tbouma        #+#    #+#                 */
/*   Updated: 2022/12/14 09:38:12 by tbouma        ########   odam.nl         */
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