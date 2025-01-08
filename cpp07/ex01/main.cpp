#include "iter.hpp"

int	main(void) {
	
	{
		std::cout << "\033[35m***********************************************\033[0m" << std::endl;

		int		array[] = {42, 57, 17, -28, -7};
		size_t	size = sizeof(array) / sizeof(array[0]);

		iter(array, size, printInt);

		std::cout << std::endl;
		std::cout << "\033[35m***********************************************\033[0m" << std::endl;

	}
	{

		const int	array[] = {98, -57, 7, 21, -42};
		size_t		size = sizeof(array) / sizeof(array[0]);

		iter(array, size, printInt);

		std::cout << std::endl;
		std::cout << "\033[35m***********************************************\033[0m" << std::endl;
	}
	{

		char	array[] = {'a', 'b', 'c', 'd','e'};
		size_t	size = sizeof(array) / sizeof(array[0]);

		iter(array, size, printChar);

		std::cout << std::endl;
		std::cout << "\033[35m***********************************************\033[0m" << std::endl;
	}
	{

		const char	array[] = {'e', 'd', 'c', 'b','a'};
		size_t		size = sizeof(array) / sizeof(array[0]);

		iter(array, size, printChar);

		std::cout << std::endl;
		std::cout << "\033[35m***********************************************\033[0m" << std::endl;
		std::cout << std::endl;
	}
	
	return (0);
}