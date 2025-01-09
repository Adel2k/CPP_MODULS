#include <iostream>
#include <cstdlib>
#include "Array.hpp"

using std::endl;
using std::cout;

#define MAX_VAL 10

int main(void) {

	cout << "\033[1;34m>>>>>>>>>>>>>>>>>>>TESTING>>>>>>>>>>>>>>>>>>>\033[0m" << endl;
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++) {
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		cout << numbers[i] << endl;
		cout << mirror[i] << endl;
		cout << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl;
	}
	{
	    Array<int> tmp = numbers;
	    Array<int> test;

		test = tmp;
		for (int i = 0; i < MAX_VAL; i++) {
		cout << tmp[i] << endl;
		cout << test[i] << endl;
		cout << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl;
		}
	}
	cout << "\033[35m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl;
	cout << endl;

	for (int i = 0; i < MAX_VAL; i++)
	{
	    if (mirror[i] != numbers[i])
	    {
	        std::cerr << "didn't save the same value!!" << endl;
	        return 1;
	    }
	}
	try
	{
	    numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
	    std::cerr << e.what() << '\n';
	}
	cout << "\033[35m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl;
	cout << endl;
	try
	{
	    numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
	    std::cerr << e.what() << '\n';
	}
	cout << "\033[35m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl;
	cout << endl;

	delete [] mirror;
	return 0;
}