#include "FragTrap.hpp"
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

	FragTrap a("Bob");
	print_infos(a);

	a.attack("Josh");
	print_attacking(a);
	a.takeDamage(150);
	print_damage(a);
	a.beRepaired(15);
	print_repairing(a);
	a.highFivesGuys();
	return (0);
}