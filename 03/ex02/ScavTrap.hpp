/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:57:15 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/02 13:57:16 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
//#pragma once

# include "ClapTrap.hpp"


class ScavTrap 
	: public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const std::string Name);
		ScavTrap(const ScavTrap& other);
	//	ScavTrap &operator=(const ClapTrap& other);
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