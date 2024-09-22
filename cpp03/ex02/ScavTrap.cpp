#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "\033[1;32mScavTrap default constructor called.\033[0m" << std::endl;
	Hit_point = 100;
	Energy_point = 50;
	Attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap& other) {
	std::cout << "\033[1;34mScavTrap copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

ScavTrap& ScavTrap::operator=(ScavTrap& other) {
	std::cout << "\033[1;34mScavTrap copy assignment constructor called.\033[0m" << std::endl;
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
	std::cout << "\033[1;34mScavTrap constructor with parametrs called for " << Name << ".\033[0m" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "\033[1;31mScavTrap destructor called\033[0m" << std::endl;

}

void	ScavTrap::attack(const std::string& target) {
	if (Hit_point > 0 && Energy_point > 0) {
		Energy_point--;
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << Name << " does not have enough hit point for attack!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "\033[1;36mScavTrap is now in Gate keeper mode.\033[0m" << std::endl;
}