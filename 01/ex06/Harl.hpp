/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/02 10:12:29 by tiemen        #+#    #+#                 */
/*   Updated: 2022/10/02 11:29:57 by tiemen        ########   odam.nl         */
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
	static void debug(void);
	static void info(void);
	static void warning(void);
	static void error(void);
	
};

#endif
