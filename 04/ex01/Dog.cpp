/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbouma <tbouma@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/02 13:58:52 by tbouma        #+#    #+#                 */
/*   Updated: 2022/12/14 13:55:05 by tbouma        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog()
	: Animal("Dog")
{
	_brain = new Brain;
	std::cout << "DOG Default contstructor" << std::endl;
}

Dog::Dog(const Dog &other)
	: Animal("Dog")
{
	_type = other._type;
	_brain = new Brain(*other._brain);
	std::cout << _type << ": DOG Copy constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	_type = other._type;
	delete _brain;
	_brain = new Brain(*other._brain);	
	std::cout << _type << ": DOG Copy assignment operator" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "DOG Default destructor" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Whoof" << std::endl;
}

const Brain* Dog::get_brain() const{return _brain;}
