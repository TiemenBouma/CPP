/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:57:00 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/02 13:57:01 by tbouma           ###   ########.fr       */
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
	void highFivesGuys(void);
private:
};

#endif