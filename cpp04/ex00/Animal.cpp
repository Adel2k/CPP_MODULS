# include "Animal.hpp"

using std::cout;
using std::endl;

//Orthodox
Animal::Animal() : type("Animal") {
	cout << "\033[1;32mAnimal default constructor called.\033[0m" << endl;
}

Animal::Animal(Animal& other) {
	std::cout << "\033[1;34mAnimal copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

Animal& Animal::operator=(Animal& other) {
	std::cout << "\033[1;34mAnimal copy assignment constructor called.\033[0m" << std::endl;
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}

Animal::~Animal() {
	cout << "\033[1;31mAnimal destructor called.\033[0m" << endl;
}

//

void	Animal::makeSound() {
	cout << "\033[1;35mNo Sound\033[0m" << endl;

}

std::string Animal::getType() const {
	return(type);
}
