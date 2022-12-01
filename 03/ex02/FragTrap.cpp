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
	: ClapTrap(other)
{
	*this = other;
	std::cout << _name << ": Copy FragTrap constructor called" << std::endl;
}
// {
// 	*this = other;
// 	std::cout << _name << ": Copy FragTrap constructor called" << std::endl;
// }


void FragTrap::highFivesGuys(void)
{
	std::cout << _name << " asks for a high five for making this program work" << std::endl;
}
