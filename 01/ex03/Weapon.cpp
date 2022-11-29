/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:55:04 by tiemen            #+#    #+#             */
/*   Updated: 2022/11/29 13:50:10 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon() 
{
	_type = "";
}

Weapon::Weapon(std::string type)
	: _type(type) 
{}

Weapon::~Weapon() 
{}

std::string& Weapon::getType()
{
	return _type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}