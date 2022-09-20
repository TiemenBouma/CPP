/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/20 11:11:34 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/20 11:52:06 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

Zombie	*newZombie(std::string name_2)
{
	Zombie	*tempZombie;
	Zombie	myZombie;

	tempZombie = (Zombie *) malloc(sizeof(Zombie));
	*tempZombie = myZombie;
	(*tempZombie).name_it(name_2);
	return tempZombie;
}