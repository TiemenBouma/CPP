/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:25:28 by tiemen            #+#    #+#             */
/*   Updated: 2022/11/29 13:19:46 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//#include <cstdlib>

Zombie *Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i]._name = name;
	}
	return horde;
}