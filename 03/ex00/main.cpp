#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Tiemen");
	a.attack("Ben");
	a.takeDamage(4);
	a.beRepaired(5);
	ClapTrap b(a);
	b.attack("Ben");
	b.takeDamage(4);
	b.beRepaired(5);
}
	)

}
// compare CrapTab a with CrapTap b
int compare(ClapTrap a, ClapTrap b)
{
	if (a.getHp() == b.getHp() && a.getMana() == b.getMana() && a.getAttack() == b.getAttack())
		return 1;
	return 0;
}
