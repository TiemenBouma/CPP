
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class ICharacter;

class	Character : public ICharacter
{
	private:
		std::string _name;
		AMateria	*_array[4];
		AMateria	**_oldArray;
		int			_oldArraySize;
	
	public:
		Character();
		Character( std::string name );
		Character(const Character& ref);
		Character& operator=(const Character& ref);
		~Character();

		std::string const &getName() const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};

#endif
