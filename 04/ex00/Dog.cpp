/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:58:52 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/13 13:28:43 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog()
	: Animal("Dog")
{
	std::cout << "DOG Default contstructor" << std::endl;
}

Dog::Dog(const Dog &other)
{
	std::cout << _type << ": DOG Copy constructor" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << _type << ": DOG Copy assignment operator" << std::endl;
	_type = other._type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "DOG Default destructor" << std::endl;

}

void Dog::makeSound() const
{
	std::cout << "Whoof" << std::endl;
}