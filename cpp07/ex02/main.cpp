#include <iostream>
#include <cstdlib>

#include "Array.hpp"

#define MAX_VAL 25

int main(void) {

	std::cout << "\033[35m***********************************************\033[0m" << std::endl;
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++) {
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		std::cout << "\033[32m***********************************************\033[0m" << std::endl;
		std::cout << numbers[i] << std::endl;
		std::cout << mirror[i] << std::endl;
		std::cout << "\033[32m***********************************************\033[0m" << std::endl;
	}
	std::cout << "\033[35m***********************************************\033[0m" << std::endl;
	std::cout << std::endl;

	{
		std::cout << "\033[35m***********************************************\033[0m" << std::endl;
		std::cout << std::endl;
	    Array<int> tmp = numbers;
	    Array<int> test;

		test = tmp;
		for (int i = 0; i < MAX_VAL; i++) {
		std::cout << "\033[32m***********************************************\033[0m" << std::endl;
		std::cout << tmp[i] << std::endl;
		std::cout << test[i] << std::endl;
		std::cout << "\033[32m***********************************************\033[0m" << std::endl;
		}
	}
	std::cout << "\033[35m***********************************************\033[0m" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < MAX_VAL; i++)
	{
	    if (mirror[i] != numbers[i])
	    {
	        std::cerr << "didn't save the same value!!" << std::endl;
	        return 1;
	    }
	}

	std::cout << "\033[35m***********************************************\033[0m" << std::endl;
	std::cout << std::endl;
	try
	{
	    numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
	    std::cerr << e.what() << '\n';
	}
	std::cout << "\033[35m***********************************************\033[0m" << std::endl;
	std::cout << std::endl;
	try
	{
	    numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
	    std::cerr << e.what() << '\n';
	}
	std::cout << "\033[35m***********************************************\033[0m" << std::endl;
	std::cout << std::endl;

	delete [] mirror;
	return 0;
}