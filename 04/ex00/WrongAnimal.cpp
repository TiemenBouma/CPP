#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WRONGANIMAL Default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
	: _type(type)
{
	std::cout << _type << ": WRONGANIMAL Named default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << _type << ": WRONGANIMAL Copy constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	_type = other._type;
	std::cout << _type << ": WRONGANIMAL Copy assignment operator" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WRONGANIMAL destructor" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WRONGANIMAL sound" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return _type;
}