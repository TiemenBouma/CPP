/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:58:08 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/02 13:58:09 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap clap("Tiemen");

	FragTrap a("Quilfort");
	FragTrap b("Hein");
	FragTrap c(a);
	std::cout << "DEBUG1\n";
	FragTrap d;
	std::cout << "DEBUG2\n";
	d = b;

	clap.attack("Ben");
	clap.takeDamage(4);
	clap.beRepaired(5);
	a.attack("Lisa");
	b.attack("Rolf");
	c.attack("Justus");
	d.attack("Mithras");
	a.takeDamage(3);
	a.beRepaired(5);
	d.attack("Zake");
	a.highFivesGuys();


}