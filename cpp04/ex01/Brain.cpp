# include "Brain.hpp"

using std::cout;
using std::endl;

//Orthodox
Brain::Brain() {
	cout << "\033[1;32mBrain default constructor called.\033[0m" << endl;
}

Brain::Brain(Brain& other) {
	std::cout << "\033[1;34mBrain copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

Brain& Brain::operator=(Brain& other) {
	std::cout << "\033[1;34mBrain copy assignment constructor called.\033[0m" << std::endl;
	if (this == &other)
		return *this;
	return *this;
}

Brain::~Brain() {
	cout << "\033[1;31mBrain destructor called.\033[0m" << endl;
}

//