

#include "MateriaSource.hpp"

#include <string>
#include <iostream>

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++) 
	{
		_elements[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	(void)other;
	return (*this);
}

MateriaSource::~MateriaSource()
{

}

void	MateriaSource::learnMateria(AMateria *m) 
{
	for (int i = 0; i < 4; i++) 
	{
		if (!_elements[i]) 
		{
			_elements[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) 
{
	for (int i = 0; i < 4; i++) 
	{
		if (_elements[i] && _elements[i]->getType() == type)
			return _elements[i];
	}
	return 0;
}
