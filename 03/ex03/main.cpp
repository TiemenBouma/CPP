/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:58:08 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/12 15:24:38 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap clap("clap");

	FragTrap frag("Frag");
	ScavTrap scav("scav");
	DiamondTrap dia("Dia");

	clap.attack("clap2");
	frag.attack("frag2");
	scav.attack("scav2");
	dia.attack("dia2");
	dia.whoAmI();
	dia.highFivesGuys();
	dia.guardGate();
	dia.beRepaired(1);
	dia.takeDamage(2);
	


}