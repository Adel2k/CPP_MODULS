#include "Zombie.hpp"

int main()
{
	Zombie *head;
	head = zombieHorde(5, "ELF");
	delete[] head;
}