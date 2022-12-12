/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:56:41 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/12 13:35:58 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap 
	: public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const std::string Name);
		ScavTrap(const ScavTrap& other);
		ScavTrap &operator=(const ScavTrap &other);

		void attack(const std::string& target); //different attack method
		void guardGate();
};

#endif

