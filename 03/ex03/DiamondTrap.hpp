/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:57:56 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/12 14:26:29 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	
	public:
		DiamondTrap( void );
		~DiamondTrap( void );
		DiamondTrap( const DiamondTrap &origin );
		DiamondTrap( const std::string name );
		
		DiamondTrap &operator=( const DiamondTrap &dup );
	
		void	attack( const std::string &target );
		void	whoAmI( void );
		
	private:
		std::string	_name;
};

#endif