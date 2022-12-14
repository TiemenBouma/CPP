/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbouma <tbouma@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/16 14:59:27 by tiemen        #+#    #+#                 */
/*   Updated: 2022/12/01 12:40:02 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"
#include <string>
#include <cstdlib> 

int	main(void) {
	Phonebook	myPhonebook;
	std::string	str;

	myPhonebook.init();
	while (1)
	{
		std::cout << "Menu: ADD, SEARCH or EXIT\n";
		std::cin >> str;
		if (str.compare("ADD") == 0)
			myPhonebook.add();
		else if (str.compare("SEARCH") == 0)
			myPhonebook.search();
		else if (str.compare("EXIT") == 0)
			exit(0);
		if (std::cin.eof())
			break;
	}
	return 0;
}
