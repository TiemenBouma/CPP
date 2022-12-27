#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Default constructor Intern called." << std::endl;
}

Intern::Intern( const Intern& other ) {
	(void)other;
	std::cout  << "Copy contructor Intern called."  << std::endl;
}

Intern&	Intern::operator=( const Intern& other ) {
	(void)other;
	std::cout << "Intern copy assignment called" << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Default Bureaucrat destructor called." << std::endl;
}

AForm 	*Intern::makeForm(std::string form, std::string target) {	
	std::string type[] = {
		"ShrubberyCreationForm",
		"robotomy request",
		"PresidentialPardonForm"
	};
	int i = 0;
	for (; i < 3; i++){
		if (form.compare(type[i]) == 0)
		{
			std::cout << "Intern creates: " << type[i]  << std::endl;
			break;
		}
	}
	switch (i)
	{
	case 0:
		return new ShrubberyCreationForm(target);
	case 1:
		return new RobotomyRequestForm(target);
	case 2:
		return new PresidentialPardonForm(target);
	default:
		break;
	}
	std::cout  << "This does not exist: " << form << std::endl;
	return NULL;
}
