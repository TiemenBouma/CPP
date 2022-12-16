/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/15 13:43:50 by tiemen        #+#    #+#                 */
/*   Updated: 2022/12/15 13:43:57 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat &operator=(const WrongCat &other);
	~WrongCat();

	void makeSound() const;
private:
};

#endif