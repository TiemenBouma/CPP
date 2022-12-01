/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:02:47 by tiemen            #+#    #+#             */
/*   Updated: 2022/11/29 09:50:14 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce(void) {
	std::cout << m_name + ": BraiiiiiiinnnzzzZ..." << std::endl;
	
}

//CONSTRUCTOR
Zombie::Zombie(std::string name) {
	m_name = name;
}

//DESTRUCTOR
Zombie::~Zombie() {
	std::cout <<"\ndestructing zombie: ";
	std::cout << m_name << std::endl;
}