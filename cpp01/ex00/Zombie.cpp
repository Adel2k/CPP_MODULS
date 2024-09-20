#include "Zombie.hpp"

Zombie::~Zombie(){
	std::cout << getName() <<": Is destroyed" << std::endl;
}

Zombie::Zombie(std::string	name){
	this->name = name;
}

void Zombie::announce()
{
	std::cout << getName() <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName()
{
	return (name);
}