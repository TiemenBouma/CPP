/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/20 14:24:27 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/20 15:00:24 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



int main(void) {
	Zombie	*myZombieHorde;
	int		N = 10;
	
	myZombieHorde = zombieHorde(N, "Tiemen");
	// for (int i = 0; i < N; i++)
	// 	myZombieHorde[i].announce();
	// for (int i = 0; i < N; i++)
	// 	delete &myZombieHorde[i];
}