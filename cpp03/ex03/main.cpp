#include "DiamondTrap.hpp"

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
	
	std::cout << "\033[1;35mm############################# Constructing #############################\033[0m" << endl << std::endl;
	DiamondTrap a;
	print_infos(a);
	DiamondTrap b("Gaspar");
	print_infos(b);
	DiamondTrap c(a);
	print_infos(c);

	std::cout << endl << "\033[1;34m############################# Testing #############################\033[0m" << endl << std::endl;
	a.whoAmI();
	a.attack("Seda");
	print_attacking(a);
	b.whoAmI();
	b.attack("Narek");
	print_attacking(a);
	c.whoAmI();
	std::cout << endl << "\033[1;31m############################# Deconstructing #############################\033[0m" << endl << std::endl;
	return (0);
}