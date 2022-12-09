/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:56:08 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/09 10:49:03 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Tiemen");
	ClapTrap z("Niek");
	a.attack("Ben");
	a.takeDamage(4);
	a.beRepaired(5);
	ClapTrap b(a);
	b.attack("Ben");
	b.takeDamage(4);
	b.beRepaired(5);
	ClapTrap x = z;
	z.attack("ZZZ");
	z.takeDamage(1);
	z.beRepaired(1);
}
