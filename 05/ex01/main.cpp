#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include "Form.hpp"

int main()
{
	std::cout << "--------to sign" << std::endl;
	Bureaucrat Bcat("Bcat", 149);
	Form f1("gov_doc", 40, 20);
	Form f2("Divine form", 1, 1);
	Form f3("Trash form", 150, 140);



	std::cout << std::endl;
	Bcat.signForm(f1);
	std::cout << std::endl;
	Bcat.signForm(f2);
	std::cout << std::endl;
	Bcat.signForm(f3);
	std::cout << std::endl;
	Bcat.signForm(f3);
	std::cout << std::endl;
	std::cout << f1 << std::endl;
	std::cout << std::endl;
	try
	{
		f1.beSigned(Bcat);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		f2.beSigned(Bcat);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		f3.beSigned(Bcat);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

}
