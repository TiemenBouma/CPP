/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:33:18 by tiemen            #+#    #+#             */
/*   Updated: 2022/09/23 11:15:15 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
#define HUMANB_CPP
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
	HumanB(std::string name);
	void attack();
	void setWeapon(Weapon &weapon);
	
	
	private:
	std::string _name;
	Weapon		*_weapon;
};

#endif