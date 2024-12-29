#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "Default constructor of WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "Copy constructor of WrongCat called" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "Copy assignment of WrongCat operator called" << std::endl;
	if (this != &other)
			this->type = other.getType();
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "Destructor of WrongCat called" << std::endl;
}