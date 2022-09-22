/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/20 11:11:34 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/20 14:08:52 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

Zombie	*newZombie(std::string name)
{
	// Zombie	*ptrZombie;
	// //Zombie	myZombie;

	// ptrZombie = (Zombie *) malloc(sizeof(Zombie));
	// //*ptrZombie = myZombie;
	// (*ptrZombie).name_it(name);
	// return ptrZombie;
	return new Zombie(name);
}