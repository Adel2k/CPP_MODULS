#include "Zombie.hpp"

Zombie::~Zombie() {
	std::cout << getName() <<": Is destroyed" << std::endl;
}

Zombie::Zombie() {
	std::cout << "Zombie is created!" << std::endl;
}

Zombie::Zombie(std::string	name) : name(name) {}

void	Zombie::announce()
{
	std::cout << getName() <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}


void	Zombie::setName(std::string	Name)
{
	name = Name;
}

std::string Zombie::getName() {return (name);}