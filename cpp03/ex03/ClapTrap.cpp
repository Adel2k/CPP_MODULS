#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("The ghost") {
	std::cout << "\033[32mClapTrap Default constructor called.\033[0m" << std::endl;
	Hit_point = 10;
	Energy_point = 10;
	Attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap& other) {
	std::cout << "\033[34mClapTrap Copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

ClapTrap& ClapTrap::operator=(ClapTrap& other) {
	std::cout << "\033[34mClapTrap Copy assignment constructor called.\033[0m" << std::endl;
	if (this == &other)
		return *this;
	this->Name = other.Name;
	this->Hit_point = other.Hit_point;
	this->Energy_point = other.Energy_point;
	this->Attack_damage = other.Attack_damage;
	return *this;
}

ClapTrap::ClapTrap(std::string Name) : Name(Name) {
	std::cout << "\033[34mClapTrap Constructor with parametrs called for " << Name << ".\033[0m" << std::endl;
	if (Name.empty())
		Name = "The ghost";
	Hit_point = 10;
	Energy_point = 10;
	Attack_damage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "\033[31mClapTrap Destructor called\033[0m" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (Hit_point > 0 && Energy_point > 0) {
		Energy_point--;
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << Name << " does not have enough hit point for attack!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (Hit_point > 0 && Energy_point > 0) {
		Hit_point += amount;
		Energy_point--;
		std::cout << "ClapTrap " << Name << " repairs itself " << amount << " points." << std::endl;
	}
	else
		std::cout << "\033[33m" << Name << " does not have enough hit point for repairing!\033[0m" << std::endl;
}


void	ClapTrap::takeDamage(unsigned int amount) {
	if (Hit_point > 0 && Energy_point > 0) {
		Hit_point -= amount;
		std::cout << "ClapTrap " << Name << " " << amount <<" points of damage!" << std::endl;
	}
}
