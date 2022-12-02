#include "ScavTrap.hpp"

//CONSTRUCTORS & DESTRUCTOR
ScavTrap::ScavTrap() 
	: ClapTrap("Anonymous", 100, 50, 20) 
{
	std::cout << _name << ": Default ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
 	std::cout << _name << ": Destructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const std::string Name) 
	: ClapTrap(Name, 100, 50, 20) 
{
	std::cout << _name << ": Named ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) 
	: ClapTrap(other)
{
	*this = other;
	std::cout << _name << ": Copy ScavTrap constructor called" << std::endl;
}
// {
// 	*this = other;
// 	std::cout << _name << ": Copy ScavTrap constructor called" << std::endl;
// }

//METHODS
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