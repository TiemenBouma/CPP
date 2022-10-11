#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
//#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap 
	: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string Name);
		ScavTrap(const ScavTrap& other);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
	private:
};

#endif

// #ifndef SCAVTRAP_HPP
// #define SCAVTRAP_HPP
// #include "ClapTrap.hpp"
// #include <string>

// class ScavTrap : public ClapTrap
// {
// 	public:
// 		ScavTrap(std::string);
// 		ScavTrap();
// 		~ScavTrap();
// 		ScavTrap(const ScavTrap& other);
// 		void attack(const std::string &target);
// 		void guardGate();
// };

// #endif