#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon_type(NULL){}


void	HumanB::attack() {
	if (!weapon_type)
		std::cout << name << " has no weapon to attack with!"  << std::endl;
	else
		std::cout << name << " attacks with their " << weapon_type->getType() << std::endl;

}

void	HumanB::setWeapon(Weapon& weapon){
	this->weapon_type = &weapon;
}

HumanB::~HumanB() {}