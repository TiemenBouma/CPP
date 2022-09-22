/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/20 11:02:47 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/20 14:15:53 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce(void) {
	std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
	
}

//CONSTRUCTOR
Zombie::Zombie(std::string name2) {
	name = name2;
}

//DESTRUCTOR
Zombie::~Zombie() {
	std::cout <<"\ndestructing zombie: ";
	std::cout << name << std::endl;
}