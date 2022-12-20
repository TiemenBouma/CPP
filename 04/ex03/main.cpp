#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main() {
	Character target("target");
	Ice ice;
	Ice *ice2 = ice.clone();
	std::cout << "action 1" << std::endl;
	ice.use(target);
	std::cout << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* myMaterial;
	myMaterial = src->createMateria("cure");
	me->equip(myMaterial);
	myMaterial = src->createMateria("ice");
	me->equip(myMaterial);
	myMaterial = src->createMateria("laptop");
	me->equip(myMaterial);
	ICharacter* Lars = new Character("Lars");

	std::cout << "action 2 and 3" << std::endl;
	me->use(0, *Lars);
	me->use(1, *Lars);
	std::cout << std::endl;
	//action 4 wont work
	//me->use(2, *Lars);

	me->unequip(0);
	me->unequip(2);

	delete ice2;
	delete Lars;
	delete me;
	delete src;
	return 0;
}
