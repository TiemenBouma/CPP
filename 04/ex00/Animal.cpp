/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:58:37 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/13 13:29:24 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "ANIMAL Default constructor" << std::endl;
}

Animal::Animal(std::string type)
	: _type(type)
{
	std::cout << _type << ": ANIMAL Named default constructor" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << _type << ": ANIMAL Copy constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	_type = other._type;
	std::cout << _type << ": ANIMAL Copy assignment operator" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Default ANIMAL destructor" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "BLUB" << std::endl;
}

std::string &getType() const
{
	return _type;
}