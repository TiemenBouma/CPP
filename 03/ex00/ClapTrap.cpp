/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:55:59 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/02 13:56:00 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Default constructor called" << std::endl;
	_name = Name;
	_hp = 10;
	_mana = 10;
	_attack = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_mana == 0 || _hp == 0)
		return ;
	std::cout << "ClapTrap " << _name << " attacks " << target 
		<< ", causing " << _attack << " points of damage!\n";
	_mana--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_mana == 0 || _hp == 0)
		return ;
	if (amount > _hp)
	{
		amount = _hp;
		_hp = 0;
	}
	else
		_hp = _hp - amount;
	std::cout << "ClapTrap " << _name << " takes " << amount 
		<< " damage. " << _hp << " HP is left.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_mana == 0 || _hp == 0)
		return ;
	_mana--;
	_hp = _hp + amount;
	std::cout << "ClapTrap " << _name << " repairs itself for " << amount 
		<< " HP. Total HP is " << _hp << ".\n";
}
