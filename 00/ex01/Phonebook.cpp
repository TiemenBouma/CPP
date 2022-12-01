/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbouma <tbouma@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/16 15:57:14 by tiemen        #+#    #+#                 */
/*   Updated: 2022/12/01 18:41:35 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Phonebook.hpp"
#include <stdlib.h>
#include <cstring>



void	Phonebook::init(void) 
{
	curr_index = 0;
	total_contacts = 0;
	for (int i = 0; i < 8; i++)
		contacts[i].init(i);
}

void	Phonebook::add(void) {
	Contact		tempContact;
	std::string	temp;
	
	tempContact.set_first();
	tempContact.set_last();
	tempContact.set_nickname();
	tempContact.set_phone();
	tempContact.set_secret();
	if (!tempContact.check_first_l())
	{
		std::cout << "Empty input. Retry\n";	
		return;
	}
	std::cout << "\nSuccesfully added: ";
	std::cout << tempContact.get_first() << std::endl << std::endl;

	if (total_contacts < 8)
		total_contacts++;
	if (curr_index == 8)
		curr_index = 0;
	tempContact.set_index(curr_index);
	contacts[curr_index] = tempContact;
	curr_index++;
}

void	Phonebook::search(void) {
	long	index;
	char *endptr;
	std::string temp;
	
	std::cout << std::right << std::setw(10) << "INDEX";
	std::cout << "|" << std::right << std::setw(10) << "FIRST NAME";
	std::cout << "|" << std::right << std::setw(10) << "LAST NAME";
	std::cout << "|" << std::right << std::setw(10) << "NICKNAME"  << std::endl;

	for (int i = 0; i < 8; i++)
	{
		//std::cout << "DEBUG" << std::endl;
		std::cout << std::right << std::setw(10) << contacts[i].get_index();
		if (contacts[i].check_first_l() > 10)
		{
			temp = contacts[i].get_first();
			std::cout << "|" << std::right << std::setw(10) << temp.substr(0, 9) + '.';
		}
		else
			std::cout << "|" << std::right << std::setw(10) << contacts[i].get_first();
		if (contacts[i].check_last_l() > 10)
		{
			temp = contacts[i].get_last();
			std::cout << "|" << std::right << std::setw(10) << temp.substr(0, 9) + '.';
		}
		else
			std::cout << "|" << std::right << std::setw(10) << contacts[i].get_last();
		if (contacts[i].check_nickname_l() > 10)
		{
			temp = contacts[i].get_nickname();
			std::cout << "|" << std::right << std::setw(10) << temp.substr(0, 9) + '.' << std::endl;
		}
		else
			std::cout << "|" << std::right << std::setw(10) << contacts[i].get_nickname() << std::endl;
		
	}
	
	while (1)
	{
		std::cout << "Enter index of contact for contactinfo\n";
		std::cin >> temp;
		index = strtol(temp.c_str(), &endptr, 10);
		if (strlen(endptr) > 0 || index < 0 || index > 7)
		{
			std::cout << "Invalid index\n";
			continue;
		}
		std::cout << "First name: " << contacts[index].get_first() << std::endl;
		std::cout << "Last name: " << contacts[index].get_last() << std::endl;
		std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
		std::cout << "Phone number: " << contacts[index].get_phone() << std::endl;
		std::cout << "Darkest secret: " << contacts[index].get_secret() << std::endl;
		std::cout << std::endl;
		break ;
		
	}
	
}