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
	std::cout << "\n\n### TESTING DIAMONDTRAP ###\n" << std::endl;
	{

		
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		DiamondTrap a;
		cout << a.getAttack_damage() << endl;
		DiamondTrap b("Gaspar");
		DiamondTrap c(a);

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		a.whoAmI();
		a.attack("Seda");
		b.whoAmI();
		b.attack("Narek");
		c.whoAmI();
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	return (0);
}