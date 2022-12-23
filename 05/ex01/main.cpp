#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include "Form.hpp"

int main()
{
	// Bureaucrat Bert("Bas", 70);
	// Bureaucrat Bas;
	// Bas = Bert;
	// std::cout << Bas << std::endl;
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

	// catch(const std::exception& exep)
	// {
	// 	std::cerr << exep.what() << std::endl;
	// }
	
	// std::cout  << std::endl;
	// std::cout << "--------to high" << std::endl;
	// try
	// {
	// 	Bureaucrat Bcat("King", 1);
	// 	std::cout << Bcat.getGrade() << std::endl;
	// 	Bcat.increment();
	// 	std::cout << Bcat << std::endl;
	// 	Bcat.decrement();
	// 	std::cout << Bcat << std::endl;
	// 	std::cout << Bcat.getGrade() << std::endl;
	// }
	// catch(const std::exception& e)
	// {

	// }
	// std::cout << std::endl;
	// std::cout << "--------copy" << std::endl;
	// try
	// {
	// 	Bureaucrat Bcat("cc", 1);
	// 	Bureaucrat Bcat2(Bcat);
	// 	std::cout << Bcat2.getGrade() << std::endl;
	// 	Bcat2.increment();
	// 	std::cout << Bcat2 << std::endl;
	// 	Bcat2.decrement();
	// 	std::cout << Bcat2 << std::endl;
	// 	std::cout << Bcat2.getGrade() << std::endl;
	// }
	// catch(const std::exception& e)
	// {

	// }
	// std::cout << std::endl;

	
	// std::cout << "--------print" << std::endl;
	// try
	// {
	// 	Bureaucrat Daan;
	// 	std::cout << Daan.getGrade() << std::endl;
	// 	Daan.increment();
	// 	Daan.increment();
	// 	std::cout << Daan << std::endl;
	// 	std::cout << Daan.getGrade() << std::endl;
	// }
	// catch(const std::exception& e)
	// {
		
	// }
	// std::cout << std::endl;
}
