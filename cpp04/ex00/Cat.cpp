# include "Cat.hpp"

using std::cout;
using std::endl;

//Orthodox
Cat::Cat(){
	cout << "\033[1;32mCat default constructor called.\033[0m" << endl;
	type = "Cat";
}

Cat::Cat(Cat& other) : Animal(other) {
	cout << "\033[1;34mCat copy constructor called.\033[0m" << endl;
	if (this == &other)
		return ;
	*this = other;
}

Cat& Cat::operator=(Cat& other) {
	cout << "\033[1;34mCat copy assignment constructor called.\033[0m" << endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Cat::~Cat() {
	cout << "\033[1;31mCat destructor called.\033[0m" << endl;
}

//

void	Cat::makeSound() {
	cout << "\033[1;35mMeow\033[0m" << endl;
}
