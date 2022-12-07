/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:57:14 by tiemen            #+#    #+#             */
/*   Updated: 2022/12/07 10:13:00 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Phonebook.hpp"

void	Phonebook::init(void) 
{
	_curr_index = 0;
	_total_contacts = 0;
	_total_added = 0;
	for (int i = 0; i < 8; i++)
		_contacts[i].init(i);
}

void	Phonebook::add(void) {
	Contact		tempContact;
	std::string	temp;
	
	tempContact.set_first();
	tempContact.set_last();
	tempContact.set_nickname();
	tempContact.set_phone();
	tempContact.set_secret();
	std::cout << "\nSuccesfully added: ";
	std::cout << tempContact.get_first() << std::endl << std::endl;

	if (_total_contacts < 8)
		_total_contacts++;
	if (_curr_index == 8)
		_curr_index = 0;
	tempContact.set_index(_curr_index);
	_contacts[_curr_index] = tempContact;
	_curr_index++;
	_total_added++;
}

void	Phonebook::search(void) {
	long	index;
	char *endptr;
	std::string temp;
	if (_total_added == 0)
		{
			std::cout << "No contacts in list, returned to main menu\n";
			return;
		}
	std::cout << std::right << std::setw(10) << "INDEX";
	std::cout << "|" << std::right << std::setw(10) << "FIRST NAME";
	std::cout << "|" << std::right << std::setw(10) << "LAST NAME";
	std::cout << "|" << std::right << std::setw(10) << "NICKNAME"  << std::endl;

	for (int i = 0; i < 8; i++)
	{
		std::cout << std::right << std::setw(10) << _contacts[i].get_index();
		if (_contacts[i].check_first_l() > 10)
		{
			temp = _contacts[i].get_first();
			std::cout << "|" << std::right << std::setw(10) << temp.substr(0, 9) + '.';
		}
		else
			std::cout << "|" << std::right << std::setw(10) << _contacts[i].get_first();
		if (_contacts[i].check_last_l() > 10)
		{
			temp = _contacts[i].get_last();
			std::cout << "|" << std::right << std::setw(10) << temp.substr(0, 9) + '.';
		}
		else
			std::cout << "|" << std::right << std::setw(10) << _contacts[i].get_last();
		if (_contacts[i].check_nickname_l() > 10)
		{
			temp = _contacts[i].get_nickname();
			std::cout << "|" << std::right << std::setw(10) << temp.substr(0, 9) + '.' << std::endl;
		}
		else
			std::cout << "|" << std::right << std::setw(10) << _contacts[i].get_nickname() << std::endl;
		
	}
	
	while (1)
	{
		std::cout << "Enter index of contact for contactinfo\n";
		std::cin >> temp;
		index = strtol(temp.c_str(), &endptr, 10);
		if (strlen(endptr) > 0 || index < 0 || index > _total_added - 1 || index > 7)
		{
			std::cout << "Invalid index, it should be a number of an existing index.\n\n";
			continue;
		}
		std::cout << "\nIndex: " << _contacts[index].get_index() << std::endl;
		std::cout << "First name: " << _contacts[index].get_first() << std::endl;
		std::cout << "Last name: " << _contacts[index].get_last() << std::endl;
		std::cout << "Nickname: " << _contacts[index].get_nickname() << std::endl;
		std::cout << "Phone number: " << _contacts[index].get_phone() << std::endl;
		std::cout << "Darkest secret: " << _contacts[index].get_secret() << std::endl;
		std::cout << std::endl;
		break ;
		
	}
	
}