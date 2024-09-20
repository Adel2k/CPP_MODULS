#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie	*New;
	New = new Zombie(name);
	New->announce();
	return (New);
}