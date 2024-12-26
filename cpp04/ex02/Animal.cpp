# include "Animal.hpp"

using std::cout;
using std::endl;

//Orthodox
Animal::Animal() {
	cout << "\033[1;32mAnimal default constructor called.\033[0m" << endl;
}

Animal::Animal(const Animal& other) {
	std::cout << "\033[1;34mAnimal copy constructor called.\033[0m" << std::endl;\
	*this = other;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "\033[1;34mAnimal copy assignment called.\033[0m" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Animal::~Animal() {
	cout << "\033[1;31mAnimal destructor called.\033[0m" << endl;
}

//


std::string Animal::getType() const {
	return(type);
}
