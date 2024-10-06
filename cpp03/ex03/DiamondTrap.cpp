#include "DiamondTrap.hpp"

//Orthodox
DiamondTrap::DiamondTrap() {
	std::cout << "\033[1;32mDiamondTrap default constructor called.\033[0m" << std::endl;
	this->Hit_point = 100;
	this->Energy_point = 50;
	this->Attack_damage = 20;
	this->Name = ClapTrap::Name;

}
DiamondTrap::DiamondTrap(DiamondTrap& other) {
	std::cout << "\033[1;34mDiamondTrap copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& other) {
	std::cout << "\033[1;34mDiamondTrap copy assignment constructor called.\033[0m" << std::endl;
	if (this == &other)
		return *this;
	this->Name = other.Name;
	this->Hit_point = other.Hit_point;
	this->Attack_damage = other.Attack_damage;
	this->Energy_point = other.Energy_point;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "\033[1;31mDiamondTrap destructor called\033[0m" << std::endl;
}
//

DiamondTrap::DiamondTrap(std::string Name) {
	this->Name = Name;
	ClapTrap::Name = Name + "_clap_name";
	std::cout << "\033[1;34mFragTrap constructor with parametrs called for " << Name << ".\033[0m" << std::endl;
}
void	DiamondTrap::whoAmI() {
	std::cout << "\033[33mCT : " << ClapTrap::Name << std::endl;
	std::cout << "DT : " << Name << "\033[0m" << std::endl;
}