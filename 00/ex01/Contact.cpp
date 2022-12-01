/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/01 11:41:27 by tiemen        #+#    #+#                 */
/*   Updated: 2022/12/01 17:12:52 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

void	Contact::init(int index) 
{
	this->_index = index;
	_first_name = "";
	_last_name = "";
	_nickname = "";
	_phone_number = "";
	_darkest_secret = "";
}

void	Contact::set_first(void)
{
	std::cout << "Enter first name\n";
	std::cin.ignore();
	std::getline (std::cin, _first_name);
}

void	Contact::set_last(void)
{
	std::cout << "Enter last name\n";
	std::getline (std::cin, _last_name);
}

void	Contact::set_nickname(void)
{
	std::cout << "Enter nickname\n";
	std::getline (std::cin, _nickname);
}

void	Contact::set_phone(void)
{
	std::cout << "Enter phonenumber\n";
	std::getline (std::cin, _phone_number);
}

void	Contact::set_secret(void)
{
	std::cout << "Enter darkest secret\n";
	std::getline (std::cin, _darkest_secret);
}

void	Contact::set_index(unsigned int index)
{
	_index = index;
}

std::string Contact::get_first(void)
{
	return (_first_name);
}

std::string Contact::get_last(void)
{
	return (_last_name);
}

std::string Contact::get_nickname(void)
{
	return (_nickname);
}

std::string Contact::get_phone(void)
{
	return (_phone_number);
}

std::string Contact::get_secret(void)
{
	return (_darkest_secret);
}

unsigned int Contact::get_index(void)
{
	return (_index);
}


int Contact::check_first_l(void)
{
	return(_first_name.length());
}

int Contact::check_last_l(void)
{
	return(_last_name.length());
}

int Contact::check_nickname_l(void)
{
	return(_nickname.length());
}

int Contact::check_phone_l(void)
{
	return(_phone_number.length());
}

int Contact::check_secret_l(void)
{
	return(_darkest_secret.length());
}

