/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:27:22 by tiemen            #+#    #+#             */
/*   Updated: 2022/11/29 10:03:13 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie	myZombie("Tiemen");
	Zombie	*ptrZombie;
	
	ptrZombie = newZombie("Bert");
	(*ptrZombie).announce();
	myZombie.announce();
	randomChump("Bas");
	delete ptrZombie;
}