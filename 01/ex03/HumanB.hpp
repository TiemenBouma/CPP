/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/22 12:33:18 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/22 12:59:27 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
#define HUMANB_CPP
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
	HumanB();
	~HumanB();
	void attack();
	
	
	private:
	std::string name;
	Weapon		myWeapon;
};

#endif