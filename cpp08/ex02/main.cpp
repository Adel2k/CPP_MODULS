#include "MutantStack.hpp"

int	main(void) {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "\033[31m***********************************************\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;
	std::cout << "\033[31m***********************************************\033[0m" << std::endl;
	std::cout << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);


	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "\033[33m***********************************************\033[0m" << std::endl;
	std::cout << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "\033[33m***********************************************\033[0m" << std::endl;
	std::cout << std::endl;

	std::stack<int>	tmp(mstack);
	MutantStack<int>::iterator tit = mstack.begin();
	MutantStack<int>::iterator tite = mstack.end();
	while (tit != tite)
	{
		std::cout << *tit << std::endl;
		++tit;
	}
	std::cout << "\033[35m***********************************************\033[0m" << std::endl;
	std::cout << std::endl;
	MutantStack<int> s(mstack);
	MutantStack<int>::const_reverse_iterator sit = s.rbegin();
	MutantStack<int>::const_reverse_iterator site = s.rend();
	std::cout << "\033[33m***********************************************\033[0m" << std::endl;
	std::cout << std::endl;
	while (sit != site)
	{
		std::cout << *sit << std::endl;
		++sit;
	}
	std::cout << "\033[33m***********************************************\033[0m" << std::endl;
	std::cout << std::endl;

	return (0);
}