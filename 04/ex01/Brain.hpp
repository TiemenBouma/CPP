/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbouma <tbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/14 09:49:34 by tbouma        #+#    #+#                 */
/*   Updated: 2022/12/14 11:15:56 by tbouma        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <array>
#include <iostream>

class Brain
{
public:
    Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
    ~Brain();

	void print_idea(int i) const ;

private:
	std::string _ideas[100];
};

#endif