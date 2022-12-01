/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:02:52 by tiemen            #+#    #+#             */
/*   Updated: 2022/11/29 10:04:13 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CPP
#define ZOMBIE_CPP
#include <string>
#include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);	
	private:
		std::string	m_name;

};

Zombie	*newZombie(std::string name);
void	randomChump( std::string name );
#endif
