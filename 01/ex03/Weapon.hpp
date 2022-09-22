/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/22 10:46:20 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/22 13:22:39 by tiemen        ########   odam.nl         */
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
	std::string& getType();
	void setType(std::string type);
	
	private:
	std::string _type;
};

#endif