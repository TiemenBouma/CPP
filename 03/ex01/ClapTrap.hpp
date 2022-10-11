#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
//#pragma once

#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap& other);
		ClapTrap &operator=(const ClapTrap& other);
		virtual ~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		ClapTrap(std::string name, int hp, int mana, int attack);
		std::string 	_name;
		unsigned int	_hp;
		unsigned int	_mana;
		unsigned int	_attack;
};

#endif