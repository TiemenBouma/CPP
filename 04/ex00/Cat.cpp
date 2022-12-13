/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:58:45 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/13 13:28:56 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << "CAT Default contstructor" << std::endl;
}

Cat::Cat(const Cat &other)
{
	std::cout << _type << ": CAT Copy constructor" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << _type << ": CAT Copy assignment operator" << std::endl;
	_type = other._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "CAT Default destructor" << std::endl;

}

void Cat::makeSound() const
{
	std::cout << "Miauw" << std::endl;
}