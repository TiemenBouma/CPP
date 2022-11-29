/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:11:34 by tiemen            #+#    #+#             */
/*   Updated: 2022/11/29 09:56:22 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

Zombie	*newZombie(std::string name)
{
	return new Zombie(name);
}
	// Zombie	*ptrZombie;
	// //Zombie	myZombie;

	// ptrZombie = (Zombie *) malloc(sizeof(Zombie));
	// //*ptrZombie = myZombie;
	// (*ptrZombie).name_it(name);
	// return ptrZombie;