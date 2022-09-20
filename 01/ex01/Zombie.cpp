/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/20 14:25:59 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/20 14:56:59 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce(void) {
	std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
	
}

//CONSTRUCTOR
// Zombie::Zombie() {
// 	;
// }

//DESTRUCTOR
Zombie::~Zombie() {
	std::cout <<"\ndestructing zombie: ";
	std::cout << name << std::endl;
}