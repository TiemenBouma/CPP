/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/16 14:59:27 by tiemen        #+#    #+#                 */
/*   Updated: 2022/09/16 16:25:42 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"
#include <string>


int	main(void) {
	Phonebook	myPhonebook;
	std::string	str;
	
	std::cin >> str;

	if (str.compare("ADD") == 0)
		myPhonebook.add();
	else if (str.compare("SEARCH") == 0)
		std::cout << "List Users\n";
	else if (str.compare("EXIT") == 0)
		exit(0);

	return 0;
}
