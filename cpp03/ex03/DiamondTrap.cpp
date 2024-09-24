#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap defualt constructor called for " << Name << "." << std::endl;
	this->Hit_point = FragTrap::Hit_point;
	this->Energy_point = ScavTrap::Energy_point;
	this->Attack_damage = FragTrap::Attack_damage;
	this->Name = ClapTrap::Name;

}

DiamondTrap::DiamondTrap(std::string Name) : Name(Name) {
	this->Name = Name;
	ClapTrap::Name = Name + "_clap_name";
	std::cout << "DiamondTrap constructor with parametrs called for DT = " << Name << ", CT = " << ClapTrap::Name << "." << std::endl;
}

// DiamondTrap::DiamondTrap(DiamondTrap& other) {

// }

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called." << std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout << "CT : " << ClapTrap::Name << std::endl;
	std::cout << "DT : " << Name << std::endl;
}