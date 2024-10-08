# include "Cat.hpp"

using std::cout;
using std::endl;

//Orthodox
Cat::Cat(){
	cout << "\033[1;32mCat default constructor called.\033[0m" << endl;
	B = new Brain();
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

void	Cat::makeSound() {
	cout << "\033[1;34mMeow 😺\033[0m" << endl;
}

void	Cat::printer() {
	cout << "The address of the Cat's brain -----> " << static_cast<void*>(B);
}