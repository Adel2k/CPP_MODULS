# include "Cat.hpp"

using std::cout;
using std::endl;

//Orthodox
Cat::Cat(){
	cout << "\033[1;32mCat default constructor called.\033[0m" << endl;
	B = new Brain();
	type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other) {
	cout << "\033[1;34mCat copy constructor called.\033[0m" << endl;
	this->B = new Brain();
}

Cat& Cat::operator=(const Cat& other) {
	cout << "\033[1;34mCat copy assignment called.\033[0m" << endl;
	if (this != &other) {
		cout << "removing the Cat's Brain : ";
		delete B;
		this->type = other.type;
		this->B = new Brain();
	}
	return *this;
}

Cat::~Cat() {
	cout << "\033[1;31mCat destructor called.\033[0m" << endl;
	delete B;
}

//

void	Cat::makeSound() const {
	cout << "\033[1;34mMeow 😺\033[0m" << endl;
}

void	Cat::printer() const {
	cout << "The address of the Cat's brain -----> " << static_cast<void*>(B);
}