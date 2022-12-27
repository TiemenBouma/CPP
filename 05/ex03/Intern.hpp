#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class AForm;

class Intern
{
public:
    Intern();
    ~Intern();
	Intern( const Intern& other );
	Intern&	operator=( const Intern& other );

	AForm	*makeForm(std::string form, std::string target);
};

#endif