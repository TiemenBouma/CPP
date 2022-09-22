/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbouma <tbouma@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/16 15:57:14 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/20 09:46:13 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Phonebook.hpp"

void	Phonebook::init(void) {
	curr_index = 0;
	total_contacts = 0;
}

void	Phonebook::add(void) {
	Contact		tempContact;
	//std::string	buff;
	
	std::cout << "Enter first name\n";
	std::cin.ignore();
	std::getline (std::cin,tempContact.first_name);
	std::cout << "Enter last name\n";
	std::getline (std::cin,tempContact.last_name);
	std::cout << "Enter nickname\n";
	std::getline (std::cin,tempContact.nickname);
	std::cout << "Enter phonenumber\n";
	std::getline (std::cin,tempContact.phone_number);
	std::cout << "Enter darkest secret\n";
	std::getline (std::cin,tempContact.darkest_secret);
	if (!tempContact.first_name[0] || !tempContact.last_name[0]\
		|| !tempContact.nickname[0] || !tempContact.phone_number[0]\
		|| !tempContact.darkest_secret[0]){
		std::cout << "Empty input. Retry\n";	
		return;
	}
	std::cout << "\nSuccesfully added: ";
	std::cout << tempContact.first_name << std::endl << std::endl;
	if (total_contacts < 8)
		total_contacts++;
	if (curr_index == 8)
		curr_index = 0;
	tempContact.index = curr_index;
	contacts[curr_index] = tempContact;
	curr_index++;
}

void	Phonebook::search(void) {
	int	i;
	
	std::cout << "Enter index of contact for contactinfo\n";
	std::cin >> i;
	if (i >= total_contacts)
	{
		std::cout << "No contact found on this index\n\n";
		return ;
	}
	std::cout << std::right << std::setw(10) << "INDEX";
	std::cout << "|" << std::right << std::setw(10) << "FIRST NAME";
	std::cout << "|" << std::right << std::setw(10) << "LAST NAME";
	std::cout << "|" << std::right << std::setw(10) << "NICKNAME"  << std::endl;

	std::cout << std::right << std::setw(10) << contacts[i].index;
	if (contacts[i].first_name.length() > 10)
		std::cout << "|" << std::right << std::setw(10) << contacts[i].first_name.substr(0, 9) + '.';
	else
		std::cout << "|" << std::right << std::setw(10) << contacts[i].first_name;
	if (contacts[i].last_name.length() > 10)
		std::cout << "|" << std::right << std::setw(10) << contacts[i].last_name.substr(0, 9) + '.';
	else
		std::cout << "|" << std::right << std::setw(10) << contacts[i].last_name;
	if (contacts[i].nickname.length() > 10)
		std::cout << "|" << std::right << std::setw(10) << contacts[i].nickname.substr(0, 9) + '.' << std::endl;
	else
		std::cout << "|" << std::right << std::setw(10) << contacts[i].nickname << std::endl << std::endl;
}