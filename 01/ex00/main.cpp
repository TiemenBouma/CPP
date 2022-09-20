/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/20 11:27:22 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/20 11:50:11 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



int main(void) {
	Zombie	*myZombie;
	
	myZombie = newZombie("Bert");
	(*myZombie).announce();
	randomChump("Bas");
	
}