/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tiemen <tiemen@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 10:58:18 by tiemen        #+#    #+#                 */
/*   Updated: 2022/10/02 10:00:28 by tiemen        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{		
	size_t			pos;
	int 			start;
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		from, to, line, name_outfile;
	const char		*c_str;
	
	if (argc != 4)
		return 1;
	infile.open(argv[1]);
	name_outfile = argv[1];
	name_outfile.append(".replace");
	c_str = name_outfile.c_str();
	outfile.open(c_str, std::ios_base::trunc);
	from = argv[2];
	to = argv[3];
	while (! infile.eof())
	{
		std::getline(infile, line);
		pos = 0;
		start = 0;
		pos = line.find(from, start);
		if ((pos) == std::string::npos)
		{
			outfile << line << std::endl;
			continue ;
		}
		while ((pos) != std::string::npos)
		{
			line.erase(pos, from.length());
			line.insert(pos, to);
			start = pos + to.length();
			outfile << line;
			pos = line.find(from, start);
		}
		outfile << std::endl;		
	}
	infile.close();
	outfile.close();
}