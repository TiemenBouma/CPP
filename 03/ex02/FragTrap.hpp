/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:57:00 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/12 13:46:28 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap
	: public ClapTrap
{
public:
    FragTrap();
    ~FragTrap();
	FragTrap(const std::string Name);
	FragTrap(const FragTrap& other);
	FragTrap &operator=(const FragTrap &other);
	
	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif