/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:56:23 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/12 13:14:20 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
//#pragma once

#include <string>
#include <iostream>
#include <stdlib.h>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const std::string Name);
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap &operator=(const ClapTrap& other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void set_name(std::string name);
	protected:
		ClapTrap(const std::string name, int hp, int mana, int attack);
		std::string 	_name;
		unsigned int	_hp;
		unsigned int	_mana;
		unsigned int	_attack;
};

#endif