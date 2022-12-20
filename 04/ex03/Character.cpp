

#include "Character.hpp"

#include <string>
#include <iostream>

Character::Character()
	:_name("") 
{
	for (int i = 0; i < 4; i++)
	{
		_array[i] = 0;
	}
	_oldArraySize = 0;
	_oldArray = 0;
}

Character::Character( std::string name )
	: _name(name) 
{
	for (int i = 0; i < 4; i++)
	{
		_array[i] = 0;
	}
	_oldArraySize = 0;
	_oldArray = 0;
}


Character::Character(const Character& other)
{
	for (int i = 0; i < 4; i++)
	{
		//delete [] _array[i];
		_array[i] = other._array[i];
	}
	_name = other.getName();
	_oldArray = 0;
}

Character&	Character::operator=(const Character& other)
{
	_name = other.getName();
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++) 
	{
		if (_array[i])
		{
			//delete _array[i];
			_array[i] = 0;
		}
	}
	for (int i = 0; i < _oldArraySize; i++) 
	{
		if (_oldArray[i]) {
			delete _oldArray[i];
		}
	}
	delete [] _oldArray;
}

void	Character::equip(AMateria *m) 
{
	for (int i = 0; i < 4; i++)
	{
		if (!_array[i]){	
			_array[i] = m;
			return ;
		}
	}
}

void	Character::unequip( int idx ) 
{
	if (!_oldArraySize)
	{
		_oldArray = new AMateria*[1];
		_oldArraySize++;
		_oldArray[0] = _array[idx];
	}
	else 
	{
		AMateria **tmpArray = new AMateria*[_oldArraySize + 1];
		for (int i = 0; i < _oldArraySize; i++) 
		{
			tmpArray[i] = _oldArray[i];
		}
		delete [] _oldArray;
		tmpArray[_oldArraySize] = _array[idx];
		_oldArray = tmpArray;
		_oldArraySize++;
	}
	_array[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) 
{
	_array[idx]->use(target);
}

std::string const & Character::getName() const 
{
	return _name;
}
