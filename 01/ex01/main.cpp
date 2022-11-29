/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:24:27 by tiemen            #+#    #+#             */
/*   Updated: 2022/11/29 11:34:44 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*myZombieHorde;
	int		N = 10;
	
	myZombieHorde = Zombie::zombieHorde(N, "Tiemen");
	for (int i = 0; i < N; i++)
		myZombieHorde[i].announce();
	delete[] myZombieHorde;
}