/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/02 10:11:48 by tiemen        #+#    #+#                 */
/*   Updated: 2022/10/02 11:37:53 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(void)
{
	Harl	myHarl;
	
	myHarl.complain("DEBUG");
	myHarl.complain("INFO");
	myHarl.complain("WARNING");
	myHarl.complain("ERROR");

}