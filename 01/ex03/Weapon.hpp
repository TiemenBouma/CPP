/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:46:20 by tiemen            #+#    #+#             */
/*   Updated: 2022/09/23 08:41:37 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Implement a Weapon class that has:
// • A private attribute type, which is a string.
// • A getType() member function that returns a const reference to type.
// • A setType() member function that sets type using the new one passed as parameter.

#ifndef WEAPON_CPP
#define WEAPON_CPP
#include <string>
class Weapon
{
	public:
	Weapon();
	~Weapon();
	Weapon(std::string type);
	std::string& getType();
	void setType(std::string type);
	
	private:
	std::string _type;
};

#endif