/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:56:56 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/12 13:57:50 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap("Anonymous", 100, 100, 30) 
{
	std::cout << _name << ": Default FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
 	std::cout << _name << ": Destructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(const std::string Name) 
	: ClapTrap(Name, 100, 100, 30) 
{
	std::cout << _name << ": Named FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) 
{
	*this = other;
	std::cout << _name << ": Copy FragTrap constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) 
{
	_name = other._name;
	_hp = other._hp;
	_mana = other._mana;
	_attack = other._attack;
	std::cout <<_name << ": ScavTrap Copy assignment operator called" << std::endl;
	return *this;
}

//METHODS
void FragTrap::attack(const std::string& target)
{
	if (_mana == 0 || _hp == 0)
		return ;
	std::cout << "FragTrap " << _name << " attacks " << target 
		<< ", causing " << _attack << " points of damage!\n";
	_mana--;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << " asks for a high five for making this program work" << std::endl;
}
