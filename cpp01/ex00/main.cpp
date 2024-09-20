#include "Zombie.hpp"

int main()
{
	Zombie *z;
	randomChump("Gaspar");
	z = newZombie("Gaspar");
	delete z;
}