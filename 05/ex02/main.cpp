#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat Bcat("Bcat", 1);
	PresidentialPardonForm f1("Tiemen");
	RobotomyRequestForm f2("Bas");
	ShrubberyCreationForm f3("Codam");


//PRESIDENT FORM
	std::cout << std::endl;
	std::cout << "PRESIDENT FORM" << std::endl;
	std::cout << f1 << std::endl;
	try
	{
		f1.execute(Bcat);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	Bcat.signForm(f1);
	Bcat.executeForm(f1);
	std::cout << f1 << std::endl;

	//ROBOT FORM
	std::cout << std::endl;
	std::cout << "ROBOT FORM" << std::endl;
	std::cout << f2 << std::endl;
	try
	{
		f2.execute(Bcat);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	Bcat.signForm(f2);
	Bcat.executeForm(f2);
	std::cout << std::endl;

//SCRUBERY FORM
	std::cout << std::endl;
	std::cout << "SCRUBBERY FORM" << std::endl;
	std::cout << f3 << std::endl;
	try
	{
		f3.execute(Bcat);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	Bcat.signForm(f3);
	Bcat.executeForm(f3);
	std::cout << f3 << std::endl;
	std::cout << std::endl;

}
