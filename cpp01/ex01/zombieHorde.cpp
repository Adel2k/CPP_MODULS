#include "Zombie.hpp"
#include <sstream>
#include <string>

std::string intToString(int number) {
	std::ostringstream oss;
	oss << number;
	return oss.str();
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *z;
	if (N < 0) {
		std::cout << "Can not allocate " << N << std::endl;
		return NULL;
	}
	z = new Zombie[N];
	if (!z)
		std::cout << "Allocation failed" << std::endl;
	for (int i = 0; i < N; i++) {
		z[i].setName(name + intToString(i + 1));
		z[i].announce();
	}
	return z;
}