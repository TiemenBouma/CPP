#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() 
	: ClapTrap("Anonymous", 100, 50, 20) 
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) 
	: ClapTrap(Name, 100, 50, 20) 
{
	std::cout << "Named ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	*this = other;
	std::cout << "Copy ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
 	std::cout << "Destructor ScavTrap called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_mana == 0 || _hp == 0)
		return ;
	std::cout << "ScavTrap " << _name << " attacks " << target 
		<< ", causing " << _attack << " points of damage!\n";
	_mana--;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode.\n";
}
