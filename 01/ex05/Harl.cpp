/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:29:03 by tiemen            #+#    #+#             */
/*   Updated: 2022/12/07 16:32:46 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <map>


void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout <<  "This is unacceptable! I want to speak to the manager now.\n";
}

//map is a data structure to pair keys to values
//we pair a string as Key to a void pointer to function as value
void Harl::complain(std::string level)
{
	std::map<std::string, void (*)()> fmap;
	fmap["DEBUG"] = debug;
	fmap["INFO"] = info;
	fmap["WARNING"] = warning;
	fmap["ERROR"] = error;
	fmap[level]();
}