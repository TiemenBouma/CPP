/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/22 13:03:01 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/22 13:25:03 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon bar("Bar with spikes");
	
	HumanA Tiemen("Tiemen", bar);
	Tiemen.attack();
	
}
