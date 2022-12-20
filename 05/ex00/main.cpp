#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int main()
{
	std::cout << "--------to low" << std::endl;
	try
	{

		Bureaucrat Bcat("Bcat", 149);
		std::cout << Bcat.getGrade() << std::endl;
		Bcat.decrement();
		std::cout << Bcat.getGrade() << std::endl;
		Bcat.decrement();
		std::cout << Bcat.getGrade() << std::endl;
		Bcat.decrement();
		std::cout << Bcat.getGrade() << std::endl;
	}
	catch(const std::exception& exep)
	{
		std::cerr << exep.what() << std::endl;
	}
	
	std::cout  << std::endl;
	std::cout << "--------to high" << std::endl;
	try
	{
		Bureaucrat Bcat("King", 1);
		std::cout << Bcat.getGrade() << std::endl;
		Bcat.increment();
		std::cout << Bcat << std::endl;
		Bcat.decrement();
		std::cout << Bcat << std::endl;
		std::cout << Bcat.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{

	}
	std::cout << std::endl;
	std::cout << "--------copy" << std::endl;
	try
	{
		Bureaucrat Bcat("cc", 1);
		Bureaucrat Bcat2(Bcat);
		std::cout << Bcat2.getGrade() << std::endl;
		Bcat2.increment();
		std::cout << Bcat2 << std::endl;
		Bcat2.decrement();
		std::cout << Bcat2 << std::endl;
		std::cout << Bcat2.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{

	}
	std::cout << std::endl;

	
	std::cout << "--------print" << std::endl;
	try
	{
		Bureaucrat Daan;
		std::cout << Daan.getGrade() << std::endl;
		Daan.increment();
		Daan.increment();
		std::cout << Daan << std::endl;
		std::cout << Daan.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		
	}
	std::cout << std::endl;
}
