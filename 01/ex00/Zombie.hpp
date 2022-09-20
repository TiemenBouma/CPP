/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/20 11:02:52 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/20 11:54:16 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CPP
#define ZOMBIE_CPP
#include <string>
#include <iostream>

class Zombie {
	public:
	Zombie()
	{
		std::cout <<"\nconstructor zombie " + name << std::endl;
	}
	~Zombie()
	{
		std::cout <<"\ndestructor zombie\n";
	}
	void	announce(void);
	void	name_it(std::string name);
	
	private:
	std::string	name;

};

Zombie	*newZombie(std::string name_2);
void	randomChump( std::string name );
#endif
