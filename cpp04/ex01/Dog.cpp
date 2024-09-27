# include "Dog.hpp"

using std::cout;
using std::endl;

//Orthodox
Dog::Dog() {
	cout << "\033[1;32mDog default constructor called.\033[0m" << endl;
	B = new Brain();
	type = "Dog";
}

Dog::Dog(Dog& other) : Animal(other) {
	std::cout << "\033[1;34mDog copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

Dog& Dog::operator=(Dog& other) {
	std::cout << "\033[1;34mDog copy assignment constructor called.\033[0m" << std::endl;
	if (this == &other)
		return *this;
	return *this;
}

Dog::~Dog() {
	cout << "\033[1;31mDog destructor called.\033[0m" << endl;
		delete B;
}
//

void	Dog::makeSound() {
	cout << "\033[1;31mHaf\033[0m" << endl;
}