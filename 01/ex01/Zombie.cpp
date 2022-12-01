/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:25:59 by tiemen            #+#    #+#             */
/*   Updated: 2022/11/29 13:25:12 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce(void)
{
	std::cout << _name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//CONSTRUCTOR
Zombie::Zombie()
{
	std::cout <<"Constructor zombie: Nameless\n";
}

Zombie::Zombie(std::string name)
	: _name(name)
{
	std::cout <<"Constructor zombie with name init: ";
	std::cout << _name << std::endl;
}

//DESTRUCTOR
Zombie::~Zombie()
{
	std::cout <<"Destructing zombie: ";
	std::cout << _name << std::endl;
}