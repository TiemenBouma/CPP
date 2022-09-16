/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/16 15:57:14 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/16 16:28:20 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

void	Phonebook::add(void)
{
	Contact		tempContact;
	
	std::cout << "Enter first name\n";
	std::cin >> tempContact.first_name;
	std::cout << "Enter last name\n";
	std::cin >> tempContact.last_name;
	std::cout << "Enter nickname\n";
	std::cin >> tempContact.nickname;
	std::cout << "Enter phonenumber\n";
	std::cin >> tempContact.phone_number;
	std::cout << "Enter darkest secret\n";
	std::cin >> tempContact.darkest_secret;
	if (!tempContact.first_name[0] || !tempContact.last_name[0]\
			|| !tempContact.nickname[0] || !tempContact.phone_number[0]\
			|| !tempContact.darkest_secret[0])
		return;
	std::cout << "DEBUG1\n";
	if (curr_index == 8)
		curr_index = 0;
	std::cout << "DEBUG2\n";
	tempContact.index = curr_index;
	std::cout << "DEBUG3\n";
	contacts[curr_index] = tempContact;
	std::cout << "DEBUG4\n";
	curr_index++;
}
