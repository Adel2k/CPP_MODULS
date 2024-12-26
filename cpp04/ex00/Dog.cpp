# include "Dog.hpp"

using std::cout;
using std::endl;

//Orthodox
Dog::Dog() {
	cout << "\033[1;32mDog default constructor called.\033[0m" << endl;
	type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "\033[1;34mDog copy constructor called.\033[0m" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "\033[1;34mDog copy assignment constructor called.\033[0m" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Dog::~Dog() {
	cout << "\033[1;31mDog destructor called.\033[0m" << endl;
}
//

void	Dog::makeSound() const {
	cout << "\033[1;35mHaf\033[0m" << endl;
}