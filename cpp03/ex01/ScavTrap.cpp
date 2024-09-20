#include "ScavTrap.hpp"


ScavTrap::ScavTrap() {
	std::cout << "\033[32mInheritence default constructor called.\033[0m" << std::endl;
	Hit_point = 100;
	Energy_point = 50;
	Attack_damage = 20;
}


ScavTrap& ScavTrap::operator=(ScavTrap& other) {
	std::cout << "\033[34mCopy assignment constructor called.\033[0m" << std::endl;
	if (this == &other)
		return *this;
	this->Name = other.Name;
	this->Hit_point = other.Hit_point;
	this->Energy_point = other.Energy_point;
	this->Attack_damage = other.Attack_damage;
	return *this;
}

ScavTrap::ScavTrap(std::string Name) : Name(Name) {
	if (Name.empty())
		Name = "The ghost";
	Hit_point = 100;
	Energy_point = 50;
	Attack_damage = 20;
	std::cout << "\033[34mConstructor with parametrs called for " << Name << ".\033[0m" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "\033[31mDestructor called\033[0m" << std::endl;

}

void ScavTrap::guardGate() {
	std::cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}