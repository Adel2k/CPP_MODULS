#include "easyfind.hpp"
#include <vector>

int	main(void) {
	std::vector<int> v;

	v.push_back(8);
	v.push_back(54);
	v.push_back(12);
	v.push_back(-7);
	v.push_back(95);
	v.push_back(1222);

	try {
		std::vector<int>::const_iterator it = easyfind(v, 54);
		std::cout << it[0] << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		std::vector<int>::const_iterator it = easyfind(v, 6);
		std::cout << it[0] << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	for (size_t i = 0; i < v.size(); i++)
		std::cout << "-->" << v[i];
	std::cout << std::endl;

	return (0);
}