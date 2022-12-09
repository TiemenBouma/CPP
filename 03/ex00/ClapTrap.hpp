/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:56:05 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/09 10:49:04 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#pragma once

#include <string>
class ClapTrap
{
public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string get_name() const ;
	int get_hp() const ;
	int get_mana() const ;
	int get_attack() const ;
private:
	std::string 	_name;
	unsigned int	_hp;
	unsigned int	_mana;
	unsigned int	_attack;

};

#endif
