/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/20 11:21:46 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/20 11:27:13 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name_2)
{
	Zombie	tempZombie;

	tempZombie.name_it(name_2);
	tempZombie.announce();
}