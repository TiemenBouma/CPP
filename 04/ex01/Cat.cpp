/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbouma <tbouma@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/02 13:58:45 by tbouma        #+#    #+#                 */
/*   Updated: 2022/12/14 13:25:29 by tbouma        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat()
	: Animal("Cat")
{
	_brain = new Brain();
	std::cout << "CAT Default contstructor" << std::endl;
}

Cat::Cat(const Cat &other)
	: Animal("Cat")
{
	_type = other._type;
	_brain = new Brain(*other._brain);
	std::cout << _type << ": CAT Copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	_type = other._type;
	delete _brain;
	_brain = new Brain(*other._brain);	
	std::cout << _type << ": CAT Copy assignment operator" << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "CAT Default destructor" << std::endl;

}

void Cat::makeSound() const
{
	std::cout << "Miauw" << std::endl;
}

const Brain* Cat::get_brain() const{return _brain;}