
#include <ostream>
#include <string>
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
    Ice *ice_clone = ice.clone();
    ice.use(target);
    delete ice_clone;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("laptop");
    me->equip(tmp);
    ICharacter* Lars = new Character("Lars");
    std::cout << "Lars says hi" << std::endl;
    me->use(0, *Lars);

    me->use(1, *Lars);

    me->unequip(0);
    me->unequip(2);

    delete Lars;
    delete me;
    delete src;
    return 0;
}
