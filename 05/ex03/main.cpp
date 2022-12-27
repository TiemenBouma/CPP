#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern					intern;
	Bureaucrat				Bcat("Bcat", 1);
	AForm					*ptr;

	std::cout << std::endl;
	intern.makeForm("Bla", "Tiemen");
	std::cout << std::endl;
	ptr = intern.makeForm("PresidentialPardonForm", "Tiemen");
	std::cout << std::endl;
	ptr->execute(Bcat);
	delete ptr;
	std::cout << std::endl;

	Intern someRandomIntern;
	AForm* rrf;
	std::cout << std::endl;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;
	std::cout << std::endl;
	

}
