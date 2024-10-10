#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *z;
	if (N < 0) {
		std::cout << "Can not allocate " << N << std::endl;
		return NULL;
	}
	z = new Zombie[N];
	if (!New)
		std::cout << "Allocation failed" << std::endl;
	for (int i = 0; i < N; i++) {
		z[i].setName(name + std::to_string(i + 1));
		z[i].announce();
	}
	return z;
}