/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbouma <tbouma@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/02 13:58:40 by tbouma        #+#    #+#                 */
/*   Updated: 2022/12/15 13:50:10 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#pragma once

#include <iostream>
#include <string>

class Animal
{
public:
	virtual ~Animal();

	virtual void makeSound()const;
	const std::string &getType() const;
protected:
	Animal();
	Animal(std::string type);
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	
	std::string _type;
};

#endif
