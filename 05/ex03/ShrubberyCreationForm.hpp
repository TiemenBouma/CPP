#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <string>

class ShrubberyCreationForm : public AForm
{
private:
	std::string _target;
public:
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	ShrubberyCreationForm&	operator=( const ShrubberyCreationForm& other );
	
	void	execute(Bureaucrat const & executor) const ;

};

std::ostream& operator<<(std::ostream &os, const ShrubberyCreationForm &other);

#endif