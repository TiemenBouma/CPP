#include "ClapTrap.hpp"

//CONSTRUCTORS & DESTRUCTOR
ClapTrap::ClapTrap()
	: _name("Anonymous"), _hp(10), _mana(10), _attack(0)
{
	std::cout << _name << ": Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string Name)
	: _name(Name), _hp(10), _mana(10), _attack(0)
{
	 std::cout << _name << " Named ClapTrap constructor called" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout <<_name << ": Copy ClapTrap constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) 
{
	_name = other._name;
	_hp = other._hp;
	_mana = other._mana;
	_attack = other._attack;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " Destructor ClapTrap called" << std::endl;
}

//SUPERCLASS CONSTRCTOR
ClapTrap::ClapTrap(const std::string name, int hp, int mana, int attack)
	: _name(name),  _hp(hp), _mana(mana), _attack(attack) {
	std::cout << _name << " ClapTrap constructor for inheritance called" << std::endl;
}

//METHODS
void ClapTrap::attack(const std::string& target)
{
	if (_mana == 0 || _hp == 0)
		return ;
	std::cout << "ClapTrap " << _name << " attacks " << target 
		<< ", causing " << _attack << " points of damage!\n";
	_mana--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_mana == 0 || _hp == 0)
		return ;
	if (amount > _hp)
	{
		amount = _hp;
		_hp = 0;
	}
	else
		_hp = _hp - amount;
	std::cout << "ClapTrap " << _name << " takes " << amount 
		<< " damage. " << _hp << " HP is left.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_mana == 0 || _hp == 0)
		return ;
	_mana--;
	_hp = _hp + amount;
	std::cout << "ClapTrap " << _name << " repairs itself for " << amount 
		<< " HP. Total HP is " << _hp << ".\n";
}
