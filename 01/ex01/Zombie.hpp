/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/20 14:26:18 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/20 14:55:58 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CPP
#define ZOMBIE_CPP
#include <string>
#include <iostream>

class Zombie {
	public:
	Zombie();
	~Zombie();
	void	announce(void);
	Zombie *zombieHorde(int N, std::string name);
	//void	name_it(std::string name);
	
	private:
	std::string	name;

};

Zombie*	zombieHorde( int N, std::string name );
#endif

