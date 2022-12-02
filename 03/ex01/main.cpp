#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap("Tiemen");

	ScavTrap a("Quilfort");
	ScavTrap b("Hein");
	ScavTrap c(a);
	std::cout << "DEBUG1\n";
	ScavTrap d;
	std::cout << "DEBUG2\n";
	d = b;

	clap.attack("Ben");
	clap.takeDamage(4);
	clap.beRepaired(5);
	a.attack("Lisa");
	b.attack("Rolf");
	c.attack("Justus");
	d.attack("Mithras");
	a.takeDamage(3);
	a.beRepaired(5);
	// a.takeDamage(10);
	// b.beRepaired(5);
	c.guardGate();
	d.attack("Zake");


}