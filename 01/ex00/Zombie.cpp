/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/20 11:02:47 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/20 11:15:55 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce(void) {
	std::cout << name + ":  BraiiiiiiinnnzzzZ..." << std::endl;
	
}

void	Zombie::name_it(std::string name_2)
{
	name = name_2;
}