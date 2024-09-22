#include "ClapTrap.hpp"


int	main(void) {

	ClapTrap a;
	ClapTrap b("Seda");
	ClapTrap d("Narek");

	ClapTrap c;

	c = d;

	c.attack("Adel");
	b.takeDamage(7);
	a.takeDamage(10);
	b.beRepaired(15);
	a.beRepaired(15);
	c.takeDamage(25);
	c.beRepaired(7);

	return (0);
}