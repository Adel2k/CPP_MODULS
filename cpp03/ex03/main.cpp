
#include "DiamondTrap.hpp"

int	main(void) {
	std::cout << "\n\n### TESTING DIAMONDTRAP ###\n" << std::endl;
	{

		
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		DiamondTrap a;
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