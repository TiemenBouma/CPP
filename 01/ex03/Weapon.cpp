/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/22 10:55:04 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/22 16:36:48 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() 
{
	_type = "";
}

// Weapon::Weapon(std::string type)
// {
// 	_type = type;
// }
Weapon::Weapon(std::string type) : _type(type) {}

std::string& Weapon::getType()
{
	return _type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}