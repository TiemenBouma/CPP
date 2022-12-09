/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:55:59 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/09 10:57:41 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor ClapTrap called" << std::endl;
	_name = name;
	_hp = 10;
	_mana = 10;
	_attack = 0;
}

ClapTrap::ClapTrap(ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	_name = other._name;
	_hp = other._hp;
	_mana = other._mana;
	_attack = other._attack;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_name = other.get_name();
	_hp = other.get_hp();
	_mana = other.get_mana();
	_attack = other.get_attack();
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called" << std::endl;
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

std::string ClapTrap::get_name() const {return _name;}
int ClapTrap::get_hp() const {return _hp;}
int ClapTrap::get_mana() const {return _mana;}
int ClapTrap::get_attack() const {return _attack;}
