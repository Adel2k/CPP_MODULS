#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int	main(void) {

	ScavTrap a("Seda");
	ScavTrap b;
	ScavTrap c;

	c = b = a;

	c.attack("Adel");
	c.takeDamage(75);
	c.beRepaired(155);
	c.guardGate();
	b.attack("Bob");
	b.takeDamage(150);
	b.beRepaired(15);
	b.guardGate();
	return (0);
}