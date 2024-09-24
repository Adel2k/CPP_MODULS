#include "ClapTrap.hpp"

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

	ClapTrap a;
	print_infos(a);
	ClapTrap b("Seda");
	print_infos(b);
	ClapTrap d("Narek");
	print_infos(d);
	ClapTrap c;
	print_infos(c);

	c = d;

	print_infos(c);

	c.attack("Adel");
	print_attacking(c);
	c.attack("Anr");
	print_attacking(c);
	b.takeDamage(7);
	print_damage(b);
	a.takeDamage(10);
	print_damage(a);
	b.beRepaired(15);
	print_repairing(b);
	a.beRepaired(15);
	print_repairing(a);
	c.takeDamage(25);
	print_damage(c);
	c.beRepaired(7);
	print_repairing(c);

	return (0);
}