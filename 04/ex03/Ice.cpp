#include "Ice.hpp"

Ice::Ice()
	: AMateria("ice")
{

}

Ice::Ice(const Ice& other) 
	: AMateria("ice")
{
	*this = other;
}

Ice&	Ice::operator=(const Ice& other)
{
	(void)other;
	return *this;
}

Ice::~Ice() 
{
	
}

void Ice::use(ICharacter &c) 
{
	std::cout << "* shoots an ice bolt at " << c.getName() << " * "<< std::endl;
}

Ice *Ice::clone() const 
{
	return new Ice(*this);
}
