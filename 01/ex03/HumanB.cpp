/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/22 12:43:19 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/22 13:02:45 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB()
{
	
}

HumanB::~HumanB()
{
	std::cout << name << " is destroyed." << std::endl;
}

void HumanB::attack(void)
{
	std::cout << name << " attacks with their " << myWeapon.getType() << std::endl;
}
