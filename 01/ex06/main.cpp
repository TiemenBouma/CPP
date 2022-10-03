/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/02 11:53:06 by tiemen        #+#    #+#                 */
/*   Updated: 2022/10/03 09:13:14 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

enum e_msg {
	DEBUG, INFO, WARNING, ERROR
};

int main(int argc, char **argv)
{
	Harl myHarl;
	if (argc != 2)
	{
		std::cout << "Wrong input\n";
		return 0;
	}
	std::string strarr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string input = argv[1];
	e_msg msg;
	for (int i = 0; i < 4; i++)
	{
		if (strarr[i] == input)
			msg = (enum e_msg)i;
	}
	switch (msg)
	{
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			myHarl.complain("DEBUG");
			std::cout << std::endl;
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			myHarl.complain("INFO");
			std::cout << std::endl;
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			myHarl.complain("WARNING");
			std::cout << std::endl;
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			myHarl.complain("ERROR");
			std::cout << std::endl;
	}
}