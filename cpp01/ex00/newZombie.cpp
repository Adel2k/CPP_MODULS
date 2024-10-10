#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie	*New;
	New = new Zombie(name);
	if (!New)
		std::cout << "Allocation failed" << std::endl;
	New->announce();
	return (New);
}