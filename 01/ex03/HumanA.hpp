/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:28:14 by tiemen            #+#    #+#             */
/*   Updated: 2022/11/29 13:53:15 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Now, create two classes: HumanA and HumanB. They both have a Weapon and a
// name. They also have a member function attack() that displays (of course, without the
// angle brackets):
// <name> attacks with their <weapon type>
// HumanA and HumanB are almost the same except for these two tiny details:
// • While HumanA takes the Weapon in its constructor, HumanB doesn’t.
// • HumanB may not always have a Weapon, whereas HumanA will always be armed.

#ifndef HUMANA_CPP
#define HUMANA_CPP
#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string _name, Weapon &_weapon);
		~HumanA();
		void attack();
	private:
		Weapon		&_weapon;
		std::string _name;
};

#endif