/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:56:08 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/02 13:56:09 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Tiemen");
	a.attack("Ben");
	a.takeDamage(4);
	a.beRepaired(5);
	ClapTrap b(a);
	b.attack("Ben");
	b.takeDamage(4);
	b.beRepaired(5);
}
	)

}
// compare CrapTab a with CrapTap b
int compare(ClapTrap a, ClapTrap b)
{
	if (a.getHp() == b.getHp() && a.getMana() == b.getMana() && a.getAttack() == b.getAttack())
		return 1;
	return 0;
}
