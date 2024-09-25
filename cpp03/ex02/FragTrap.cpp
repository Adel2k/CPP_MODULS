# include "FragTrap.hpp"

//Orthodox
FragTrap::FragTrap() {
	std::cout << "\033[1;32mFragTrap default constructor called.\033[0m" << std::endl;
	Hit_point = 100;
	Energy_point = 100;
	Attack_damage = 30;
}

FragTrap::FragTrap(FragTrap& other) {
	std::cout << "\033[1;34mFragTrap copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

FragTrap::~FragTrap() {
	std::cout << "\033[1;31mFragTrap destructor called\033[0m" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& other) {
	std::cout << "\033[1;34mFragTrap copy assignment constructor called.\033[0m" << std::endl;
	if (this == &other)
		return *this;
	this->Name = other.Name;
	this->Hit_point = other.Hit_point;
	this->Energy_point = other.Energy_point;
	this->Attack_damage = other.Attack_damage;
	return *this;
}
//

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
	if (Name.empty())
		Name = "The ghost";
	Hit_point = 100;
	Energy_point = 50;
	Attack_damage = 20;
	std::cout << "\033[1;34mFragTrap constructor with parametrs called for " << Name << ".\033[0m" << std::endl;
}


void	FragTrap::highFivesGuys() {
	std::cout << "\033[1;33mFragTrap wants a highfive.\033[0m" << std::endl << std::endl;
}
