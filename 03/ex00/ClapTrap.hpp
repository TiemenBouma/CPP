#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#pragma once

#include <string>
class ClapTrap
{
public:
	ClapTrap(std::string Name);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
private:
	std::string 	_name;
	unsigned int	_hp;
	unsigned int	_mana;
	unsigned int	_attack;

};

#endif