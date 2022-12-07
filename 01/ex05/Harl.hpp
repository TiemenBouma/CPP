/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:12:29 by tiemen            #+#    #+#             */
/*   Updated: 2022/12/07 16:32:37 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl
{
	public:
	void complain(std::string level);
	
	private:
	static void debug();
	static void info(void);
	static void warning(void);
	static void error(void);
	
};

#endif
