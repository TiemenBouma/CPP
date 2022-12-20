/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbouma <tbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/14 10:02:54 by tbouma        #+#    #+#                 */
/*   Updated: 2022/12/15 13:40:23 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
// #include <iostream>
#include <string>

Brain::Brain()
{
	std::string str = "Idea___int_to_sting_not_allwed_in_42_cpp";
	std::cout << "BRAIN Default contstructor" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = str;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "BRAIN Copy constructor" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i] + "_copy";
	std::cout << "BRAIN Copy assignment operator" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "BRAIN Default destructor" << std::endl;
}

void Brain::print_idea(int i) const 
{
	std::cout << _ideas[i] << std::endl;
}