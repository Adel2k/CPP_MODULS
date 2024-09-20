#include "Weapon.hpp"
#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon_type(weapon) {}

void	HumanA::attack() {
	std::cout << name << " attacks with their " << weapon_type.getType() << std::endl;
}

HumanA::~HumanA() {}