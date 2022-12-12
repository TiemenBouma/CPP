/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:58:05 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/12 15:12:35 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap
	: virtual public ClapTrap
{
public:
    FragTrap();
    ~FragTrap();
	FragTrap(const std::string Name);
	FragTrap(const FragTrap& other);
	FragTrap &operator=(const FragTrap &other);
	
	//void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif