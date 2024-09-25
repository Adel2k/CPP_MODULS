#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

using std::cout;
using std::endl;

void	print_infos(ClapTrap& obj) {
	cout << endl << "\033[35m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << "The new object parametrs:" << endl << "NAME: " << obj.getName() << endl << "Hit_point: " << obj.getHit_point() << endl << "Energy_point: " << obj.getEnergy_point() << endl << "Attack_damage: " << obj.getAttack_damage() << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
}

void	print_attacking(ClapTrap& obj) {
	cout << endl << "\033[35m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << "The object parametrs after attacking:" << endl << "NAME: " << obj.getName() << endl << "Hit_point: " << obj.getHit_point() << endl << "Energy_point: " << obj.getEnergy_point() << endl << "Attack_damage: " << obj.getAttack_damage() << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
}

void	print_damage(ClapTrap& obj) {
	cout << endl << "\033[35m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << "The object parametrs after taking damage:" << endl << "NAME: " << obj.getName() << endl << "Hit_point: " << obj.getHit_point() << endl << "Energy_point: " << obj.getEnergy_point() << endl << "Attack_damage: " << obj.getAttack_damage() << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
}

void	print_repairing(ClapTrap& obj) {
	cout << endl << "\033[35m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << "The object parametrs after reparing:" << endl << "NAME: " << obj.getName() << endl << "Hit_point: " << obj.getHit_point() << endl << "Energy_point: " << obj.getEnergy_point() << endl << "Attack_damage: " << obj.getAttack_damage() << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
}

int	main(void) {

	ScavTrap a("Seda");
	print_infos(a);
	ScavTrap b;
	print_infos(b);
	ScavTrap c;
	print_infos(c);

	c = b = a;
	print_infos(b);
	print_infos(c);
	
	c.attack("Adel");
	print_attacking(c);
	c.takeDamage(75);
	print_damage(c);
	c.beRepaired(155);
	print_repairing(c);
	c.guardGate();
	b.attack("Narek");
	print_attacking(b);
	b.takeDamage(150);
	print_damage(b);
	b.beRepaired(15);
	print_repairing(c);
	b.guardGate();
	return (0);
}