# include "WrongAnimal.hpp"

using std::cout;
using std::endl;

//Orthodox
WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	cout << "\033[1;32mWrongAnimal default constructor called.\033[0m" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::cout << "\033[1;34mWrongAnimal copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "\033[1;34mWrongAnimal copy assignment called.\033[0m" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	cout << "\033[1;31mWrongAnimal destructor called.\033[0m" << endl;
}

//

void	WrongAnimal::makeSound() const{
	cout << "\033[1;35mNo Sound\033[0m" << endl;

}

std::string WrongAnimal::getType() const {
	return(type);
}
