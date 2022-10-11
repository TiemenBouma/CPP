#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap("Tiemen");
	clap.attack("Ben");
	clap.takeDamage(4);
	clap.beRepaired(5);

	// ScavTrap scav("Ben");
	// scav.attack("Tiemen");
	// scav.takeDamage(10);
	// scav.beRepaired(12);
	// scav.guardGate();

	ScavTrap a("AAA");
	ScavTrap b("BEEEEE");
	ScavTrap c(a);
	ScavTrap d;

	d = c;

	a.attack("Bloe");
	b.attack("Bla");
	c.attack("Bloebla");
	d.attack("Blaaaaaaaa");
	// a.takeDamage(10);
	// b.beRepaired(5);
	c.guardGate();


}