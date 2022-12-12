/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:57:52 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/12 15:22:22 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
	: ClapTrap("Anonymous", 100, 50, 30), _name("Anonymous") 
{
	ClapTrap::_name = _name + "_clap_name";
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << _name << ": DiamondTrap default destructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other) 
{
	std::cout << _name << ": DiamondTrap copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap::DiamondTrap(const std::string name)
	: ClapTrap(name, 100, 50, 30), _name(name)
{
	ClapTrap::_name = (name + "_clap_name");
	std::cout << _name << ": DiamondTrap name constructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &other ) 
{
	this->_attack = other._attack;
	this->_mana = other._mana;
	this->_hp = other._hp;
	this->_name = other._name;
	this->ClapTrap::_name = other.ClapTrap::_name;
	std::cout << _name << ": DiamondTrap copy assignment called" << std::endl;
	return (*this);
}

void	DiamondTrap::attack( const std::string &target ) 
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void ) 
{
	std::cout << "my DiamondTrap name: " << _name << std::endl;
	std::cout << "my ClapTrap name: " << ClapTrap::_name << std::endl;
}